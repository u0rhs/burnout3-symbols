// I:\Burnout 2 Code\gamesource\Race\CGameData.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static char kacGameDataStartVersion[32];  // 0x002D5B00
/* vtable */ void *CTriggerTarget::__vtable[];  // 0x0030EA58
/* vtable */ void *CCheckPoint::__vtable[];  // 0x0030F880
/* vtable */ void *CAICheckPoint::__vtable[];  // 0x0030F890
StartData *gpStartData;  // 0x00310EE0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CAsyncLoadManager gAsyncLoadManager;  // 0x00439330
CTrigger gTriggerBuffer[256];  // 0x00459170
CTriggerGroup gTriggerGroupBuffer[128];  // 0x0045A970
CCheckPoint gCheckPointBuffer[20];  // 0x0045B770
CHotspot gHotspotBuffer[128];  // 0x0045B9A0
CTrafficLight gTrafficLightBuffer[256];  // 0x004617A0
CTrafficLightGroup gTrafficLightGroupBuffer[128];  // 0x004657A0
CAICheckPoint gAICheckPointBuffer[32];  // 0x004661A0
CTrafficGenerator gTrafficGeneratorBuffer[2048];  // 0x004664A0
CLane gaRacingLaneBuffer[1];  // 0x004744A0
CLane gaAILaneBuffer[32];  // 0x004744B0
CLane gaTrafficLaneBuffer[320];  // 0x004746B0
CTrafficParam *gapNextTrafficParam[16000];  // 0x00475AB0

// ---- functions ----

// 0x0022B640-0x0022C4F4 (3764 bytes), lines 240-771
// Reset__9CGameDataFv
int CGameData::Reset()
{
    // param CGameData *this  (in $v0)
    {   // 0x0022B640-0x0022C4F4
        CornerData *lpCornerDataBlk;  // $sp+400
        unsigned int luTriggerIndex;  // in $a1
        int lnNumTriggerGroups;  // in $v1
        int lnNumCheckpoints;  // in $v0
        TrafficFillerData *lpTrafficFillerBlk;  // in $s5
        TrafficGeneratorData *lpTrafficGeneratorBlk;  // in $s4
        TrafficHullData *lpTrafficHullBlk;  // in $fp
        TrackData *lpTrackBlk;  // in $a1
        ReplayCamera *lpReplayCameraBlk;  // $sp+384
        TrafficLightGroupData *lpTrafficLightGroupBlk;  // $sp+368
        TrafficLightData *lpTrafficLightBlk;  // $sp+352
        HotspotData *lpHotspotBlk;  // $sp+336
        TriggerGroupData *lpTriggerGroupBlk;  // $sp+320
        TriggerData *lpTriggerBlk;  // $sp+304
        LaneData *lpTrafficLaneBlk;  // $sp+288
        TrafficSegmentData *lpTrafficSegmentDataBlk;  // $sp+272
        SegmentDimensions *lpTrafficSegmentDimensionsBlk;  // $sp+256
        SegmentNodeData *lpTrafficSegmentNodeDataBlk;  // $sp+240
        LaneData *lpAILaneBlk;  // $sp+224
        AISegmentData *lpAISegmentDataBlk;  // $sp+208
        SegmentDimensions *lpAISegmentDimensionsBlk;  // $sp+192
        SegmentNodeData *lpAISegmentNodeDataBlk;  // $sp+176
        LaneData *lpRacingLaneBlk;  // in $s3
        RacingSegmentData *lpRacingSegmentDataBlk;  // in $s6
        SegmentDimensions *lpRacingSegmentDimensionsBlk;  // in $s7
        SegmentNodeData *lpRacingSegmentNodeDataBlk;  // $sp+160
        RwV4d *lpNodeBlk;  // in $s2
        GameDataHeader *lpHeader;  // in $s1
        int index;  // in $v0
        int j;  // in $v0
        int i;  // in $v0
    }
}

// 0x0022C500-0x0022C5A4 (164 bytes), lines 127-160
// Setup__9CGameDataF20EGameModeUniqueTypesScPv
int CGameData::Setup(EGameModeUniqueTypes leType, signed char lnVariant8, void *lpBuffer)
{
    // param CGameData *this  (in $s3)
    // param EGameModeUniqueTypes leType  (in $s2)
    // param signed char lnVariant8  (in $s1)
    // param void *lpBuffer  (in $s0)
    {   // 0x0022C500-0x0022C5A4
        char lacFileName[256];  // $sp+272
        char lacTrackName[64];  // $sp+208
        char lacBasePath[128];  // $sp+80
    }
}

