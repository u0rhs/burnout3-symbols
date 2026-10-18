"""Describe a disc folder without copying its binaries: a file inventory, the strings of each executable,
copies of the small text files, and decoded tables.

    python3 export_disc.py <disc folder> <output folder> "<label>"

Writes:
    files.txt / files.csv     every file: size, date, detected format
    strings/<exe>.txt         printable strings of each executable (EE ELF), with addresses
    vdb/                      VDB.XML decoded (hash -> value), when present
"""
import csv
import datetime
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from elf import Elf  # noqa: E402

RW_CHUNKS = {
    0x01: 'Struct', 0x02: 'String', 0x03: 'Extension', 0x05: 'Camera', 0x06: 'Texture', 0x07: 'Material',
    0x08: 'MaterialList', 0x09: 'AtomicSection', 0x0A: 'PlaneSection', 0x0B: 'World', 0x0C: 'Spline',
    0x0D: 'Matrix', 0x0E: 'FrameList', 0x0F: 'Geometry', 0x10: 'Clump', 0x12: 'Light', 0x13: 'UnicodeString',
    0x14: 'Atomic', 0x15: 'TextureNative', 0x16: 'TexDictionary', 0x17: 'AnimDatabase', 0x18: 'Image',
    0x19: 'SkinAnimation', 0x1A: 'GeometryList', 0x1B: 'AnimAnimation', 0x1C: 'Team', 0x1D: 'Crowd',
    0x1E: 'DeltaMorphAnimation', 0x1F: 'RightToRender', 0x20: 'MultiTextureEffectNative',
    0x21: 'MultiTextureEffectDictionary', 0x22: 'TeamDictionary', 0x23: 'PlatformIndependentTexDictionary',
    0x24: 'TableOfContents', 0x25: 'ParticleStandardGlobalData', 0x26: 'AltPipe', 0x27: 'PlatformIndependentPeds',
    0x28: 'PatchMesh', 0x29: 'ChunkGroupStart', 0x2A: 'ChunkGroupEnd', 0x2B: 'UVAnimationDictionary',
    0x2C: 'CollTree',
}



def rw_version(libid):
    if libid & 0xFFFF0000:
        ver = (((libid >> 14) & 0x3FF00) + 0x30000) | ((libid >> 16) & 0x3F)
        build = libid & 0xFFFF
    else:
        ver, build = libid << 8, 0
    return '%d.%d.%d.%d' % ((ver >> 16) & 0xF, (ver >> 12) & 0xF, (ver >> 8) & 0xF, ver & 0xFF), build


def detect(path, head, size):
    if head[:4] == b'\x7fELF':
        return 'ELF executable/module'
    if len(head) >= 12:
        t, n, libid = struct.unpack_from('<III', head, 0)
        if t in RW_CHUNKS and 0 < n <= size - 12 and (libid >> 16) in range(0x0400, 0x2000) or \
                (t in RW_CHUNKS and n == size - 12):
            v, b = rw_version(libid)
            whole = ' (whole file)' if n == size - 12 else ' (first of several chunks)'
            return 'RenderWare %s chunk, RW %s build 0x%04X%s' % (RW_CHUNKS[t], v, b, whole)
    if head[:4] == b'\x00\x00\x01\xba' or head[:4] == b'\x00\x00\x01\xb3':
        return 'MPEG-2 video'
    if head[:4] == b'PS2I':
        return 'PS2 icon (icon.sys)'
    if head[:4] == b'\x00\x00\x01\x00' and path.upper().endswith('.ICO'):
        return 'PS2 save icon model'
    if head and sum(1 for c in head if 32 <= c < 127 or c in (9, 10, 13)) / len(head) > 0.95:
        return 'text'
    if head[:4].isalnum():
        return 'binary, magic "%s"' % head[:4].decode('latin1')
    return 'binary'


