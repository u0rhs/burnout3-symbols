"""Write an ELF's symbol table and DWARF 1 debug information out as readable files.

    python3 export_elf.py <elf> <output folder> "<label for the file headers>"
"""
import csv
import os
import re
import sys
from collections import defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from elf import Elf                      # noqa: E402
from cwdemangle import demangle          # noqa: E402
import dwarf1 as D                       # noqa: E402


def hx(v, w=8):
    return '0x%0*X' % (w, v)


def write_symbols(elf, out, label):
    syms = elf.symbols()
    if not syms:
        return 0
    rows = []
    for s in syms:
        dm = demangle(s['name'])
        rows.append((s['addr'], s['size'], s['type'], s['bind'], s['section'], s['name'], dm or ''))
    rows.sort(key=lambda r: (r[0], r[5]))
    with open(os.path.join(out, 'symbols.csv'), 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['address', 'size', 'type', 'bind', 'section', 'name', 'demangled'])
        for r in rows:
            w.writerow([hx(r[0]), r[1], r[2], r[3], r[4], r[5], r[6]])
    with open(os.path.join(out, 'symbols.txt'), 'w') as f:
        f.write('// Symbol table of %s\n// %s\n' % (os.path.basename(elf.path), label))
        f.write('// address     size  type    bind    section   name\n\n')
        for r in rows:
            f.write('%s %7d  %-7s %-7s %-9s %s\n' % (hx(r[0]), r[1], r[2], r[3], r[4][:9], r[6] or r[5]))
    return len(rows)


class Writer:
    def __init__(self, dw):
        self.dw = dw

    # ---- class / struct / union / enum bodies --------------------------------------------------
    def type_def(self, e, methods=None, indent=''):
        dw = self.dw
        size = e.get(D.AT_BYTESIZE)
        if e.tag == D.T_ENUM:
            vals = D.enum_values(e)
            lines = ['%senum %s {  // size %s' % (indent, e.name or '', size)]
            for n, v in vals:
                lines.append('%s    %s = %d,' % (indent, n, v))
            lines.append(indent + '};')
            return '\n'.join(lines)
        kw = {D.T_CLASS: 'class', D.T_STRUCT: 'struct', D.T_UNION: 'union'}[e.tag]
        bases = []
        for c in e.children:
            if c.tag == D.T_INHERIT:
                loc = D.Dwarf1.location(c.get(D.AT_LOCATION))
                off = loc[1] if loc and loc[0] == 'const' else None
                bases.append((dw.decl(dw.type_of(c)), off))
        head = '%s%s %s' % (indent, kw, e.name if e.name and not e.name.startswith('@') else '')
        if bases:
            head += ' : ' + ', '.join('public ' + b for b, _ in bases)
        lines = [head.rstrip() + ' {  // size %s' % (hx(size, 3) if size is not None else '?')]
        if kw == 'class':
            lines.append(indent + 'public:')
        for b, off in bases:
            lines.append('%s    // base %s at %s' % (indent, b, hx(off or 0, 3)))
        for c in e.children:
            if c.tag != D.T_MEMBER:
                continue
            loc = D.Dwarf1.location(c.get(D.AT_LOCATION))
            off = loc[1] if loc and loc[0] == 'const' else None
            t = dw.type_of(c)
            inner = self._anon(t)
            if inner is not None:
                body = self.type_def(inner, indent=indent + '    ')
                decl = body.rstrip(';').rstrip() + ' ' + self._suffix(t, c.name) + ';'
                decl = decl.lstrip()
            else:
                decl = dw.decl(t, c.name) + ';'
            if D.AT_BITSIZE in c.attrs:
                decl = decl[:-1] + ' : %d;' % c.get(D.AT_BITSIZE)
                decl += '  // bit offset %d' % c.get(D.AT_BITOFF, 0)
            lines.append('%s    /* %s */ %s' % (indent, hx(off, 3) if off is not None else '  ?  ', decl))
        if methods:
            lines.append('')
            lines.append(indent + '    // functions of this class with code in this build:')
            for m in methods:
                lines.append('%s    // %s' % (indent, m))
        lines.append(indent + '};')
        return '\n'.join(lines)

    def _anon(self, t):
        while t[0] in ('ptr', 'ref', 'array', 'const', 'volatile'):
            t = t[1]
        if t[0] == 'named' and (not t[1].name or t[1].name.startswith('@')) and t[1].tag != D.T_ENUM:
            return t[1]
        if t[0] == 'named' and t[1].tag == D.T_ENUM and (not t[1].name or t[1].name.startswith('@')):
            return t[1]
        return None

    def _suffix(self, t, name):
        # the declarator part of an anonymous-type member: pointers and array sizes
        pre, post = '', ''
        while t[0] in ('ptr', 'ref', 'array', 'const', 'volatile'):
            if t[0] == 'ptr':
                pre += '*'
            elif t[0] == 'ref':
                pre += '&'
            elif t[0] == 'array':
                post += ''.join('[%s]' % (n if n is not None else '') for n in t[2])
            t = t[1]
        return pre + name + post


