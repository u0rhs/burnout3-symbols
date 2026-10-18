"""DWARF version 1 reader for the Metrowerks CodeWarrior PS2 executables.

DWARF 1 (1992) predates everything modern tools read, so this parses the .debug
and .line sections directly and turns them into C/C++ declarations.

Layout of .debug: a flat list of entries. Each entry is
    u32 length (< 8 means a null entry that ends a list of children)
    u16 tag
    attributes: u16 (attribute << 4 | form), then the value in that form
An entry whose AT_sibling points past the next entry owns the entries between.
"""
import struct
from collections import defaultdict

# tags
T_ARRAY, T_CLASS, T_ENUM, T_PARAM, T_GSUB, T_GVAR = 0x01, 0x02, 0x04, 0x05, 0x06, 0x07
T_BLOCK, T_LOCAL, T_MEMBER, T_PTR, T_REF, T_CU = 0x0b, 0x0c, 0x0d, 0x0f, 0x10, 0x11
T_STRUCT, T_SUB, T_SUBTYPE, T_TYPEDEF, T_UNION, T_UNSPEC, T_INHERIT = 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x1c

TAG_NAMES = {0x01: 'array_type', 0x02: 'class_type', 0x04: 'enumeration_type', 0x05: 'formal_parameter',
             0x06: 'global_subroutine', 0x07: 'global_variable', 0x0b: 'lexical_block', 0x0c: 'local_variable',
             0x0d: 'member', 0x0f: 'pointer_type', 0x10: 'reference_type', 0x11: 'compile_unit',
             0x13: 'structure_type', 0x14: 'subroutine', 0x15: 'subroutine_type', 0x16: 'typedef',
             0x17: 'union_type', 0x18: 'unspecified_parameters', 0x1c: 'inheritance'}

# attributes (full 16-bit value, form included)
AT_SIBLING, AT_LOCATION, AT_NAME, AT_FUND, AT_MODFUND = 0x0012, 0x0023, 0x0038, 0x0055, 0x0063
AT_UDT, AT_MODUDT, AT_SUBSCR, AT_BYTESIZE = 0x0072, 0x0083, 0x00a3, 0x00b6
AT_BITOFF, AT_BITSIZE, AT_ELEMS2, AT_ELEMS4 = 0x00c5, 0x00d6, 0x00f3, 0x00f4
AT_STMT, AT_LOWPC, AT_HIGHPC, AT_PRODUCER = 0x0106, 0x0111, 0x0121, 0x0258
AT_MW_MANGLED = 0x2008      # Metrowerks: the linker (mangled) name

FUND = {
    0x0001: 'char', 0x0002: 'signed char', 0x0003: 'unsigned char', 0x0004: 'short', 0x0005: 'short',
    0x0006: 'unsigned short', 0x0007: 'int', 0x0008: 'int', 0x0009: 'unsigned int', 0x000a: 'long',
    0x000b: 'long', 0x000c: 'unsigned long', 0x000d: 'void *', 0x000e: 'float', 0x000f: 'double',
    0x0010: 'long double', 0x0014: 'void', 0x0015: 'bool', 0x8008: 'long long', 0x8108: 'long long',
    0x8208: 'unsigned long long',
    0xa510: 'u_long128',    # Metrowerks: the EE's 128-bit integer (GIF tags, DMA packets)
}

MIPS_REGS = ['zero', 'at', 'v0', 'v1', 'a0', 'a1', 'a2', 'a3', 't0', 't1', 't2', 't3', 't4', 't5', 't6', 't7',
             's0', 's1', 's2', 's3', 's4', 's5', 's6', 's7', 't8', 't9', 'k0', 'k1', 'gp', 'sp', 'fp', 'ra']


def reg_name(n):
    if n < 32:
        return MIPS_REGS[n]
    if n < 64:
        return 'f%d' % (n - 32)
    return 'r%d' % n


_FORMLEN = {1: 4, 2: 4, 5: 2, 6: 4, 7: 8}


class Entry:
    __slots__ = ('off', 'tag', 'attrs', 'children', 'parent', 'cu')

    def __init__(self, off, tag, attrs):
        self.off, self.tag, self.attrs = off, tag, attrs
        self.children, self.parent, self.cu = [], None, None

    def get(self, at, default=None):
        return self.attrs.get(at, default)

    @property
    def name(self):
        v = self.attrs.get(AT_NAME)
        return v if v else None