def inventory(root, out):
    rows = []
    for dp, dn, fn in os.walk(root):
        dn.sort()
        for f in sorted(fn):
            if f.startswith('.'):
                continue
            p = os.path.join(dp, f)
            size = os.path.getsize(p)
            with open(p, 'rb') as fh:
                head = fh.read(512)
            rel = os.path.relpath(p, root).replace(os.sep, '/')
            date = datetime.datetime.fromtimestamp(os.path.getmtime(p)).strftime('%Y-%m-%d %H:%M')
            rows.append(dict(path=rel, size=size, date=date, kind=detect(rel, head, size)))
    with open(os.path.join(out, 'files.csv'), 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['path', 'size', 'date', 'detected'])
        for r in rows:
            w.writerow([r['path'], r['size'], r['date'], r['kind']])
    with open(os.path.join(out, 'files.txt'), 'w') as f:
        f.write('// Every file on the disc folder, with size, date and detected format. No file contents are copied.\n\n')
        cur = None
        for r in rows:
            d = os.path.dirname(r['path']) or '.'
            if d != cur:
                cur = d
                f.write('\n%s/\n' % d)
            f.write('  %-28s %11s  %s  %s\n' % (os.path.basename(r['path']), format(r['size'], ','), r['date'], r['kind']))
    return rows


PATH_RX = re.compile(r'(?i)([a-z0-9_%]\\[a-z0-9_%]|[a-z0-9_%]/[a-z0-9_%]|[a-z0-9_~%]+\.(txd|dff|bin|rws|dat|kfs|m2v|irx|elf|img|bgv|btv|bgd|awd|hwd|lwd|lsm|hsm|ico|icn|sys|xml|pf|bd|hd|rgb|bun|cnf|db|ast|map)\b)')


OK_PUNCT = set(' ._-:\\/%()[],=!<>\'"?+*&|;#@$^~{}\t\n')


def _plausible(s):
    """Filter out machine code and float data that happen to be printable."""
    t = s.strip()
    if len(t) < 5:
        return False
    good = sum(1 for c in t if c.isalnum() or c in OK_PUNCT)
    letters = sum(1 for c in t if c.isalpha())
    if good < 0.92 * len(t) or letters < 0.45 * len(t):
        return False
    return re.search(r'[a-z]{3}|[A-Z]{4}|[A-Z][a-z]{2}', t) is not None


def classify(s):
    if PATH_RX.search(s) and len(s) < 160:
        return 'paths'
    if '%' in s and re.search(r'%[-0-9.]*[dsfxXuicp]', s):
        return 'format'
    if re.search(r'(==|!=|<=|>=|&&|\|\||\)\s*$)', s) and not ' ' in s.strip()[:2]:
        return 'expressions'
    if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_:]*', s):
        return 'identifiers'
    return 'text'


def strings_of(path, out_dir, label, minlen=4):
    e = Elf(path)
    d = e.data
    # load segments: file offset -> address
    phoff, = struct.unpack_from('<I', d, 0x1C)
    phentsize, phnum = struct.unpack_from('<HH', d, 0x2A)
    segs = []
    for i in range(phnum):
        t, off, vaddr, paddr, filesz, memsz = struct.unpack_from('<IIIIII', d, phoff + i * phentsize)
        if t == 1 and filesz:
            segs.append((off, vaddr, filesz))
    found = []
    for off, vaddr, filesz in segs:
        blob = d[off:off + filesz]
        for m in re.finditer(rb'[\x20-\x7e\t\n\r]{%d,}' % minlen, blob):
            s = m.group().decode('latin1').strip('\r\n')
            if len(s.strip()) < minlen:
                continue
            if not _plausible(s):
                continue
            found.append((vaddr + m.start(), s))
    groups = {}
    for a, s in found:
        groups.setdefault(classify(s), []).append((a, s))
    base = os.path.basename(path)
    os.makedirs(out_dir, exist_ok=True)
    with open(os.path.join(out_dir, base + '.strings.txt'), 'w') as f:
        f.write('// Printable strings in %s (%s), at their load addresses, in address order.\n'
                '// Sorted lists by kind are in the files next to this one.\n\n' % (base, label))
        for a, s in found:
            f.write('0x%08X  %s\n' % (a, s.replace('\n', '\\n')))
    titles = {'paths': 'file names and paths', 'format': 'printf-style format strings (messages, logs)',
              'expressions': 'assert-like expressions', 'identifiers': 'identifiers (names, keys, tags)',
              'text': 'other text'}
    for k, items in groups.items():
        with open(os.path.join(out_dir, '%s.strings.%s.txt' % (base, k)), 'w') as f:
            f.write('// %s: %s (%d)\n\n' % (base, titles[k], len(items)))
            for a, s in items:
                f.write('0x%08X  %s\n' % (a, s.replace('\n', '\\n')))
    return len(found), {k: len(v) for k, v in groups.items()}


