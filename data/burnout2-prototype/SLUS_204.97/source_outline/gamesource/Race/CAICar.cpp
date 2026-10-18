// I:\Burnout 2 Code\gamesource\Race\CAICar.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *gaacStageNames[22];
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
static RwV3d kYAxis;  // 0x002D4788
static RwV3d kZeroVector;  // 0x002D4798
static unsigned int gValueTableAIAggression[22];  // 0x002D47B0
static unsigned int gValueTableAIAltRoute[22];  // 0x002D4810
static unsigned int gValueTableAIDifficulty[22];  // 0x002D4870
static unsigned int gValueTableAIDriftUsage[22];  // 0x002D48D0
static unsigned int gValueTableAIOncomingUsage[22];  // 0x002D4930
static unsigned int gValueTableAIPursuitDifficulty[22];  // 0x002D4990
static unsigned int gValueTableGPkrDesiredDirectionScaleFactor[22];  // 0x002D49F0
static unsigned int gValueTableCHAMPPlayerPoints[22];  // 0x002D4A50
static unsigned int gValueTableCHAMPAI1Points[22];  // 0x002D4AB0
static unsigned int gValueTableCHAMPAI2Points[22];  // 0x002D4B10
static unsigned int gValueTableCHAMPAI3Points[22];  // 0x002D4B70
static unsigned int gValueTableCHAMPAI1BoostStartRace3[22];  // 0x002D4BD0
static unsigned int gValueTableCHAMPAI2BoostStartRace3[22];  // 0x002D4C30
static unsigned int gValueTableCHAMPAI3BoostStartRace3[22];  // 0x002D4C90
static unsigned int gValueTableCHAMPAI1BoostStartRace2[22];  // 0x002D4CF0
static unsigned int gValueTableCHAMPAI2BoostStartRace2[22];  // 0x002D4D50
static unsigned int gValueTableCHAMPAI3BoostStartRace2[22];  // 0x002D4DB0
static unsigned int gValueTableCHAMPAI1BoostStartRace1[22];  // 0x002D4E10
static unsigned int gValueTableCHAMPAI2BoostStartRace1[22];  // 0x002D4E70
static unsigned int gValueTableCHAMPAI3BoostStartRace1[22];  // 0x002D4ED0
static unsigned int gValueTableCHAMPAI1BoostStartRace4[22];  // 0x002D4F30
static unsigned int gValueTableCHAMPAI2BoostStartRace4[22];  // 0x002D4F90
static unsigned int gValueTableCHAMPAI3BoostStartRace4[22];  // 0x002D4FF0
static unsigned int gValueTableCHAMPAI1BoostStartRace6[22];  // 0x002D5050
static unsigned int gValueTableCHAMPAI2BoostStartRace6[22];  // 0x002D50B0
static unsigned int gValueTableCHAMPAI3BoostStartRace6[22];  // 0x002D5110
static unsigned int gValueTableCHAMPAI1BoostStartRace5[22];  // 0x002D5170
static unsigned int gValueTableCHAMPAI2BoostStartRace5[22];  // 0x002D51D0
static unsigned int gValueTableCHAMPAI3BoostStartRace5[22];  // 0x002D5230
static unsigned int gValueTableCHAMPAI1BoostStartRace7[22];  // 0x002D5290
static unsigned int gValueTableCHAMPAI2BoostStartRace7[22];  // 0x002D52F0
static unsigned int gValueTableCHAMPAI3BoostStartRace7[22];  // 0x002D5350
static RwV3d kUpVector;  // 0x002D53A8
static RwRGBAReal white;  // 0x002D53C0
static RwRGBAReal shadow;  // 0x002D53D0
/* vtable */ void *CAICar::__vtable[];  // 0x0030F840
static int AIDebugMask;  // 0x00310640
float CTimer::mrGameTimestepSeconds;  // 0x00310898
static float krMaxOutRangeDecreaseSpeed;  // 0x00310D8C
static float krProfileToTime;  // 0x00310D90
float krMinDriftRadius;  // 0x00310D94
float krMaxDriftRadius;  // 0x00310D98
static float krOORSmallGapCrippleMaxSpeedFactor;  // 0x00310D9C
static float krOORLargeGapCrippleMaxSpeedFactor;  // 0x00310DA0
static float krMinResetSpeed;  // 0x00310DA4
static float krMaxDiffAngleDesDir;  // 0x00310DA8
static float krCarSpacing;  // 0x00310DAC
static float krPursuitOORCrippleMaxSpdFac;  // 0x00310DB0
static float krPursuitBehindSpeedBoost;  // 0x00310DB4
static float krPursuitMaxVulnerableDistBehind;  // 0x00310DB8
static float krMaxVulnerableDist;  // 0x00310DBC
static float krPursuitMaxPlayerCarDistCollide;  // 0x00310DC0
static float krPursuitMaxOutRangeIncreaseSpeed;  // 0x00310DC4
static float krCarAheadSpacing;  // 0x00310DC8
static float krMaxPlayerCarDistCollide;  // 0x00310DCC
static float krMinPlayerCarDistCollide;  // 0x00310DD0
float krMinCollideImpactCutOff;  // 0x00310DD4
float krMaxCollideImpactCutOff;  // 0x00310DD8
static float krPursuitResetBehindDistance;  // 0x00310DDC
static float krSequenceChangePeriod;  // 0x00310DE0
static float krTotalFlashSequenceLength;  // 0x00310DE4
static float krPursuitCatchupAheadDistance;  // 0x00310DE8
static float krPursuitCatchupAheadDistanceRange;  // 0x00310DEC
static float krPursuitDistanceAheadToSlowSuspect;  // 0x00310DF0
static float krPursuitDistanceAheadToSlowSuspectRange;  // 0x00310DF4
static float krPursuitRamSpeedupDuration;  // 0x00310DF8
static float krPursuitRamSpeedupDurationRange;  // 0x00310DFC
static float krPursuitMinDistToSlowCarAhead;  // 0x00310E00
static float krPursuitMaxDistToSlowCarAhead;  // 0x00310E04
static float krPursuitSpeedDiffToSlowCarAhead;  // 0x00310E08
static float krPursuitSpeedDiffToSlowCarAheadRange;  // 0x00310E0C
static float krPursuitSlightDecreaseMaxSpd;  // 0x00310E10
static float krPursuitAggression;  // 0x00310E14
static float krPrintDesiredPosition;  // 0x00310E18
static float krOutputDesiredDirection;  // 0x00310E1C
static float krOutputLastDesiredDirection;  // 0x00310E20
static float krPrintTrafficImpact;  // 0x00310E24
int CAICar::_mbValuesRegistered;  // 0x00310E28
float CAIDriver::_mrMaxSpeed;  // 0x00310E68
float CAIDriver::_mrMinSpeed;  // 0x00310E6C
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CFrontEnd gFrontEnd;  // 0x003A7630
CChaseLogic gChaseLogic;  // 0x003B0E00
CDebugManager gDebugManager;  // 0x003B2D30
CGameSound gSound;  // 0x004391D0
RaceCarPhysicsAttributes gaCRaceCarPhysicsAttribs[22];  // 0x0043C720
CAIProfile CAICar::_mAIProfile[22];  // 0x00458C80
float kaarTotalChampionshipPointsWanted[][4];  // 0x004866D0
float kaarBoostStart[][7][4];  // 0x00486830

