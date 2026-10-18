"""Write the Burnout 3 prototype's link maps and assert files out as readable files.

    python3 export_b3maps.py <folder with the .MAP and .AST files> <output folder>

The folder is the extracted prototype disc.

DNAT_200.MAP is CodeWarrior's text link map for DNAT_200.45 (linked 3 June 2004).
B3DEBUG.MAP, B3INTERN.MAP and B3O0PCH.MAP are binary maps of builds whose executables are not on
the disc: a u32 version (1), a u32 record count, then 264-byte records of
    u32 address, u32 size, char text[256] = "name\\t(object)" padded with 0xCD.
The .AST files are the assert expressions those debug builds moved out of the executable.
"""
import csv
import os
import re
import struct
import sys
from collections import defaultdict

MAPS = [
    ('DNAT_200.MAP', 'text', 'link map of DNAT_200.45, the executable on this disc (linked 3 June 2004; '
                             'the executable is 6 days newer, so game-code addresses drift by up to -0xCE40)'),
    ('B3DEBUG.MAP', 'binary', 'debug build (9 June 2004), executable not on the disc'),
    ('B3INTERN.MAP', 'binary', 'internal build (2 June 2004), executable not on the disc'),
    ('B3O0PCH.MAP', 'binary', 'unoptimised -O0 build (9 June 2004), executable not on the disc'),
]


def hx(v):
    return '0x%08X' % v


def split_object(obj):
    """'librwcore.a bamatrix.obj/' -> ('librwcore.a', 'bamatrix.obj'); 'B3Game.cpp' -> ('', 'B3Game.cpp')."""
    obj = obj.strip()
    parts = obj.split()
    if len(parts) >= 2 and re.search(r'(?i)\.(a|lib)$', parts[0]):
        return parts[0], ' '.join(parts[1:]).rstrip('/').strip()
    return '', obj.rstrip('/').strip()


def read_text_map(path):
    text = open(path, encoding='latin1').read().replace('\r\n', '\n')
    rows, section = [], None
    rx = re.compile(r'^  ([0-9A-F]{8}) ([0-9A-F]{8}) (\S+)\s+(.*?)\t\((.*?)\s*\)$')
    unref = []
    mode = None
    for line in text.split('\n'):
        if line.startswith('# '):
            mode = line[2:].strip()
            continue
        if mode == 'Unreferenced symbols:':
            m = re.match(r'^\t(.*?)\t\((.*?)\s*\)$', line)
            if m:
                unref.append((m[1], m[2]))
            continue
        m = rx.match(line)
        if m:
            rows.append(dict(addr=int(m[1], 16), size=int(m[2], 16), section=m[3], name=m[4].strip(), obj=m[5]))
    return rows, unref, text


def read_linker_symbols(text):
    """'#>004422D4          __data_end (linker command file)' lines: symbols the linker script defines."""
    out = []
    for m in re.finditer(r'^#>([0-9A-F]{8})\s+(\S+)', text, re.M):
        out.append((int(m[1], 16), m[2]))
    return out


def read_binary_map(path):
    d = open(path, 'rb').read()
    ver, count = struct.unpack_from('<II', d, 0)
    rows, section, last_obj = [], '', ''
    for i in range(count):
        o = 8 + i * 264
        addr, size = struct.unpack_from('<II', d, o)
        raw = d[o + 8:o + 264]
        raw = raw[:raw.index(b'\0')] if b'\0' in raw else raw
        txt = raw.decode('latin1')
        name, _, obj = txt.partition('\t')
        name = name.strip()
        obj = obj.strip()
        if obj.startswith('(') and obj.endswith(')'):
            obj = obj[1:-1]
        if name.startswith('.') and ' ' not in name:
            section = name
        obj = obj.strip()
        rows.append(dict(addr=addr, size=size, section=section, name=name, obj=obj))
    return rows


def class_of(name):
    """'CB3Game::Update(float)' -> 'CB3Game'; handles templates and nested classes."""
    head = name.split('(', 1)[0]
    depth, cut = 0, -1
    for i, ch in enumerate(head):
        if ch == '<':
            depth += 1
        elif ch == '>':
            depth -= 1
        elif ch == ':' and depth == 0 and head[i:i + 2] == '::':
            cut = i
    return head[:cut] if cut > 0 else None


def is_function(r):
    return r['section'] in ('.text', '.init') and r['size'] > 0 and not r['name'].startswith('.')