def write_headers(path, out_dir, label):
    """The executable's ELF header, program headers and section headers, as text (headers.txt)."""
    e = Elf(path)
    d = e.data
    phoff, = struct.unpack_from('<I', d, 0x1C)
    phentsize, phnum = struct.unpack_from('<HH', d, 0x2A)
    flags, = struct.unpack_from('<I', d, 0x24)
    os.makedirs(out_dir, exist_ok=True)
    base = os.path.basename(path)
    with open(os.path.join(out_dir, base + '.headers.txt'), 'w') as f:
        f.write('// ELF headers of %s (%s)\n\n' % (base, label))
        f.write('entry 0x%08X\nflags 0x%08X\nsize %d\n\n' % (e.entry, flags, len(d)))
        f.write('// program headers: type offset vaddr paddr filesz memsz flags align\n')
        for i in range(phnum):
            t, off, va, pa, fsz, msz, fl, al = struct.unpack_from('<8I', d, phoff + i * phentsize)
            f.write('phdr %d 0x%08X 0x%08X 0x%08X %d %d 0x%X 0x%X\n' % (t, off, va, pa, fsz, msz, fl, al))
        f.write('\n// section headers: name type addr offset size\n')
        for s_ in e.sections:
            f.write('shdr %s 0x%X 0x%08X 0x%08X %d\n' % (s_['name'] or '-', s_['type'], s_['addr'], s_['offset'], s_['size']))


def decode_vdb(path, out_dir, label):
    """VDB.XML: a binary 'value database'. Header: u32 version (2), u32 n1, u32 n2, u32 n3.
    Section 1: n1 entries of (i32 key hash, 32-bit value), sorted by key as a signed integer.
    The rest (n2, n3) is only partly understood: records filled with the MS debug heap patterns
    0xFDFDFDFD / 0xCDCDCDCD, so the file was written by a Windows tool dumping its structures."""
    d = open(path, 'rb').read()
    ver, n1, n2, n3 = struct.unpack_from('<4I', d, 0)
    rows = []
    for i in range(n1):
        k, raw = struct.unpack_from('<iI', d, 16 + 8 * i)
        f, = struct.unpack_from('<f', d, 16 + 8 * i + 4)
        as_int = raw if raw < 0x10000 else None
        rows.append((k & 0xFFFFFFFF, raw, f, as_int))
    os.makedirs(out_dir, exist_ok=True)
    with open(os.path.join(out_dir, 'VDB.section1.csv'), 'w', newline='') as fh:
        w = csv.writer(fh)
        w.writerow(['key_hash', 'raw_value', 'as_float', 'as_int_if_small'])
        for k, raw, f, i in rows:
            w.writerow(['0x%08X' % k, '0x%08X' % raw, '%.6g' % f, '' if i is None else i])
    # sections 2 and 3 are not decoded; no raw bytes of them are written
    return dict(version=ver, n1=n1, n2=n2, n3=n3, size=len(d))


def main():
    root, out, label = sys.argv[1], sys.argv[2], sys.argv[3]
    os.makedirs(out, exist_ok=True)
    rows = inventory(root, out)
    print('%s: %d files' % (label, len(rows)))
    for r in rows:
        if r['kind'] == 'ELF executable/module' and not r['path'].upper().endswith(('.IRX',)) and \
                '/' not in r['path']:
            n, g = strings_of(os.path.join(root, r['path']), os.path.join(out, 'strings'), label)
            write_headers(os.path.join(root, r['path']), out, label)
            print('  strings of %s: %d %s' % (r['path'], n, g))
        if r['path'].upper().endswith('VDB.XML'):
            print('  VDB:', decode_vdb(os.path.join(root, r['path']), os.path.join(out, 'vdb'), label))


if __name__ == '__main__':
    main()