// ---- functions ----

// 0x0021F2C0-0x0021F44C (396 bytes), lines 3001-3068
// UpdateResetSequence__6CAICarFv
void CAICar::UpdateResetSequence()
{
    // param CAICar *this  (in $s0)
    {   // 0x0021F2C0-0x0021F44C
        float lrSequenceTime;  // optimised away
    }
}

// 0x0021F450-0x0021F458 (8 bytes), lines 2851-2851
// GetMatrix__6CAICarFv
RwMatrixTag *CAICar::GetMatrix()
{
    // param CAICar *this  (in $v0)
    {   // 0x0021F450-0x0021F458
    }
}

// 0x0021F460-0x0021F7D0 (880 bytes), lines 2796-2830
// AIDebugDrawSegment__F8eAIDEBUGPC8CRaceCarPC8LaneDataUsiii
void AIDebugDrawSegment(eAIDEBUG Module, CRaceCar *pCar, LaneData *lpLaneData, unsigned short lnSegmentNumber, int r, int g, int b)
{
    // param eAIDEBUG Module  (in $s4)
    // param CRaceCar *pCar  (in $s3)
    // param LaneData *lpLaneData  (in $s2)
    // param unsigned short lnSegmentNumber  (in $v0)
    // param int r  (in $s1)
    // param int g  (in $s5)
    // param int b  (in $s6)
    {   // 0x0021F460-0x0021F7D0
        int lnRHSFwdIndex;  // $sp+176
        int lnRHSIndex;  // in $v0
        int lnLHSFwdIndex;  // $sp+160
        int lnLHSIndex;  // in $v0
        RwV3d LinePoints[2];  // $sp+224
    }
}

