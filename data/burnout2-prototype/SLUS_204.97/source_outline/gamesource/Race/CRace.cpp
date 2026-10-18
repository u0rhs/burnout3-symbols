// I:\Burnout 2 Code\gamesource\Race\CRace.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int kanDefaultColourIndices[22][4];  // 0x002C1720
static ECarID kaeNormalAICarSet[7];  // 0x002D5B50
static ECarID kaeCSAICarSet[13];  // 0x002D5B70
static ECarID kaeSpecialAICarSet[20];  // 0x002D5BB0
int gnFrameCount;  // 0x0031086C
unsigned int CTimer::mnFrames;  // 0x00310894
float CTimer::mrGameTimestepSeconds;  // 0x00310898
int CTimer::mbSloMo;  // 0x003108A0
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CAICar gaAICars[4];  // 0x00362A80
CGhostCar gGhostCar;  // 0x00375C80
CCollidingTrafficPhysics gaCrashingTraffic[32];  // 0x00376630
CPropPhysics gaCollidingProps[64];  // 0x00390630
CTimeAttackLogic gTimeAttackLogic;  // 0x003B0E30
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440
CGameSound gSound;  // 0x004391D0
CMusic gMusic;  // 0x004392A0
CAsyncLoadManager gAsyncLoadManager;  // 0x00439330
CInput gInput;  // 0x00439880
CRaceReplayCamera CCamera::mRaceReplayCamera;  // 0x0043DCA0
CRaceIntroCamera CCamera::mRaceIntroCamera;  // 0x0043DE60
CSpatiallySortedBodySet gBodies;  // 0x004854B0

// ---- functions ----

// 0x00234950-0x00234A08 (184 bytes), lines 2617-2651
// RemoveCrashingProps__5CRaceFi
void CRace::RemoveCrashingProps(int lnCollisionID)
{
    // param CRace *this  (in $v0)
    // param int lnCollisionID  (in $v0)
    {   // 0x00234950-0x00234A08
        CPropPhysics *lapTemp[64];  // $sp+0
        int lnNum;  // in $a1
        int i;  // in $a2
    }
}

// 0x00234A10-0x00234B3C (300 bytes), lines 2557-2599
// AllocateCrashingProps__5CRaceFv
CPropPhysics *CRace::AllocateCrashingProps()
{
    // param CRace *this  (in $s2)
    {   // 0x00234A10-0x00234B3C
        float lrOldest;  // $sp+80
        int lnOldest;  // in $a1
        int i;  // in $v1
    }
}

// 0x00234B40-0x00234C58 (280 bytes), lines 2500-2540
// RemoveCrashingTraffic__5CRaceFi
void CRace::RemoveCrashingTraffic(int lnCollisionID)
{
    // param CRace *this  (in $s3)
    // param int lnCollisionID  (in $s2)
    {   // 0x00234B40-0x00234C58
        CCollidingTrafficPhysics *lapTemp[32];  // $sp+80
        int lnNum;  // in $a0
        int i;  // in $s0
    }
}

// 0x00234C60-0x00234D14 (180 bytes), lines 2451-2483
// DeallocateCrashingTraffic__5CRaceFP24CCollidingTrafficPhysics
void CRace::DeallocateCrashingTraffic(CCollidingTrafficPhysics *lpCollidingTrafficPhysics)
{
    // param CRace *this  (in $v0)
    // param CCollidingTrafficPhysics *lpCollidingTrafficPhysics  (in $v0)
    {   // 0x00234C60-0x00234D14
        CCollidingTrafficPhysics *lapTemp[32];  // $sp+0
        int lnNum;  // in $a1
        int i;  // in $a2
    }
}

// 0x00234D20-0x00234DD0 (176 bytes), lines 2415-2435
// AllocateCrashingTraffic__5CRaceFi
CCollidingTrafficPhysics *CRace::AllocateCrashingTraffic()
{
    // param CRace *this  (in $s2)
    {   // 0x00234D20-0x00234DD0
        int i;  // in $v1
    }
}

// 0x00234DD0-0x00235268 (1176 bytes), lines 2195-2397
// GenerateRandomAICars__5CRaceFii
void CRace::GenerateRandomAICars(int lnNoPlayers, int lnNoAICars)
{
    // param CRace *this  (in $v0)
    // param int lnNoPlayers  (in $s6)
    // param int lnNoAICars  (in $s5)
    {   // 0x00234DD0-0x00235268
        int j;  // in $t1
        ECarID leCarID;  // in $t3
        RwRGBA *lpColour;  // in $t2
        unsigned int lunColourIndex;  // in $t1
        int lnIndex;  // in $t0
        int i;  // in $t3
        int c;  // in $a3
        CCarData *lpCarData;  // in $v0
        CCarData *lpSecondPlayerCarData;  // in $v0
        ECarID leSecondPlayerCarID;  // in $v1
        ECarID lePlayerCarID;  // in $a1
        int lnSizeAICarSet;  // in $s1
        ECarID *lpeAICarSet;  // in $s0
    }
}

// 0x00235270-0x002357A4 (1332 bytes), lines 1944-2175
// RenderTwoPlayerSS__5CRaceFv
void CRace::RenderTwoPlayerSS()
{
    // param CRace *this  (in $s5)
    {   // 0x00235270-0x002357A4
        RwRGBA black;  // $sp+156
        int labDrawMe[4];  // $sp+128
        int j;  // in $t1
        int i;  // in $a0
        int lnPlayer;  // in $s0
        int lnLastFrameCount;  // at 0x00310EF4
        int lnSwitch;  // at 0x00310EFC
        signed char init;  // at 0x00310F00
        signed char init;  // at 0x00310EF8
    }
}

