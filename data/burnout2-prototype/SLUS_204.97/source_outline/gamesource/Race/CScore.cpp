// I:\Burnout 2 Code\gamesource\Race\CScore.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
float CScore::marPlayerCarValues[22];  // 0x002B9CC0
float CScore::marTrafficCarValues[26];  // 0x002B9D20
float CTimer::mrGameTimestepSeconds;  // 0x00310898
static float krMinDamageImpulse;  // 0x00310F48
float CScore::mrNearMissChainTimeValue;  // 0x00310F4C
float CScore::mrNearMissChainSpeedValue;  // 0x00310F50
float CScore::mrAirMinimumDistanceValue;  // 0x00310F54
float CScore::mrDriftMinimumDistanceValue;  // 0x00310F58
float CScore::mrOncomingMinimumDistanceValue;  // 0x00310F5C
float CScore::mrTopSpeedMinimumDistanceValue;  // 0x00310F60
float CScore::mrNearMissScoreValue;  // 0x00310F64
float CScore::mrNearMissChainBonusValue;  // 0x00310F68
float CScore::mrAirDistancePerBurnValue;  // 0x00310F6C
float CScore::mrDriftDistancePerBurnValue;  // 0x00310F70
float CScore::mrOncomingDistancePerBurnValue;  // 0x00310F74
float CScore::mrTopSpeedDistancePerBurnValue;  // 0x00310F78
float CScore::mrOncomingMinimumSpeedValue;  // 0x00310F7C
float CScore::mrDriftMinimumSpeedValue;  // 0x00310F80
float CScore::mrNearMissMinimumSpeedValue;  // 0x00310F84
float CScore::mrBurnToPointsRatioValue;  // 0x00310F88
float CScore::mrBurnLostInCrashValue;  // 0x00310F8C
float CScore::mrPursuitDamageValue;  // 0x00310F90
float CScore::mrPursuitDamageThreshold;  // 0x00310F94
float CScore::mrPursuitDamageMaxPerHit;  // 0x00310F98
float CScore::mrPursuitReleaseDistance;  // 0x00310F9C
int _gbValuesRegistered;  // 0x00310FA0
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CChaseLogic gChaseLogic;  // 0x003B0E00
CRenderer gRenderer;  // 0x00434440
signed char CScore::maanCheckpointLapCounts[20][9];  // 0x004871E0

// ---- functions ----

// 0x002415C0-0x002415F0 (48 bytes), lines 2142-2146
// GetCheckPointTime__6CScoreCFii
float CScore::GetCheckPointTime(int lnLap, int lnCheckPointFromStart) const
{
    // param CScore *this  (in $v0)
    // param int lnLap  (in $v0)
    // param int lnCheckPointFromStart  (in $v0)
    {   // 0x002415C0-0x002415F0
        int lnFirstCheckpoint;  // in $v0
    }
}

// 0x002415F0-0x00241688 (152 bytes), lines 2112-2113
// GetCrashScore__6CScoreFv
float CScore::GetCrashScore()
{
    // param CScore *this  (in $v0)
    {   // 0x002415F0-0x00241688
    }
}

// 0x00241690-0x00241698 (8 bytes), lines 2076-2076
// GetTotalCrashBonusMultiplier__6CScoreFv
unsigned int CScore::GetTotalCrashBonusMultiplier()
{
    // param CScore *this  (in $v0)
    {   // 0x00241690-0x00241698
    }
}

// 0x002416A0-0x00241744 (164 bytes), lines 1965-2002
// GetCrashCarValue__6CScoreFUi
float CScore::GetCrashCarValue(unsigned int lunCrashCar)
{
    // param CScore *this  (in $v0)
    // param unsigned int lunCrashCar  (in $v0)
    {   // 0x002416A0-0x00241744
        int lnCarID;  // in $v0
        float lrValue;  // optimised away
    }
}

// 0x00241750-0x002418F8 (424 bytes), lines 1607-1657
// HandleNonFatalCollision__6CScoreFP8CRaceCarf
void CScore::HandleNonFatalCollision(CRaceCar *lpRaceCar)
{
    // param CScore *this  (in $s0)
    // param CRaceCar *lpRaceCar  (in $v0)
    {   // 0x00241750-0x002418F8
        RwV3d lCollPointVel;  // $sp+32
    }
}

// 0x00241900-0x002419D4 (212 bytes), lines 1548-1586
// HandleNonFatalCollision__6CScoreFP15CTrafficVehicle
void CScore::HandleNonFatalCollision(CTrafficVehicle *pTraffic)
{
    // param CScore *this  (in $v0)
    // param CTrafficVehicle *pTraffic  (in $v0)
    {   // 0x00241900-0x002419D4
        int lnCount;  // in $a3
    }
}

