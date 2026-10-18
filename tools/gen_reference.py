"""Generate the reference part of docs/: a page per Burnout 3 class and the cross-cutting reference pages.

    python3 tools/gen_reference.py            (from the repository root, after gen_docs.py)

Writes docs/classes/ and docs/reference/*.md (+ docs/reference/data/*.csv). Each class page keeps its
'## Notes' section across runs.
"""
import csv
import os
import re
import struct
import sys
import urllib.parse
from collections import defaultdict, Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from cwdemangle import demangle            # noqa: E402
import gen_docs as G                       # noqa: E402

ROOT = G.ROOT
B2 = G.B2
B3 = G.B3
B2DIR = os.path.dirname(B2)
B3DIR = os.path.dirname(B3)
RETAIL = os.path.join(ROOT, 'data', 'burnout3-retail')
DOCS = G.DOCS
REF = os.path.join(DOCS, 'reference')
DATA = os.path.join(REF, 'data')
CLS = os.path.join(DOCS, 'classes')
MAPS = G.MAPS


def hx(a):
    return '0x%08X' % a


def link(path, frm):
    return G.link(path, frm)


def md(s):
    return s.replace('|', '\\|').replace('<', '&lt;').replace('>', '&gt;')


def code(s):
    return '`' + s.replace('`', "'") + '`'


def safe_name(c):
    s = re.sub(r'[<>:*?"/\\| ,&]', '_', c)
    return re.sub(r'_+', '_', s).strip('_')


def keep_notes(path, default='\n_Findings go here._\n'):
    if os.path.exists(path):
        old = open(path).read()
        if '\n## Notes\n' in old:
            return old.split('\n## Notes\n', 1)[1]
    return default


def norm_sig(s):
    s = s.replace(' ', '')
    s = s.replace('(void)', '()')
    return s


# ---------------------------------------------------------------------------------------------------
# loading

def load_all_rows():
    rows = {}
    for m in MAPS:
        rows[m] = list(csv.DictReader(open(os.path.join(B3, m + '.symbols.csv'))))
        for r in rows[m]:
            r['a'] = int(r['address'], 16)
            r['n'] = int(r['size'])
    return rows


def is_func(r):
    return r['section'] in ('.text', '.init') and r['n'] > 0 and not r['name'].startswith('.')


def parse_types_h(path):
    """{name: [variant dicts]} with kind, size, bases, text, file, members (names)."""
    t = open(path).read()
    out = defaultdict(list)
    for m in re.finditer(r'// declared in (\d+) file\(s\), e\.g\. ([^\n]*?)(?:  // VARIANT (\d+) of (\d+))?\n'
                         r'((class|struct|union|enum) (\w*)[^\n]*\n(?:.*\n)*?\};)', t):
        text = m[5]
        kind, name = m[6], m[7]
        head = text.split('\n', 1)[0]
        size = re.search(r'size (0x[0-9A-F]+|\d+)', head)
        bases = re.findall(r'public (\w+)', head.split('{')[0])
        members = re.findall(r'\*/ [^;]*?(\w+)(?:\[[^\]]*\])*(?: : \d+)?;', text)
        enumvals = re.findall(r'^\s+(\w+) = (-?\d+),', text, re.M) if kind == 'enum' else []
        out[name].append(dict(kind=kind, size=size[1] if size else '?', bases=bases, text=text,
                              file=m[2].replace('\\', '/'), nfiles=int(m[1]), members=members,
                              enumvals=enumvals))
    return out


def load_b2_functions():
    rows = list(csv.DictReader(open(os.path.join(B2, 'functions.csv'))))
    for r in rows:
        r['typesig'] = demangle(r['mangled']) if r['mangled'] else None
    return rows


ALT = {}     # B3 class -> (B2 class, shared method names), found by method overlap


def b3_to_b2_class(c):
    out = [n for n in G.b2_name(c)]
    if c in ALT:
        out.append(ALT[c][0])
    return out


# ---------------------------------------------------------------------------------------------------