def write_map(rows, out, base, label):
    rows = sorted(rows, key=lambda r: (r['addr'], -r['size']))
    with open(os.path.join(out, base + '.symbols.csv'), 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['address', 'size', 'section', 'name', 'library', 'object'])
        for r in rows:
            lib, obj = split_object(r['obj'])
            w.writerow([hx(r['addr']), r['size'], r['section'], r['name'], lib, obj])
    with open(os.path.join(out, base + '.symbols.txt'), 'w') as f:
        f.write('// %s: %s\n// Grouped by object file in link order. address  size  section  name\n\n' % (base, label))
        cur = None
        for r in rows:
            if r['name'].startswith('.') and ' ' not in r['name']:
                continue        # section-start markers
            if r['obj'] != cur:
                cur = r['obj']
                lib, obj = split_object(cur)
                f.write('\n==== %s%s\n' % (obj, '   [%s]' % lib if lib else ''))
            f.write('%s %7d  %-9s %s\n' % (hx(r['addr']), r['size'], r['section'], r['name']))
    # per object file summary
    objs = defaultdict(lambda: [0, 0, None])
    for r in rows:
        if is_function(r):
            o = objs[r['obj']]
            o[0] += 1
            o[1] += r['size']
            o[2] = r['addr'] if o[2] is None else min(o[2], r['addr'])
    with open(os.path.join(out, base + '.source_files.txt'), 'w') as f:
        f.write('// %s: %s\n// Every object file with code, in address order: first function, functions, code bytes.\n\n'
                % (base, label))
        for obj, (n, size, first) in sorted(objs.items(), key=lambda kv: kv[1][2]):
            lib, o = split_object(obj)
            f.write('%s %5d %8d  %s%s\n' % (hx(first), n, size, o, '   [%s]' % lib if lib else ''))
    return [r for r in rows if is_function(r)]


def main():
    src, out = sys.argv[1], sys.argv[2]
    os.makedirs(out, exist_ok=True)
    classes = defaultdict(lambda: defaultdict(dict))       # class -> method -> {map: addr}
    vu = []
    summary = []
    known_obj = {}      # name -> object, for binary-map names that lost theirs
    for fname, kind, label in MAPS:
        path = os.path.join(src, fname)
        if not os.path.exists(path):
            continue
        base = os.path.splitext(fname)[0]
        if kind == 'text':
            rows, unref, text = read_text_map(path)
            with open(os.path.join(out, base + '.MAP.txt'), 'w') as f:
                f.write(text)
            with open(os.path.join(out, base + '.unreferenced.txt'), 'w') as f:
                f.write('// %s: symbols the linker dropped as unreferenced, so not in the executable.\n'
                        '// Names of code that existed in the source but was not linked.\n\n' % base)
                for n, o in unref:
                    f.write('%-70s %s\n' % (n, o.strip()))
            vu = [r for r in rows if r['section'] in ('.vutext', '.vudata') and not r['name'].startswith('.')]
            with open(os.path.join(out, base + '.linker_symbols.txt'), 'w') as f:
                f.write('// %s: symbols defined by the linker command file (section bounds, _gp, sizes).\n\n' % base)
                for a, n in read_linker_symbols(text):
                    f.write('%s  %s\n' % (hx(a), n))
        else:
            rows = read_binary_map(path)
            # the tool that wrote these maps cut each line at its first ')', so a name containing ')'
            # lost its object: look the name up in the maps that kept it
            for r in rows:
                if r['obj']:
                    known_obj.setdefault(r['name'], r['obj'])
            for r in rows:
                if not r['obj']:
                    r['obj'] = known_obj.get(r['name'], '(object unknown)')
        if kind == 'text':
            for r in rows:
                known_obj.setdefault(r['name'], r['obj'])
        funcs = write_map(rows, out, base, label)
        for r in funcs:
            c = class_of(r['name'])
            if c:
                classes[c][r['name']][base] = r['addr']
        summary.append((fname, len(rows), len(funcs)))

    if vu:
        with open(os.path.join(out, 'vu_microcode.txt'), 'w') as f:
            f.write('// VU0/VU1 microcode linked into DNAT_200.45, from DNAT_200.MAP.\n'
                    '// These programs do the PS2-side drawing: replacing them is the renderer work.\n\n')
            for r in sorted(vu, key=lambda r: r['addr']):
                f.write('%s %7d  %-8s %-40s %s\n' % (hx(r['addr']), r['size'], r['section'], r['name'], r['obj']))

    order = [os.path.splitext(m[0])[0] for m in MAPS]
    with open(os.path.join(out, 'classes.txt'), 'w') as f:
        f.write('// Every class with methods in any of the four Burnout 3 prototype maps.\n'
                '// Each method shows its address in each build that has it: %s\n\n' % ', '.join(order))
        for c in sorted(classes, key=str.lower):
            f.write('class %s  (%d methods)\n' % (c, len(classes[c])))
            for m in sorted(classes[c], key=lambda m: next((order.index(b), a) for b in order
                                                           for b2, a in classes[c][m].items() if b2 == b)):
                addrs = '  '.join('%s=%s' % (b, hx(a)) for b, a in sorted(classes[c][m].items(),
                                                                          key=lambda kv: order.index(kv[0])))
                f.write('    %s\n        %s\n' % (m, addrs))
            f.write('\n')

    for ast in ('B3DEBUG.AST', 'B3INTERN.AST'):
        p = os.path.join(src, ast)
        if not os.path.exists(p):
            continue
        d = open(p, 'rb').read()
        with open(os.path.join(out, ast + '.txt'), 'w') as f:
            f.write('// %s: the assert expressions of the %s build, with their offset in the file.\n'
                    '// They name fields and the rules the code checks.\n\n' % (ast, ast.split('.')[0][2:].lower()))
            for m in re.finditer(rb'[^\0]+', d):
                f.write('0x%06X  %s\n' % (m.start(), m.group().decode('latin1')))

    for s in summary:
        print('%s: %d symbols, %d functions' % s)
    print('classes:', len(classes), 'vu entries:', len(vu))


if __name__ == '__main__':
    main()