def func_info(dw, e):
    """Signature pieces for a global_subroutine / subroutine entry."""
    mangled = e.get(D.AT_MW_MANGLED)
    dm = demangle(mangled) if mangled else None
    name = e.name or '?'
    qual = name
    const = False
    if dm:
        head = dm[:dm.index('(')] if '(' in dm else dm
        qual = head
        const = dm.endswith(' const')
    params, this_t = [], None
    for c in e.children:
        if c.tag == D.T_PARAM:
            t = dw.type_of(c)
            if c.name == 'this':
                this_t = t
                continue
            params.append(dw.decl(t, c.name or ''))
        elif c.tag == D.T_UNSPEC:
            params.append('...')
    ret = dw.type_of(e)
    sig = dw.decl(ret, '%s(%s)%s' % (qual, ', '.join(params), ' const' if const else ''))
    if e.tag == D.T_SUB:
        sig = 'static ' + sig
    cls = qual.rsplit('::', 1)[0] if '::' in qual else None
    return sig, cls, mangled


def loc_text(loc):
    if loc is None:
        return 'optimised away'
    if loc[0] == 'reg':
        return 'in $%s' % D.reg_name(loc[1])
    if loc[0] == 'base':
        return '$%s%+d' % (D.reg_name(loc[1]), loc[2])
    if loc[0] == 'addr':
        return 'at %s' % hx(loc[1]) if loc[1] else 'static (not in the image)'
    return str(loc)


