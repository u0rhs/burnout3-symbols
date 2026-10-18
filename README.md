<p align="center">
  <img src="assets/burnout3-takedown-logo.png" alt="Burnout 3: Takedown" width="520">
</p>

<h1 align="center">Symbols and documentation</h1>

<p align="center">
  <a href="#start-here">Start here</a> ·
  <a href="docs/systems/README.md">Game systems</a> ·
  <a href="docs/classes/README.md">Classes</a> ·
  <a href="docs/reference/README.md">Reference</a> ·
  <a href="docs/tools.md">Tools</a>
</p>

Everything the Burnout 3 prototype discs reveal about the game's code, turned into readable data and
documentation, with Burnout 2's debug information where it helps explain Burnout 3. Made for work on a
Burnout 3 remaster, decompilation or remake.

> No game code, executables, modules or assets are included: no `.elf`, `.irx` or `.bin` files, no
> byte dumps, no audio or textures. The repository holds text only: symbol tables, link maps, debug
> information rewritten as C declarations, strings, file listings, decoded tables, Python tools and
> Markdown. The only original files are two kinds of text link map (`data/*/originals/`). Regenerating
> the data needs the discs ([tools](docs/tools.md)).

## Start here

| Page | For |
|---|---|
| [Builds](docs/builds.md) | The Burnout 3 prototype, Burnout 3 retail and Burnout 2 prototype: what each provides and how they relate |
| [Finding things](docs/data-guide.md) | Recipes: a class, an address, a source file, a function's parameters, one function across builds |
| [Glossary](docs/glossary.md) | Criterion's naming conventions (`CB3`, `CGt`, `mr`, `lp` …), PS2 and RenderWare terms |

## Burnout 3's code

| Page | Contents |
|---|---|
| [Game systems](docs/systems/README.md) | The code by area (physics, AI, traffic, crashes, cameras, HUD, menus, audio, rendering, network …): source files, classes, methods, Burnout 2 counterparts |
| [Classes](docs/classes/README.md) | A page per class (890): methods in every build, vtable, static data, Burnout 2 ancestor's layout, related asserts |
| [Renderer overview](docs/renderer-overview.md) | How the game draws: VU microcode programs and the code that drives them |
| [Retail memory map](docs/reference/retail-memory-map.md) | Named addresses in the retail executable from cheat codes and PCSX2 patches: save profile, race state, tuning, widescreen and HUD layout, controls, code locations |
| [Disc contents](docs/discs.md) | Every folder and file type on the discs, and the file names the executables use |
| [Reference](docs/reference/README.md) | Globals, build comparison, memory layout, debug features, unlinked code, asserts, IOP modules, value database, Burnout 2 lineage tables |

## Using it

- [Remaster](docs/avenues/remaster.md): where each part of the game lives, for rebuilding its presentation
- [Decompilation](docs/avenues/decompilation.md): carrying names to retail, recovering types, matching vs functional
- [Remake](docs/avenues/remake.md): the data as a design reference

## Formats and tools

- [Formats](docs/formats/README.md): CodeWarrior's DWARF 1, link maps, binary maps, assert files, name mangling
- [Tools](docs/tools.md): the scripts, and how to regenerate everything
- [Data](data/README.md): what each exported file contains

## Other pages

- [Related resources](docs/related-projects.md)
- [Open questions](docs/open-questions.md)
- [Changelog](docs/changelog.md)

## In numbers

| | |
|---|---|
| Burnout 3 prototype | 4 link maps (one text, three binary) · 8,301 functions in the DNAT_200 build, 11,020 in the unoptimised build · 890 classes · 312 vtables · 595 game source files · 3,383 named variables · 22 VU microcode programs · 2,243 assert expressions · 3,056 unlinked symbols |
| Burnout 3 retail | 775 files listed · 2,255 strings with addresses · 7,525 tuning values (1,949 changed since the prototype) · about 150 named memory addresses, 67 vehicle IDs, 139 event medal bytes |
| Burnout 2 prototype | 12,023 symbols · 2,309 functions with full debug info · 969 types · 168 enums · 288 source files · 76,449 line entries |
| Burnout 2 → 3 | 62 class ancestors · 704 function counterparts · 25 source-file counterparts |
| Compiler, all three executables | Metrowerks CodeWarrior for PS2, MW MIPS C Compiler 2.4.1.01 |

## Layout

```
README.md          this page
assets/            logo and icons
docs/              the documentation (hand-written pages + generated systems/, classes/, reference/)
data/              the exported data, as text
tools/             the scripts that make data/ and the generated pages (tools/rebuild.sh)
```

Generated pages say so at the top; their **Notes** sections are kept when they are regenerated.
Every page starts with a `Home › Section` line for navigation. The pages are plain Markdown with
relative links, so they work in a Git host's web view, in an editor, or as an Obsidian vault. The same
pages are also published as a searchable site with GitHub Pages
([u0rhs.github.io/burnout3-symbols](https://u0rhs.github.io/burnout3-symbols/)); `_config.yml` and
`_includes/` configure it.
