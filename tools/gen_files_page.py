"""Generate docs/files.md: every downloadable data file in one place, with what it is, its size and a link.

    python3 tools/gen_files_page.py            (from the repository root; run by tools/rebuild.sh)
"""
import os
import urllib.parse

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OUT = os.path.join(ROOT, 'docs', 'files.md')
REPO = 'https://github.com/u0rhs/burnout3-symbols'

B3 = 'data/burnout3-prototype'
R = 'data/burnout3-retail'
B2 = 'data/burnout2-prototype'

SECTIONS = [
    ('Burnout 3 prototype: link maps and symbols',
     'From the four link maps on the prototype disc (8 June 2004, from [Hidden Palace](https://hiddenpalace.org/Burnout_3:_Takedown_(Jun_8,_2004_prototype))). `DNAT_200` is the build on the disc; the other '
     'three are a debug, an internal and an unoptimised (`-O0`) build whose executables are not on the disc. '
     'Each map comes as a CSV (address, size, section, name, library, object) and as text grouped by source file. '
     'Format: [link maps](formats/codewarrior-maps.md).',
     [
         (B3 + '/maps/DNAT_200.symbols.csv', 'Every symbol of the prototype executable, demangled'),
         (B3 + '/maps/DNAT_200.symbols.txt', 'The same, grouped by source file in link order'),
         (B3 + '/maps/B3DEBUG.symbols.csv', 'Debug build symbols'),
         (B3 + '/maps/B3DEBUG.symbols.txt', 'Debug build symbols, by source file'),
         (B3 + '/maps/B3INTERN.symbols.csv', 'Internal build symbols'),
         (B3 + '/maps/B3INTERN.symbols.txt', 'Internal build symbols, by source file'),
         (B3 + '/maps/B3O0PCH.symbols.csv', 'Unoptimised build symbols (includes the small inline functions)'),
         (B3 + '/maps/B3O0PCH.symbols.txt', 'Unoptimised build symbols, by source file'),
         (B3 + '/maps/classes.txt', 'Every class and method, with its address in each of the four builds'),
         (B3 + '/maps/vu_microcode.txt', 'The VU microcode programs and their labels'),
         (B3 + '/maps/DNAT_200.unreferenced.txt', 'Code and data the linker dropped (written but never linked)'),
         (B3 + '/maps/DNAT_200.linker_symbols.txt', 'Section bounds, `_gp`, stack and BSS from the linker script'),
         (B3 + '/maps/DNAT_200.source_files.txt', 'Every source file with its function count and code size'),
         (B3 + '/maps/DNAT_200.MAP.txt', 'The complete text link map, including the reference tree'),
         (B3 + '/originals/DNAT_200.MAP', 'The original text link map file, unchanged'),
         (B3 + '/maps/B3DEBUG.AST.txt', 'Assert expressions of the debug build'),
         (B3 + '/maps/B3INTERN.AST.txt', 'Assert expressions of the internal build'),
     ]),
    ('Burnout 3 retail (SLUS-21050)',
     'The retail executable is stripped. These are the named addresses known so far, and text pulled from the disc. '
     'Explained on the [retail memory map](reference/retail-memory-map.md) page.',
     [
         (R + '/prototype-names.csv', '5,054 retail functions named from the June 2004 prototype map, 2,903 proven against the code'),
         (R + '/function-names.csv', '1,146 named functions in the retail executable (851 verified)'),
         (R + '/function-names-check.csv', 'Each of those 1,146 names tested against the code'),
         (R + '/nahelam-mods.csv', 'Every address Nahelam\'s mods change, with the nearest named function'),
         (R + '/memory-map.csv', 'Named retail addresses: save profile, race state, tuning, display, controls, code'),
         (R + '/vehicle-ids.csv', 'The 67 vehicles and their IDs'),
         (R + '/event-medals.csv', 'The medal byte of each World Tour event in the save profile'),
         (R + '/disc/strings/SLUS_210.50.strings.txt', 'Every string in the executable, with its address'),
         (R + '/disc/strings/SLUS_210.50.strings.paths.txt', 'Just the file names and paths the game loads'),
         (R + '/disc/SLUS_210.50.headers.txt', 'ELF and program headers of the executable'),
         (R + '/disc/vdb/VDB.section1.csv', 'The value database (tuning values) decoded'),
         (R + '/disc/files.csv', 'Every file on the disc, with size, date and type'),
         (R + '/third-party/AeroWidescreen-PCSX2-Cheats/SLUS-21050_BEBF8793_widescreen.pnach', 'Aero_\'s 16:9 widescreen patch (MIT)'),
         (R + '/third-party/AeroWidescreen-PCSX2-Cheats/SLUS-21050_BEBF8793_buttons.pnach', 'Ookami & Aero_\'s button mapping patch (MIT)'),
     ]),
    ('Burnout 3 review builds (20 July 2004)',
     'Two review discs nine days before the final US build: US `SLUS_210.50` (11:11) and PAL `SLES_525.84` (11:14). '
     'Their executables are stripped like retail; exported here are the disc listings, strings, headers and value '
     'databases. See [builds](builds.md#burnout-3-review-builds-20-july-2004).',
     [
         ('data/burnout3-review-us-2004-07-20/disc/strings/SLUS_210.50.strings.txt', 'US review: every string in the executable, with its address'),
         ('data/burnout3-review-us-2004-07-20/disc/SLUS_210.50.headers.txt', 'US review: ELF and program headers'),
         ('data/burnout3-review-us-2004-07-20/disc/vdb/VDB.section1.csv', 'US review: the value database decoded'),
         ('data/burnout3-review-us-2004-07-20/disc/files.csv', 'US review: every file on the disc'),
         ('data/burnout3-review-pal-2004-07-20/disc/strings/SLES_525.84.strings.txt', 'PAL review: every string in the executable, with its address'),
         ('data/burnout3-review-pal-2004-07-20/disc/SLES_525.84.headers.txt', 'PAL review: ELF and program headers'),
         ('data/burnout3-review-pal-2004-07-20/disc/files.csv', 'PAL review: every file on the disc'),
     ]),
    ('Burnout 2 prototype: symbols and debug information',
     'The Burnout 2 prototype (29 July 2002) kept its symbols and full DWARF 1 debug information: types, '
     'signatures with parameter names, locals and line numbers. Most useful as the ancestor of Burnout 3\'s '
     'code ([class ancestors](reference/class-ancestors.md)). Format: [DWARF 1](formats/codewarrior-dwarf1.md).',
     [
         (B2 + '/SLUS_204.97/types.h', 'Every class, struct, union and enum with member offsets, as C'),
         (B2 + '/SLUS_204.97/functions.csv', 'Every function with signature, parameter names, source file and lines'),
         (B2 + '/SLUS_204.97/functions.txt', 'The same, as text'),
         (B2 + '/SLUS_204.97/symbols.csv', 'The full symbol table, demangled'),
         (B2 + '/SLUS_204.97/symbols.txt', 'The same, as text'),
         (B2 + '/SLUS_204.97/globals.txt', 'Global variables with types and addresses'),
         (B2 + '/SLUS_204.97/line_numbers.csv', 'Address to source line for every line'),
         (B2 + '/SLUS_204.97/source_outline/README.md', 'One outline per original source file, at Criterion\'s paths'),
         (B2 + '/disc/strings/SLUS_204.97.strings.txt', 'Every string in the executable, with its address'),
     ]),
    ('Cross-build tables',
     'Built from all of the above. The pages behind them are in [reference](reference/README.md).',
     [
         ('docs/reference/data/b3-functions-by-build.csv', 'Every Burnout 3 function with address and size in all four builds'),
         ('docs/reference/data/b3-globals.csv', 'Every named variable in the prototype'),
         ('docs/reference/data/function-lineage.csv', 'Burnout 3 functions with their Burnout 2 counterpart'),
         ('docs/reference/data/vdb-changes-prototype-to-retail.csv', 'Tuning values changed between the prototype and retail'),
         ('docs/reference/data/vdb-changes-US-review-to-retail.csv', 'The 34 tuning values changed in the last nine days (July review build to retail)'),
         ('data/hashes.tsv', 'Size, CRC32, MD5 and SHA-1 of every source file'),
     ]),
]


