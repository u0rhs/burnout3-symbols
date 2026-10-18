// I:\Burnout 2 Code\gamesource\Sound\SoundCrash.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwV3d origin;  // 0x002B9C50
static sCrashWave m_CrashWaves[58];  // 0x002D4500
CRace gRace;  // 0x0031D4B0
CGameSound gSound;  // 0x004391D0

// ---- functions ----

// 0x002140E0-0x0021428C (428 bytes), lines 1293-1319
// WoodBarrierProp__11cSoundCrashFfPC5RwV3d
void cSoundCrash::WoodBarrierProp(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s0)
    {   // 0x002140E0-0x0021428C
        RwaWaveFormat format;  // $sp+128
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+64
    }
}

// 0x00214290-0x0021443C (428 bytes), lines 1262-1288
// TrafficConeProp__11cSoundCrashFfPC5RwV3d
void cSoundCrash::TrafficConeProp(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s0)
    {   // 0x00214290-0x0021443C
        RwaWaveFormat format;  // $sp+128
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+64
    }
}

// 0x00214440-0x002145EC (428 bytes), lines 1231-1257
// SignpostProp__11cSoundCrashFfPC5RwV3d
void cSoundCrash::SignpostProp(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s0)
    {   // 0x00214440-0x002145EC
        RwaWaveFormat format;  // $sp+128
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+64
    }
}

// 0x002145F0-0x0021479C (428 bytes), lines 1200-1226
// MetalBarrierProp__11cSoundCrashFfPC5RwV3d
void cSoundCrash::MetalBarrierProp(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s0)
    {   // 0x002145F0-0x0021479C
        RwaWaveFormat format;  // $sp+128
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+64
    }
}

// 0x002147A0-0x002147A8 (8 bytes), lines 1195-1195
// CardboardProp__11cSoundCrashFfPC5RwV3d
void cSoundCrash::CardboardProp()
{
    {   // 0x002147A0-0x002147A8
    }
}

// 0x002147B0-0x002147B8 (8 bytes), lines 1161-1161
// GenericProp__11cSoundCrashFfPC5RwV3d
void cSoundCrash::GenericProp()
{
    {   // 0x002147B0-0x002147B8
    }
}

// 0x002147C0-0x0021496C (428 bytes), lines 1102-1128
// MetalProp__11cSoundCrashFfPC5RwV3d
void cSoundCrash::MetalProp(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s0)
    {   // 0x002147C0-0x0021496C
        RwaWaveFormat format;  // $sp+128
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+64
    }
}

// 0x00214970-0x00214CA4 (820 bytes), lines 965-1042
// RailScrape__11cSoundCrashFfPC5RwV3dfif
void cSoundCrash::RailScrape(RwV3d *Pos, int WhichCar, float LinVel)
{
    // param cSoundCrash *this  (in $s0)
    // param RwV3d *Pos  (in $s5)
    // param int WhichCar  (in $s1)
    // param float LinVel  (optimised away)
    {   // 0x00214970-0x00214CA4
        RwaWaveFormat format;  // $sp+128
        float MinPitch;  // optimised away
        float MaxPitch;  // optimised away
        float MaxPitchVel;  // $sp+224
        float MaxVolVel;  // optimised away
        float MaxVol;  // optimised away
        float FinalVolume;  // $sp+224
        float PitchModifer;  // $sp+224
        SSoundCrashDBData *db;  // in $s1
    }
}

// 0x00214CB0-0x00214FE4 (820 bytes), lines 884-961
// GenericScrape__11cSoundCrashFfPC5RwV3dfif
void cSoundCrash::GenericScrape(RwV3d *Pos, int WhichCar, float LinVel)
{
    // param cSoundCrash *this  (in $s0)
    // param RwV3d *Pos  (in $s5)
    // param int WhichCar  (in $s1)
    // param float LinVel  (optimised away)
    {   // 0x00214CB0-0x00214FE4
        RwaWaveFormat format;  // $sp+128
        float MinPitch;  // optimised away
        float MaxPitch;  // optimised away
        float MaxPitchVel;  // $sp+224
        float MaxVolVel;  // optimised away
        float MaxVol;  // optimised away
        float FinalVolume;  // $sp+224
        float PitchModifer;  // $sp+224
        SSoundCrashDBData *db;  // in $s1
    }
}

// 0x00214FF0-0x00215324 (820 bytes), lines 802-880
// StoneScrape__11cSoundCrashFfPC5RwV3dfif
void cSoundCrash::StoneScrape(RwV3d *Pos, int WhichCar, float LinVel)
{
    // param cSoundCrash *this  (in $s0)
    // param RwV3d *Pos  (in $s5)
    // param int WhichCar  (in $s1)
    // param float LinVel  (optimised away)
    {   // 0x00214FF0-0x00215324
        RwaWaveFormat format;  // $sp+128
        float MinPitch;  // optimised away
        float MaxPitch;  // optimised away
        float MaxPitchVel;  // $sp+224
        float MaxVolVel;  // optimised away
        float MaxVol;  // optimised away
        float FinalVolume;  // $sp+224
        float PitchModifer;  // $sp+224
        SSoundCrashDBData *db;  // in $s1
    }
}

