<sub>[Home](../../README.md) › [Uses](README.md)</sub>

# Using this data for a remake

A remake is a new game, written from scratch in a modern engine, that plays like Burnout 3. It uses
no original code, so this data serves as a **design reference**: what the game contains, how it is
organised, and what each system is made of.

## What the data gives a remake

| Need | Where |
|---|---|
| Every game mode and event type | [Game flow](../systems/game-flow.md): each `…Logic` class is an event type (single race, Road Rage, Burning Lap, Eliminator, Crash, Crash Battle, Team Crash, Party Crash, the online variants) |
| The menu structure | [Frontend](../systems/frontend.md): each Page/State pair is one screen |
| What the HUD shows | [HUD](../systems/hud.md): speedo, boost bar, position, lap, timers, takedowns, crash score and combo, escape distance, impact time |
| Vehicle physics concepts | [Vehicles and physics](../systems/vehicles-physics.md); `CB3VehiclePhysics` (hinged parts, crash steering, air rams, suspension, wheel collision); Burnout 2's `CVehiclePhysics` layout (wheels, suspension, bodywork damage, glass state) |
| Crash mode | [Crashes and scoring](../systems/crash-scoring.md): pickups, ramps, combos, the crash analyser and presentation directors |
| AI and traffic | [AI](../systems/ai.md) (lanes, avoidance, aggression, targets), [traffic](../systems/traffic.md) (lanes, junctions, lights, valves, splitters) |
| Camera behaviours | [Cameras and replays](../systems/cameras-replay.md): fly-around, track-side, keyframe, aftermath, interpolate, race-car follow |
| Visual features | [Renderer overview](../renderer-overview.md): specular, glass, water, reflections, coronas, sparks, debris, trails, bloom, two blurs, fog, shadows |
| Content lists | The `CB3HardCoded…List` classes: tracks, track regions, race and crash stages, special events, vehicles, cheats, trophies, headlines, takedowns |
| Tuning values | [Value database](../reference/value-database.md): thousands of hashed values, and which changed before release |
| Debug tools to copy | [Debug features](../reference/debug-features.md): camera editor, AI and traffic debug views |

## What it doesn't give

- **The feel.** Handling and timing live in code and tuning data. Matching them needs measurements
  of the original or reading its code.
- **Assets.** A remake needs all-new art and sound.

## Hybrid approach

Running the original simulation (from a port or a decompilation) and writing only the presentation
from scratch keeps the exact feel, which is what remakes most often get wrong.

## Notes

_Findings go here._
