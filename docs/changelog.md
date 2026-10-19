<sub>[Home](../README.md)</sub>

# Changelog

Changes to the data and documentation. Newest first.

## 2026-10-19

- `_FinalMix` (`0x002FC820`, `B3SoundDistPS2.cpp`) regenerated with `verify_retail_names.py` as proven (same place
  between proven functions): now 3,008 proven, 517 unverified.
- **5,054 retail functions named from the June 2004 prototype map, 3,007 proven against the code**
  ([prototype names](reference/retail-prototype-names.md), `prototype-names.csv`). Each of Nahelam's
  1,146 names checked the same way (`function-names-check.csv`): 634 agree, 9 corrected by the code,
  52 one function off.
- Compilers corrected: the `2.4.1.01` string is the linker's fixed tag; the prototype's code generation
  is CodeWarrior PS2 3.0 build 38 to 3.0.1 build 103, retail's 3.0.1 build 119 ([builds](builds.md)).
- Burnout Revenge prototypes described; the July 14, 2005 PS2 build keeps full symbols and debug
  information ([builds](builds.md#burnout-revenge-prototypes-2005-to-2006)).
- Class pages: a **Retail** column (address and proof level of each method in SLUS-21050) and a retail count;
  the 2D classes (`CGt2dObject`, its object space, `CGt2dObjectBox`, `CGt2dObjectImage`, `CGt2dScene`,
  `CGt2dFont`, `CGt2dFontChar`, `CGt2dFrame`, `CB3HUDComponent`) have their Burnout 3 layouts from the retail code
  in Notes, with Revenge's member names where they agree.
- Memory map and mods: `in_function` (which function holds each code address) from the proven and strong
  names; corrections: the race timer store `0x001D3D2C` is in `CGtTimer::NextFrame`; the crash camera list
  backing (`0x003D70BC` is a jump to a code cave, the width is the `lui` at `0x003D7238` in
  `CB3HUDCrashCombo::Prepare`); added the menu frame-rate branch `0x001D3F2C` (`CB3Game::SetFrontendFrameRate`).
- `tools/verify_retail_names.py`: the code check behind `proof` and `function-names-check.csv`, standard library
  only; run by `rebuild.sh` when both executables are present. Results regenerated with it (3,007 proven;
  a called function counts by name only when its name is placed in retail too).
- Decompilation guide: compiler build and flags (`-O4 -Cpp_exceptions off`), the masked-match trap, source files
  staying whole in retail (356 of 361), Burnout 2 matching works for libraries only, Revenge layouts.
- Added the two July 20, 2004 review builds (US 11.11, PAL 11.14): disc listings, strings, headers and value
  databases (`tools/export_iso.py` reads disc images directly). Neither executable has symbols. Their
  tuning is identical to each other; 34 values changed before retail.
- Provenance: the Jun 8 disc image is verified against Hidden Palace's SHA-1, and its executable, maps,
  assert files and value database are byte-identical to the files the exports were made from.

## 2026-10-18

- Retail names: fixed the function-start check (it also accepted a `jr $ra` delay slot); now 851 verified,
  835 of them on burnout3-pc's own function starts. Derived columns refreshed by `tools/annotate_retail.py`.
- Every class now sorted into an area: classes without a known source file go with their outer class,
  their template argument, or by name; system pages list them too.
- 1,146 retail function names (851 verified) from Nahelam's PAL list, shifted to SLUS-21050
  (`tools/map_pal_names.py`); Nahelam's prototype list independently confirms the map's address drift.
- Nahelam's mods and research documented: development menu, debug views, Car Viewer, the ELF code cave
  and the compiler's runaway inlining, PADFIX, Burnout Online, B3Mod; 1,480 US addresses with functions.
- Provenance: both prototypes are from Hidden Palace; the Burnout 3 prototype is dated 8 June 2004
  (previously given as July). Links and credits in [builds](builds.md#provenance).
- [Symbols and maps](files.md): every data file in one place with direct links; "Get the files" and
  highlights on the home page; the files page second in the site sidebar.
- Module exports renamed (`IOP_B3ROUTE_IRX/` …) so they are no longer hidden by the `.irx` rule in
  `.gitignore`; they are now in the repository.
- Logo on the home page; the B3 icon as the site's favicon; GitHub Pages configuration (`_config.yml`,
  `_includes/`) to publish the documentation as a searchable site.
- Retail memory map from cheat codes (GameHacking.org: Codejunkies, Code Master, MadCatz) and
  AeroWidescreen's PCSX2 patches (widescreen, button mapping; included under MIT): save profile, race
  state, tuning, display and HUD layout, controls, code locations, vehicle IDs, event medals.
- Related resources: added the Xbox ports (xboxrecomp, sp00nznet/burnout3, Takedawn, burnout3-sw) and
  which of their findings map to which system here.
- Text only: no disc files except the two text link maps (`data/*/originals/`), no byte dumps.
- Executable headers kept as text (`data/*/disc/*.headers.txt`); the memory layout page is built from them.
- Repository layout for a Git host: `README.md` home page, `docs/`, `data/`, `tools/`, navigation line
  on every page, `tools/rebuild.sh` to regenerate everything.
- Added a page per Burnout 3 class (890), and reference pages: class ancestors (by name and by shared
  methods), function and source-file lineage, global data, build comparison, memory layout, debug
  features, unlinked code, asserts, VU programs, IOP modules, enums, class hierarchy, RenderWare API.
- Added disc exports for all three discs: file lists, strings with addresses, and the value database
  (`VDB.XML`) decoded, with the values changed between prototype and retail.
- Game systems pages generated from the prototype maps.
- Format write-ups: CodeWarrior DWARF 1, the text and binary link maps, assert files, name mangling.

## 2026-10-17

- First export of the Burnout 2 prototype's symbols and DWARF 1 debug information, and the Burnout 3
  prototype's four link maps and two assert files.
- Found that all three executables were built with MW MIPS C Compiler 2.4.1.01, and that the
  prototype's text map is six days older than its executable.
