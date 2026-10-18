// I:\Burnout 2 Code\gamesource\Race\CTrack.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *gaacTrackNames[32];
int _intersectionCallback(SRCCollLine *, SRCCollisionTriangle *, void *);  // 0x0024A710
static TrackWeatherParamsTag _gaWeatherParams[30];  // 0x002D5FF0
ECheat CChampionshipProgression::_meActiveCheat;  // 0x00310300
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440
char gGDBuffer[2097152];  // 0x01E00000

// ---- functions ----

// 0x0024A510-0x0024A708 (504 bytes), lines 831-878
// TestLineWithCollisionWorld__6CTrackFiPfP5RwV3dP5RwV3dP5RwV3dPi
int CTrack::TestLineWithCollisionWorld(int lnCollisionWorldIndex, float *pDistance, RwV3d *pStart, RwV3d *pEnd, RwV3d *pNormal, int *lpTag)
{
    // param CTrack *this  (in $v0)
    // param int lnCollisionWorldIndex  (in $v0)
    // param float *pDistance  (in $s6)
    // param RwV3d *pStart  (in $s4)
    // param RwV3d *pEnd  (in $s3)
    // param RwV3d *pNormal  (in $s2)
    // param int *lpTag  (in $s7)
    {   // 0x0024A510-0x0024A708
        int lastUnit;  // in $v0
        int firstUnit;  // in $s5
        float length;  // $sp+224
        WorldCollData collData;  // $sp+176
        SRCCollLine line;  // $sp+144
        RwV3d v1;  // $sp+208
    }
}

// 0x0024A710-0x0024A758 (72 bytes), lines 811-819
// _intersectionCallback__FP11SRCCollLineP20SRCCollisionTrianglePv
static int _intersectionCallback(SRCCollisionTriangle *pCollTriangle, void *pData)
{
    // param SRCCollisionTriangle *pCollTriangle  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x0024A710-0x0024A758
        WorldCollData *pColldata;  // in $v0
    }
}

// 0x0024A760-0x0024A7D0 (112 bytes), lines 707-741
// Update__6CTrackFv
void CTrack::Update()
{
    // param CTrack *this  (in $s1)
    {   // 0x0024A760-0x0024A7D0
        int i;  // in $s0
    }
}

// 0x0024A7D0-0x0024AB54 (900 bytes), lines 563-683
// Reset__6CTrackFi
int CTrack::Reset()
{
    // param CTrack *this  (in $s1)
    {   // 0x0024A7D0-0x0024AB54
        int i;  // in $s0
    }
}

// 0x0024AB60-0x0024ABFC (156 bytes), lines 515-541
// Shutdown__6CTrackFv
void CTrack::Shutdown()
{
    // param CTrack *this  (in $s0)
    {   // 0x0024AB60-0x0024ABFC
    }
}

// 0x0024AC00-0x0024AFEC (1004 bytes), lines 322-493
// Setup__6CTrackF19ETrafficSystemTypes
void CTrack::Setup(ETrafficSystemTypes leTrafficSystemType)
{
    // param CTrack *this  (in $s1)
    // param ETrafficSystemTypes leTrafficSystemType  (in $s0)
    {   // 0x0024AC00-0x0024AFEC
        signed char lnVariation8;  // in $s3
        EGameModeUniqueTypes leModeType;  // in $s2
        char lacFilename[200];  // $sp+160
        char sTrackName[20];  // $sp+128
        char sTrackBasePath[20];  // $sp+96
        TrackWeatherParamsTag *lpWeatherParams;  // in $v1
    }
}

// 0x0024AFF0-0x0024B0C8 (216 bytes), lines 243-303
// GetFileNames__6CTrackFPcPc
void CTrack::GetFileNames(char *sTrackPath, char *sTrackName)
{
    // param CTrack *this  (in $v0)
    // param char *sTrackPath  (in $v0)
    // param char *sTrackName  (in $s0)
    {   // 0x0024AFF0-0x0024B0C8
        int c;  // in $t0
        t_TRACKPATH TrackPaths[30];  // $sp+48
    }
}

// 0x0024B0D0-0x0024B140 (112 bytes), lines 170-186
// Init__6CTrackFv
void CTrack::Init()
{
    // param CTrack *this  (in $s0)
    {   // 0x0024B0D0-0x0024B140
    }
}

