<sub>[Home](../../README.md) › [Uses](README.md)</sub>

# Using this data for a remaster

A remaster keeps Burnout 3's gameplay (handling, physics, AI, takedowns) exactly as it was and
rebuilds how the game looks, sounds and runs. It usually starts from a native port of the PS2 game,
such as a static recompilation (see [related resources](../related-projects.md)), and replaces parts
of it step by step.

## What a remaster needs, and where it is here

| Step | What it involves | Where in this documentation |
|---|---|---|
| Readable code | Names and types on the port's functions | [Classes](../classes/README.md), [class ancestors](../reference/class-ancestors.md), [decompilation](decompilation.md) |
| Taking over rendering | Intercepting what the game draws and drawing it with new code | [Renderer overview](../renderer-overview.md), [rendering](../systems/rendering.md), [VU programs](../reference/vu-programs.md) |
| Modern lighting and materials | Mapping the game's materials and lights to a modern model | Material classes (`B3TrackMaterialPS2`, `B3VehicleReflectivityData`), the `G3_*` program variants (specular, glass, water, reflect) |
| New and replacement assets | Knowing which code loads which file | [Tracks and streaming](../systems/tracks-streaming.md), [disc contents](../discs.md) (file names the executables reference) |
| Audio and music | The music manager, radio and custom soundtrack code | [Audio](../systems/audio.md): `B3SoundMusicManager`, `B3SoundRadio`, `B3SoundCustomSoundTrackPS2`, `B3MyBurnoutSettingsEATraxPage` |
| Frame rate and timing | The frame-rate manager, timers and the simulation step | [Core](../systems/core-platform.md): `GtFramerateManager`, `GtTimer`; [game flow](../systems/game-flow.md): `CB3Game` |
| Tuning | Physics, AI and camera values | [Value database](../reference/value-database.md), the `…Attribs` classes |
| Online | The lobby and network messages | [Network and online](../systems/network-online.md) |
| Debug tools | Cameras, editors and monitors left in the code | [Debug features](../reference/debug-features.md) |

## Points to keep in mind

- **Assets and music:** a remaster that reads the game's data from the player's own disc avoids
  distributing EA's content. The EA Trax songs were licensed and can't be redistributed.
- **Licences of the tools:** check the licence of the recompiler or runtime a port is built on
  before releasing anything.
- **The prototype is not retail.** Names and addresses here are from June 2004 builds; the retail
  game is about six weeks newer. Map them to retail before relying on them (see
  [decompilation](decompilation.md)).

## Notes

_Findings go here._
