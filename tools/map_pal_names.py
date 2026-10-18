"""Carry Nahelam's PAL retail function names (SLES-52585) over to the NTSC-U retail executable (SLUS-21050).

    python3 tools/map_pal_names.py <SLES_525.85.txt> <SLUS_210.50> <output.csv>

The PAL and US executables have the same code layout with small piecewise shifts (0 for most of the code,
-0x10 around 0x131000-0x162000, -0x80 from about 0x265000, growing to about -0x424 in the menus and online
code). For each name the shift is taken from its neighbourhood: the shift, within +-0x600, that puts the
most of the 40 surrounding names on a function start in the US executable. The name is then checked on its
own: 'function start' when the US address begins a function (a stack-frame `addiu $sp`, or comes after a
`jr $ra` and its delay slot), 'not verified' otherwise (small leaf functions and data often fail the check without being
wrong).

Nahelam's list itself is not part of this repository (it has no licence); get it from
https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Research
"""
import collections
import csv
import re
import struct
import sys


def main():
    names_path, elf_path, out_path = sys.argv[1], sys.argv[2], sys.argv[3]
    pal = []
    for line in open(names_path, errors='replace'):
        m = re.match(r'([0-9A-Fa-f]{8})\s+(.+)', line.strip())
        if m:
            pal.append((int(m[1], 16), m[2].strip()))
    pal.sort()
    d = open(elf_path, 'rb').read()
    ph, = struct.unpack_from('<I', d, 0x1C)
    off, = struct.unpack_from('<I', d, ph + 4)
    fsz, = struct.unpack_from('<I', d, ph + 16)
    lo, hi = 0x100000, 0x100000 + fsz

    def word(a):
        return struct.unpack_from('<I', d, off + a - lo)[0] if lo + 8 <= a < hi - 4 else None

    def is_start(a):
        x = word(a)
        # a function starts with a stack-frame addiu, or right after the delay slot of a jr $ra (a - 8);
        # the delay slot itself (a - 4) is not a start
        return x is not None and ((x >> 16) == 0x27BD or word(a - 8) == 0x03E00008)

    starts = set(a for a in range(lo + 8, hi - 4, 4) if is_start(a))
    rows = []
    n = len(pal)
    for i, (a, name) in enumerate(pal):
        if not (lo <= a < hi):
            rows.append((None, name, None, 'outside the US image'))
            continue
        hood = [p for p, _ in pal[max(0, i - 20):i + 20] if lo <= p < hi]
        votes = collections.Counter()
        for p in hood:
            for s in range(-0x600, 0x601, 4):
                if p + s in starts:
                    votes[s] += 1
        shift = votes.most_common(1)[0][0] if votes else 0
        if votes and votes.get(0, 0) == votes[shift]:
            shift = 0
        us = a + shift
        rows.append((us, name, shift, 'function start' if us in starts else 'not verified'))
    with open(out_path, 'w', newline='') as fh:
        w = csv.writer(fh)
        w.writerow(['us_address', 'name', 'shift_from_pal', 'check', 'source'])
        for us, name, shift, check in sorted(rows, key=lambda r: (r[0] is None, r[0] or 0)):
            w.writerow(['0x%08X' % us if us is not None else '', name,
                        ('%+#x' % shift) if shift is not None else '', check,
                        "Nahelam's SLES_525.85.txt, shifted to SLUS-21050"])
    c = collections.Counter(r[3] for r in rows)
    print('%d names: %s' % (len(rows), dict(c)))


if __name__ == '__main__':
    main()