// 0x0021F7D0-0x0021F8FC (300 bytes), lines 2771-2794
// AIDebugPrintText__F8eAIDEBUGPC8CRaceCarffPce
void AIDebugPrintText(eAIDEBUG Module, CRaceCar *pCar, float x, float y, char *Format)
{
    // param eAIDEBUG Module  (in $v0)
    // param CRaceCar *pCar  (in $s1)
    // param float x  (optimised away)
    // param float y  (optimised away)
    // param char *Format  ($sp+392)
    {   // 0x0021F7D0-0x0021F8FC
        C2dFont *lpFont;  // in $s0
        char *Args;  // in $v0
        char Out[256];  // $sp+64
    }
}

// 0x0021F900-0x002207BC (3772 bytes), lines 2724-2769
// AIDebugDrawCrossNoZ__F8eAIDEBUGPC8CRaceCarPC5RwV3dff
void AIDebugDrawCrossNoZ(eAIDEBUG Module, CRaceCar *pCar, RwV3d *Pos, float Size, float lrColour)
{
    // param eAIDEBUG Module  (in $s2)
    // param CRaceCar *pCar  (in $s1)
    // param RwV3d *Pos  (in $s0)
    // param float Size  (optimised away)
    // param float lrColour  ($sp+480)
    {   // 0x0021F900-0x002207BC
    }
}

// 0x002207C0-0x00220A34 (628 bytes), lines 2703-2722
// AIDebugDrawCrossNoZ__F8eAIDEBUGPC8CRaceCarPC5RwV3dfiii
void AIDebugDrawCrossNoZ(eAIDEBUG Module, CRaceCar *pCar, RwV3d *Pos, float Size, int r, int g, int b)
{
    // param eAIDEBUG Module  (in $s4)
    // param CRaceCar *pCar  (in $s5)
    // param RwV3d *Pos  (in $s3)
    // param float Size  (optimised away)
    // param int r  ($sp+188)
    // param int g  ($sp+184)
    // param int b  ($sp+180)
    {   // 0x002207C0-0x00220A34
        RwV3d Line[2];  // $sp+192
    }
}

// 0x00220A40-0x00220C68 (552 bytes), lines 2632-2678
// AIDebugDrawLineNoZ__F8eAIDEBUGPC8CRaceCarPC5RwV3dPC5RwV3df
void AIDebugDrawLineNoZ(eAIDEBUG Module, CRaceCar *pCar, RwV3d *Start, RwV3d *End, float lrColour)
{
    // param eAIDEBUG Module  (in $s3)
    // param CRaceCar *pCar  (in $s2)
    // param RwV3d *Start  (in $s1)
    // param RwV3d *End  (in $s0)
    // param float lrColour  (optimised away)
    {   // 0x00220A40-0x00220C68
        int bZed;  // $sp+108
    }
}

