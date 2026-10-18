// I:\Burnout 2 Code\gamesource\Race\CPlayerCar.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
/* vtable */ void *CPlayerCar::__vtable[];  // 0x0030F8B0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
float krMinCollideImpactCutOff;  // 0x00310DD4
float krMaxCollideImpactCutOff;  // 0x00310DD8
static float krPursuitStealBoostDuration;  // 0x00310EE8
static float krMaxRollingStartSpeed;  // 0x00310EEC
static float krMinRollingStartSpeed;  // 0x00310EF0
float kr2PSuspectMinDistAhead;  // 0x00310F28
float kr2PSuspectMaxDistAhead;  // 0x00310F2C
float kr2PPoliceMinDistBehind;  // 0x00310F30
float kr2PPoliceMaxDistBehind;  // 0x00310F34
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CFrontEnd gFrontEnd;  // 0x003A7630
CChaseLogic gChaseLogic;  // 0x003B0E00
CGameSound gSound;  // 0x004391D0
CInput gInput;  // 0x00439880

// ---- functions ----

// 0x00232ED0-0x00232ED8 (8 bytes), lines 875-875
// GetMatrix__10CPlayerCarFv
RwMatrixTag *CPlayerCar::GetMatrix()
{
    // param CPlayerCar *this  (in $v0)
    {   // 0x00232ED0-0x00232ED8
    }
}

// 0x00232EE0-0x00232EE8 (8 bytes), lines 850-850
// DrawDebug__10CPlayerCarF11EDebugModes
void CPlayerCar::DrawDebug()
{
    {   // 0x00232EE0-0x00232EE8
    }
}

// 0x00232EF0-0x00232F1C (44 bytes), lines 673-676
// RemoveFromTrack__10CPlayerCarFv
void CPlayerCar::RemoveFromTrack()
{
    // param CPlayerCar *this  (in $v0)
    {   // 0x00232EF0-0x00232F1C
    }
}

// 0x00232F20-0x00233B74 (3156 bytes), lines 439-651
// Update__10CPlayerCarFv
void CPlayerCar::Update()
{
    // param CPlayerCar *this  (in $s6)
    {   // 0x00232F20-0x00233B74
        float lrDistPoliceToSuspect;  // optimised away
        float lrDistPoliceToSuspect;  // optimised away
        CAICar *lpAICar;  // in $v0
    }
}

// 0x002340C0-0x00234138 (120 bytes), lines 384-417
// Shutdown__10CPlayerCarFv
int CPlayerCar::Shutdown()
{
    // param CPlayerCar *this  (in $s0)
    {   // 0x002340C0-0x00234138
    }
}

// 0x00234140-0x00234444 (772 bytes), lines 292-360
// ResetAfterCrash__10CPlayerCarFi
int CPlayerCar::ResetAfterCrash(int nodesAhead)
{
    // param CPlayerCar *this  (in $s1)
    // param int nodesAhead  (in $v0)
    {   // 0x00234140-0x00234444
        float lrDistPoliceToSuspect;  // $sp+48
        float lrStartSpeed;  // $sp+48
        RwMatrixTag *lpCarMatrix;  // in $s0
    }
}

// 0x00234450-0x00234860 (1040 bytes), lines 196-270
// Reset__10CPlayerCarFP5RwV3dP5RwV3d
int CPlayerCar::Reset(RwV3d *startPos, RwV3d *startDir)
{
    // param CPlayerCar *this  (in $s1)
    // param RwV3d *startPos  (in $v0)
    // param RwV3d *startDir  (in $v0)
    {   // 0x00234450-0x00234860
        CAICar *lpAICar;  // in $v0
    }
}

// 0x00234860-0x002348E8 (136 bytes), lines 142-170
// Setup__10CPlayerCarFii
int CPlayerCar::Setup(int lnIndex, int lbIsFrontEnd)
{
    // param CPlayerCar *this  (in $s1)
    // param int lnIndex  (in $v0)
    // param int lbIsFrontEnd  (in $s0)
    {   // 0x00234860-0x002348E8
    }
}

// 0x002348F0-0x0023494C (92 bytes), lines 72-101
// Init__10CPlayerCarFv
void CPlayerCar::Init()
{
    // param CPlayerCar *this  (in $s0)
    {   // 0x002348F0-0x0023494C
    }
}

