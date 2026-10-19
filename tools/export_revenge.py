"""Export the Burnout Revenge July 14, 2005 PS2 prototype's symbols and GCC debug information as readable files.

    python3 tools/export_revenge.py <SLUS_212.42> [<B4EXTERN.MAP>] <output folder>

Writes, like the Burnout 2 export (export_elf.py):
  types.h            every class, struct, union and enum, with member offsets, base classes and methods
  functions.csv/.txt every function with debug information: signature with parameter names, source file
  globals.txt        global and static variables with their types
  symbols.csv/.txt   the symbol table (21,887 entries), demangled where the link map has the name
  source_files.txt   every source file with its function count and code size

The link map on the disc (B4EXTERN.MAP) only supplies demangled names; it is not copied. The executable
was compiled with GCC (SN Systems), not CodeWarrior: its code can't be byte-compared with Burnout 3's,
but its names, parameter lists and layouts can be ([builds](../docs/builds.md)).
Format: docs/formats/gcc-stabs-mdebug.md.
"""
import collections
import csv
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import stabs as S                          # noqa: E402
from cwdemangle import demangle            # noqa: E402

LABEL = 'Burnout Revenge prototype, 14 July 2005 (SLUS_212.42)'


def hx(v, w=8):
    return '0x%0*X' % (w, v)


def short_path(p):
    """d:/alienbrainWork/CG4Game/Code/GameSource/Hud/x.cpp -> GameSource/Hud/x.cpp"""
    p = p.replace(chr(92), '/')
    p = re.sub(r'(?i)^[a-z]:/alienbrainwork/', '', p)
    p = re.sub(r'(?i)^cg4game/code/', '', p)
    p = re.sub(r'^(\.\./)+', '', p)
    return p


def sections(d):
    shoff, = struct.unpack_from('<I', d, 32)
    shes, shn, shstr = struct.unpack_from('<HHH', d, 46)
    secs = [struct.unpack_from('<10I', d, shoff + i * shes) for i in range(shn)]
    so = secs[shstr][4]

    def nm(o):
        e = d.index(b'\0', so + o); return d[so + o:e].decode('latin1')
    return {nm(s[0]): s for s in secs}