// 0x00220C70-0x00220D3C (204 bytes), lines 2594-2615
// AIDebugDrawLine__F8eAIDEBUGPC8CRaceCarPC5RwV3dPC5RwV3diii
void AIDebugDrawLine(eAIDEBUG Module, CRaceCar *pCar, RwV3d *Start, RwV3d *End, int r, int g, int b)
{
    // param eAIDEBUG Module  (in $v0)
    // param CRaceCar *pCar  (in $v0)
    // param RwV3d *Start  (in $v0)
    // param RwV3d *End  (in $v0)
    // param int r  (in $v0)
    // param int g  (in $v0)
    // param int b  (in $v0)
    {   // 0x00220C70-0x00220D3C
        RwRGBA *_col;  // in $t3
        RwRGBA *_col;  // in $v1
        RxObjSpace3DVertex RWVerts[2];  // $sp+16
    }
}

// 0x00220D40-0x00220E00 (192 bytes), lines 2570-2591
// AIDebugMessage__F8eAIDEBUGPce
void AIDebugMessage(eAIDEBUG Module, char *Format)
{
    // param eAIDEBUG Module  (in $s0)
    // param char *Format  ($sp+560)
    {   // 0x00220D40-0x00220E00
        char *Args;  // in $v0
        char Temp[256];  // $sp+288
        char Out[256];  // $sp+32
        char *ModuleNames[4];  // at 0x002B9C60
    }
}

// 0x00220E00-0x00221064 (612 bytes), lines 2497-2539
// DrawDebug__6CAICarF11EDebugModes
void CAICar::DrawDebug(EDebugModes CurrentMode)
{
    // param CAICar *this  (in $s0)
    // param EDebugModes CurrentMode  (in $v0)
    {   // 0x00220E00-0x00221064
        RwV3d LinePoints[2];  // $sp+48
    }
}

// 0x00221070-0x002212C0 (592 bytes), lines 2429-2481
// UpdateProfileVars__6CAICarFv
void CAICar::UpdateProfileVars()
{
    // param CAICar *this  (in $v0)
    {   // 0x00221070-0x002212C0
    }
}

// 0x002212C0-0x00221528 (616 bytes), lines 2353-2409
// ResetVarsFromProfile__6CAICarFv
void CAICar::ResetVarsFromProfile()
{
    // param CAICar *this  (in $v0)
    {   // 0x002212C0-0x00221528
    }
}

// 0x00221530-0x00221CD4 (1956 bytes), lines 1604-2320
// RegisterValues__6CAICarFv
void CAICar::RegisterValues()
{
    {   // 0x00221530-0x00221CD4
        int lnNumCars;  // in $t1
        int lnNumRaces;  // in $t0
        int lnStage;  // in $v1
        int lnCar;  // in $a3
    }
}

// 0x00221CE0-0x00222DA8 (4296 bytes), lines 1151-1587
// UpdateOutOfRange__6CAICarFv
void CAICar::UpdateOutOfRange()
{
    // param CAICar *this  (in $s4)
    {   // 0x00221CE0-0x00222DA8
        RwMatrixTag lMat;  // $sp+160
        int lnRefCarIndex;  // in $a1
        CRaceCar *lpRefCar;  // in $v0
        float lrMaxOutRangeIncreaseSpeed;  // optimised away
        float lrAngle;  // $sp+304
        float lrFwdFrac;  // $sp+304
        float lrDist;  // optimised away
        int rc;  // in $v0
        int lnRHSIndex;  // in $v0
        int lnLHSIndex;  // in $v0
        int lbNearest;  // in $s3
        unsigned short lunTmpSegIndex16;  // in $s5
        unsigned short lunLaneIndex16;  // in $s6
        unsigned short lunSegIndex16;  // in $s2
        RwV3d lDesiredDirection;  // $sp+288
        CLane *lpLane;  // in $s1
        RwV3d lBackVec;  // $sp+272
        RwV3d lRightVec;  // $sp+256
        float lrSpeedDiff;  // optimised away
        RwV3d lLeftVec;  // $sp+240
        RwMatrixTag *lpCarMatrix;  // in $s0
        RwV3d lFwdVec;  // $sp+224
    }
}