// 0x002419E0-0x00241B9C (444 bytes), lines 1460-1519
// HandleNearMiss__6CScoreFP8CRaceCarP15CTrafficVehicleii
void CScore::HandleNearMiss(CRaceCar *pRaceCar, CTrafficVehicle *pTraffic, int lbTrigger, int lnLeftCentreRight)
{
    // param CScore *this  (in $s5)
    // param CRaceCar *pRaceCar  (in $s4)
    // param CTrafficVehicle *pTraffic  (in $s3)
    // param int lbTrigger  (in $s2)
    // param int lnLeftCentreRight  (in $s1)
    {   // 0x002419E0-0x00241B9C
        int lnCount;  // in $a1
    }
}

// 0x00241BA0-0x00241F38 (920 bytes), lines 1264-1435
// HandleCheckpoint__6CScoreFii
void CScore::HandleCheckpoint(int lnAddTimeMs)
{
    // param CScore *this  (in $s1)
    // param int lnAddTimeMs  (in $s0)
    {   // 0x00241BA0-0x00241F38
        int lnCount;  // in $a0
        float lapTime;  // optimised away
        int lnLap;  // in $v0
    }
}

// 0x00241F40-0x002420D8 (408 bytes), lines 1196-1240
// HandleCrashReset__6CScoreFv
void CScore::HandleCrashReset()
{
    // param CScore *this  (in $s0)
    {   // 0x00241F40-0x002420D8
        unsigned int lunCar;  // in $a3
    }
}

// 0x002420E0-0x00242170 (144 bytes), lines 1149-1179
// HandleCrashTrafficCar__6CScoreFP14CCollidingBodyP15CTrafficVehicle14EB2VehicleType
void CScore::HandleCrashTrafficCar(CTrafficVehicle *pTraffic)
{
    // param CScore *this  (in $v0)
    // param CTrafficVehicle *pTraffic  (in $v0)
    {   // 0x002420E0-0x00242170
        CCollidingBody *pBody2;  // in $a3
        unsigned int lunCar;  // in $a1
        int lnCount;  // in $a1
    }
}

// 0x00242170-0x002422F4 (388 bytes), lines 1061-1124
// HandleCrashPlayerCar__6CScoreFP14CCollidingBodyP14CCollidingBody6ECarID
void CScore::HandleCrashPlayerCar(CCollidingBody *pBody1, CCollidingBody *pBody2)
{
    // param CScore *this  (in $v0)
    // param CCollidingBody *pBody1  (in $v0)
    // param CCollidingBody *pBody2  (in $v0)
    {   // 0x00242170-0x002422F4
        unsigned int lunCar;  // in $t1
        int lnCount;  // in $t1
    }
}

// 0x00242300-0x00243018 (3352 bytes), lines 652-1030
// Update__6CScoreFv
void CScore::Update()
{
    // param CScore *this  (in $s5)
    {   // 0x00242300-0x00243018
        int lnNewRacingLaneNode;  // in $a0
        RwV3d *lpCarPos;  // in $v0
        int lnCount;  // in $v1
        float lrDistanceThisFrame;  // optimised away
    }
}

// 0x00243020-0x00243064 (68 bytes), lines 570-587
// UpdateLaps__FiiPiPi
static void UpdateLaps(int lnStartLaneNode, int lnCurrentLaneNode, int *lpnLastLaneNode, int *lpnLapsCompleted)
{
    // param int lnStartLaneNode  (in $v0)
    // param int lnCurrentLaneNode  (in $v0)
    // param int *lpnLastLaneNode  (in $v0)
    // param int *lpnLapsCompleted  (in $v0)
    {   // 0x00243020-0x00243064
    }
}

// 0x00243070-0x0024313C (204 bytes), lines 508-544
// UpdateGapDistance__6CScoreFv
void CScore::UpdateGapDistance()
{
    // param CScore *this  (in $s1)
    {   // 0x00243070-0x0024313C
        CScore *lpScore;  // in $v0
        float lrTargetDist;  // $sp+64
        float lrReferenceDist;  // optimised away
        RwV3d *lpCarPos;  // in $v0
    }
}

// 0x00243140-0x002435F0 (1200 bytes), lines 234-492
// Reset__6CScoreFv
void CScore::Reset()
{
    // param CScore *this  (in $s1)
    {   // 0x00243140-0x002435F0
        int lnFinishSector;  // $sp+76
        int lnFinishSegment;  // $sp+72
        RwV3d *lpFinishPos;  // in $s2
        int lnFinishSector;  // $sp+68
        int lnFinishSegment;  // $sp+64
        RwV3d *lpFinishPos;  // in $s2
        int lnLap;  // in $v1
        int lnCount;  // in $a1
    }
}

// 0x002435F0-0x00243730 (320 bytes), lines 169-217
// Init__6CScoreFP8CRaceCar
void CScore::Init(CRaceCar *lpRaceCar)
{
    // param CScore *this  (in $s1)
    // param CRaceCar *lpRaceCar  (in $s0)
    {   // 0x002435F0-0x00243730
    }
}

