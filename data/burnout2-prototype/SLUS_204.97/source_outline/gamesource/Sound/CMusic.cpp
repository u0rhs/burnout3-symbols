// I:\Burnout 2 Code\gamesource\Sound\CMusic.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char gFilenames[32][64];  // 0x002B9350
static unsigned short _ganVolumes16[7];  // 0x002B9B80
RwaUUID rwaWAVEFORMAT_VAG;  // 0x002DA0B0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
unsigned int _rwaG_rwaSPU2WaveRamLog2BlockSize;  // 0x00310C60
unsigned int _rwaG_rwaSPU2WaveRamLog2NumEntries;  // 0x00310C64
unsigned int _rwaG_rwaSPU2WaveRamAddressMask;  // 0x00310C68
float CMusic::mrMusicInGameVolumeValue;  // 0x00310C6C
float CMusic::mrMusicBoostingVolumeValue;  // 0x00310C70
float CMusic::mrMusicReplayVolumeValue;  // 0x00310C74
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CGameSound gSound;  // 0x004391D0
char gFilename[64];  // 0x00457580
static unsigned int sbuf[16];  // 0x004575C0
static _sif_client_data cd;  // 0x00457600
static B2StreamInitParams _gInitParams;  // 0x00457640

// ---- functions ----

// 0x00200650-0x00200684 (52 bytes), lines 728-731
// RegisterDBValues__6CMusicFv
void CMusic::RegisterDBValues()
{
    {   // 0x00200650-0x00200684
    }
}

// 0x00200690-0x00200B40 (1200 bytes), lines 562-720
// Update__6CMusicFv
void CMusic::Update()
{
    // param CMusic *this  (in $s1)
    {   // 0x00200690-0x00200B40
        float lrIntroSetVolume;  // optimised away
        float lrBoostingSetVolume;  // optimised away
        float lrMainSetVolume;  // optimised away
        int _lbFEUpdated;  // at 0x00310C78
        signed char init;  // at 0x00310C7C
    }
}

// 0x00200B40-0x00200C68 (296 bytes), lines 524-557
// SetStatus__6CMusicF12EMusicStatus
void CMusic::SetStatus(EMusicStatus leStatus)
{
    // param CMusic *this  (in $s1)
    // param EMusicStatus leStatus  (in $s0)
    {   // 0x00200B40-0x00200C68
    }
}

// 0x00200C70-0x00200CBC (76 bytes), lines 507-511
// Resume__6CMusicFv
void CMusic::Resume()
{
    // param CMusic *this  (in $v0)
    {   // 0x00200C70-0x00200CBC
    }
}

// 0x00200CC0-0x00200D0C (76 bytes), lines 498-502
// Pause__6CMusicFv
void CMusic::Pause()
{
    // param CMusic *this  (in $v0)
    {   // 0x00200CC0-0x00200D0C
    }
}

// 0x00200D10-0x00200E58 (328 bytes), lines 454-493
// PlayIntro__6CMusicFv
void CMusic::PlayIntro()
{
    // param CMusic *this  (in $s0)
    {   // 0x00200D10-0x00200E58
    }
}

// 0x00200E60-0x00201050 (496 bytes), lines 410-450
// PlayMusic__6CMusicFv
void CMusic::PlayMusic()
{
    // param CMusic *this  (in $s0)
    {   // 0x00200E60-0x00201050
    }
}

// 0x00201050-0x00201160 (272 bytes), lines 381-405
// Stop__6CMusicFv
void CMusic::Stop()
{
    // param CMusic *this  (in $s0)
    {   // 0x00201050-0x00201160
    }
}

// 0x00201160-0x0020140C (684 bytes), lines 335-376
// Reset__6CMusicFv
void CMusic::Reset()
{
    // param CMusic *this  (in $s0)
    {   // 0x00201160-0x0020140C
    }
}

// 0x00201410-0x002014CC (188 bytes), lines 313-329
// Shutdown__6CMusicFv
void CMusic::Shutdown()
{
    // param CMusic *this  (in $s0)
    {   // 0x00201410-0x002014CC
    }
}

// 0x002014D0-0x002014D8 (8 bytes), lines 308-308
// Setup__6CMusicFv
void CMusic::Setup()
{
    {   // 0x002014D0-0x002014D8
    }
}

// 0x002014E0-0x00201660 (384 bytes), lines 233-289
// Init__6CMusicFv
void CMusic::Init()
{
    // param CMusic *this  (in $s3)
    {   // 0x002014E0-0x00201660
        RwaWaveFormat lSrcFormat;  // $sp+96
        char channel;  // in $v0
        int lnCount;  // in $s0
    }
}