def write_dwarf(elf, out, label):
    dbg = elf.section_data('.debug')
    if not dbg:
        return None
    dw = D.Dwarf1(dbg, elf.section_data('.line'))
    W = Writer(dw)

    # ---- collect functions, globals, types per source file --------------------------------------
    files = defaultdict(lambda: dict(funcs=[], globs=[], cus=[]))
    funcs, globs = [], []
    types = defaultdict(dict)       # (kind, name) -> {text: [files]}
    for cu in dw.cus:
        f = files[cu.name]
        f['cus'].append(cu)
        for c in cu.children:
            if c.tag in (D.T_GSUB, D.T_SUB) and D.AT_LOWPC in c.attrs:
                sig, cls, mangled = func_info(dw, c)
                rec = dict(e=c, sig=sig, cls=cls, mangled=mangled, lo=c.get(D.AT_LOWPC), hi=c.get(D.AT_HIGHPC),
                           file=cu.name, cu=cu)
                f['funcs'].append(rec)
                funcs.append(rec)
            elif c.tag in (D.T_GVAR, D.T_LOCAL):
                loc = D.Dwarf1.location(c.get(D.AT_LOCATION))
                rec = dict(e=c, decl=_var_decl(dw, c),
                           addr=loc[1] if loc and loc[0] == 'addr' else 0, file=cu.name,
                           mangled=c.get(D.AT_MW_MANGLED))
                f['globs'].append(rec)
                if rec['addr']:
                    globs.append(rec)
    by_addr = {}
    for g in globs:
        by_addr.setdefault((g['addr'], g['decl']), []).append(g)
    globs = []
    for (a, _), gs in by_addr.items():
        g = dict(gs[0])
        g['files'] = sorted({x['file'] for x in gs})
        globs.append(g)

    methods = defaultdict(list)
    for r in sorted(funcs, key=lambda r: r['lo']):
        if r['cls']:
            methods[r['cls']].append('%s  [%s]' % (r['sig'], hx(r['lo'])))

    # every named class/struct/union/enum, wherever it is declared (top level or nested)
    for e in dw.entries.values():
        if e.tag in (D.T_CLASS, D.T_STRUCT, D.T_UNION, D.T_ENUM) and e.name and not e.name.startswith('@'):
            text = W.type_def(e)
            key = _layout_key(text)
            slot = types[(e.tag == D.T_ENUM, e.name)].setdefault(key, [text, set()])
            if e.tag == D.T_CLASS:
                slot[0] = text          # prefer the C++ spelling
            slot[1].add(e.cu.name if e.cu else '?')

    # ---- line numbers ---------------------------------------------------------------------------
    lines_by_cu = {}
    all_lines = []
    for cu in dw.cus:
        ls = dw.lines(cu)
        lines_by_cu[cu.off] = ls
        for a, l in ls:
            all_lines.append((a, cu.name, l))
    all_lines.sort()

    def line_range(rec):
        ls = [l for a, l in lines_by_cu.get(rec['cu'].off, []) if rec['lo'] <= a < rec['hi']]
        return (min(ls), max(ls)) if ls else None

    # ---- types.h --------------------------------------------------------------------------------
    with open(os.path.join(out, 'types.h'), 'w') as f:
        f.write('// Every class, struct, union and enum in the debug information of %s\n' % os.path.basename(elf.path))
        f.write('// %s\n' % label)
        f.write('// Offsets are in /* */ before each member; sizes in bytes. Types appear once per distinct layout:\n')
        f.write('// a name with more than one layout is marked VARIANT (headers changed between files, or two\n')
        f.write('// different types share the name). Base classes are listed with their offsets.\n')
        f.write('// u_long128 is the EE\'s 128-bit integer. MW CodeWarrior did not record const, typedefs or\n')
        f.write('// member functions in the types; the functions of each class are listed from the code.\n\n')
        for (is_enum, name) in sorted(types, key=lambda k: (k[0], k[1].lower())):
            variants = types[(is_enum, name)]
            for i, (text, fs) in enumerate(sorted(variants.values(), key=lambda v: -len(v[1]))):
                tag = '' if len(variants) == 1 else '  // VARIANT %d of %d' % (i + 1, len(variants))
                where = sorted(fs)
                f.write('// declared in %d file(s), e.g. %s%s\n' % (len(where), _short(where[0]), tag))
                if not is_enum and i == 0 and methods.get(name):
                    text = text[:-2] + '\n    // functions of this class with code in this build:\n' + \
                        '\n'.join('    // ' + m for m in methods[name]) + '\n};'
                f.write(text + '\n\n')

    # ---- functions.txt / functions.csv ----------------------------------------------------------
    with open(os.path.join(out, 'functions.txt'), 'w') as f:
        f.write('// Every function with debug information in %s, by address\n// %s\n\n' %
                (os.path.basename(elf.path), label))
        for r in sorted(funcs, key=lambda r: r['lo']):
            lr = line_range(r)
            f.write('%s-%s %6d  %s\n      %s%s\n' % (hx(r['lo']), hx(r['hi']), r['hi'] - r['lo'], r['sig'],
                                                   _short(r['file']),
                                                   ' : lines %d-%d' % lr if lr else ''))
    with open(os.path.join(out, 'functions.csv'), 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['start', 'end', 'size', 'signature', 'mangled', 'source_file', 'first_line', 'last_line'])
        for r in sorted(funcs, key=lambda r: r['lo']):
            lr = line_range(r) or ('', '')
            w.writerow([hx(r['lo']), hx(r['hi']), r['hi'] - r['lo'], r['sig'], r['mangled'] or '', r['file'],
                        lr[0], lr[1]])

    # ---- globals.txt ----------------------------------------------------------------------------
    with open(os.path.join(out, 'globals.txt'), 'w') as f:
        f.write('// Global and file-static variables with an address in %s\n// %s\n\n' %
                (os.path.basename(elf.path), label))
        for g in sorted(globs, key=lambda g: g['addr']):
            dm = demangle(g['mangled']) if g['mangled'] else None
            fs = g['files']
            f.write('%s  %s;\n      %s%s\n' % (hx(g['addr']), g['decl'], _short(fs[0]),
                                            ' (+%d more files)' % (len(fs) - 1) if len(fs) > 1 else ''))

    # ---- line_numbers.csv -----------------------------------------------------------------------
    with open(os.path.join(out, 'line_numbers.csv'), 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['address', 'source_file', 'line'])
        for a, n, l in all_lines:
            w.writerow([hx(a), n, l])

    # ---- source outline: one file per original source file --------------------------------------
    src_root = os.path.join(out, 'source_outline')
    for name, f in files.items():
        if not f['funcs'] and not [g for g in f['globs'] if g['addr']]:
            continue
        path = os.path.join(src_root, _rel(name))
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, 'w') as fh:
            fh.write('// %s\n' % name)
            fh.write('// Outline rebuilt from the debug information of %s (%s).\n' %
                     (os.path.basename(elf.path), label))
            fh.write('// No code survives: these are the declarations, parameters, locals and where each\n')
            fh.write('// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.\n\n')
            gl = [g for g in f['globs'] if g['addr'] or g['e'].tag == D.T_GVAR]
            if gl:
                fh.write('// ---- variables defined in or used by this file ----\n')
                seen = set()
                for g in sorted(gl, key=lambda g: g['addr']):
                    key = (g['decl'], g['addr'])
                    if key in seen:
                        continue
                    seen.add(key)
                    fh.write('%s;%s\n' % (g['decl'], '  // ' + hx(g['addr']) if g['addr'] else ''))
                fh.write('\n')
            fh.write('// ---- functions ----\n\n')
            for r in sorted(f['funcs'], key=lambda r: r['lo']):
                lr = line_range(r)
                fh.write('// %s-%s (%d bytes)%s\n' % (hx(r['lo']), hx(r['hi']), r['hi'] - r['lo'],
                                                     ', lines %d-%d' % lr if lr else ''))
                if r['mangled']:
                    fh.write('// %s\n' % r['mangled'])
                fh.write(r['sig'] + '\n{\n')
                _body(dw, r['e'], fh, '    ')
                fh.write('}\n\n')

    return dict(funcs=len(funcs), globals=len(globs), types=len(types), files=len(files),
                lines=len(all_lines))