class Dwarf1:
    def __init__(self, debug, line=None):
        self.d = debug
        self.line = line
        self.entries = {}
        self.cus = []
        self._parse()

    # ---- parsing -------------------------------------------------------------------------------
    def _entry(self, o):
        d = self.d
        ln, = struct.unpack_from('<I', d, o)
        if ln < 8:
            return max(ln, 4), None
        tag, = struct.unpack_from('<H', d, o + 4)
        a, end, attrs = o + 6, o + ln, {}
        while a < end:
            an, = struct.unpack_from('<H', d, a)
            a += 2
            f = an & 0xf
            if f in _FORMLEN:
                n = _FORMLEN[f]
                v = int.from_bytes(d[a:a + n], 'little')
                a += n
            elif f == 3:
                n, = struct.unpack_from('<H', d, a)
                v = d[a + 2:a + 2 + n]
                a += 2 + n
            elif f == 4:
                n, = struct.unpack_from('<I', d, a)
                v = d[a + 4:a + 4 + n]
                a += 4 + n
            elif f == 8:
                z = d.index(b'\0', a)
                v = d[a:z].decode('latin1')
                a = z + 1
            else:
                break
            attrs[an] = v
        return ln, Entry(o, tag, attrs)

    def _parse(self):
        o, n = 0, len(self.d)
        while o < n:
            ln, e = self._entry(o)
            if e:
                self.entries[o] = e
            o += ln
        # build the tree: children are the entries between an entry and its sibling
        order = sorted(self.entries)
        idx = {off: i for i, off in enumerate(order)}

        def walk(start_i, end_off, parent, cu):
            i = start_i
            while i < len(order) and order[i] < end_off:
                e = self.entries[order[i]]
                e.parent, e.cu = parent, cu
                if parent is not None:
                    parent.children.append(e)
                sib = e.get(AT_SIBLING)
                if e.tag == T_CU:
                    self.cus.append(e)
                    e.cu = e
                nxt = i + 1
                if sib and nxt < len(order) and order[nxt] < sib:
                    walk(nxt, sib, e, e if e.tag == T_CU else cu)
                    nxt = idx.get(sib) if sib in idx else _first_at_or_after(order, sib)
                i = nxt
        walk(0, n + 1, None, None)

    # ---- types ---------------------------------------------------------------------------------
    # A type is represented as a nested tuple:
    #   ('base', 'int') ('named', entry) ('ptr', t) ('ref', t) ('array', t, [dims]) ('func', ret, [params], varargs)

    def type_of(self, e):
        a = e.attrs
        if AT_FUND in a:
            return ('base', FUND.get(a[AT_FUND], 'ft_%04x' % a[AT_FUND]))
        if AT_UDT in a:
            return self._udt(a[AT_UDT])
        if AT_MODFUND in a:
            b = a[AT_MODFUND]
            ft, = struct.unpack_from('<H', b, len(b) - 2)
            return self._mods(b[:-2], ('base', FUND.get(ft, 'ft_%04x' % ft)))
        if AT_MODUDT in a:
            b = a[AT_MODUDT]
            ref, = struct.unpack_from('<I', b, len(b) - 4)
            return self._mods(b[:-4], self._udt(ref))
        return ('base', 'void')

    def _mods(self, mods, t):
        for m in reversed(mods):
            if m == 1:
                t = ('ptr', t)
            elif m == 2:
                t = ('ref', t)
            elif m == 3:
                t = ('const', t)
            elif m == 4:
                t = ('volatile', t)
        return t

    def _udt(self, ref):
        e = self.entries.get(ref)
        if e is None:
            return ('base', '<bad type ref %#x>' % ref)
        if e.tag == T_ARRAY:
            return self._array(e)
        if e.tag == T_SUBTYPE:
            params = [self.type_of(c) for c in e.children if c.tag == T_PARAM]
            varargs = any(c.tag == T_UNSPEC for c in e.children)
            return ('func', self.type_of(e), params, varargs)
        if e.tag in (T_PTR, T_REF):
            return ('ptr' if e.tag == T_PTR else 'ref', self.type_of(e))
        return ('named', e)

    def _array(self, e):
        b = e.get(AT_SUBSCR, b'')
        dims, i, elem = [], 0, ('base', 'void')
        while i < len(b):
            fmt = b[i]
            i += 1
            if fmt == 8:                      # FMT_ET: the element type follows as an attribute
                an, = struct.unpack_from('<H', b, i)
                i += 2
                f = an & 0xf
                if f in _FORMLEN:
                    n = _FORMLEN[f]
                    v = int.from_bytes(b[i:i + n], 'little')
                    i += n
                else:
                    n, = struct.unpack_from('<H', b, i)
                    v = b[i + 2:i + 2 + n]
                    i += 2 + n
                fake = Entry(-1, 0, {an: v})
                elem = self.type_of(fake)
                break
            # index type: fundamental (2 bytes) or user-defined (4 bytes)
            i += 2 if fmt < 4 else 4
            lo_c, hi_c = (fmt & 2) == 0, (fmt & 1) == 0
            lo = hi = None
            if lo_c:
                lo, = struct.unpack_from('<i', b, i)
                i += 4
            else:
                n, = struct.unpack_from('<H', b, i)
                i += 2 + n
            if hi_c:
                hi, = struct.unpack_from('<i', b, i)
                i += 4
            else:
                n, = struct.unpack_from('<H', b, i)
                i += 2 + n
            dims.append(hi - lo + 1 if lo is not None and hi is not None and hi >= lo else None)
        return ('array', elem, dims)

    def type_name(self, e):
        """Name of a class/struct/union/enum/typedef entry."""
        kw = {T_CLASS: 'class', T_STRUCT: 'struct', T_UNION: 'union', T_ENUM: 'enum'}.get(e.tag, '')
        n = e.name
        if not n or n.startswith('@'):
            return '%s %s' % (kw, n or '<anonymous@%x>' % e.off) if kw else (n or '?')
        return n

    def decl(self, t, inner=''):
        k = t[0]
        if k == 'base':
            return (t[1] + ' ' + inner).rstrip() if not t[1].endswith('*') or not inner else t[1] + inner
        if k == 'named':
            return (self.type_name(t[1]) + ' ' + inner).rstrip()
        if k in ('ptr', 'ref'):
            sym = '*' if k == 'ptr' else '&'
            target = t[1]
            s = sym + inner
            if target[0] in ('array', 'func'):
                s = '(' + s + ')'
            return self.decl(target, s)
        if k in ('const', 'volatile'):
            if t[1][0] in ('ptr', 'ref'):
                return self.decl(t[1][1], ('*' if t[1][0] == 'ptr' else '&') + ' ' + k + ' ' + inner)
            return k + ' ' + self.decl(t[1], inner)
        if k == 'array':
            return self.decl(t[1], inner + ''.join('[%s]' % (n if n is not None else '') for n in t[2]))
        if k == 'func':
            ps = [self.decl(p) for p in t[2]]
            if t[3]:
                ps.append('...')
            return self.decl(t[1], inner + '(' + ', '.join(ps) + ')')
        return '?' + inner

    # ---- locations -----------------------------------------------------------------------------
    @staticmethod
    def location(b):
        """Evaluate a DWARF 1 location expression: ('reg', n) / ('addr', a) / ('base', reg, off) / ('const', n)."""
        if not isinstance(b, (bytes, bytearray)):
            return None
        stack, i, reg = [], 0, None
        while i < len(b):
            op = b[i]
            i += 1
            if op in (1, 2, 3, 4):
                v, = struct.unpack_from('<I', b, i)
                i += 4
                if op == 1:
                    return ('reg', v)
                if op == 2:
                    reg = v
                    stack.append(0)
                elif op == 3:
                    stack.append(('addr', v))
                else:
                    stack.append(v)
            elif op == 7:
                if len(stack) >= 2:
                    y, x = stack.pop(), stack.pop()
                    if isinstance(x, tuple):
                        stack.append(('addr', x[1] + y))
                    else:
                        stack.append((x + y) & 0xffffffff)
            elif op in (5, 6):
                pass
            else:
                break
        if not stack:
            return None
        top = stack[-1]
        if isinstance(top, tuple):
            return top
        if reg is not None:
            v = top - (1 << 32) if top & 0x80000000 else top
            return ('base', reg, v)
        return ('const', top)

    # ---- line numbers --------------------------------------------------------------------------
    def lines(self, cu):
        """[(address, line)] for a compile unit, from its AT_stmt_list offset into .line."""
        off = cu.get(AT_STMT)
        if off is None or not self.line:
            return []
        b = self.line
        ln, base = struct.unpack_from('<II', b, off)
        out, i = [], off + 8
        while i + 10 <= off + ln:
            line, col, delta = struct.unpack_from('<IHI', b, i)
            i += 10
            if line == 0:
                break
            out.append((base + delta, line))
        return out


def _first_at_or_after(order, off):
    import bisect
    return bisect.bisect_left(order, off)


def enum_values(e):
    b = e.get(AT_ELEMS4) or e.get(AT_ELEMS2) or b''
    out, i = [], 0
    while i + 4 <= len(b):
        v, = struct.unpack_from('<i', b, i)
        z = b.index(b'\0', i + 4)
        out.append((b[i + 4:z].decode('latin1'), v))
        i = z + 1
    return out
