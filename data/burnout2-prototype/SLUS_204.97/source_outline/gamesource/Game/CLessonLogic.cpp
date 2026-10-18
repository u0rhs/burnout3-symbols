// I:\Burnout 2 Code\gamesource\Game\CLessonLogic.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
/* vtable */ void *CLessonLogic::__vtable[];  // 0x0030F580
CInGameCamera CCamera::mInGameCamera;  // 0x00310830
float CTimer::mrGameTimestepSeconds;  // 0x00310898
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x001F4510-0x001F4518 (8 bytes), lines 381-381
// Destroy__12CLessonLogicFv
void CLessonLogic::Destroy()
{
    {   // 0x001F4510-0x001F4518
    }
}

// 0x001F4520-0x001F4528 (8 bytes), lines 376-376
// Shutdown__12CLessonLogicFv
void CLessonLogic::Shutdown()
{
    {   // 0x001F4520-0x001F4528
    }
}

// 0x001F4530-0x001F453C (12 bytes), lines 370-370
// RaceFinished__12CLessonLogicFv
void CLessonLogic::RaceFinished()
{
    {   // 0x001F4530-0x001F453C
    }
}

// 0x001F4540-0x001F45A8 (104 bytes), lines 355-364
// Update__12CLessonLogicFi
void CLessonLogic::Update(int lbOverrideReplaying)
{
    // param CLessonLogic *this  (in $s1)
    // param int lbOverrideReplaying  (in $v0)
    {   // 0x001F4540-0x001F45A8
    }
}

// 0x001F45B0-0x001F4B04 (1364 bytes), lines 118-338
// UpdateCameras__12CLessonLogicFiiii
void CLessonLogic::UpdateCameras(int lnPlayerIndex, int lnRaceCarIndex, int lbOverridePause, int lbOverrideUpdate)
{
    // param CLessonLogic *this  (in $fp)
    // param int lnPlayerIndex  (in $s4)
    // param int lnRaceCarIndex  (in $s5)
    // param int lbOverridePause  (in $s7)
    // param int lbOverrideUpdate  ($sp+168)
    {   // 0x001F45B0-0x001F4B04
        RwRGBA white;  // $sp+172
        CRaceCar *lpRaceCar;  // in $s1
        CCamera *lpCamera;  // in $s0
        int labSwitched[2];  // at 0x003105E0
    }
}

// 0x001F4B10-0x001F4B8C (124 bytes), lines 90-98
// Reset__12CLessonLogicFv
void CLessonLogic::Reset()
{
    // param CLessonLogic *this  (in $s1)
    {   // 0x001F4B10-0x001F4B8C
    }
}

// 0x001F4B90-0x001F4B98 (8 bytes), lines 73-73
// Setup__12CLessonLogicFv
void CLessonLogic::Setup()
{
    // param CLessonLogic *this  (in $v0)
    {   // 0x001F4B90-0x001F4B98
    }
}

// 0x001F4BA0-0x001F4BA8 (8 bytes), lines 55-55
// Init__12CLessonLogicFv
void CLessonLogic::Init()
{
    // param CLessonLogic *this  (in $v0)
    {   // 0x001F4BA0-0x001F4BA8
    }
}