def _body(dw, e, fh, ind):
    for c in e.children:
        if c.tag == D.T_PARAM:
            fh.write('%s// param %s  (%s)\n' % (ind, dw.decl(dw.type_of(c), c.name or '?'),
                                               loc_text(D.Dwarf1.location(c.get(D.AT_LOCATION)))))
    for c in e.children:
        if c.tag == D.T_LOCAL:
            fh.write('%s%s;  // %s\n' % (ind, dw.decl(dw.type_of(c), c.name or '?'),
                                         loc_text(D.Dwarf1.location(c.get(D.AT_LOCATION)))))
        elif c.tag == D.T_BLOCK:
            fh.write('%s{   // %s-%s\n' % (ind, hx(c.get(D.AT_LOWPC, 0)), hx(c.get(D.AT_HIGHPC, 0))))
            _body(dw, c, fh, ind + '    ')
            fh.write('%s}\n' % ind)


def _rel(name):
    p = name.replace('\\', '/')
    p = re.sub(r'^[A-Za-z]:/', '', p)
    m = re.search(r'(?i)burnout 2 code/', p)
    if m:
        p = p[m.end():]
    p = p.lstrip('/')
    if '/' not in p:
        p = 'renderware_and_libraries/' + p
    return p + ('' if p.endswith(('.c', '.cpp', '.s', '.h')) else '.txt')


def _short(name):
    return re.sub(r'(?i)^.*burnout 2 code\\', '', name or '')


def main():
    src, out, label = sys.argv[1], sys.argv[2], sys.argv[3]
    os.makedirs(out, exist_ok=True)
    elf = Elf(src)
    n = write_symbols(elf, out, label)
    r = write_dwarf(elf, out, label)
    print('%s: %d symbols%s' % (os.path.basename(src), n, ', debug: %s' % r if r else ''))



def _layout_key(text):
    lines = text.split('\n')
    head = lines[0].replace('class ', 'struct ', 1)
    return '\n'.join([head] + [l for l in lines[1:] if l.strip() != 'public:'])


def _var_decl(dw, c):
    name = c.name or '?'
    dm = demangle(name) or (demangle(c.get(D.AT_MW_MANGLED)) if c.get(D.AT_MW_MANGLED) else None)
    if name.startswith('__vt__') and dm:
        return '/* vtable */ void *%s[]' % dm.replace('::__vtable', '::__vtable')
    if name.startswith('__RTTI__') and dm:
        return '/* RTTI */ %s' % dm
    if dm and '(' not in dm:
        name = dm
    return ('static ' if c.tag == D.T_LOCAL else '') + dw.decl(dw.type_of(c), name)


if __name__ == '__main__':
    main()
