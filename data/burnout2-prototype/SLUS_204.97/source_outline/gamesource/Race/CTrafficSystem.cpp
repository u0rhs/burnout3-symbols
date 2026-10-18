// I:\Burnout 2 Code\gamesource\Race\CTrafficSystem.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *gapacTrafficModelNames[26];
float gaarTargetParamPosMtx[4][4];  // 0x002D6880
float gaarTargetParamVelMtx[4][4];  // 0x002D6900
float CTimer::mrGameTimestepSeconds;  // 0x00310898
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CGameSound gSound;  // 0x004391D0
CTrafficParam *gapNextTrafficParam[16000];  // 0x00475AB0

// ---- functions ----

// 0x0024F000-0x0024F0B0 (176 bytes), lines 1638-1653
// AddToDeadTrafficParamList__14CTrafficSystemFP13CTrafficParam
void CTrafficSystem::AddToDeadTrafficParamList(CTrafficParam *lpTrafficParam)
{
    // param CTrafficSystem *this  (in $s0)
    // param CTrafficParam *lpTrafficParam  (in $s1)
    {   // 0x0024F000-0x0024F0B0
    }
}

// 0x0024F0B0-0x0024F154 (164 bytes), lines 1561-1576
// AddToDeadTrafficList__14CTrafficSystemFP15CTrafficVehicle
void CTrafficSystem::AddToDeadTrafficList(CTrafficVehicle *lpTrafficVehicle)
{
    // param CTrafficSystem *this  (in $v0)
    // param CTrafficVehicle *lpTrafficVehicle  (in $v0)
    {   // 0x0024F0B0-0x0024F154
    }
}

// 0x0024F160-0x0024FF08 (3496 bytes), lines 1288-1492
// Generate__14CTrafficSystemF14EB2VehicleType14EB2VehicleTypeP5CLaneffi
CTrafficVehicle *CTrafficSystem::Generate(EB2VehicleType leNewVehicleType, EB2VehicleType leNewTrailerVehicleType, CLane *lpLane, float lrParamAlong, float lrSpeedModifier, int lbHotspotGenerated)
{
    // param CTrafficSystem *this  (in $s6)
    // param EB2VehicleType leNewVehicleType  (in $s3)
    // param EB2VehicleType leNewTrailerVehicleType  (in $s5)
    // param CLane *lpLane  (in $s0)
    // param float lrParamAlong  (optimised away)
    // param float lrSpeedModifier  (optimised away)
    // param int lbHotspotGenerated  (in $s4)
    {   // 0x0024F160-0x0024FF08
        CTrafficVehicle *lpCabVehicle;  // in $s0
        int i;  // in $s7
        float lrParamAcross;  // $sp+160
        int lnRandom;  // in $v0
        CTrafficParam *lpTrafficParam;  // in $v0
        CTrafficVehicle *lpNewTrailerVehicle;  // in $v0
        CTrafficVehicle *lpNewVehicle;  // in $v0
    }
}

// 0x0024FF10-0x00250488 (1400 bytes), lines 773-1264
// GenerateVehicleType__14CTrafficSystemF13EVehicleClassP14EB2VehicleTypeP14EB2VehicleType
void CTrafficSystem::GenerateVehicleType(EVehicleClass leVehicleClass, EB2VehicleType *lpeVehicleType, EB2VehicleType *lpeTrailerVehicleType)
{
    // param EVehicleClass leVehicleClass  (in $v0)
    // param EB2VehicleType *lpeVehicleType  (in $s1)
    // param EB2VehicleType *lpeTrailerVehicleType  (in $s0)
    {   // 0x0024FF10-0x00250488
        unsigned int luRandom;  // in $a0
        unsigned int luNumVehiclesInClass;  // in $s4
        EB2VehicleType leEmergencyVehicleType;  // in $v1
        EB2VehicleType leTrailerVehicleType;  // in $s3
        EB2VehicleType leVehicleType;  // in $s2
        int i;  // in $a3
    }
}

// 0x00250490-0x0025133C (3756 bytes), lines 304-752
// Update__14CTrafficSystemFv
void CTrafficSystem::Update()
{
    // param CTrafficSystem *this  (in $s4)
    {   // 0x00250490-0x0025133C
        CTrafficVehicle *lpVehicle;  // in $a2
        CTrafficVehicle *lpVehicle;  // in $a3
        CTrafficVehicle *lpVehicle;  // in $t4
        float lrDP;  // $sp+896
        RwV3d lDiff;  // $sp+880
        CPlayerCar *pCar;  // in $v0
        int lnNumTrafficSpecials;  // in $v0
        int lnNumTrafficEngines;  // in $v0
        int lnNumTrafficHorns;  // in $v0
        CTrafficSoundData laTrafficSpecials[2];  // $sp+784
        CTrafficSoundData laTrafficHorns[2];  // $sp+688
        CTrafficSoundData laTrafficEngines[4];  // $sp+496
        unsigned short luValidIndex16;  // in $s3
        unsigned int lxValidTraffic;  // in $s5
        unsigned int lxValidParam;  // in $s5
        unsigned int lxFlag;  // in $s2
        CTrafficParam *lpTrafficParam;  // in $s1
        CTrafficVehicle *lpTrafficVehicle;  // in $s1
        int lnIndex;  // in $s0
        int lnTypeIndex;  // in $a0
        TrafficRaceCarInfo laRaceCarInfo[4];  // $sp+112
        int j;  // in $t0
        int i;  // in $a2
    }
}

// 0x00251340-0x00251370 (48 bytes), lines 282-285
// SwitchTrafficOff__14CTrafficSystemFv
void CTrafficSystem::SwitchTrafficOff()
{
    // param CTrafficSystem *this  (in $s0)
    {   // 0x00251340-0x00251370
    }
}

// 0x00251370-0x002517E4 (1140 bytes), lines 156-264
// Reset__14CTrafficSystemFv
int CTrafficSystem::Reset()
{
    // param CTrafficSystem *this  (in $s0)
    {   // 0x00251370-0x002517E4
        unsigned short j;  // in $a3
        unsigned short i;  // in $a0
    }
}

