"""Print size, CRC32, MD5 and SHA-1 of the source files the exports are made from (tab-separated).

    python3 hash_sources.py            (writes data/hashes.tsv)

Disc-image hashes (lines labelled "... disc image (Hidden Palace)") are added separately and kept.

Reads the disc folders from B2_DISC, B3_PROTO and B3_RETAIL (as tools/rebuild.sh sets them). The ISO of the
Burnout 2 prototype is hashed when it sits next to its folder as 'Burnout 2 For Preview Only 29-7-02.iso'.
"""
import hashlib
import os
import zlib

B2 = os.environ.get('B2_DISC', '../Burnout 2 Prototype July 29 2002')
B3P = os.environ.get('B3_PROTO', '../Burnout 3 Prototype Jul 20 2004 11.11')
B3R = os.environ.get('B3_RETAIL', '../Burnout 3')

FILES = [
    (os.path.join(os.path.dirname(B2), 'Burnout 2 For Preview Only 29-7-02.iso'), 'Burnout 2 For Preview Only 29-7-02.iso'),
    (os.path.join(B2, 'SLUS_204.97'), 'Burnout 2 prototype/SLUS_204.97'),
    (os.path.join(B2, 'SYSTEM.CNF'), 'Burnout 2 prototype/SYSTEM.CNF'),
] + [(os.path.join(B3P, f), 'Burnout 3 prototype/' + f) for f in
     ('DNAT_200.45', 'SYSTEM.CNF', 'DNAT_200.MAP', 'B3DEBUG.MAP', 'B3INTERN.MAP', 'B3O0PCH.MAP',
      'B3DEBUG.AST', 'B3INTERN.AST', 'VALUEDB/VDB.XML')] + \
    [(os.path.join(B3R, f), 'Burnout 3 retail/' + f) for f in ('SLUS_210.50', 'SYSTEM.CNF', 'DATA/VDB.XML')]


def main():
    keep = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'data', 'hashes.tsv')
    out = [line for line in (open(keep).read().splitlines() if os.path.exists(keep) else [])
           if '(Hidden Palace)' in line.split('\t')[0]]
    for path, label in FILES:
        if not os.path.exists(path):
            continue
        s, m, c, n = hashlib.sha1(), hashlib.md5(), 0, 0
        with open(path, 'rb') as fh:
            while True:
                b = fh.read(1 << 22)
                if not b:
                    break
                s.update(b)
                m.update(b)
                c = zlib.crc32(b, c)
                n += len(b)
        out.append('\t'.join([label, str(n), '%08X' % c, m.hexdigest(), s.hexdigest()]))
    with open(keep, 'w') as fh:
        fh.write('\n'.join(out) + '\n')


if __name__ == '__main__':
    main()
