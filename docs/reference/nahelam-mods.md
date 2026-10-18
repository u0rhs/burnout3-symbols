<sub>[Home](../../README.md) › [Reference](README.md)</sub>

# Nahelam's Burnout 3 mods and research

[Nahelam](https://github.com/Nahelam) has done more reverse engineering of the retail Burnout 3 than
anyone else in public: function names, a development menu, debug views, a mod menu, online revival, and
dozens of gameplay patches, for the PAL, US, Japanese and Korean releases. This page documents what each
piece shows about the game's code, with the **US (SLUS-21050) addresses** it changes and the nearest
named retail function before each ([retail function names](retail-function-names.md)).

The repositories have no licence, so their files are not copied here. Everything links to the originals:
[PS2-Game-Mods/Burnout 3 Takedown](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/) and [B3Mod](https://github.com/Nahelam/B3Mod). All addresses
with their mod and function: [`nahelam-mods.csv`](../../data/burnout3-retail/nahelam-mods.csv).

## Research: function names

| File | What | Used here |
|---|---|---|
| [`DNAT_200.45.txt`](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Research/DNAT_200.45.txt) | 982 function names for the prototype executable | Matches 921 names in the prototype map, with the same address drift, confirming both ([details](retail-function-names.md#confirmations)) |
| [`SLES_525.85.txt`](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Research/SLES_525.85.txt) | 1,214 function names for the PAL retail executable | Shifted to the US executable: [1,146 US names, 863 verified](retail-function-names.md) |
| [`b3stuff.txt`](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Research/b3stuff.txt) | Working notes: patch sites with the instructions around them | Background for the patches below |

Both lists were built from the Burnout 3 prototype map and the Burnout Revenge prototype's debug symbols.

## Discoveries that matter for the code

### A hidden development menu
The retail game still contains a development menu. Writing one menu pointer (`0x004E0568` ← `0x00425330`)
puts it under **EXTRAS**, with a working *Unlock All* ([patch](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Development%20Menu)). The prototype's
`CB3DebugManager` and the [debug features](debug-features.md) page list what such menus drive.

### Debug views left in the retail game
The debug draw modes of the physics and traffic code survive in retail. They are switched by flag bytes
that `CB3PhysicsManagerDebug::Construct` (around `0x002BED08`–`0x002BED28`: body hulls, collision world,
intervals) and `CB3TrafficDebug::Construct` (around `0x002F0380`–`0x002F0388`: near miss, spatial
triggers) store at start-up. Traffic lane drawing is rebuilt inside `CB3TrafficDebug::RenderNearMissData`.

### The Car Viewer
A car viewer game mode (`CB3CarViewerGameMode`) is still in retail. The patch hooks it into the rewards
garage by replacing vtable entries (`CB3CarRewardsGaragePage::Update`, `CB3CarViewerGameMode::Prepare`,
`::Update`, `::Release`). Its built-in controls drive lights, wheels, deformation and hinged parts, and it
lights the car with **9 irradiance coefficients** (spherical-harmonic-style lighting) that the patch makes
editable ([README](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Car%20Viewer)).

### A compiler bug, and 188 KB of free space
Three traffic functions in the retail executable are enormous: `CB3TrafficVehicle::StartCrashing`
(`0x00167D10`, 37,836 bytes), `::Remove` (`0x00173D30`, 75,704 bytes) and `::Update` (`0x00186850`,
77,428 bytes). The compiler inlined `Remove`'s call to itself again and again: **128 levels deep** in
`StartCrashing` and **256** in the other two (the limits of a signed and an unsigned byte). Rewritten
properly they take 56, 124 and 1,964 bytes. Nahelam's **ELF Code Cave** patch does that and moves the
functions in between, leaving **188,896 contiguous free bytes from `0x0016B4F0` to `0x001996D0`**. Its
notes include the decompiled `Remove` and the full disassembly of all three
([README and notes](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/ELF%20Code%20Cave)). The Xbox build doesn't have the problem.

### Real-hardware patches that use the code cave
Patches too large for cheat devices are embedded in the executable through the code cave, and shipped
as xdelta patches for disc images: the Crash Breaker Expansion and **PADFIX**, which makes the game
accept a DualShock 1 (the game requires a DualShock 2; the patch removes pressure sensitivity)
([DualShock 2 folder](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/DualShock%202), [DS1 page](https://nahelam.github.io/b3ps2ds1/)). Another
patch turns off the analog pressure of the buttons or lowers its threshold (default active zone 0.9,
dead zone 0.1).

### Online revival
The **Burnout Online PS2** patches ([folder](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Online), [page](https://nahelam.github.io/bops2/))
reconnect Burnout 3 and Burnout Revenge to a community server. Three things block the original game:
the server URL and Sony's DNAS check (both in the executable) and SSL certificate validation in EA's
DirtySock IOP module `DRTYSCKF.IRX`. The patches change the URL, bypass DNAS, force SSL, disable UPnP and
the buddies module, and allow single-player lobbies. The certificate check is passed with a ProtoSSL
bug, so the IOP module needs no change. The original server emulator (bosrv, after /dev/ghostline's eaps)
is offline; current work is a-blondel's EA Nation Server. Code: [network and online](../systems/network-online.md).

### B3Mod
[B3Mod](https://github.com/Nahelam/B3Mod) ([page](https://nahelam.github.io/b3ps2mod/)) is a mod menu
(SELECT) whose menu system was rewritten by hand from a **Burnout Dominator prototype's debug menu**.
It adds a replay system with five player cameras and three AI cameras, car switching and a free camera.
Technically it loads its code at **`0x02000000`, above the PS2's 32 MB**, so it needs PCSX2's 128 MB
option, and hooks a call at `0x00100208` in the start-up code to install itself. Versions for
SLES-52585 and SLUS-21050.

## Every mod, with its US addresses

"After `X`" names the nearest named retail function before the address; the address can also be in an
unnamed function after it. "Words of new code" are instructions the patch adds in free memory
(mostly `0x000B3000`–`0x000B4FFF`).

### Development and debug

| Mod | What it does | US addresses changed |
|---|---|---|
| [Development menu](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Development%20Menu/SLUS-21050/BEBF8793_dev_menu.pnach) | Reveals a hidden development menu under EXTRAS, with a working Unlock All | `0x004E0568` |
| [Car Viewer](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Car%20Viewer/SLUS-21050_BEBF8793_car_viewer.pnach) | Starts the Car Viewer debug mode left in the game (L2+R2+SQUARE in the rewards garage) | `0x004DFE48`<br>`0x004DE0CC`<br>`0x004DE0D0`<br>`0x004DE0D8`<br>+8 more<br>197 words of new code |
| [Debug: body hulls](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_debug_body_hulls.pnach) | Draws the vehicles' collision hulls | `0x002BED08` (after `CB3PhysicsManagerDebug::Construct`) |
| [Debug: collision world](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_debug_collision_world.pnach) | Draws the world collision geometry ("leaf" mode and track rendering in comments) | `0x002BED24` (after `CB3PhysicsManagerDebug::Construct`) |
| [Debug: intervals](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_debug_intervals.pnach) | Draws debug intervals | `0x002BED10` (after `CB3PhysicsManagerDebug::Construct`) |
| [Debug: near miss](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_debug_near_miss.pnach) | Draws near-miss detection data | `0x002F0380` (after `CB3TrafficDebug::Construct`)<br>`0x002F0384` (after `CB3TrafficDebug::Construct`) |
| [Debug: traffic lanes](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_debug_traffic_lanes.pnach) | Draws the traffic lanes | `0x002F0380` (after `CB3TrafficDebug::Construct`)<br>`0x002F0384` (after `CB3TrafficDebug::Construct`)<br>`0x002EFE00` (after `CB3TrafficDebug::RenderNearMissData`)<br>`0x002EFE04` (after `CB3TrafficDebug::RenderNearMissData`)<br>+258 more |
| [Debug: traffic spatial triggers](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_debug_traffic_spatial_triggers.pnach) | Draws traffic spatial triggers | `0x002F0388` (after `CB3TrafficDebug::Construct`) |
| [Draw checkpoints](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_draw_checkpoints.pnach) | Draws every checkpoint on the track | `0x0014EA84` (after `CB3GameData::Draw`) |
| [Show AI drivers' names](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_ai_drivers_names.pnach) | Draws the rival drivers' names | `0x00153C24` (after `CB3RacePosition::DrawPositionMarker`) |
| [Pause gameplay](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_toggle_pause_gameplay.pnach) | R2+Up / R2+Down freezes the simulation (for screenshots with the free camera) | `0x004EB1E0` |
| [AI drives the player car](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_toggle_ai_controlled_player_car.pnach) | D-pad down hands the player car to the AI | `0x001BD614` (after `CB3PlayerCarPhysics::GetDrivingControls`)<br>18 words of new code |
| [Force LOD](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_force_lod.pnach) | Forces one level of detail, 0-4 (4 the most detailed) | `0x00151ABF` (after `CB3RaceCar::Draw`)<br>`0x00151B78` (after `CB3RaceCar::Draw`) |

### Crashes and physics

| Mod | What it does | US addresses changed |
|---|---|---|
| [Crash Breaker Expansion](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Crash%20Breaker%20Expansion/SLUS-21050_BEBF8793_crashbreaker_expansion.pnach) | Crash Breaker in every mode, hitting AI and players, counting as aftertouch takedowns, with a HUD prompt | `0x001BB9B8` (after `CB3PlayerCarPhysics::GetCrashingDrivingControls`)<br>`0x001BEA14` (after `CB3RaceCarPhysics::DoCrashBreaker`)<br>`0x001B2C90` (after `CB3PhysicsManager::DoCrashBreaker`)<br>`0x001B2C94` (after `CB3PhysicsManager::DoCrashBreaker`)<br>+17 more<br>364 words of new code |
| [Crash Breaker in all modes](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_crashbreaker_in_all_modes.pnach) | R2 sets off a Crash Breaker in any mode (traffic only) | `0x001BB9B8` (after `CB3PlayerCarPhysics::GetCrashingDrivingControls`)<br>`0x001BFCAC` (after `CB3RaceCarPhysics::StartCrashing`)<br>`0x001BFCBC` (after `CB3RaceCarPhysics::StartCrashing`)<br>`0x001BFCC0` (after `CB3RaceCarPhysics::StartCrashing`) |
| [Crash on demand](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_crash_on_demand.pnach) | SELECT crashes the player car | `0x001BD1E4` (after `CB3PlayerCarPhysics::GetDrivingControls`)<br>`0x001BD1E8` (after `CB3PlayerCarPhysics::GetDrivingControls`)<br>`0x001BD1EC` (after `CB3PlayerCarPhysics::GetDrivingControls`)<br>14 words of new code |
| [Crazy AI Physics](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Crazy%20AI%20Physics/SLUS-21050_BEBF8793_crazy_ai_physics.pnach) | AI cars think their wheels are always on the ground; three variants | `0x001AC478` (after `CB3CollidingBody::Update`)<br>`0x001C2FE8` (after `CB3RaceCarPhysics::ResetOnTrack`)<br>`0x001CDD48` (after `CB3VehiclePhysics::UpdateSuspension`)<br>`0x001C4D00` (after `CB3RaceCarPhysics::Update`)<br>42 words of new code |
| [Deformation scale](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_deformation_scale.pnach) | Sets the vehicle deformation impulse scale (default 1.2) | `0x003DE2F0`<br>`0x003DE434`<br>6 words of new code |
| [Drive through walls](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_drive_through_walls.pnach) | Walls and barriers stop colliding (AI too) | `0x001C5486` (after `CB3RaceCarPhysics::DoDrivingWorldCollision`) |
| [Kamikaze traffic, clean](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_kamikaze_traffic_clean.pnach) | Traffic no longer enters its crashing state | `0x00161FAC` (after `CB3TrafficParam::CalcSpeed`) |
| [Moon jump](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_moon_jump.pnach) | D-pad up lifts the car | `0x001BDE40` (after `CB3PlayerCarPhysics::Update`)<br>17 words of new code |
| [No crash camera](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_disable_crash_camera.pnach) | Keeps the normal camera when crashing | `0x00357640` (after `CB3PlayerCameraStateCrashMode::Action`) |

### Race rules and modes

| Mod | What it does | US addresses changed |
|---|---|---|
| [Standing start](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_standing_start.pnach) | Forces standing starts in offline modes | `0x00135174` (after `CB3OnePlayerStage::Render`) |
| [Road Rage AI in races](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_road_rage_ai.pnach) | Rivals drive with Road Rage behaviour in normal races | `0x00134344` (after `CB3StageLogic::GetAIMode`) |
| [Burnout points in Road Rage](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_road_rage_burnout_points.pnach) | Non-takedown Burnout points count in Road Rage | `0x0038C024` (after `CB3OfflineRoadRageLogic::GetScoreModeFlags`) |
| [Road Rage rivals number](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_road_rage_choose_rivals_number.pnach) | Adds the number of rivals to the Road Rage options | `0x0030C460` (after `CB3MenuChoices::RequestOnePlayerGameMode`)<br>`0x0030C464` (after `CB3MenuChoices::RequestOnePlayerGameMode`)<br>`0x00432CB8`<br>`0x00432594` |
| [Road Rage time limit](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_road_rage_time_limit.pnach) | Time limit in single-event Road Rage (default 180 s) | `0x0038C514` (after `CB3OfflineRoadRageLogic::OnWorldPrepared`)<br>`0x001A0D20` (after `CB3HUDManager::PrepareNormalComponents`)<br>12 words of new code |
| [Props in Road Rage](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_road_rage_props.pnach) | Enables track props in Road Rage | `0x001B9F60` (after `CB3PhysicsManager::Prepare`)<br>`0x002F9A44` (after `CGt2dObjectParagraph::Prepare`) |
| [Choose rivals' cars](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_rivals_car_selection.pnach) | Pick the rivals' cars in the garage before a single event | `0x0030C460` (after `CB3MenuChoices::RequestOnePlayerGameMode`)<br>`0x0030C464` (after `CB3MenuChoices::RequestOnePlayerGameMode`)<br>`0x00432CB8`<br>`0x00432594`<br>+5 more<br>84 words of new code |
| [Heavyweights always available](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_heavyweights_always_available.pnach) | Heavyweight class always selectable in the garage (original SLUS patch by escape209) | `0x01E8EE94` |
| [No automatic event ending](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_disable_auto_event_ending.pnach) | Stops very long events from ending themselves | `0x0019A7D4` (after `CB3World::Update`)<br>`0x0038B178` (after `CB3OfflineBurningLapLogic::OnWorldPrepared`) |
| [No idle check](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_disable_idle_check.pnach) | Stops the pause menu opening after 5 minutes idle | `0x003954E8` (after `CB3OfflineStageLogic::Update`) |
| [Traffic seed](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_traffic_seed_modifier.pnach) | Changes the offline traffic generation seed | `0x001632C0` (after `CB3TrafficSystem::ResetMemberVariables`)<br>`0x001632C8` (after `CB3TrafficSystem::ResetMemberVariables`)<br>`0x001632DC` (after `CB3TrafficSystem::ResetMemberVariables`)<br>2 words of new code |
| [Disable traffic](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_disable_traffic.pnach) | No traffic | `0x0055D7FB` |
| [Tuk-tuks everywhere](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_tuk-tuks_everywhere.pnach) | Turns every non-traffic car into a tuk-tuk | `0x004859EC`<br>`0x004859F0`<br>`0x004859F4`<br>`0x004859F8`<br>+4 more |
| [Manual transmission](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_manual_transmission.pnach) | L2 shifts down, R2 shifts up | `0x001C78F4` (after `CB3Transmission::Prepare`) |
| [Horn](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_horn.pnach) | Restores the horn volume; CIRCLE or R3 honks | `0x0028CDD0` (after `CB3SoundRaceCar::UpdateHorn`)<br>`0x0028CDE8` (after `CB3SoundRaceCar::UpdateHorn`) |
| [Headlights while honking](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_headlights_hold.pnach) | Headlights on while the horn button is held | `0x001C4934` (after `CB3RaceCarPhysics::Update`)<br>8 words of new code |
| [Permanent headlights](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_perma_headlights.pnach) | All race cars keep their headlights on | `0x001C4930` (after `CB3RaceCarPhysics::Update`)<br>`0x001C4934` (after `CB3RaceCarPhysics::Update`)<br>`0x001C4940` (after `CB3RaceCarPhysics::Update`) |

### HUD and display

| Mod | What it does | US addresses changed |
|---|---|---|
| [Disable HUD](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_disable_hud.pnach) | Hides the HUD | `0x001A07AA` (after `CB3HUDManager::Render`) |
| [Lap timer in races](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_race_lap_timer.pnach) | Adds a lap timer to races | `0x001A035C` (after `CB3HUD::GetAlignPos`)<br>`0x001A0BC0` (after `CB3HUDManager::PrepareNormalComponents`)<br>`0x001A0BC4` (after `CB3HUDManager::PrepareNormalComponents`)<br>34 words of new code |
| [Lap timer in Road Rage](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_road_rage_lap_timer.pnach) | Adds a lap timer to Road Rage | `0x001A035C` (after `CB3HUD::GetAlignPos`)<br>`0x001A0CEC` (after `CB3HUDManager::PrepareNormalComponents`)<br>31 words of new code |
| [Race distance counter](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_race_distance_counter.pnach) | Shows the distance to the other drivers instead of the score | `0x0064E6F0`<br>`0x001A0B54` (after `CB3HUDManager::PrepareNormalComponents`)<br>`0x001A0C08` (after `CB3HUDManager::PrepareNormalComponents`)<br>`0x003CAD8C` (after `CB3HUDScoreList::PrepareScoreListObject`)<br>+4 more<br>73 words of new code |
| [Race distance counter (widescreen)](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_race_distance_counter_ws.pnach) | The same, for use with widescreen patches | `0x0064E6F0`<br>`0x001A0B54` (after `CB3HUDManager::PrepareNormalComponents`)<br>`0x001A0C08` (after `CB3HUDManager::PrepareNormalComponents`)<br>`0x003CAD8C` (after `CB3HUDScoreList::PrepareScoreListObject`)<br>+4 more<br>73 words of new code |
| [Third-person rear view](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_third_person_rear_view.pnach) | A rear view from the chase camera | `0x002E832C` (after `CB3PlayerCameraStateInGame::Action`)<br>`0x002E85E8` (after `CB3PlayerCameraStateInGame::Action`)<br>`0x002E863C` (after `CB3PlayerCameraStateInGame::Action`)<br>`0x002E870C` (after `CB3PlayerCameraStateInGame::Action`)<br>+1 more<br>29 words of new code |
| [Partial mirror mode](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_partial_mirror_mode.pnach) | Mirrors the picture (controls stay normal) | `0x0019EFA4` (after `CB3GraphicsManagerBase::Construct`) |
| [Vertical split screen](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_vertical_split_screen.pnach) | Splits two-player vertically | `0x0019EFAC` (after `CB3GraphicsManagerBase::Construct`) |
| [Graphics](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Graphics/SLUS-21050_BEBF8793_graphics.pnach) | Native widescreen, progressive scan menu, 60 fps menus and FMVs, 60 fps crashes | `0x00436584`<br>`0x00437758`<br>`0x00130DD8` (after `CB3VideoManager::PrepareVideo`)<br>`0x00130DDC` (after `CB3VideoManager::PrepareVideo`)<br>+5 more |
| [Glass cars](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_glass_cars.pnach) | Ghostly see-through vehicles | `0x0021FD24` (after `CB3VehicleRenderer::RenderObject`)<br>`0x0021F96C` (after `CB3VehicleRenderer::RenderDeformedObject`) |
| [Chrome vehicles](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_chrome_vehicles.pnach) | Chrome paint on every vehicle | `0x0021FEA0` (after `CB3VehicleRenderer::RenderObject`)<br>`0x0021FAE8` (after `CB3VehicleRenderer::RenderDeformedObject`)<br>5 words of new code |
| [Extra particles (full)](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_render_extra_particles_full.pnach) | Renders other vehicles' particle effects while driving | `0x00261E6C` |
| [Extra particles (partial)](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_render_extra_particles_partial.pnach) | The same, partly | `0x00261EB8` |

### Start-up, sound and online

| Mod | What it does | US addresses changed |
|---|---|---|
| [Boot Boost](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Boot%20Boost/SLUS-21050_BEBF8793_boot_boost.pnach) | Skips the intro videos and boot menus; choose video mode, start screen, profile autoload | `0x0021B78E` (after `CB3Settings::Construct`)<br>`0x00228180` (after `CB3GraphicsManager::Construct`)<br>`0x0021B786` (after `CB3Settings::Construct`)<br>`0x003217E4` (after `CB3LoadingScreenPage::Update`)<br>+20 more |
| [Single Event DJ](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/SLUS-21050_BEBF8793_single_event_dj.pnach) | Enables the DJ in Single Event menus, intros and races | `0x003FA044`<br>`0x003F9A38`<br>`0x003F8CAC` |
| [No vehicle sounds](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Various/SLUS-21050/BEBF8793_disable_vehicle_sounds.pnach) | Silences vehicles (for drivable-traffic mods on hardware) | `0x002EEFF2` (after `CB3SoundRaceCarManager::RequestRaceCar`) |
| [Online](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Online/PCSX2/SLUS-21050_BEBF8793_online.pnach) | Burnout Online revival: server URL, DNAS bypass, SSL, UPnP, lobby and buddies options | `0x004BAEE8`<br>`0x00406E88`<br>`0x00406E8C`<br>`0x004C6E60`<br>+27 more |

## Other folders

| Folder | What |
|---|---|
| [Demo](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Demo) | Mods for the demo discs (SLED-52597, SLPM-60246, SLUS-29113): disable demo mode, 480p, manual transmission, Eliminator |
| PAL, Japanese, Korean versions | Most mods also exist for SLES-52584, SLES-52585, SLPM-65719, SLKA-25206 and SLAJ-25053 |

## Credits

Everything on this page is Nahelam's work, except the heavyweights patch (originally by escape209) and
the online server emulators (/dev/ghostline, a-blondel). See [related resources](../related-projects.md).
