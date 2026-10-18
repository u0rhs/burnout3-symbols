<sub>[Home](../README.md)</sub>

# Open questions

What the data doesn't answer yet, and work that would add to it.

## Unknowns

- **The missing executables.** The debug, internal and `-O0` maps describe builds whose executables
  are not on the prototype disc. Do they exist anywhere?
- **Metrowerks DWARF attributes** `0x2013`–`0x2173` and `0x2303`: probably saved registers and stack
  frame layout ([format](formats/codewarrior-dwarf1.md)).
- **`.mwcats`** in the Burnout 2 executable: Metrowerks tables, not decoded.
- **VU program names:** what `ADC` means in `G3_*`; what `Popcorn.dsm` draws
  ([renderer overview](renderer-overview.md)).
- **Value database:** the hash function and the names behind the keys; sections 2 and 3 of the file
  ([value database](reference/value-database.md)).
- **How far the Burnout 2 classes changed** in Burnout 3. `CB3VehiclePhysics` against
  `CVehiclePhysics` is a good first comparison.
- **Prototype vs retail:** how many functions survive unchanged, changed or were added, per system.
- **Demo-disc code** (`B3Demo*`): is it still in retail?
- **Online:** what the client expects from EA's lobby servers.
- **Disc file formats** (`.BGV`, `.BTV`, `.BGD`, `.HWD`, `.LWD`, `.AWD`, `.DAT`, `.BIN`): only names and
  sizes are documented here ([discs](discs.md)).

## Work that would extend this documentation

- [ ] Carry the prototype names to the retail executable ([decompilation](avenues/decompilation.md)).
- [ ] Turn `types.h` into compilable headers.
- [ ] Ghidra / IDA import scripts for the names and types.
- [ ] A splat `symbol_addrs.txt`.
- [ ] Decode the DWARF register attributes for stack frames.
- [ ] Find the value-database hash and name the keys.
- [ ] Compare the hashes with archived copies of the prototypes ([hashes](reference/hashes.md)).
