<sub>[Home](../README.md)</sub>

# Changelog

Changes to the data and documentation. Newest first.

## 2026-10-19

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
