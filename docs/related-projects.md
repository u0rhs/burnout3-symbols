<sub>[Home](../README.md)</sub>

# Related resources

Outside resources that use or complement this data.

## Names and research

| Resource | What |
|---|---|
| [Nahelam's PS2-Game-Mods](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Research) | Function names for the PAL retail release (`SLES_525.85.txt`) and the prototype (`DNAT_200.45.txt`), made from the same prototype map plus Burnout Revenge prototype symbols. The author notes there may be mistakes. A useful cross-check for names carried to retail |
| [Burnout MOD wiki (Japanese)](https://wikiwiki.jp/burnout/B3/MOD) | Mod tools and texture extraction for the PS2 version |

## Ports and tooling

| Resource | What |
|---|---|
| [burnout3-pc](https://github.com/danielgomesvieira2000/burnout3-pc) | A static recompilation of the NTSC-U retail release (SLUS-21050) to C++. Its `config/functions.csv` lists 9,277 functions and `config/names.csv` takes names as `address,name,source`: a natural destination for names carried to retail |
| [PS2Recomp](https://github.com/ran-j/PS2Recomp) | A general PS2 static recompiler and runtime (GPL) |
| [splat](https://github.com/ethteck/splat) | Splits a binary for a matching decompilation; reads a `symbol_addrs.txt` |
| [decomp.me](https://decomp.me) | Online matching-decompilation tool; check its compiler list for MWCC PS2 2.4.1.01 |

## Preservation

| Resource | What |
|---|---|
| [Hidden Palace](https://hiddenpalace.org) | The main prototype archive. Compare its hashes with [reference/hashes.md](reference/hashes.md) |
| [The Cutting Room Floor](https://tcrf.net) | Unused and cut content; see [unlinked code](reference/unlinked-code.md) and the [demo-disc code](systems/demo-builds.md) |
