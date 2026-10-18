<sub>[Home](../README.md)</sub>

# Tools

Everything in [`tools/`](../tools) is plain Python 3 (standard library only) plus one shell script.
Commands run from the repository root.

## Rebuild everything

```bash
tools/rebuild.sh
```

It regenerates `data/`, then the generated pages in `docs/`, then the navigation line on every page.

- **With the discs present**, all of `data/` is regenerated from them.
- **Without them**, the exports already in `data/` are kept and only the documentation is regenerated.

The exporters write text only: no byte dumps and no copies of disc files.

The disc folders are not in the repository; by default the script looks for them next to it, and three
variables point elsewhere:

```bash
B2_DISC="/path/to/Burnout 2 prototype" B3_PROTO="/path/to/Burnout 3 prototype" B3_RETAIL="/path/to/Burnout 3" tools/rebuild.sh
```

The documentation alone can be regenerated from `data/`:

```bash
python3 tools/gen_docs.py && python3 tools/gen_reference.py && python3 tools/wiki_nav.py
```

## Scripts

| Script | Does | Writes |
|---|---|---|
| `rebuild.sh` | Runs everything below in order | `data/`, generated `docs/` |
| `export_elf.py <elf> <out> "<label>"` | Any CodeWarrior PS2 ELF or IRX: symbols, and DWARF 1 if present | `symbols`, `types.h`, `functions`, `globals`, `line_numbers`, `source_outline/` |
| `export_modules.py <disc> <out> "<label>"` | Runs `export_elf.py` on every module with symbols on a disc; skips duplicates | `modules/<path>/` |
| `export_b3maps.py <disc> <out>` | The B3 prototype's four maps and two assert files | `maps/` |
| `export_disc.py <disc> <out> "<label>"` | File list, strings and headers of the executable, value database | `disc/` |
| `hash_sources.py` | Size, CRC32, MD5, SHA-1 of the source files | `data/hashes.tsv` |
| `gen_docs.py` | The [game systems](systems/README.md) pages, class lineage, hashes page | `docs/systems/`, `docs/reference/` |
| `gen_reference.py` | The [class pages](classes/README.md) and the other reference pages | `docs/classes/`, `docs/reference/` |
| `wiki_nav.py` | The `Home › Section` line at the top of every page | all pages |

Libraries used by the scripts:

| Module | Does |
|---|---|
| `elf.py` | Reads ELF sections and symbols |
| `dwarf1.py` | Reads DWARF 1 (`.debug`, `.line`) into a tree; renders types as C declarations; evaluates locations ([format](formats/codewarrior-dwarf1.md)) |
| `cwdemangle.py` | Demangles CodeWarrior C++ names ([rules](formats/codewarrior-demangling.md)); also a command: `python3 tools/cwdemangle.py Init__15CVehiclePhysicsFv` |

## Generated pages keep notes

Pages in `docs/systems/` and `docs/classes/` end with a **Notes** section. The generators keep whatever
is written there and rewrite the rest. Every other page in `docs/` is hand-written and never touched by
the generators (except the navigation line).

## How `export_elf.py` works

1. Reads the ELF's sections and symbols, and demangles every name.
2. Parses `.debug` into a tree of entries.
3. **Types:** renders every named class, struct, union and enum as C with member offsets. A type
   appears once per compile unit that includes its header, so the output is deduplicated by layout
   (`class` and `struct` spellings of one layout count as the same). Names with genuinely different
   layouts are marked `VARIANT`. Anonymous member types are written inline.
4. **Functions:** the signature comes from the DWARF return and parameter types plus the demangled
   `0x2008` name, which supplies the class and `const`. `this` is shown in the body, not the signature.
5. **Line ranges:** each function's addresses are looked up in its unit's `.line` table.
6. **Outlines:** one file per source file, at Criterion's path minus `I:\Burnout 2 Code\`.

## How the class ancestors are found

`gen_reference.py` links a Burnout 3 class to a Burnout 2 class **by name** (`CB3X` ↔ `CX`, `CGtX` ↔
`CGTX`) or **by shared method names** (at least 3 in common, covering at least 40% of the smaller class;
generic names like `Update` and `Init` are ignored). Functions are linked by identical signature, by
identical C function name, or by the same qualified name with different parameters (marked as such).
