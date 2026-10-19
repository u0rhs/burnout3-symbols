"""GCC stabs debug information inside an ECOFF `.mdebug` section, as SN Systems' PS2 GCC writes it
(the Burnout Revenge July 2005 prototype). Standard library only.

    from stabs import Mdebug
    md = Mdebug(elf_bytes, mdebug_offset)
    for f in md.files():  f.name, f.stabs  ->  [(stab type, value, string), ...]

Each source file numbers its types itself, so types are parsed per file (`TypeTable`). The format:
docs/formats/gcc-stabs-mdebug.md.
"""
import struct

# stab types (n_type), as GCC encodes them in mdebug symbols: index = 0x8F300 + n_type
N_GSYM, N_FUN, N_STSYM, N_LCSYM, N_RSYM, N_SO, N_LSYM, N_SOL, N_PSYM, N_LBRAC, N_RBRAC = (
    0x20, 0x24, 0x26, 0x28, 0x40, 0x64, 0x80, 0x84, 0xA0, 0xC0, 0xE0)

HDR = ('magic vstamp ilineMax cbLine cbLineOffset idnMax cbDnOffset ipdMax cbPdOffset isymMax cbSymOffset '
       'ioptMax cbOptOffset iauxMax cbAuxOffset issMax cbSsOffset issExtMax cbSsExtOffset ifdMax cbFdOffset '
       'crfd cbRfdOffset iextMax cbExtOffset').split()


class File:
    def __init__(self, name, address, stabs):
        self.name, self.address, self.stabs = name, address, stabs


class Mdebug:
    def __init__(self, data, offset):
        self.d = data
        self.h = dict(zip(HDR, struct.unpack_from('<hh' + 'i' * 23, data, offset)))
        if self.h['magic'] != 0x7009:
            raise ValueError('not an mdebug symbolic header (magic 0x%X)' % self.h['magic'])

    def _str(self, o):
        e = self.d.index(b'\0', o)
        return self.d[o:e].decode('latin1')

    def files(self):
        h, d = self.h, self.d
        for i in range(h['ifdMax']):
            (adr, rss, iss_base, _, isym_base, csym) = struct.unpack_from('<Iiiiii', d, h['cbFdOffset'] + i * 72)
            name = self._str(h['cbSsOffset'] + iss_base + rss) if rss >= 0 else ''
            stabs, cont = [], None
            for k in range(csym):
                iss, value, bits = struct.unpack_from('<iiI', d, h['cbSymOffset'] + (isym_base + k) * 12)
                index = bits >> 12
                if index & 0xFFF00 != 0x8F300:
                    continue
                s = self._str(h['cbSsOffset'] + iss_base + iss) if iss >= 0 else ''
                if cont is not None:                     # a long string continues in the next stab
                    s = cont + s; cont = None
                if s.endswith(chr(92)):
                    cont = s[:-1]; continue
                stabs.append((index - 0x8F300, value, s))
            yield File(name, adr, stabs)


# --- types ----------------------------------------------------------------------------------------------
class T:
    """A type: kind is one of named, ptr, ref, const, volatile, array, func, struct, union, enum, forward,
    method, memberptr, builtin, unknown."""
    __slots__ = ('kind', 'name', 'target', 'size', 'lo', 'hi', 'fields', 'bases', 'methods', 'values', 'num')

    def __init__(self, kind, **kw):
        self.kind = kind
        for k in self.__slots__[1:]:
            setattr(self, k, kw.get(k))