def rel(path):
    return urllib.parse.quote(os.path.relpath(os.path.join(ROOT, path), os.path.dirname(OUT)).replace(os.sep, '/'))


def human(n):
    for unit in ('bytes', 'KB', 'MB'):
        if n < 1024 or unit == 'MB':
            return ('%d %s' % (n, unit)) if unit == 'bytes' else ('%.1f %s' % (n, unit))
        n /= 1024.0


def rows(path):
    p = os.path.join(ROOT, path)
    if not path.endswith(('.csv', '.txt', '.tsv', '.h', '.MAP')):
        return ''
    n = sum(1 for _ in open(p, errors='replace'))
    return format(n - (1 if path.endswith('.csv') else 0), ',')


def main():
    L = ['# Symbols and maps', '',
         '> Generated by `tools/gen_files_page.py`.', '',
         'Every data file in the repository, in one place. All of it is plain text (CSV, text and C headers) that '
         'opens in any editor, spreadsheet or script.', '',
         '**Download everything:** [ZIP of the whole repository](%s/archive/refs/heads/main.zip) · '
         '`git clone %s.git`' % (REPO, REPO), '']
    modules = []
    for title, about, files in SECTIONS:
        L += ['## %s' % title, '', about, '', '| File | Contents | Size | Lines / rows |', '|---|---|---:|---:|']
        for path, what in files:
            p = os.path.join(ROOT, path)
            if not os.path.exists(p):
                continue
            L.append('| [`%s`](%s) | %s | %s | %s |' % (os.path.basename(path) if not path.endswith('README.md')
                                                    else os.path.basename(os.path.dirname(path)) + '/',
                                                    rel(path), what, human(os.path.getsize(p)), rows(path)))
        L.append('')
    # modules
    L += ['## Modules (IOP drivers and network)', '',
          'Symbol tables of the I/O-processor modules and network ELFs that kept them; some also have full debug '
          'information (types, functions, source outlines). Overview: [IOP modules](reference/iop-modules.md).', '',
          '| Build | Module | Files |', '|---|---|---|']
    for build, d in (('Burnout 3 prototype', B3 + '/modules'), ('Burnout 2 prototype', B2 + '/modules')):
        full = os.path.join(ROOT, d)
        if not os.path.isdir(full):
            continue
        for m in sorted(os.listdir(full)):
            files = sorted(f for f in os.listdir(os.path.join(full, m)) if os.path.isfile(os.path.join(full, m, f)))
            L.append('| %s | `%s` | %s |' % (build, m, ' · '.join('[%s](%s)' % (f, rel('%s/%s/%s' % (d, m, f))) for f in files)))
    L += ['', '## More', '',
          '- What every file contains, column by column: [data](../data/README.md).',
          '- How to find a class, an address or a function in these files: [finding things](data-guide.md).',
          '- How they were made, and how to regenerate them: [tools](tools.md).', '']
    with open(OUT, 'w') as fh:
        fh.write('\n'.join(L))
    print('files page written')


if __name__ == '__main__':
    main()