// 0x00222DB0-0x00222E08 (88 bytes), lines 1111-1135
// SetAIInRange__6CAICarFv
void CAICar::SetAIInRange()
{
    // param CAICar *this  (in $s0)
    {   // 0x00222DB0-0x00222E08
        float Speed;  // optimised away
    }
}

// 0x00222E10-0x00222E50 (64 bytes), lines 1088-1095
// SetAIOutOfRange__6CAICarFv
void CAICar::SetAIOutOfRange()
{
    // param CAICar *this  (in $v0)
    {   // 0x00222E10-0x00222E50
    }
}

// 0x00222E50-0x002231FC (940 bytes), lines 876-1044
// Update__6CAICarFv
void CAICar::Update()
{
    // param CAICar *this  (in $s0)
    {   // 0x00222E50-0x002231FC
    }
}

// 0x00223200-0x00223B84 (2436 bytes), lines 479-860
// UpdateAttributes__6CAICarFv
void CAICar::UpdateAttributes()
{
    // param CAICar *this  (in $s4)
    {   // 0x00223200-0x00223B84
        float lrSpeedDiff;  // optimised away
        float lrMinDistSq;  // optimised away
        float lrMaxDistSq;  // $sp+240
        CRaceCar *pCar;  // in $a2
        RwV3d pos;  // $sp+224
        int numUnits;  // in $v1
        int trackCurrentUnit;  // in $a0
        int currentUnit;  // in $v0
        int bFatalCollisionOn;  // in $s2
        int bCollisionOn;  // in $s6
        int bOutOfPlayerRange[2];  // $sp+216
        int bOutOfPlayerRangeCombined;  // $sp+176
        int bInPlayerRange;  // in $s1
        float AIDistance;  // optimised away
        int c;  // in $s0
    }
}

// 0x00223B90-0x00223BCC (60 bytes), lines 451-463
// Shutdown__6CAICarFv
int CAICar::Shutdown()
{
    // param CAICar *this  (in $s0)
    {   // 0x00223B90-0x00223BCC
    }
}

// 0x00223BD0-0x00223E24 (596 bytes), lines 377-432
// ResetAfterCrash__6CAICarFi
int CAICar::ResetAfterCrash(int lnNodesAhead)
{
    // param CAICar *this  (in $s0)
    // param int lnNodesAhead  (in $v0)
    {   // 0x00223BD0-0x00223E24
        RwMatrixTag *lpCarMatrix;  // in $a0
    }
}

// 0x00223E30-0x00223FB0 (384 bytes), lines 269-359
// Reset__6CAICarFP5RwV3dP5RwV3d
int CAICar::Reset(RwV3d *StartPos, RwV3d *StartDir)
{
    // param CAICar *this  (in $s0)
    // param RwV3d *StartPos  (in $v0)
    // param RwV3d *StartDir  (in $v0)
    {   // 0x00223E30-0x00223FB0
    }
}

// 0x00223FB0-0x0022403C (140 bytes), lines 209-248
// Setup__6CAICarFii
int CAICar::Setup(int lnIndex, int lbIsFrontEnd)
{
    // param CAICar *this  (in $s0)
    // param int lnIndex  (in $v0)
    // param int lbIsFrontEnd  (in $v0)
    {   // 0x00223FB0-0x0022403C
    }
}

// 0x00224040-0x00224074 (52 bytes), lines 159-169
// Init__6CAICarFv
void CAICar::Init()
{
    // param CAICar *this  (in $s0)
    {   // 0x00224040-0x00224074
    }
}