class TypeTable:
    """The types of one source file. `define(string)` parses one stab string's type part."""

    def __init__(self):
        self.types = {}          # number -> T
        self.names = {}          # number -> name (from 'Name:t...' / 'Name:T...')

    def get(self, n):
        t = self.types.get(n)
        return t if t is not None else T('unknown', num=n)

    # -- parsing ---------------------------------------------------------------------------------------
    def parse(self, s, i):
        """Parse a type at s[i:]; return (T or ('num', n) reference, next index)."""
        j = i
        if s[j] == '(':                                  # (file,number) pairs: not used by this build
            k = s.index(')', j)
            n = s[j:k + 1]; j = k + 1
        elif s[j] == '-' or s[j].isdigit():
            k = j + 1
            while k < len(s) and s[k].isdigit():
                k += 1
            n = int(s[j:k]); j = k
            if n < 0:
                return T('builtin', num=n), j
        else:
            return self.parse_def(s, j, None)
        if j < len(s) and s[j] == '=':
            k = j + 1
            while k < len(s) and s[k].isdigit():
                k += 1
            if s[j + 1:k] == str(n) and (k == len(s) or s[k] != '='):
                t, j = T('named', name=None), k               # N=N: void
            else:
                t, j = self.parse_def(s, j + 1, n)
            self.types[n] = t
            t.num = n
            return t, j
        return Ref(self, n), j

    def parse_def(self, s, i, num):
        c = s[i]
        if c == '*':
            t, j = self.parse(s, i + 1); return T('ptr', target=t), j
        if c == '&':
            t, j = self.parse(s, i + 1); return T('ref', target=t), j
        if c == 'k':
            t, j = self.parse(s, i + 1); return T('const', target=t), j
        if c == 'B':
            t, j = self.parse(s, i + 1); return T('volatile', target=t), j
        if c == 'f':
            t, j = self.parse(s, i + 1); return T('func', target=t), j
        if c == '@':
            if s[i + 1] == 's':                          # size attribute: @s8;
                k = s.index(';', i); t, j = self.parse(s, k + 1); return t, j
            a, j = self.parse(s, i + 1)                  # member pointer @class,type
            b, j = self.parse(s, j + 1); return T('memberptr', target=b, bases=a), j
        if c == 'a':                                     # ar<index type>;lo;hi;<element>
            _, j = self.parse(s, i + 2)
            k = s.index(';', j + 1); lo = int(s[j + 1:k])
            k2 = s.index(';', k + 1); hi = int(s[k + 1:k2])
            t, j = self.parse(s, k2 + 1)
            return T('array', target=t, lo=lo, hi=hi), j
        if c == 'r':                                     # r<type>;lo;hi;  a basic type
            _, j = self.parse(s, i + 1)
            k = s.index(';', j + 1); k2 = s.index(';', k + 1)
            return T('named', name=None, lo=s[j + 1:k], hi=s[k + 1:k2]), k2 + 1
        if c == 'x':                                     # xs/xu/xe forward reference
            k = s.index(':', i + 2)
            return T('forward', name=s[i + 2:k], size={'s': 'struct', 'u': 'union', 'e': 'enum'}[s[i + 1]]), k + 1
        if c == 'e':
            vals, j = [], i + 1
            while s[j] != ';':
                k = s.index(':', j); k2 = s.index(',', k)
                vals.append((s[j:k], int(s[k + 1:k2]))); j = k2 + 1
            return T('enum', values=vals), j + 1
        if c in 'su':
            return self.parse_struct(s, i)
        if c == '#':
            if s[i + 1] == '#':                          # ##<return>;  (arguments only in the mangled name)
                t, j = self.parse(s, i + 2); return T('method', target=t), j + 1
            cls, j = self.parse(s, i + 1)                # #class,return,args...;
            ret, j = self.parse(s, j + 1)
            args = []
            while s[j] == ',':
                a, j = self.parse(s, j + 1); args.append(a)
            return T('method', target=ret, fields=args, bases=cls), j + 1
        if c.isdigit() or c == '-' or c == '(':          # a typedef of another type: N=M
            t, j = self.parse(s, i)
            return T('alias', target=t) if not isinstance(t, T) or t.kind != 'unknown' else t, j
        raise ValueError('type %r at %d' % (s[i:i + 20], i))

    def parse_struct(self, s, i):
        kind = 'struct' if s[i] == 's' else 'union'
        j = i + 1
        k = j
        while s[k].isdigit():
            k += 1
        size = int(s[j:k]); j = k
        bases = []
        if s[j] == '!':
            k = s.index(',', j); nb = int(s[j + 1:k]); j = k + 1
            for _ in range(nb):
                virtual, access = s[j], s[j + 1]
                k = s.index(',', j + 2); off = int(s[j + 2:k]) // 8
                t, j = self.parse(s, k + 1); j += 1      # ';'
                bases.append((t, off, virtual == '1', access))
        fields, methods = [], []
        while s[j] != ';':
            k = s.index(':', j)
            name = s[j:k]
            if s[k + 1] == ':':                          # methods: name::<type>:<args>;<access><mod><kind>...
                j = k + 2
                while True:
                    mt, j = self.parse(s, j)
                    k = s.index(';', j + 1); phys = s[j + 1:k]; j = k + 1
                    access, mod, how = s[j], s[j + 1], s[j + 2]; j += 3
                    virtual = None
                    if how == '*':                       # virtual: *<index>;<class>;
                        k = s.index(';', j); virtual = int(s[j:k]); j = k + 1
                        _, j = self.parse(s, j); j += 1
                    methods.append(dict(name=name, type=mt, phys=phys, access=access, const=mod in 'BD',
                                        static=how == '?', virtual=virtual))
                    if s[j] == ';':
                        j += 1; break
                continue
            j = k + 1
            access = None
            if s[j] == '/':
                access = s[j + 1]; j += 2
            t, j = self.parse(s, j)
            if s[j] == ':':                              # static member: :<physname>;
                k = s.index(';', j); fields.append(dict(name=name, type=t, static=True, access=access)); j = k + 1
                continue
            k2 = s.index(';', j)                         # ,offset,bits;  or  ,offset;  (the vtable pointer $vf)
            nums = s[j + 1:k2].split(',')
            off, bits = int(nums[0]), int(nums[1]) if len(nums) > 1 else 32
            j = k2 + 1
            fields.append(dict(name=name, type=t, bitoff=off, bits=bits, static=False, access=access))
        j += 1
        if j < len(s) and s[j] == '~':                   # ~%<vptr holder>;
            k = s.index(';', j); j = k + 1
        return T(kind, size=size, fields=fields, bases=bases, methods=methods), j

    def define(self, stab):
        """'name:<letter><type>' -> (name, letter, T); registers names of t/T entries."""
        k = stab.find(':')
        while k >= 0 and k + 1 < len(stab) and stab[k + 1] == ':':      # '::' inside a qualified name
            k = stab.find(':', k + 2)
        name, rest = stab[:k], stab[k + 1:]
        letter = rest[0] if rest and rest[0].isalpha() else ''
        body = rest[len(letter):]
        if letter == 'T' and body.startswith('t'):
            body = body[1:]
        t, _ = self.parse(body, 0)
        if letter in ('t', 'T') and isinstance(t, T) and t.num is not None:
            self.names.setdefault(t.num, name)
            if t.kind in ('struct', 'union', 'enum') and t.name is None:
                t.name = name
            if t.kind == 'named' and t.name is None:
                t.name = name
        return name, letter, t


