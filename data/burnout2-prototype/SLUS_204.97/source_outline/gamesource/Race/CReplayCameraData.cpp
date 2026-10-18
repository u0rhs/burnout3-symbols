// I:\Burnout 2 Code\gamesource\Race\CReplayCameraData.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static char kacReplayTriggerDataVersion[12];  // 0x002D5F20
static char kacRaceIntroDataVersion[12];  // 0x002D5F30
static char kacCameraExt[5];  // 0x00310660
CGame gGame;  // 0x003186E0
CTrack gTrack;  // 0x0031F280
CAsyncLoadManager gAsyncLoadManager;  // 0x00439330
char gCameraBuffer[262144];  // 0x00840000

// ---- functions ----

// 0x0023FC60-0x0023FFE4 (900 bytes), lines 101-281
// Reset__17CReplayCameraDataFv
int CReplayCameraData::Reset()
{
    // param CReplayCameraData *this  (in $s3)
    {   // 0x0023FC60-0x0023FFE4
        void *lpEndOfBuffer;  // in $v1
        CReplayTriggerHeader *lpReplayHeader;  // in $s0
        CRaceIntroHeader *lpIntroHeader;  // in $v0
    }
}

// 0x0023FFF0-0x002400B0 (192 bytes), lines 43-83
// Setup__17CReplayCameraDataF9EGameMode
int CReplayCameraData::Setup()
{
    // param CReplayCameraData *this  (in $s0)
    {   // 0x0023FFF0-0x002400B0
        int lnGameMode;  // in $s1
        char lacFileName[256];  // $sp+240
        char lacTrackName[64];  // $sp+176
        char lacBasePath[128];  // $sp+48
    }
}