def read_symtab(d, secs):
    st, strtab = secs['.symtab'], secs['.strtab']
    out = []
    shoff, = struct.unpack_from('<I', d, 32)
    shes, shn, shstr = struct.unpack_from('<HHH', d, 46)
    order = [struct.unpack_from('<10I', d, shoff + i * shes) for i in range(shn)]
    so = order[shstr][4]
    sec_by_index = []
    for s in order:
        e = d.index(b'\0', so + s[0]); sec_by_index.append(d[so + s[0]:e].decode('latin1'))
    for k in range(st[5] // 16):
        nm, val, size, info, _, shx = struct.unpack_from('<IIIBBH', d, st[4] + k * 16)
        e = d.index(b'\0', strtab[4] + nm)
        name = d[strtab[4] + nm:e].decode('latin1')
        if not name:
            continue
        typ = {0: 'notype', 1: 'object', 2: 'func', 3: 'section', 4: 'file'}.get(info & 15, str(info & 15))
        bind = {0: 'local', 1: 'global', 2: 'weak'}.get(info >> 4, str(info >> 4))
        sec = sec_by_index[shx] if shx < len(sec_by_index) else ('abs' if shx == 0xFFF1 else str(shx))
        out.append((val, size, typ, bind, sec, name))
    return out


def read_map(path):
    """Demangled names by address from B4EXTERN.MAP (column layout: address size align, then the name)."""
    out = {}
    if not path:
        return out
    for line in open(path, encoding='latin1'):
        line = line.rstrip('\r\n')
        if len(line) > 48 and re.match(r'^[0-9a-f]{8} [0-9a-f]{8} ', line) and not line[23:48].strip():
            name, size = line[48:].strip(), int(line[9:17], 16)
            if size and name not in ('__gnu_compiled_cplusplus', 'gcc2_compiled.'):   # markers have no size
                out.setdefault(int(line[0:8], 16), name.replace('(void)', '()'))
    return out


def args_of(phys):
    """GCC 2 argument encoding -> '(int, float)'. 'G' marks a class type passed by value."""
    p = re.sub(r'G(?=Q|\d)', '', phys)
    d = demangle('m__F' + (p or 'v'))
    return d[1:] if d else '(/* %s */)' % phys


def gcc_spelling(s):
    """GCC writes 'unsigned const short'; the rest of this site writes 'const unsigned short'."""
    return re.sub(r"\b(unsigned|signed) const (\w+)", r"const \1 \2", s)


def gcc_demangle(m):
    """GCC 2 names differ from CodeWarrior's only in the method marker: GCC writes name__<class><args>
    (name__C<class><args> for a const method), CodeWarrior name__<class>F<args> (<class>CF<args>).
    Rewrite and use the CodeWarrior demangler."""
    k = m.find('__', 1)
    if k < 0:
        return None
    name, rest = m[:k], m[k + 2:]
    if not rest or rest[0] == 'F':
        return demangle(m)
    const = rest[0] == 'C' and len(rest) > 1 and (rest[1].isdigit() or rest[1] == 'Q')
    if const:
        rest = rest[1:]
    try:
        if rest[0] == 'Q':                                 # Q<n> then n length-prefixed names
            i, parts = 2, int(rest[1])
            for _ in range(parts):
                ln = re.match(r'\d+', rest[i:]).group()
                i += len(ln) + int(ln)
        elif rest[0].isdigit():
            ln = re.match(r'\d+', rest).group()
            i = len(ln) + int(ln)
        else:
            return demangle(m)
    except (AttributeError, ValueError, IndexError):
        return None
    args = re.sub(r'G(?=Q|\d)', '', rest[i:]) or 'v'
    return demangle('%s__%s%sF%s' % (name, rest[:i], 'C' if const else '', args))


def split_args(s):
    out, depth, cur = [], 0, ''
    for ch in s:
        depth += ch in '(<'
        depth -= ch in ')>'
        if ch == ',' and depth == 0:
            out.append(cur.strip()); cur = ''
        else:
            cur += ch
    return [x for x in out + [cur.strip()] if x]


def with_name(t, n):
    """'const unsigned short *' + 'lpString' -> 'const unsigned short *lpString'; function pointers too."""
    if '(*)' in t:
        return t.replace('(*)', '(*%s)' % n, 1)
    return t + n if t.endswith(('*', '&')) else '%s %s' % (t, n)


def method_line(m, table, cls):
    mt = S.resolve(m['type'])
    ret = S.decl(mt.target, '', table) if isinstance(mt, S.T) and mt.kind in ('method', 'func') else ''
    base = re.sub(r'<.*', '', cls.split('::')[-1])
    if m['name'] in (base, cls) or m['name'].startswith('~'):
        ret = ''                                       # constructors and destructors: no return type
    pre = 'virtual ' if m['virtual'] is not None else 'static ' if m['static'] else ''
    a = args_of(m['phys'].split(';')[0])
    return '%s%s%s%s%s' % (pre, (ret + ' ') if ret else '', m['name'], a, ' const' if m['const'] else '')


def struct_text(name, t, table):
    kind = t.kind
    # compiler-generated: assignment (__as) and the copy constructors of anonymous types ($_N)
    has_methods = [m for m in t.methods if m['name'] != '__as' and '$' not in m['name'] and '$_' not in m['phys']]
    word = 'class' if t.bases or has_methods else kind
    bases = ', '.join('%s%s' % ('virtual ' if v else '', 'public ' + S.decl(b, '', table)) for b, _, v, _ in t.bases)
    L = ['%s %s%s {  // size 0x%03X' % (word, name, ' : ' + bases if bases else '', t.size)]
    for b, off, _, _ in t.bases:
        L.append('    // base %s at 0x%03X' % (S.decl(b, '', table), off))
    for f in t.fields:
        if f['static']:
            L.append('    /* static */ %s;' % S.decl(f['type'], f['name'], table))
            continue
        off, bits = f['bitoff'], f['bits']
        dn = S.decl(f['type'], '__vptr' if f['name'].startswith('$vf') else f['name'], table)
        if off % 8 or (bits % 8 and bits < 32 and S.resolve(f['type']).kind in ('named', 'enum')):
            L.append('    /* 0x%03X */ %s : %d;  // bit %d' % (off // 8, dn, bits, off % 8))
        else:
            L.append('    /* 0x%03X */ %s;' % (off // 8, dn))
    if has_methods:
        L.append('    // methods')
        for m in has_methods:
            L.append('    // ' + method_line(m, table, name) + ';')
    L.append('};')
    return '\n'.join(L)


def enum_text(name, t):
    L = ['enum %s {' % name] + ['    %s = %d,' % (n, v) for n, v in t.values] + ['};']
    return '\n'.join(L)


def main():
    a = sys.argv[1:]
    elf_path, out = a[0], a[-1]
    map_path = a[1] if len(a) == 3 else None
    os.makedirs(out, exist_ok=True)
    d = open(elf_path, 'rb').read()
    secs = sections(d)
    md = S.Mdebug(d, secs['.mdebug'][4])
    demap = read_map(map_path)
    symtab = read_symtab(d, secs)
    sym_by_name = collections.defaultdict(list)
    for v, size, typ, bind, sec, name in symtab:
        sym_by_name[name].append((v, size))

    types = collections.OrderedDict()            # (name, text) -> [files]
    funcs, globs, files = [], [], []
    for f in md.files():
        src = short_path(f.name)
        table = S.TypeTable()
        cur = None
        defs, fglobs, ffuncs = [], [], []
        nfunc = nbytes = 0
        for st, val, s in f.stabs:
            if st == S.N_FUN and not s:                  # end of a function: its size
                if cur:
                    cur['size'] = val; ffuncs.append(cur); nfunc += 1; nbytes += val
                cur = None
                continue
            if ':' not in s or st not in (S.N_LSYM, S.N_GSYM, S.N_STSYM, S.N_LCSYM, S.N_FUN, S.N_PSYM, S.N_RSYM):
                continue
            name, letter, t = table.define(s)
            if st == S.N_FUN and letter in ('F', 'f'):
                cur = dict(start=val, mangled=name, ret=t, static=letter == 'f', params=[], src=src)
            elif cur is not None and letter in ('p', 'P', 'v') and st in (S.N_PSYM, S.N_RSYM):
                cur['params'].append((t, name))
            elif letter in ('T', 't'):
                defs.append((name, letter, t))
            elif letter in ('G', 'S', 'V') and st in (S.N_GSYM, S.N_STSYM, S.N_LCSYM):
                fglobs.append((name, t, letter))
        # printed after the whole file: a type can be used before the stab that defines it
        for name, letter, t in defs:
            if not isinstance(t, S.T) or not re.match(r'^[A-Za-z_][\w:<>, *]*$', name):
                continue
            if t.kind in ('struct', 'union') and t.fields is not None and (letter == 'T' or t.name == name):
                types.setdefault((name, struct_text(name, t, table)), []).append(src)
            elif t.kind == 'enum':
                types.setdefault((name, enum_text(name, t)), []).append(src)
        for r in ffuncs:
            r['ret'] = S.decl(r['ret'], '', table)
            r['params'] = [(S.decl(t, n, table), n) for t, n in r['params']]
            funcs.append(r)
        for name, t, letter in fglobs:
            globs.append((name, S.decl(t, name, table), src, letter))
        files.append((src, nfunc, nbytes))

    # types.h
    by_name = collections.defaultdict(list)
    for (name, text), fl in types.items():
        by_name[name].append((text, sorted(set(fl))))
    with open(os.path.join(out, 'types.h'), 'w', newline='\n') as fh:
        fh.write('// Every class, struct, union and enum in the GCC debug information of SLUS_212.42\n'
                 '// %s\n'
                 '// Offsets are in /* */ before each member; sizes in bytes. Types appear once per distinct layout:\n'
                 '// a name with more than one layout is marked VARIANT (headers changed between files, or two\n'
                 '// different types share the name). Base classes are listed with their offsets. Unlike Burnout 2\'s\n'
                 '// CodeWarrior debug info, GCC records methods: they are listed as comments (return type, name,\n'
                 '// parameter types; virtual/static/const). Typedef names are kept (RwUInt32, CGtV2dArg...).\n\n' % LABEL)
        for name in sorted(by_name, key=str.lower):
            vs = by_name[name]
            for i, (text, fl) in enumerate(vs):
                var = '  // VARIANT %d of %d' % (i + 1, len(vs)) if len(vs) > 1 else ''
                fh.write('// declared in %d file(s), e.g. %s%s\n%s\n\n' % (len(fl), fl[0], var, text))

    # functions
    funcs.sort(key=lambda r: r['start'])
    rows = []
    for r in funcs:
        dm = gcc_spelling(demap.get(r['start']) or gcc_demangle(r['mangled']) or r['mangled'])
        qual = dm.split('(')[0] if '(' in dm else dm
        const = ' const' if dm.rstrip().endswith(') const') else ''
        ps = [(dcl, n) for dcl, n in r['params'] if n != 'this']
        # parameter types from the mangled name (GCC's debug info drops const on pointer parameters),
        # names from the debug info, when the counts agree
        mt = split_args(dm[dm.index('(') + 1:dm.rindex(')')]) if '(' in dm and ')' in dm else None
        if mt is not None and mt == ['void']:
            mt = []
        if mt is not None and len(mt) == len(ps):
            plist = [with_name(t, n) for t, (_, n) in zip(mt, ps)]
        else:
            plist = [dcl for dcl, _ in ps]
        sig = '%s%s %s(%s)%s' % ('static ' if r['static'] else '', r['ret'], qual, ', '.join(plist), const)
        rows.append((r['start'], r['start'] + r['size'], r['size'], sig, r['mangled'], r['src'], dm))
    # the debug information also describes functions the linker dropped: their address is -1
    linked = [r for r in rows if r[0] >= 0]
    dropped = sorted(set((sig, mg, src, n if n >= 0 else '') for s0, e0, n, sig, mg, src, _ in rows if s0 < 0),
                     key=lambda r: (r[2], r[0]))
    with open(os.path.join(out, 'functions.csv'), 'w', newline='') as fh:
        w = csv.writer(fh, lineterminator='\n')
        w.writerow(['start', 'end', 'size', 'signature', 'mangled', 'source_file', 'first_line', 'last_line',
                    'demangled'])
        for s0, e0, n, sig, mg, src, dm in linked:
            w.writerow([hx(s0), hx(e0), n, sig, mg, src, '', '', dm])
    with open(os.path.join(out, 'functions.txt'), 'w', newline='\n') as fh:
        fh.write('// Every function with debug information in SLUS_212.42, by address\n// %s\n\n' % LABEL)
        for s0, e0, n, sig, mg, src, _ in linked:
            fh.write('%s-%s %6d  %s\n      %s\n' % (hx(s0), hx(e0), n, sig, src))
    with open(os.path.join(out, 'unlinked_functions.csv'), 'w', newline='') as fh:
        w = csv.writer(fh, lineterminator='\n')
        w.writerow(['signature', 'mangled', 'source_file', 'size'])
        for sig, mg, src, n in dropped:
            w.writerow([sig, mg, src, n])
    rows = linked

    # globals
    with open(os.path.join(out, 'globals.txt'), 'w', newline='\n') as fh:
        fh.write('// Global (G) and static (S, V) variables in the debug information of SLUS_212.42, with their\n'
                 '// types and the symbol table\'s address and size where it has the name\n// %s\n\n' % LABEL)
        seen = set()
        for name, dcl, src, letter in sorted(globs, key=lambda g: (g[2], g[0])):
            if (name, src) in seen:
                continue
            seen.add((name, src))
            at = sym_by_name.get(name) or sym_by_name.get('_' + name) or []
            where = '%s %6d' % (hx(at[0][0]), at[0][1]) if len(at) == 1 else ' ' * 17
            fh.write('%s  %s%s;   // %s\n' % (where, 'static ' if letter != 'G' else '', dcl, src))

    # symbols
    symtab.sort(key=lambda r: (r[0], r[5]))
    with open(os.path.join(out, 'symbols.csv'), 'w', newline='') as fh:
        w = csv.writer(fh, lineterminator='\n')
        w.writerow(['address', 'size', 'type', 'bind', 'section', 'name', 'demangled'])
        for v, size, typ, bind, sec, name in symtab:
            dm = demap.get(v) if typ == 'func' else None
            w.writerow([hx(v), size, typ, bind, sec, name, dm or demangle(name) or ''])

    # source files
    with open(os.path.join(out, 'source_files.txt'), 'w', newline='\n') as fh:
        fh.write('// Every source file in the debug information of SLUS_212.42: functions and code bytes\n'
                 '// %s\n\n' % LABEL)
        for src, n, b in files:
            if n:
                fh.write('%5d %9s  %s\n' % (n, format(b, ','), src))

    print('types: %d names, %d layouts; functions: %d; globals: %d; symbols: %d; source files: %d'
          % (len(by_name), len(types), len(rows), len(globs), len(symtab), sum(1 for _, n, _ in files if n)))


if __name__ == '__main__':
    main()
