<sub>[Home](../README.md)</sub>

# Changelog

Changes to the data and documentation. Newest first.

## 2026-10-18

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
