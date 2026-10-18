"""Export every IOP module and secondary ELF on a disc that kept its symbols.

    python3 export_modules.py <disc folder> <output folder> "<label>"

Each module gets a folder named after its path on the disc (IOP/B3ROUTE.IRX -> IOP_B3ROUTE_IRX) with the
files export_elf.py writes. The main executable is left out (it is exported on its own). Identical copies
are exported once: an .ELF next to an .IRX of the same module, and modules whose symbol tables match.
"""
import os
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from elf import Elf  # noqa: E402

MAIN = {'SLUS_204.97', 'DNAT_200.45', 'SLUS_210.50'}


def main():
    src, out, label = sys.argv[1], sys.argv[2], sys.argv[3]
    here = os.path.dirname(os.path.abspath(__file__))
    seen = {}
    found = []
    for dp, dn, fn in os.walk(src):
        dn.sort()
        # .IRX before .ELF, so the shipped module's name is kept when both copies exist
        for f in sorted(fn, key=lambda f: (not f.upper().endswith('.IRX'), f)):
            p = os.path.join(dp, f)
            rel = os.path.relpath(p, src).replace(os.sep, '/')
            if rel in MAIN:
                continue
            with open(p, 'rb') as fh:
                if fh.read(4) != b'\x7fELF':
                    continue
            e = Elf(p)
            sy = e.by_name.get('.symtab')
            if not sy or sy['size'] <= 16:
                continue
            key = tuple(sorted((s['name'], s['addr'], s['size']) for s in e.symbols() if s['type'] in ('func', 'object')))
            if key in seen:
                print('  %s: same symbols as %s, skipped' % (rel, seen[key]))
                continue
            seen[key] = rel
            found.append((p, rel))
    for p, rel in found:
        # e.g. IOP/B3ROUTE.IRX -> IOP_B3ROUTE_IRX: the folder must not end in a module extension, which
        # .gitignore excludes
        name = rel.replace('/', '_').replace('.', '_')
        subprocess.run([sys.executable, '-I', os.path.join(here, 'export_elf.py'), p, os.path.join(out, name), label],
                       check=True)


if __name__ == '__main__':
    main()
