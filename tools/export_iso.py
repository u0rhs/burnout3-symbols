"""Describe a disc image (.iso) without extracting it: the same exports as export_disc.py (file list,
strings and headers of the executable, value database), read straight from the image with bsdtar.

    python3 export_iso.py <image.iso> <output folder> "<label>"

Only the boot executable and VDB.XML are read in full, into a temporary folder that is deleted afterwards.
"""
import csv
import os
import re
import subprocess
import sys
import tempfile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import export_disc as X  # noqa: E402

MONTHS = {m: i for i, m in enumerate('Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec'.split(), 1)}


def listing(iso):
    out = subprocess.run(['bsdtar', '-tvf', iso], capture_output=True, text=True, check=True).stdout
    rows = []
    for line in out.splitlines():
        parts = line.split(None, 8)
        if len(parts) < 9 or parts[0].startswith('d'):
            continue
        size, mon, day, year, path = int(parts[4]), parts[5], parts[6], parts[7], parts[8]
        date = '%s-%02d-%02d' % (year, MONTHS.get(mon, 0), int(day)) if ':' not in year else '%s %s' % (mon, day)
        rows.append(dict(path=path, size=size, date=date))
    return rows


def head(iso, path, n=512):
    p = subprocess.run(['bsdtar', '-xOf', iso, path], capture_output=True)
    return p.stdout[:n]


def main():
    iso, out, label = sys.argv[1], sys.argv[2], sys.argv[3]
    os.makedirs(out, exist_ok=True)
    rows = listing(iso)
    for r in rows:
        r['kind'] = X.detect(r['path'], head(iso, r['path']), r['size'])
    with open(os.path.join(out, 'files.csv'), 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['path', 'size', 'date', 'detected'])
        for r in rows:
            w.writerow([r['path'], r['size'], r['date'], r['kind']])
    with open(os.path.join(out, 'files.txt'), 'w') as f:
        f.write('// Every file on the disc image, with size, date and detected format. No file contents are copied.\n\n')
        cur = None
        for r in rows:
            d = os.path.dirname(r['path']) or '.'
            if d != cur:
                cur = d
                f.write('\n%s/\n' % d)
            f.write('  %-28s %11s  %s  %s\n' % (os.path.basename(r['path']), format(r['size'], ','), r['date'], r['kind']))
    cnf = subprocess.run(['bsdtar', '-xOf', iso, 'SYSTEM.CNF'], capture_output=True, text=True).stdout
    boot = re.search(r'cdrom0:\\\\?([^;\s]+)', cnf)
    with tempfile.TemporaryDirectory() as tmp:
        if boot:
            exe = boot.group(1).lstrip('\\')
            subprocess.run(['bsdtar', '-xf', iso, '-C', tmp, exe], check=True)
            n, g = X.strings_of(os.path.join(tmp, exe), os.path.join(out, 'strings'), label)
            X.write_headers(os.path.join(tmp, exe), out, label)
            print('  strings of %s: %d %s' % (exe, n, g))
        vdb = [r['path'] for r in rows if r['path'].upper().endswith('VDB.XML')]
        if vdb:
            subprocess.run(['bsdtar', '-xf', iso, '-C', tmp, vdb[0]], check=True)
            print('  VDB:', X.decode_vdb(os.path.join(tmp, vdb[0]), os.path.join(out, 'vdb'), label))
    print('%s: %d files' % (label, len(rows)))


if __name__ == '__main__':
    main()