class Ref:
    """A reference to a type number, resolved when used (types can be defined later in the file)."""
    __slots__ = ('table', 'num')

    def __init__(self, table, num):
        self.table, self.num = table, num

    def resolve(self):
        return self.table.get(self.num)


def resolve(t):
    seen = 0
    while isinstance(t, Ref) and seen < 50:
        t = t.resolve(); seen += 1
    return t


# --- printing as C declarations ------------------------------------------------------------------------
def type_name(t, table, depth=0):
    """The name to print for a type: its typedef/struct name if it has one."""
    num = t.num if isinstance(t, (T, Ref)) else None
    if num is not None and num in table.names and depth > 0:
        return table.names[num]
    return None


def decl(t, name, table, depth=0):
    """C declaration of `name` with type t ('int *p', 'float a[4]', 'void (*f)(void)')."""
    if depth > 30:
        return '/*?*/ ' + name
    num = t.num if isinstance(t, (T, Ref)) else None
    if num is not None and num in table.names:
        return (table.names[num] + (' ' + name if name else '')).strip()
    r = resolve(t)
    k = r.kind
    if k in ('struct', 'union', 'enum') and r.name:
        return (r.name + (' ' + name if name else '')).strip()
    if k in ('struct', 'union') and depth < 4:          # anonymous: written out inline
        inner = ' '.join(decl(f['type'], f['name'], table, depth + 1) + ';' for f in r.fields if not f['static'])
        return ('%s { %s } %s' % (k, inner, name)).strip()
    if k == 'enum':
        return ('enum { %s } %s' % (', '.join('%s = %d' % v for v in r.values), name)).strip()
    if k == 'forward':
        return (r.name + (' ' + name if name else '')).strip()
    if k == 'named':
        return ((r.name or 'int') + (' ' + name if name else '')).strip()
    if k == 'alias':
        return decl(r.target, name, table, depth + 1)
    if k == 'ptr':
        inner = resolve(r.target)
        if inner.kind in ('func', 'method'):
            return decl(inner.target, '(*%s)()' % name, table, depth + 1)
        return decl(r.target, '*' + name, table, depth + 1)
    if k == 'ref':
        return decl(r.target, '&' + name, table, depth + 1)
    if k == 'const':
        return 'const ' + decl(r.target, name, table, depth + 1)
    if k == 'volatile':
        return 'volatile ' + decl(r.target, name, table, depth + 1)
    if k == 'array':
        n = '%s[%d]' % ('(%s)' % name if name.startswith('*') else name, r.hi - r.lo + 1)
        return decl(r.target, n, table, depth + 1)
    if k in ('func', 'method'):
        return decl(r.target, '%s()' % name, table, depth + 1)
    if k == 'builtin':
        return ('int' + (' ' + name if name else '')).strip()
    if k == 'memberptr':
        return decl(r.target, '(::*%s)' % name, table, depth + 1)
    return ('/* type %s */ %s' % (r.num, name)).strip()