def main():
    os.makedirs(REF, exist_ok=True)
    os.makedirs(DATA, exist_ok=True)
    os.makedirs(CLS, exist_ok=True)
    rows = load_all_rows()
    funcs = {m: [r for r in rows[m] if is_func(r)] for m in MAPS}
    b2types = parse_types_h(os.path.join(B2, 'types.h'))
    b2funcs = load_b2_functions()

    # systems: object -> slug, from gen_docs' patterns
    objs = {r['object']: r['library'] for r in funcs['DNAT_200']}
    sys_of = {}
    for o, lib in objs.items():
        base = re.sub(r'\.(cpp|c|s|obj|o)$', '', o)
        if lib:
            sys_of[o] = 'libraries'
            continue
        for slug, title, pat, _, _ in G.SYSTEMS:
            if re.search(pat, base):
                sys_of[o] = slug
                break
    sys_title = {s[0]: s[1] for s in G.SYSTEMS}
    sys_title['libraries'] = 'Libraries'

    # class data
    methods = defaultdict(lambda: defaultdict(dict))     # class -> name -> map -> (addr, size)
    votes = defaultdict(Counter)
    for m in MAPS:
        for r in funcs[m]:
            c = G.class_of(r['name'])
            if c:
                methods[c][r['name']][m] = (r['a'], r['n'])
                if r['object'] and r['object'] != '(object unknown)':
                    votes[c][r['object']] += 3 if m == 'DNAT_200' else 1
    home = {c: v.most_common(1)[0][0] for c, v in votes.items() if v}
    data_syms = defaultdict(list)    # class -> DNAT data symbols
    vtables, rtti = {}, {}
    for r in rows['DNAT_200']:
        if is_func(r) or r['name'].startswith(('.', '@')):
            continue
        c = G.class_of(r['name'] + '(')
        if not c:
            continue
        if r['name'].endswith('::__vt'):
            vtables[c] = r
        elif r['name'].endswith('::__RTTI'):
            rtti[c] = r
        else:
            data_syms[c].append(r)

    # B2 ancestors by shared method names (for classes renamed between the games) ------------------
    b2_methods = defaultdict(set)
    for r in b2funcs:
        if r['typesig'] and '::' in r['typesig'].split('(')[0]:
            bc = G.class_of(r['typesig'])
            if bc:
                b2_methods[bc].add(r['typesig'][len(bc) + 2:].split('(')[0])
    ALT.clear()
    for c in methods:
        if any(n in b2types for n in G.b2_name(c)):
            continue
        mine = set(n[len(c) + 2:].split('(')[0] for n in methods[c])
        mine -= {c.split('::')[-1], '~' + c.split('::')[-1], 'Update', 'Init', 'Reset', 'Render', 'Shutdown',
                 'Destroy', 'Create', 'Release', 'Destruct', 'Prepare', 'Load', 'Unload', 'Start', 'Stop'}
        best = None
        for bc, theirs in b2_methods.items():
            shared = mine & theirs
            if len(shared) >= 3 and len(shared) >= 0.4 * min(len(mine), len(theirs)):
                score = (len(shared), -abs(len(mine) - len(theirs)))
                if best is None or score > best[0]:
                    best = (score, bc, sorted(shared))
        if best and best[1] in b2types:
            ALT[c] = (best[1], best[2])

    # B2 function lineage -------------------------------------------------------------------------
    b2_by_typesig = {}
    b2_by_qual = defaultdict(list)
    for r in b2funcs:
        if r['typesig']:
            b2_by_typesig[norm_sig(r['typesig'])] = r
            q = r['typesig'].split('(')[0]
            b2_by_qual[q].append(r)
        else:
            # C functions: signature 'ret name(params)'
            mname = re.search(r'(\w+)\(', r['signature'])
            if mname:
                b2_by_typesig[mname[1] + '()C'] = r
                b2_by_qual[mname[1]].append(r)

    def b2_match(name):
        """B3 function name (demangled) -> (B2 row, how)."""
        c = G.class_of(name)
        head = name.split('(')[0]
        params = name[len(head):]
        meth = head[len(c) + 2:] if c else head
        cands = b3_to_b2_class(c) if c else [None]
        for bc in cands:
            q = (bc + '::' + meth) if bc else meth
            if bc and meth == c.split('::')[-1]:
                q = bc + '::' + bc.split('::')[-1]           # constructor
            if bc and meth == '~' + c.split('::')[-1]:
                q = bc + '::~' + bc.split('::')[-1]          # destructor
            r = b2_by_typesig.get(norm_sig(q + params))
            if r:
                return r, 'same signature'
            if not bc and (meth + '()C') in b2_by_typesig:
                return b2_by_typesig[meth + '()C'], 'same C function name'
            if len(b2_by_qual.get(q, [])) == 1:
                return b2_by_qual[q][0], 'same name, different parameters'
        return None, None

    lineage = []
    seen = set()
    for r in sorted(funcs['DNAT_200'] + funcs['B3O0PCH'], key=lambda r: r['a']):
        if r['name'] in seen:
            continue
        seen.add(r['name'])
        b2r, how = b2_match(r['name'])
        if b2r:
            lineage.append((r['name'], b2r, how))
    lin_by_b3 = {n: (b, h) for n, b, h in lineage}

    # ---------------------------------------------------------------------------------------------
    # class pages
    asts = []
    for ast in ('B3DEBUG.AST.txt', 'B3INTERN.AST.txt'):
        p = os.path.join(B3, ast)
        if os.path.exists(p):
            for line in open(p):
                m = re.match(r'0x[0-9A-F]+  (.*)', line)
                if m:
                    asts.append((ast.split('.')[0], m[1]))
    ast_set = sorted(set(a for _, a in asts))
    ast_words = defaultdict(set)
    for a in ast_set:
        for w in re.findall(r'[A-Za-z_]\w{3,}', a):
            ast_words[w].add(a)

    class_list = sorted(methods, key=str.lower)
    index = defaultdict(list)
    for c in class_list:
        ms = methods[c]
        h = home.get(c, '')
        s = sys_of.get(h, 'libraries' if h and objs.get(h) else '')
        fname = safe_name(c) + '.md'
        index[s].append((c, fname, len(ms)))
        p = os.path.join(CLS, fname)
        b2c = next((n for n in b3_to_b2_class(c) if n in b2types and b2types[n][0]['kind'] != 'enum'), None)
        L = ['# %s' % md(c), '',
             '> Generated by `tools/gen_reference.py`. Re-running it rewrites everything except the '
             '[Notes](#notes) section.', '']
        facts = []
        if s:
            facts.append('**Area:** [%s](../systems/%s.md)' % (sys_title.get(s, s), s))
        if h:
            facts.append('**Source file:** `%s`%s' % (h, ' (%s)' % objs.get(h) if objs.get(h) else ''))
        builds = Counter()
        for n in ms:
            for m in ms[n]:
                builds[m] += 1
        facts.append('**Methods per build:** ' + ', '.join('%s %d' % (m, builds[m]) for m in MAPS if builds[m]))
        if c in vtables:
            v = vtables[c]
            facts.append('**vtable (DNAT_200):** `%s`, %d bytes = %d slots (slot size assumed 4 bytes; '
                         'CodeWarrior vtables start with 8 bytes of RTTI/offset info, so roughly %d virtual functions)'
                         % (hx(v['a']), v['n'], v['n'] // 4, max(0, (v['n'] - 8) // 4)))
        if c in rtti:
            facts.append('**RTTI (DNAT_200):** `%s`' % hx(rtti[c]['a']))
        if b2c:
            v0 = b2types[b2c][0]
            how = ('by name' if b2c in G.b2_name(c) else
                   'by shared methods: ' + ', '.join('`%s`' % x for x in ALT[c][1][:8]) + (' …' if len(ALT[c][1]) > 8 else ''))
            facts.append('**Burnout 2 ancestor (%s):** `%s`, size %s, declared in %d file(s), e.g. `%s`'
                         % (how, b2c, v0['size'], v0['nfiles'], v0['file']))
        L += ['- ' + f for f in facts] + ['']

        L += ['## Methods', '',
              'Addresses and sizes in each build. **B2** is the Burnout 2 function with the same name, with its '
              'parameter names (match by signature unless marked).', '',
              '| Method | DNAT_200 | B3DEBUG | B3INTERN | B3O0PCH | Burnout 2 |', '|---|---|---|---|---|---|']
        for n in sorted(ms, key=lambda n: (ms[n].get('DNAT_200', ms[n].get('B3DEBUG', (1 << 40, 0)))[0], n)):
            cells = []
            for m in MAPS:
                v = ms[n].get(m)
                cells.append('`%s` %d' % (hx(v[0]), v[1]) if v else '')
            b2 = lin_by_b3.get(n)
            b2cell = ''
            if b2:
                b2cell = code(b2[0]['signature']) + ('' if b2[1] == 'same signature' else ' (%s)' % b2[1])
            short = n[len(c) + 2:] if n.startswith(c + '::') else n
            L.append('| %s | %s | %s |' % (code(short), ' | '.join(cells), b2cell))
        L.append('')
        if data_syms.get(c):
            L += ['## Static data (DNAT_200)', '', '| Address | Size | Section | Name |', '|---|---:|---|---|']
            for r in sorted(data_syms[c], key=lambda r: r['a']):
                L.append('| `%s` | %d | %s | %s |' % (hx(r['a']), r['n'], r['section'], code(r['name'])))
            L.append('')
        if b2c:
            for i, v in enumerate(b2types[b2c]):
                L += ['## Burnout 2 layout of `%s`%s' % (b2c, '' if len(b2types[b2c]) == 1 else ' (variant %d)' % (i + 1)),
                      '', 'From the Burnout 2 debug info (declared in %d file(s), e.g. `%s`). A starting point for '
                      'the Burnout 3 class, not its actual layout.' % (v['nfiles'], v['file']), '',
                      '```cpp', v['text'], '```', '']
            words = set(w for v in b2types[b2c] for w in v['members'] if len(w) >= 5)
            hits = sorted(set(a for w in words for a in ast_words.get(w, ())))
            if hits:
                L += ['## Asserts that mention its Burnout 2 members', '',
                      'From the debug builds\' assert files; matched by member name only, so some may belong to '
                      'another class with a member of the same name.', '']
                L += ['- ' + code(a) for a in hits[:60]]
                if len(hits) > 60:
                    L.append('- … and %d more' % (len(hits) - 60))
                L.append('')
        L += ['## Notes']
        with open(p, 'w') as fh:
            fh.write('\n'.join(L) + '\n' + keep_notes(p))

    with open(os.path.join(CLS, 'README.md'), 'w') as fh:
        fh.write('# Burnout 3 classes\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'One page for each of the %d classes with methods in any of the four Burnout 3 prototype maps: '
                 'methods with addresses in every build, the vtable, static data, the Burnout 2 ancestor\'s layout '
                 'and related asserts. Grouped by area.\n\n' % len(class_list))
        order = [s[0] for s in G.SYSTEMS] + ['libraries', '']
        for s in order:
            if not index.get(s):
                continue
            fh.write('## %s\n\n' % (sys_title.get(s, 'Unsorted') if s else 'Unsorted (object unknown)'))
            fh.write(' · '.join('[%s](%s) (%d)' % (md(c), urllib.parse.quote(f), n) for c, f, n in index[s]) + '\n\n')

    # ---------------------------------------------------------------------------------------------
    # function lineage
    with open(os.path.join(DATA, 'function-lineage.csv'), 'w', newline='') as fh:
        w = csv.writer(fh)
        w.writerow(['b3_name', 'dnat_200_address', 'b2_signature', 'b2_address', 'b2_source_file', 'match'])
        dn = {r['name']: r['a'] for r in funcs['DNAT_200']}
        for n, b, h in lineage:
            w.writerow([n, hx(dn[n]) if n in dn else '', b['signature'], b['start'], b['source_file'], h])
    hows = Counter(h for _, _, h in lineage)
    with open(os.path.join(REF, 'function-lineage.md'), 'w') as fh:
        fh.write('# Burnout 2 → Burnout 3 function lineage\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Burnout 3 functions that have a Burnout 2 function of the same name (with `CB3X` read as `CX`). '
                 'The Burnout 2 side has **parameter names**, source file and lines, which Burnout 3 lacks.\n\n'
                 '| Match | Functions |\n|---|---:|\n')
        for h, n in hows.most_common():
            fh.write('| %s | %d |\n' % (h, n))
        fh.write('| **total** | **%d** |\n\n' % len(lineage))
        fh.write('The full table is [data/function-lineage.csv](data/function-lineage.csv). Mostly RenderWare and '
                 'Criterion\'s toolkit, which carried over almost unchanged; game classes were largely renamed or '
                 'rewritten for Burnout 3. Game-code matches by class:\n\n| Burnout 3 class | Burnout 2 class | Functions |\n'
                 '|---|---|---:|\n')
        bycls = Counter()
        for n, b, h in lineage:
            c = G.class_of(n)
            if c:
                bycls[(c, G.class_of(b['typesig'] or '') or '')] += 1
        for (c, bc), k in sorted(bycls.items(), key=lambda kv: -kv[1]):
            fh.write('| [%s](../classes/%s.md) | `%s` | %d |\n' % (md(c), urllib.parse.quote(safe_name(c)), bc, k))

    # ---------------------------------------------------------------------------------------------
    # source file lineage: B3 file B3X.cpp <-> B2 file X.cpp / CX.cpp
    b2files = sorted(set(r['source_file'] for r in b2funcs))
    b2_by_base = defaultdict(list)
    for f in b2files:
        b = re.sub(r'\.(cpp|c)$', '', f.replace('\\', '/').split('/')[-1]).lower()
        b2_by_base[b].append(f)
    pairs = []
    for o in sorted(o for o in objs if not objs[o]):
        b = re.sub(r'\.(cpp|c)$', '', o).lower()
        cands = [b, b[2:] if b.startswith('b3') else None, 'c' + b[2:] if b.startswith('b3') else None,
                 'cgt' + b[2:] if b.startswith('gt') else None, 'c' + b if b.startswith('gt') else None]
        for cnd in cands:
            if cnd and cnd in b2_by_base:
                pairs.append((o, b2_by_base[cnd][0]))
                break
    with open(os.path.join(REF, 'source-file-lineage.md'), 'w') as fh:
        fh.write('# Burnout 2 → Burnout 3 source files\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Burnout 3 source files whose name matches a Burnout 2 file (`B3VehiclePhysics.cpp` ↔ '
                 '`CVehiclePhysics.cpp`, `GtFoo.cpp` ↔ `CGtFoo.cpp`). %d of %d Burnout 3 game files match. '
                 'The Burnout 2 outline shows that file\'s functions, parameters and locals.\n\n'
                 '| Burnout 3 | Burnout 2 | Outline |\n|---|---|---|\n' % (len(pairs), sum(1 for o in objs if not objs[o])))
        for o, f in pairs:
            outline = os.path.join(B2, 'source_outline', G_rel(f))
            fh.write('| `%s` | `%s` | %s |\n' % (o, f.replace('\\', '/'), '[outline](%s)' % link(outline, REF)
                                                if os.path.exists(outline) else ''))

    # ---------------------------------------------------------------------------------------------
    # B2 classes, hierarchy, enums
    children = defaultdict(list)
    roots = []
    allc = {n: v for n, v in b2types.items() if v[0]['kind'] != 'enum'}
    for n, v in allc.items():
        bs = v[0]['bases']
        if bs:
            for b in bs:
                children[b].append(n)
    for n in allc:
        if not allc[n][0]['bases'] and children.get(n):
            roots.append(n)
    with open(os.path.join(REF, 'class-hierarchy.md'), 'w') as fh:
        fh.write('# Class hierarchy (Burnout 2)\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Inheritance from the Burnout 2 debug info: every class that has subclasses, as a tree. Burnout 3\'s '
                 'maps have no inheritance information; its vtables are listed on the class pages. Many Burnout 3 '
                 'hierarchies keep the Burnout 2 shape (components, pages, game modes, physics bodies).\n\n')
        def walk(n, depth):
            v = allc.get(n)
            size = v[0]['size'] if v else '?'
            fh.write('%s- `%s` (%s)\n' % ('  ' * depth, n, size))
            for ch in sorted(children.get(n, [])):
                walk(ch, depth + 1)
        for r in sorted(roots, key=str.lower):
            walk(r, 0)
    with open(os.path.join(REF, 'b2-classes.md'), 'w') as fh:
        fh.write('# Burnout 2 classes and structs\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Every named class, struct and union in the Burnout 2 debug info (%d), with size, base class, '
                 'where it is declared, and its Burnout 3 descendant by name. Layouts are in [types.h](%s).\n\n'
                 '| Name | Kind | Size | Base | Declared in | Burnout 3 |\n|---|---|---|---|---|---|\n'
                 % (len(allc), link(os.path.join(B2, 'types.h'), REF)))
        b3_of_b2 = {}
        for c in class_list:
            for n in b3_to_b2_class(c):
                if n in allc:
                    b3_of_b2.setdefault(n, c)
                    break
        for n in sorted(allc, key=str.lower):
            v = allc[n][0]
            d = b3_of_b2.get(n)
            fh.write('| `%s` | %s | %s | %s | %s | %s |\n' % (
                n, v['kind'], v['size'], ', '.join('`%s`' % b for b in v['bases']), v['file'],
                '[%s](../classes/%s.md)' % (md(d), urllib.parse.quote(safe_name(d))) if d else ''))
    enums = {n: v for n, v in b2types.items() if v[0]['kind'] == 'enum'}
    with open(os.path.join(REF, 'enums.md'), 'w') as fh:
        fh.write('# Enums (Burnout 2)\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Every named enum in the Burnout 2 debug info (%d), with its values, grouped by where it was first '
                 'declared. Many game enums (track IDs, game modes, states) likely continued in Burnout 3 with '
                 'values added.\n\n' % len(enums))
        byfile = defaultdict(list)
        for n, v in enums.items():
            byfile[v[0]['file']].append(n)
        for f in sorted(byfile, key=str.lower):
            fh.write('## %s\n\n' % f)
            for n in sorted(byfile[f], key=str.lower):
                vals = enums[n][0]['enumvals']
                fh.write('**`%s`** (%d values)%s\n\n' % (n, len(vals), ', %d variants' % len(enums[n]) if len(enums[n]) > 1 else ''))
                if vals:
                    fh.write('```\n' + '\n'.join('%s = %s' % kv for kv in vals) + '\n```\n\n')

    # ---------------------------------------------------------------------------------------------
    # B3 globals
    gl = [r for r in rows['DNAT_200'] if r['section'] in ('.data', '.sdata', '.bss', '.sbss', '.rodata', 'COMMON')
          and not r['name'].startswith(('.', '@'))]
    with open(os.path.join(DATA, 'b3-globals.csv'), 'w', newline='') as fh:
        w = csv.writer(fh)
        w.writerow(['address', 'size', 'section', 'name', 'library', 'object'])
        for r in sorted(gl, key=lambda r: r['a']):
            w.writerow([hx(r['a']), r['n'], r['section'], r['name'], r['library'], r['object']])
    with open(os.path.join(REF, 'b3-globals.md'), 'w') as fh:
        fh.write('# Burnout 3 global data\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Named variables in the DNAT_200 map (%d): globals, static members (`Class::name`), and statics '
                 'inside functions (`name$number`). Grouped by source file; addresses are DNAT_200 map addresses. '
                 'CSV: [data/b3-globals.csv](data/b3-globals.csv).\n\n' % len(gl))
        by = defaultdict(list)
        for r in gl:
            by[(r['library'], r['object'])].append(r)
        for (lib, o) in sorted(by, key=lambda k: (bool(k[0]), k[1].lower())):
            fh.write('## `%s`%s\n\n| Address | Size | Section | Name |\n|---|---:|---|---|\n' % (o, ' (%s)' % lib if lib else ''))
            for r in sorted(by[(lib, o)], key=lambda r: r['a']):
                fh.write('| `%s` | %d | %s | %s |\n' % (hx(r['a']), r['n'], r['section'], code(r['name'])))
            fh.write('\n')

    # ---------------------------------------------------------------------------------------------
    # RenderWare API
    rwf = [r for r in b2funcs if not r['source_file'].lower().startswith('i:') and '\\' not in r['source_file']]
    dn_by = {r['name']: r for r in funcs['DNAT_200']}
    with open(os.path.join(REF, 'renderware-api.md'), 'w') as fh:
        fh.write('# RenderWare and library functions\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Functions of RenderWare (and the other libraries compiled without a source path) that have debug '
                 'info in Burnout 2: full signatures with parameter names, by source file, with the address of the '
                 'same function in the Burnout 3 prototype (DNAT_200) where it is linked. RenderWare changed little '
                 'between the two games, so these signatures apply to Burnout 3.\n\n')
        by = defaultdict(list)
        for r in rwf:
            by[r['source_file']].append(r)
        n3 = 0
        for f in sorted(by, key=str.lower):
            fh.write('## %s\n\n| Signature | B2 | B3 DNAT_200 |\n|---|---|---|\n' % f)
            for r in sorted(by[f], key=lambda r: r['start']):
                name = re.search(r'(\w+)\(', r['signature'])
                d = dn_by.get(name[1]) if name else None
                if d:
                    n3 += 1
                fh.write('| %s | `%s` | %s |\n' % (code(r['signature']), r['start'], '`%s`' % hx(d['a']) if d else ''))
            fh.write('\n')

    # ---------------------------------------------------------------------------------------------
    # build comparison
    names = {m: {r['name']: r for r in funcs[m]} for m in MAPS}
    allnames = set().union(*[set(v) for v in names.values()])
    combo = Counter(tuple(m for m in MAPS if n in names[m]) for n in allnames)
    with open(os.path.join(DATA, 'b3-functions-by-build.csv'), 'w', newline='') as fh:
        w = csv.writer(fh)
        w.writerow(['name'] + ['%s_address' % m for m in MAPS] + ['%s_size' % m for m in MAPS])
        for n in sorted(allnames):
            w.writerow([n] + [hx(names[m][n]['a']) if n in names[m] else '' for m in MAPS] +
                       [names[m][n]['n'] if n in names[m] else '' for m in MAPS])
    with open(os.path.join(REF, 'build-comparison.md'), 'w') as fh:
        fh.write('# Burnout 3 prototype builds compared\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'The four maps describe four builds from 2–9 June 2004. Comparing their function lists shows what '
                 'was added or removed between builds, and which functions exist only in the unoptimised build '
                 '(inlined elsewhere). Every function with its address and size in each build: '
                 '[data/b3-functions-by-build.csv](data/b3-functions-by-build.csv).\n\n')
        fh.write('| Build | Map date | Functions | Code bytes |\n|---|---|---:|---:|\n')
        dates = {'DNAT_200': '3 June (link)', 'B3DEBUG': '9 June', 'B3INTERN': '2 June', 'B3O0PCH': '9 June'}
        for m in MAPS:
            fh.write('| %s | %s | %d | %s |\n' % (m, dates[m], len(names[m]), format(sum(r['n'] for r in funcs[m]), ',')))
        fh.write('\n## Which builds each function is in\n\n| In builds | Functions |\n|---|---:|\n')
        for k, n in combo.most_common():
            fh.write('| %s | %d |\n' % (', '.join(k), n))
        def listing(title, ns, note=''):
            fh.write('\n## %s (%d)\n\n%s' % (title, len(ns), note))
            byo = defaultdict(list)
            for n in ns:
                r = next(names[m][n] for m in MAPS if n in names[m])
                byo[r['object'] or '?'].append(n)
            for o in sorted(byo, key=str.lower):
                fh.write('- **%s**: %s\n' % (md(o), ', '.join(code(x) for x in sorted(byo[o]))))
        only_o0 = [n for n in allnames if [m for m in MAPS if n in names[m]] == ['B3O0PCH']]
        not_dnat = [n for n in allnames if n not in names['DNAT_200'] and n in names['B3DEBUG'] and n in names['B3INTERN']]
        dnat_only = [n for n in allnames if [m for m in MAPS if n in names[m]] == ['DNAT_200']]
        intern_only = [n for n in allnames if [m for m in MAPS if n in names[m]] == ['B3INTERN']]
        debug_only = [n for n in allnames if [m for m in MAPS if n in names[m]] == ['B3DEBUG']]
        listing('Only in the unoptimised build', only_o0,
                'Almost all small functions defined in headers (accessors, constructors) that the optimised builds '
                'inlined. Good names for the code they turned into.\n\n')
        listing('In the debug and internal builds but not DNAT_200', not_dnat,
                'Debug-only code, or code removed or inlined in the release-style build.\n\n')
        listing('Only in DNAT_200', dnat_only)
        listing('Only in B3INTERN (2 June)', intern_only)
        listing('Only in B3DEBUG', debug_only)

    # ---------------------------------------------------------------------------------------------
    # memory layout
    secs = defaultdict(lambda: [1 << 40, 0, 0])
    for r in rows['DNAT_200']:
        s = secs[r['section']]
        s[0] = min(s[0], r['a'])
        s[1] = max(s[1], r['a'] + r['n'])
        s[2] += 1
    link_syms = []
    lp = os.path.join(B3, 'DNAT_200.linker_symbols.txt')
    if os.path.exists(lp):
        link_syms = [l.split() for l in open(lp) if l.startswith('0x')]
    heads = [('Burnout 2 prototype', os.path.join(B2DIR, 'disc', 'SLUS_204.97.headers.txt')),
             ('Burnout 3 prototype', os.path.join(B3DIR, 'disc', 'DNAT_200.45.headers.txt')),
             ('Burnout 3 retail', os.path.join(RETAIL, 'disc', 'SLUS_210.50.headers.txt'))]
    parsed = {}
    for label, p in heads:
        if os.path.exists(p):
            ent, ph, sh = 0, [], []
            for line in open(p):
                w = line.split()
                if not w:
                    continue
                if w[0] == 'entry':
                    ent = int(w[1], 16)
                elif w[0] == 'phdr':
                    ph.append((int(w[1]), int(w[3], 16), int(w[5]), int(w[6])))
                elif w[0] == 'shdr':
                    sh.append((w[1], int(w[3], 16), int(w[5])))
            parsed[label] = (ent, ph, sh)
    with open(os.path.join(REF, 'memory-layout.md'), 'w') as fh:
        fh.write('# Memory layout\n\n> Generated by `tools/gen_reference.py` from the executables\' headers '
                 '(`data/*/disc/*.headers.txt`) and the DNAT_200 map.\n\n'
                 'Where code and data sit in memory in each build. The EE has 32 MB of main RAM '
                 '(`0x00000000`–`0x02000000`); executables load at `0x00100000`.\n\n## Program headers\n\n'
                 '| Build | Entry | Load address | File size | Memory size (incl. BSS) | End |\n|---|---|---|---:|---:|---|\n')
        for label, (ent, ph, sh) in parsed.items():
            for t, va, fsz, msz in ph:
                if t == 1 and msz:
                    fh.write('| %s | `%s` | `%s` | %s | %s | `%s` |\n' % (label, hx(ent), hx(va), format(fsz, ','),
                                                                       format(msz, ','), hx(va + msz)))
        fh.write('\n## Burnout 3 prototype sections (DNAT_200.MAP)\n\nFrom the symbols in each section (the span '
                 'covers first to last symbol).\n\n| Section | From | To | Bytes | Symbols |\n|---|---|---|---:|---:|\n')
        for sname, (a, b, n) in sorted(secs.items(), key=lambda kv: kv[1][0]):
            if a < (1 << 40) and b > a:
                fh.write('| `%s` | `%s` | `%s` | %s | %d |\n' % (sname, hx(a), hx(b), format(b - a, ','), n))
        if link_syms:
            fh.write('\n## Linker-defined symbols (DNAT_200.MAP)\n\n| Value | Symbol |\n|---|---|\n')
            for a, n in link_syms:
                fh.write('| `%s` | `%s` |\n' % (a, n))
            fh.write('\n`_gp` is the global pointer: small data (`.sdata`, `.sbss`) is reached as `$gp`-relative '
                     'offsets, which matters when matching code between builds. The stack is 64 KB at '
                     '`0x01FF0000`; the heap runs from `_end` to the stack.\n')
        for label, (ent, ph, sh) in parsed.items():
            named = [x for x in sh if x[0] != '-']
            if named:
                fh.write('\n## %s section headers\n\n| Section | Address | Bytes |\n|---|---|---:|\n' % label)
                for n, a, size in named:
                    fh.write('| `%s` | `%s` | %s |\n' % (n, hx(a), format(size, ',')))

    # ---------------------------------------------------------------------------------------------
    # debug features
    dbg_rx = re.compile(r'Debug|Editor|Cheat|PerfMon|Monitor|Dump|Print|Assert|Profiler|Test|Cpu|CPU|Stats|Viewer|'
                        r'Trace|Log\b|Log[A-Z]|Benchmark')
    with open(os.path.join(REF, 'debug-features.md'), 'w') as fh:
        fh.write('# Debug and development features\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Code whose names point to debugging, editing or testing, in any of the four maps. Useful for '
                 'finding hidden tools (camera editor, AI and traffic debug views, performance monitors, cheats) '
                 'that may still be in the shipped code. Selected by name, so some false positives (`CPU` cars, '
                 'player `Stats`) are included.\n\n')
        dcls = [c for c in class_list if dbg_rx.search(c)]
        fh.write('## Classes\n\n')
        for c in dcls:
            fh.write('- [%s](../classes/%s.md): %d methods, %s\n' % (md(c), urllib.parse.quote(safe_name(c)),
                                                                   len(methods[c]), home.get(c, '?')))
        fh.write('\n## Methods of other classes\n\n')
        for c in class_list:
            if c in dcls:
                continue
            hits = [n for n in methods[c] if dbg_rx.search(n[len(c):].split('(')[0])]
            if hits:
                fh.write('- **[%s](../classes/%s.md)**: %s\n' % (md(c), urllib.parse.quote(safe_name(c)),
                                                                 ', '.join(code(h[len(c) + 2:]) for h in sorted(hits))))
        fh.write('\n## Debug variables (DNAT_200)\n\n')
        for r in sorted(gl, key=lambda r: r['a']):
            if dbg_rx.search(r['name']):
                fh.write('- `%s` %s (%s)\n' % (hx(r['a']), code(r['name']), r['object']))
        fh.write('\n## Free functions\n\n')
        for n in sorted(allnames):
            if not G.class_of(n) and dbg_rx.search(n.split('(')[0]):
                fh.write('- %s\n' % code(n))

    # ---------------------------------------------------------------------------------------------
    # cut content: unreferenced symbols
    unref = []
    up = os.path.join(B3, 'DNAT_200.unreferenced.txt')
    for line in open(up):
        if line.startswith('//') or not line.strip():
            continue
        parts = re.split(r'\s{2,}', line.strip())
        if len(parts) >= 2:
            unref.append((parts[0], parts[-1]))
    with open(os.path.join(REF, 'unlinked-code.md'), 'w') as fh:
        fh.write('# Code that was written but not linked\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'The DNAT_200 linker dropped these %d symbols because nothing referenced them. They are names of '
                 'functions and data that existed in the source in June 2004 but are not in the prototype executable: '
                 'unused features, old versions, helpers. Grouped by source file. Raw list: [DNAT_200.unreferenced.txt](%s).\n\n'
                 % (len(unref), link(up, REF)))
        by = defaultdict(list)
        for n, o in unref:
            by[o].append(n)
        game = sorted([o for o in by if '.a ' not in o and '.LIB' not in o.upper() and '.a' != o[-2:]], key=str.lower)
        libs = sorted([o for o in by if o not in game], key=str.lower)
        fh.write('## Game code\n\n')
        for o in game:
            fh.write('- **%s** (%d): %s\n' % (md(o), len(by[o]), ', '.join(code(x) for x in by[o])))
        fh.write('\n## Libraries\n\n')
        for o in libs:
            fh.write('- **%s** (%d): %s\n' % (md(o), len(by[o]), ', '.join(code(x) for x in by[o][:80]) +
                                              (' …' if len(by[o]) > 80 else '')))

    # ---------------------------------------------------------------------------------------------
    # asserts
    with open(os.path.join(REF, 'asserts.md'), 'w') as fh:
        d_set = set(a for b, a in asts if b == 'B3DEBUG')
        i_set = set(a for b, a in asts if b == 'B3INTERN')
        fh.write('# Assert expressions\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'The debug and internal builds kept their assert expressions in `.AST` files: %d distinct '
                 'expressions (%d in B3DEBUG, %d in B3INTERN; %d only in B3DEBUG, %d only in B3INTERN). They name '
                 'locals and members using Criterion\'s prefixes, and state what the code expects. Raw lists: '
                 '[B3DEBUG.AST.txt](%s), [B3INTERN.AST.txt](%s).\n\n'
                 % (len(ast_set), len(d_set), len(i_set), len(d_set - i_set), len(i_set - d_set),
                    link(os.path.join(B3, 'B3DEBUG.AST.txt'), REF), link(os.path.join(B3, 'B3INTERN.AST.txt'), REF)))
        groups = defaultdict(list)
        for a in ast_set:
            m = re.match(r'!?\(?\s*([a-z]+)[A-Z]', a)
            key = m[1] if m else 'other'
            groups[key].append(a)
        meaning = {'ln': 'local int', 'lr': 'local float', 'lp': 'local pointer', 'lb': 'local bool', 'le': 'local enum',
                   'lu': 'local unsigned', 'lun': 'local unsigned int', 'mn': 'member int', 'mr': 'member float',
                   'mp': 'member pointer', 'mb': 'member bool', 'me': 'member enum', 'ma': 'member array',
                   'lpa': 'local pointer to array', 'lx': 'local flags', 'mu': 'member unsigned', 'lv': 'local vector',
                   'mx': 'member flags', 'gp': 'global pointer', 'gn': 'global int', 'k': 'constant'}
        fh.write('| Starts with | Meaning | Expressions |\n|---|---|---:|\n')
        for k in sorted(groups, key=lambda k: -len(groups[k])):
            fh.write('| `%s` | %s | %d |\n' % (k, meaning.get(k, ''), len(groups[k])))
        fh.write('\nExpressions only in B3INTERN (2 June) — removed by 9 June:\n\n')
        for a in sorted(i_set - d_set)[:300]:
            fh.write('- %s\n' % code(a))
        fh.write('\nExpressions only in B3DEBUG (9 June) — added after 2 June:\n\n')
        for a in sorted(d_set - i_set)[:300]:
            fh.write('- %s\n' % code(a))

    # ---------------------------------------------------------------------------------------------
    # VU programs
    vp = os.path.join(B3, 'vu_microcode.txt')
    progs = defaultdict(list)
    for line in open(vp):
        m = re.match(r'0x([0-9A-F]{8})\s+\d+\s+(\S+)\s+(\S+)\s+(.+)$', line.strip())
        if m:
            progs[m[4].strip()].append((int(m[1], 16), m[3], m[2]))
    with open(os.path.join(REF, 'vu-programs.md'), 'w') as fh:
        fh.write('# VU microcode programs\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Every VU program object linked into DNAT_200, with its labels. Labels starting `_$` are entry '
                 'points and branch targets inside the program; the span is the distance to the next label. VU '
                 'instructions are 8 bytes, so span / 8 is roughly the instruction count. What each program draws: '
                 '[renderer overview](../renderer-overview.md).\n\n')
        for o in sorted(progs, key=lambda o: min(a for a, _, _ in progs[o])):
            items = sorted(progs[o])
            start, end = items[0][0], items[-1][0]
            fh.write('## %s\n\n`%s`–`%s`, %d labels\n\n| Address | Span | Label |\n|---|---:|---|\n' % (md(o), hx(start), hx(end), len(items)))
            for i, (a, n, s) in enumerate(items):
                span = items[i + 1][0] - a if i + 1 < len(items) else ''
                fh.write('| `%s` | %s | %s |\n' % (hx(a), span, code(n)))
            fh.write('\n')

    # ---------------------------------------------------------------------------------------------
    # IOP modules
    mods = []
    for build, d in (('Burnout 2 prototype', os.path.join(B2DIR, 'modules')), ('Burnout 3 prototype', os.path.join(B3DIR, 'modules'))):
        if not os.path.isdir(d):
            continue
        for m in sorted(os.listdir(d)):
            sp = os.path.join(d, m, 'symbols.csv')
            if not os.path.exists(sp):
                continue
            syms = list(csv.DictReader(open(sp)))
            fn = [s for s in syms if s['type'] == 'func']
            has_dbg = os.path.exists(os.path.join(d, m, 'types.h'))
            mods.append((build, m, len(syms), len(fn), has_dbg, os.path.join(d, m), fn))
    known = {'RWA': 'RenderWare Audio IOP driver', 'GTFS': 'Criterion GT file system (DVD/host/ATA)',
             'B2STREAM': 'Burnout 2 audio/data streaming', 'B2DIST': 'Burnout 2 distribution/"dist" driver',
             'B2ILINK': 'Burnout 2 i.LINK (FireWire) networking', 'B3ROUTE': 'Burnout 3 routing for comms',
             'RWSCOMMS': 'RenderWare Studio comms (connects to the PC editor)', 'SULPHAC': 'Sulpha audio debugger (client)',
             'LGKBM': 'Logitech keyboard/mouse', 'EZMIDI': 'Sony MIDI', 'USBINIT': 'USB init',
             'DNAS': 'Sony DNAS network authentication'}
    with open(os.path.join(REF, 'iop-modules.md'), 'w') as fh:
        fh.write('# IOP modules with symbols\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Modules for the PS2\'s I/O processor (and the network GUI ELFs) that kept symbols. Sony\'s '
                 'standard modules on the discs are stripped and not listed. Purposes are read from the names.\n\n'
                 '| Build | Module | Probably | Symbols | Functions | Debug info | Export |\n|---|---|---|---:|---:|---|---|\n')
        for build, m, ns, nf, dbg, path, fn in mods:
            purpose = next((v for k, v in known.items() if k in m.upper()), '')
            fh.write('| %s | `%s` | %s | %d | %d | %s | [folder](%s) |\n' % (build, m, purpose, ns, nf,
                                                                          'yes (types, outline)' if dbg else '',
                                                                          link(os.path.join(path, 'symbols.txt'), REF)))
        fh.write('\nThe Burnout 2 disc also has the text link maps of three of its IOP modules (`B2STRE~1.XMA`, '
                 '`GTFSDV~1.XMA`, `GTFSHO~1.XMA`), kept in `data/burnout2-prototype/originals/IOP/`.\n')
        for build, m, ns, nf, dbg, path, fn in mods:
            if nf and nf <= 400:
                fh.write('\n## %s: %s\n\n%s\n' % (build, m, ', '.join(code(s['demangled'] or s['name'])
                                                                      for s in sorted(fn, key=lambda s: s['address']))))

    # ---------------------------------------------------------------------------------------------
    # VDB comparison
    vdb = {}
    for label, d in (('prototype', os.path.join(B3DIR, 'disc', 'vdb')), ('retail', os.path.join(RETAIL, 'disc', 'vdb'))):
        p = os.path.join(d, 'VDB.section1.csv')
        if os.path.exists(p):
            vdb[label] = {r['key_hash']: r for r in csv.DictReader(open(p))}
    if len(vdb) == 2:
        P, R = vdb['prototype'], vdb['retail']
        common = set(P) & set(R)
        changed = sorted(k for k in common if P[k]['raw_value'] != R[k]['raw_value'])
        with open(os.path.join(DATA, 'vdb-changes.csv'), 'w', newline='') as fh:
            w = csv.writer(fh)
            w.writerow(['key_hash', 'prototype_raw', 'prototype_float', 'retail_raw', 'retail_float'])
            for k in changed:
                w.writerow([k, P[k]['raw_value'], P[k]['as_float'], R[k]['raw_value'], R[k]['as_float']])
        with open(os.path.join(REF, 'value-database.md'), 'w') as fh:
            fh.write('# The value database (VDB.XML)\n\n> Generated by `tools/gen_reference.py`.\n\n'
                     'Despite the name, `VDB.XML` is binary: Criterion\'s tuning values (physics, AI, camera, '
                     'scoring …), stored as 32-bit hashes of their names with 32-bit values. The names are not on the '
                     'disc, so the keys stay hashes until the hash function and the name strings are found in the '
                     'code (the `…Attribs` classes are the likely readers).\n\n'
                     '## Format\n\n```\nu32 version   = 2\nu32 n1        number of (key, value) pairs in section 1\n'
                     'u32 n2, n3    sizes of two further sections (not decoded)\nn1 × { i32 key_hash, u32 value }   '
                     'sorted by key as a signed integer; values are mostly floats\nsection 2 and 3: records containing '
                     'the Microsoft debug-heap fills 0xFDFDFDFD and 0xCDCDCDCD,\n               i.e. structures dumped '
                     'from memory by a Windows tool\n```\n\n'
                     '| | Prototype (`VALUEDB/VDB.XML`) | Retail (`DATA/VDB.XML`) |\n|---|---:|---:|\n'
                     '| Section 1 pairs | %d | %d |\n| Keys in both | %d | %d |\n| Values changed between them | %d | |\n'
                     '| Keys only in this one | %d | %d |\n\n'
                     'Decoded pairs: [prototype](%s), [retail](%s). Changed values: [data/vdb-changes.csv](data/vdb-changes.csv) '
                     '— this is the tuning done between June and release.\n'
                     % (len(P), len(R), len(common), len(common), len(changed), len(set(P) - set(R)), len(set(R) - set(P)),
                        link(os.path.join(B3DIR, 'disc', 'vdb', 'VDB.section1.csv'), REF),
                        link(os.path.join(RETAIL, 'disc', 'vdb', 'VDB.section1.csv'), REF)))

    write_discs()
    with open(os.path.join(REF, 'class-ancestors.md'), 'w') as fh:
        fh.write('# Burnout 3 classes and their Burnout 2 ancestors\n\n> Generated by `tools/gen_reference.py`.\n\n'
                 'Which Burnout 2 class each Burnout 3 class most likely grew from, found two ways: **by name** '
                 '(`CB3X` ↔ `CX`, `CGtX` ↔ `CGTX`/`CX`) and **by shared methods** (at least 3 method names in common, '
                 'covering at least 40%% of the smaller class; common names like Update or Init are ignored). The '
                 'Burnout 2 layout, method parameters and asserts are on each class page. Hints, not proof.\n\n'
                 '| Burnout 3 | Burnout 2 | Found by | B2 size |\n|---|---|---|---|\n')
        for c in class_list:
            b2c = next((n for n in b3_to_b2_class(c) if n in b2types and b2types[n][0]['kind'] != 'enum'), None)
            if b2c:
                how = 'name' if b2c in G.b2_name(c) else 'methods: ' + ', '.join(ALT[c][1][:6])
                fh.write('| [%s](../classes/%s.md) | `%s` | %s | %s |\n' % (md(c), urllib.parse.quote(safe_name(c)),
                                                                        b2c, how, b2types[b2c][0]['size']))
    print('ancestors by methods:', len(ALT))
    print('classes:', len(class_list), 'lineage:', len(lineage), dict(hows), 'file pairs:', len(pairs),
          'enums:', len(enums), 'globals:', len(gl), 'unref:', len(unref), 'asserts:', len(ast_set),
          'vu objects:', len(progs), 'modules:', len(mods))


EXT_NOTES = {
    'M2V': 'MPEG-2 video (header confirms); intros, attract loop, tutorials (`ovid\\`)',
    'RWS': 'RenderWare Audio stream: music, crash and speech streams (`tracks\\crash%d.rws`, `ovid\\movie.rws`)',
    'AWD': 'RenderWare Audio wave dictionary: sound effects per mode (`sound\\generic.awd`, `sound\\crash.awd` …)',
    'TXD': 'Texture dictionary (`Data/Global.txd`, `Data/Frontend.txd`); Criterion\'s own layout, not a standard RenderWare stream',
    'IRX': 'IOP module ([IOP modules](reference/iop-modules.md))',
    'ELF': 'EE or IOP executable',
    'DAT': 'Track data: `static.dat`, `streamed.dat`, `enviro.dat` per track folder',
    'BGD': 'Track game data (`Gamedata.bgd`)',
    'BGV': 'Vehicle data, one per car in the vehicle folders (`CAR1.BGV` …); meaning of the name unknown',
    'BTV': 'Per-vehicle data next to `.BGV`; meaning unknown',
    'HWD': 'Per-vehicle, paired with `.LWD`; possibly high/low detail or wave data (unknown)',
    'LWD': 'Per-vehicle, paired with `.HWD`; unknown',
    'HSM': 'Prototype only, paired with `.LSM`; unknown',
    'LSM': 'Prototype only, paired with `.HSM`; unknown',
    'KFS': 'Keyframe sequences? (`Data\\Intro.kfs`, `Data\\After.kfs`, `Data\\Replay.kfs`)',
    'BIN': 'Various tables: `PrgData.bin`, `stagehed.bin`, `Global<lang>.bin`, `Head<lang>.bin`, `LoadScrn.bin`, `pveh/vlist.bin`, `Tracks/tlist.bin`',
    'XML': '`VDB.XML`, the binary value database ([value database](reference/value-database.md))',
    'ICO': 'PS2 memory-card icon model',
    'ICN': 'PS2 memory-card icon (`saveicon.icn`)',
    'SYS': 'PS2 memory-card `icon.sys`',
    'IMG': 'IOP replacement image (`IOPRP*.IMG`) or DNAS image',
    'CNF': 'Text configuration: `SYSTEM.CNF` (boot), network settings',
    'MAP': 'Link map ([formats](formats/codewarrior-maps.md))',
    'AST': 'Assert strings ([asserts](reference/asserts.md))',
}


def write_discs():
    discs = [('Burnout 3 retail (SLUS-21050)', os.path.join(ROOT, 'data', 'burnout3-retail', 'disc')),
             ('Burnout 3 prototype (June 2004)', os.path.join(ROOT, 'data', 'burnout3-prototype', 'disc')),
             ('Burnout 2 prototype (29 July 2002)', os.path.join(ROOT, 'data', 'burnout2-prototype', 'disc'))]
    out = os.path.join(DOCS, 'discs.md')
    L = ['# Disc contents', '', '> Generated by `tools/gen_reference.py` from `data/*/disc/`.', '',
         'What is on each disc, which files the executables refer to by name, and what was exported from them. '
         'Of the disc files themselves, the repository keeps only the text link maps (`data/*/originals/`). For '
         'everything else it has names, sizes, dates and detected types (`data/*/disc/files.csv`), the strings '
         'and headers of the executables, and decoded tables.', '']
    exts = defaultdict(Counter)
    for label, d in discs:
        fp = os.path.join(d, 'files.csv')
        if not os.path.exists(fp):
            continue
        rows = list(csv.DictReader(open(fp)))
        total = sum(int(r['size']) for r in rows)
        folders = defaultdict(lambda: [0, 0, Counter()])
        for r in rows:
            top = r['path'].split('/')[0] if '/' in r['path'] else '(root)'
            f = folders[top]
            f[0] += 1
            f[1] += int(r['size'])
            e = r['path'].rsplit('.', 1)[-1].upper() if '.' in r['path'].split('/')[-1] else ''
            f[2][e] += 1
            exts[e][label] += 1
        L += ['## %s' % label, '', '%d files, %s bytes. Full list: [files.txt](%s).' % (
            len(rows), format(total, ','), link(os.path.join(d, 'files.txt'), DOCS)), '',
              '| Folder | Files | Bytes | Types |', '|---|---:|---:|---|']
        for top, (n, b, ec) in sorted(folders.items()):
            L.append('| `%s` | %d | %s | %s |' % (top, n, format(b, ','), ', '.join('%s %d' % (k or '—', v) for k, v in ec.most_common())))
        L.append('')
        sd = os.path.join(d, 'strings')
        if os.path.isdir(sd):
            files = sorted(f for f in os.listdir(sd) if f.endswith('.strings.txt'))
            for f in files:
                base = f[:-len('.strings.txt')]
                kinds = []
                for k in ('paths', 'format', 'identifiers', 'expressions', 'text'):
                    kp = os.path.join(sd, '%s.strings.%s.txt' % (base, k))
                    if os.path.exists(kp):
                        n = sum(1 for l in open(kp) if l.startswith('0x'))
                        kinds.append('[%s](%s) %d' % (k, link(kp, DOCS), n))
                L.append('**Strings of `%s`:** [all](%s) · %s' % (base, link(os.path.join(sd, f), DOCS), ' · '.join(kinds)))
                L.append('')
    L += ['## File types', '', 'Counts per disc. What each type is: from file headers where they are standard, '
          'otherwise from the names the executables use; marked unknown where neither says.', '',
          '| Type | Retail | Prototype | B2 prototype | What it is |', '|---|---:|---:|---:|---|']
    for e in sorted(exts, key=lambda e: -sum(exts[e].values())):
        c = exts[e]
        L.append('| `%s` | %s | %s | %s | %s |' % (e or '—', c.get(discs[0][0], ''), c.get(discs[1][0], ''),
                                                c.get(discs[2][0], ''), EXT_NOTES.get(e, '')))
    # file names the retail and prototype executables mention
    L += ['', '## Files the executables name', '',
          'File names found in the strings of each executable, with the string\'s address. They show which file '
          'each feature loads; the code that uses a string can be found from its address.', '']
    rx = re.compile(r'(?i)[a-z0-9_%\\/]*\.(bgv|btv|bgd|hwd|lwd|awd|lsm|hsm|kfs|rws|dat|bin|txd|pf|bd|hd|rgb|bun|img|icn|ico|xml|sys|m2v|irx|elf|dff|cnf|db|ivs|rcx|rcf|bsm|bcd|psw|pss|p2w|dic|ps2|tra)\b')
    for label, d in discs:
        sd = os.path.join(d, 'strings')
        if not os.path.isdir(sd):
            continue
        for f in sorted(os.listdir(sd)):
            if not f.endswith('.strings.txt'):
                continue
            hits = []
            for line in open(os.path.join(sd, f)):
                m = re.match(r'(0x[0-9A-F]{8})  (.*)', line.rstrip('\n'))
                if m and rx.search(m[2]) and len(m[2]) < 120:
                    hits.append((m[1], m[2]))
            if hits:
                L += ['### %s: `%s`' % (label, f[:-len('.strings.txt')]), '', '| Address | String |', '|---|---|']
                L += ['| `%s` | %s |' % (a, code(t)) for a, t in hits]
                L.append('')
    with open(out, 'w') as fh:
        fh.write('\n'.join(L) + '\n')


def G_rel(name):
    p = name.replace('\\', '/')
    p = re.sub(r'^[A-Za-z]:/', '', p)
    m = re.search(r'(?i)burnout 2 code/', p)
    if m:
        p = p[m.end():]
    p = p.lstrip('/')
    if '/' not in p:
        p = 'renderware_and_libraries/' + p
    return p


if __name__ == '__main__':
    main()
