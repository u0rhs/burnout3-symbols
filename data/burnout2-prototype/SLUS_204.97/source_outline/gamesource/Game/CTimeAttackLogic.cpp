// I:\Burnout 2 Code\gamesource\Game\CTimeAttackLogic.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
/* vtable */ void *CTimeAttackLogic::__vtable[];  // 0x0030F770
float CTimer::mrGameTimestepSeconds;  // 0x00310898
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CGhostCar gGhostCar;  // 0x00375C80
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x00201660-0x00201724 (196 bytes), lines 574-601
// ResetFastestLap__16CTimeAttackLogicFP6CScore
void CTimeAttackLogic::ResetFastestLap(CScore *lpScore)
{
    // param CTimeAttackLogic *this  (in $v0)
    // param CScore *lpScore  (in $v0)
    {   // 0x00201660-0x00201724
        int lnTriggerGroup;  // in $t0
        int lnMaxCheckpoint;  // in $t2
        int lnCheckpoint;  // in $t1
        int lnFastestCheckpoint;  // in $t0
    }
}

// 0x00201730-0x0020176C (60 bytes), lines 501-509
// Destroy__16CTimeAttackLogicFv
void CTimeAttackLogic::Destroy()
{
    // param CTimeAttackLogic *this  (in $v0)
    {   // 0x00201730-0x0020176C
        CScore *lpFinishedScore;  // in $s0
        CPlayerCar *lpCar;  // in $v0
    }
}

// 0x00201770-0x002017BC (76 bytes), lines 475-486
// Shutdown__16CTimeAttackLogicFv
void CTimeAttackLogic::Shutdown()
{
    // param CTimeAttackLogic *this  (in $s1)
    {   // 0x00201770-0x002017BC
        CScore *lpFinishedScore;  // in $s0
        CPlayerCar *lpCar;  // in $v0
    }
}

// 0x002017C0-0x00201894 (212 bytes), lines 406-460
// Reset__16CTimeAttackLogicFv
void CTimeAttackLogic::Reset()
{
    // param CTimeAttackLogic *this  (in $s0)
    {   // 0x002017C0-0x00201894
        int lnMaxCheckpoint;  // in $t1
        int lnCheckpoint;  // in $t0
        int lnFastestCheckpoint;  // in $a3
        int lnFirstCheckpoint;  // in $v0
        unsigned int lunLapTime;  // in $a0
        CScore *lpFinishedScore;  // in $v0
        CScore *lpScore;  // in $a2
        CPlayerCar *lpCar;  // in $v0
    }
}

// 0x002018A0-0x002018AC (12 bytes), lines 387-388
// RaceFinished__16CTimeAttackLogicFv
void CTimeAttackLogic::RaceFinished()
{
    // param CTimeAttackLogic *this  (in $v0)
    {   // 0x002018A0-0x002018AC
    }
}

// 0x002018B0-0x00201CE0 (1072 bytes), lines 204-370
// Update__16CTimeAttackLogicFi
void CTimeAttackLogic::Update()
{
    // param CTimeAttackLogic *this  (in $s4)
    {   // 0x002018B0-0x00201CE0
        int lnTriggerGroup;  // in $a2
        int lnFastestCheckpoint;  // in $a0
        int lbWasFinished;  // in $s1
        CScore *lpScore;  // in $s0
    }
}

// 0x00201CE0-0x00201DD8 (248 bytes), lines 145-186
// UpdateCameras__16CTimeAttackLogicFiiii
void CTimeAttackLogic::UpdateCameras(int lnPlayerIndex, int lnRaceCarIndex)
{
    // param CTimeAttackLogic *this  (in $s0)
    // param int lnPlayerIndex  (in $v0)
    // param int lnRaceCarIndex  (in $v0)
    {   // 0x00201CE0-0x00201DD8
        SRCCollSphere sphere;  // $sp+4576
        int lnCurrentUnit;  // in $v0
        CInterpolatedRaceCar *lpGhostCar;  // in $s0
        CCrashReplayTempStorage lTemp;  // $sp+48
        CPlayerCar *lpPlayerCar;  // in $s1
    }
}

// 0x00201DE0-0x00201E60 (128 bytes), lines 96-125
// Setup__16CTimeAttackLogicFv
void CTimeAttackLogic::Setup()
{
    // param CTimeAttackLogic *this  (in $s1)
    {   // 0x00201DE0-0x00201E60
        CScore *lpFinishedScore;  // in $s0
        CPlayerCar *lpCar;  // in $v0
        unsigned int lunLapTime;  // in $v1
    }
}

// 0x00201E60-0x00201EA0 (64 bytes), lines 69-81
// Init__16CTimeAttackLogicFv
void CTimeAttackLogic::Init()
{
    // param CTimeAttackLogic *this  (in $v0)
    {   // 0x00201E60-0x00201EA0
        unsigned int lunLapTime;  // in $a1
    }
}