// 0x00215330-0x00215664 (820 bytes), lines 697-797
// ArmcoScrape__11cSoundCrashFfPC5RwV3dfif
void cSoundCrash::ArmcoScrape(RwV3d *Pos, int WhichCar, float LinVel)
{
    // param cSoundCrash *this  (in $s0)
    // param RwV3d *Pos  (in $s5)
    // param int WhichCar  (in $s1)
    // param float LinVel  (optimised away)
    {   // 0x00215330-0x00215664
        RwaWaveFormat format;  // $sp+128
        float MinPitch;  // optimised away
        float MaxPitch;  // optimised away
        float MaxPitchVel;  // $sp+224
        float MaxVolVel;  // optimised away
        float MaxVol;  // optimised away
        float FinalVolume;  // $sp+224
        float PitchModifer;  // $sp+224
        SSoundCrashDBData *db;  // in $s1
    }
}

// 0x00215670-0x00215804 (404 bytes), lines 644-674
// LoseComponent__11cSoundCrashFfPC5RwV3d
void cSoundCrash::LoseComponent(RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param RwV3d *Pos  (in $s0)
    {   // 0x00215670-0x00215804
        RwaWaveFormat format;  // $sp+112
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+48
    }
}

// 0x00215810-0x00215A20 (528 bytes), lines 605-637
// KerbCrunch__11cSoundCrashFfPC5RwV3d
void cSoundCrash::KerbCrunch(RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s2)
    // param RwV3d *Pos  (in $s1)
    {   // 0x00215810-0x00215A20
        RwaWaveFormat format;  // $sp+128
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+64
    }
}

// 0x00215A20-0x00215BC0 (416 bytes), lines 561-597
// WheelBounce__11cSoundCrashFfPC5RwV3d
void cSoundCrash::WheelBounce(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  ($sp+144)
    // param RwV3d *Pos  (in $s0)
    {   // 0x00215A20-0x00215BC0
        RwaWaveFormat format;  // $sp+112
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+48
    }
}

// 0x00215BC0-0x00215DF0 (560 bytes), lines 511-553
// RailImpact__11cSoundCrashFfPC5RwV3d
void cSoundCrash::RailImpact(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s2)
    {   // 0x00215BC0-0x00215DF0
        RwaWaveFormat format;  // $sp+144
        SSoundCrashDBData *db;  // in $s1
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+80
    }
}

// 0x00215DF0-0x00216020 (560 bytes), lines 460-503
// GenericImpact__11cSoundCrashFfPC5RwV3d
void cSoundCrash::GenericImpact(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s2)
    {   // 0x00215DF0-0x00216020
        RwaWaveFormat format;  // $sp+144
        SSoundCrashDBData *db;  // in $s1
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+80
    }
}

// 0x00216020-0x00216250 (560 bytes), lines 408-454
// StoneImpact__11cSoundCrashFfPC5RwV3d
void cSoundCrash::StoneImpact(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s2)
    {   // 0x00216020-0x00216250
        RwaWaveFormat format;  // $sp+144
        SSoundCrashDBData *db;  // in $s1
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+80
    }
}

// 0x00216250-0x00216480 (560 bytes), lines 358-400
// ArmcoImpact__11cSoundCrashFfPC5RwV3d
void cSoundCrash::ArmcoImpact(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s1)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s2)
    {   // 0x00216250-0x00216480
        RwaWaveFormat format;  // $sp+144
        SSoundCrashDBData *db;  // in $s1
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+80
    }
}

// 0x00216480-0x002166D8 (600 bytes), lines 295-348
// Glass__11cSoundCrashFfPC5RwV3d
void cSoundCrash::Glass(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s3)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s2)
    {   // 0x00216480-0x002166D8
        RwaWaveFormat format;  // $sp+160
        SSoundCrashDBData *db;  // in $s1
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+96
    }
}

// 0x002166E0-0x00216910 (560 bytes), lines 234-288
// Nudge__11cSoundCrashFfPC5RwV3d
void cSoundCrash::Nudge(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s3)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s2)
    {   // 0x002166E0-0x00216910
        RwaWaveFormat format;  // $sp+160
        SSoundCrashDBData *db;  // in $s1
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+96
    }
}

// 0x00216910-0x00216B40 (560 bytes), lines 163-228
// Crash__11cSoundCrashFfPC5RwV3d
void cSoundCrash::Crash(float Impulse, RwV3d *Pos)
{
    // param cSoundCrash *this  (in $s2)
    // param float Impulse  (optimised away)
    // param RwV3d *Pos  (in $s0)
    {   // 0x00216910-0x00216B40
        RwaWaveFormat format;  // $sp+160
        SSoundCrashDBData *db;  // in $s1
        CManagedVoice *voice;  // in $s0
        CPlaySoundParams params;  // $sp+96
    }
}

// 0x00216B40-0x00216C00 (192 bytes), lines 85-129
// Init__11cSoundCrashFi
int cSoundCrash::Init(int CrashMenuBank)
{
    // param cSoundCrash *this  (in $s1)
    // param int CrashMenuBank  (in $s0)
    {   // 0x00216B40-0x00216C00
        RwaWaveDict *dict;  // in $v0
        int i;  // in $s2
    }
}

// 0x00216C00-0x00216CEC (236 bytes), lines 25-36
// Update__11cSoundCrashFv
void cSoundCrash::Update()
{
    // param cSoundCrash *this  (in $s3)
    {   // 0x00216C00-0x00216CEC
        int i;  // in $s0
    }
}

// 0x00216CF0-0x00216D34 (68 bytes), lines 18-19
// __dt__11cSoundCrashFv
void *cSoundCrash::~cSoundCrash()
{
    // param cSoundCrash *this  (in $s0)
    {   // 0x00216CF0-0x00216D34
    }
}

// 0x00216D40-0x00216D48 (8 bytes), lines 16-16
// __ct__11cSoundCrashFv
void *cSoundCrash::cSoundCrash()
{
    // param cSoundCrash *this  (in $v0)
    {   // 0x00216D40-0x00216D48
    }
}