// 0x002357B0-0x00235998 (488 bytes), lines 1816-1938
// RenderGhostCarReplay__5CRaceFv
void CRace::RenderGhostCarReplay()
{
    // param CRace *this  (in $s1)
    {   // 0x002357B0-0x00235998
    }
}

// 0x002359A0-0x00235DD4 (1076 bytes), lines 1543-1798
// RenderOnePlayer__5CRaceFv
void CRace::RenderOnePlayer()
{
    // param CRace *this  (in $s1)
    {   // 0x002359A0-0x00235DD4
        int labDrawMe[4];  // $sp+64
        int j;  // in $a1
        int i;  // in $v1
    }
}

// 0x00235DE0-0x002363F8 (1560 bytes), lines 1314-1526
// Render__5CRaceFi
void CRace::Render(int lnPlayer)
{
    // param CRace *this  (in $s1)
    // param int lnPlayer  (in $s0)
    {   // 0x00235DE0-0x002363F8
        RwMatrixTag lKojackLightPosition;  // $sp+272
        RwMatrixTag lMatrix;  // $sp+208
        RwMatrixTag lMatrix;  // $sp+144
        RwMatrixTag lMatrix;  // $sp+80
        int lnTest1;  // $sp+348
        int lnAlpha1;  // $sp+344
        CRaceCar *lpPlayerCar;  // in $a0
    }
}

// 0x00236400-0x002369C8 (1480 bytes), lines 1010-1296
// Update__5CRaceFv
void CRace::Update()
{
    // param CRace *this  (in $s3)
    {   // 0x00236400-0x002369C8
        CRaceCarPhysics *lpPhysics;  // in $v0
        int lbAddProps;  // in $v0
        int lnActualWorldUnit;  // in $s2
        int lanAddedUnits[4];  // $sp+128
        int z;  // in $v1
        CVehiclePhysics *lpVehiclePhysics;  // in $s4
        CPlayerCarPhysics *lpPhysics;  // in $v0
        int i;  // in $s0
    }
}

// 0x002369D0-0x00236A8C (188 bytes), lines 936-986
// Shutdown__5CRaceFv
void CRace::Shutdown()
{
    // param CRace *this  (in $s0)
    {   // 0x002369D0-0x00236A8C
        int bSucceeded;  // in $s2
        int i;  // in $s1
    }
}

// 0x00236A90-0x00236F18 (1160 bytes), lines 715-919
// Reset__5CRaceFi
int CRace::Reset(int bThisIsInit)
{
    // param CRace *this  (in $s0)
    // param int bThisIsInit  (in $s1)
    {   // 0x00236A90-0x00236F18
        int i;  // in $s1
    }
}

// 0x00236F20-0x00237048 (296 bytes), lines 652-697
// ResetAfterFatalCollision__5CRaceFi
void CRace::ResetAfterFatalCollision(int collisionID)
{
    // param CRace *this  (in $s4)
    // param int collisionID  (in $s3)
    {   // 0x00236F20-0x00237048
        RwRGBA white;  // $sp+108
        CRaceCar *pCar;  // in $s1
        int i;  // in $s0
    }
}

// 0x00237050-0x0023709C (76 bytes), lines 631-635
// SetAICarIDAndColour__5CRaceFi6ECarIDPC6RwRGBAUi
void CRace::SetAICarIDAndColour(int lnID, ECarID leCarID, RwRGBA *lpColour, unsigned int lunColourIndex)
{
    // param int lnID  (in $v0)
    // param ECarID leCarID  (in $v0)
    // param RwRGBA *lpColour  (in $v0)
    // param unsigned int lunColourIndex  (in $v0)
    {   // 0x00237050-0x0023709C
    }
}

// 0x002370A0-0x00237150 (176 bytes), lines 470-492
// SetNumAICars__5CRaceFi
void CRace::SetNumAICars(int lnNumAI)
{
    // param CRace *this  (in $v0)
    // param int lnNumAI  (in $v0)
    {   // 0x002370A0-0x00237150
        RwRGBA lColourRed;  // $sp+12
        int lunCar;  // in $v1
    }
}

// 0x00237150-0x00237370 (544 bytes), lines 371-452
// SetupCars__5CRaceFv
void CRace::SetupCars()
{
    // param CRace *this  (in $s0)
    {   // 0x00237150-0x00237370
        int j;  // in $a0
        int i;  // in $a3
    }
}

// 0x00237370-0x0023745C (236 bytes), lines 309-366
// SetupNPlayers__5CRaceFi
void CRace::SetupNPlayers(int lnNumPlayers)
{
    // param CRace *this  (in $s1)
    // param int lnNumPlayers  (in $s0)
    {   // 0x00237370-0x0023745C
    }
}

// 0x00237460-0x0023756C (268 bytes), lines 243-290
// Setup__5CRaceFv
void CRace::Setup()
{
    // param CRace *this  (in $s1)
    {   // 0x00237460-0x0023756C
        int i;  // in $s0
    }
}

// 0x00237570-0x00237748 (472 bytes), lines 147-225
// Init__5CRaceFv
void CRace::Init()
{
    // param CRace *this  (in $s1)
    {   // 0x00237570-0x00237748
        RwTexDictionary *pCurrentDict;  // in $s0
        RwRGBA black;  // $sp+60
        RwRGBA white;  // $sp+56
        int i;  // in $s0
    }
}

