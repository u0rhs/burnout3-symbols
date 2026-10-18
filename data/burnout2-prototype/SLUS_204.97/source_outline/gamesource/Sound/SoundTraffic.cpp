// I:\Burnout 2 Code\gamesource\Sound\SoundTraffic.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static STWave g_Waves[21];  // 0x002D89E0
CGameSound gSound;  // 0x004391D0

// ---- functions ----

// 0x00263BE0-0x00263CD0 (240 bytes), lines 656-677
// SilenceAllVoices__13CSoundTrafficFv
void CSoundTraffic::SilenceAllVoices()
{
    // param CSoundTraffic *this  (in $s0)
    {   // 0x00263BE0-0x00263CD0
        int i;  // in $s1
        int i;  // in $s1
        int i;  // in $s1
    }
}

// 0x00263CD0-0x00263CD8 (8 bytes), lines 652-652
// UpdateSpecial__13CSoundTrafficFiPC17CTrafficSoundDatai
void CSoundTraffic::UpdateSpecial()
{
    {   // 0x00263CD0-0x00263CD8
    }
}

// 0x00263CE0-0x002641AC (1228 bytes), lines 461-646
// DoHorns__13CSoundTrafficFv
void CSoundTraffic::DoHorns()
{
    // param CSoundTraffic *this  (in $s5)
    {   // 0x00263CE0-0x002641AC
        RwV3d velocity;  // $sp+208
        CTrafficSoundData *d;  // in $v0
        SPlayingTrafficSound *v;  // in $s1
        int i;  // in $s0
        SSoundTrafficDBData *db;  // in $s6
        EVehicleClass tclass;  // in $s1
        CPlaySoundParams params;  // $sp+144
        int j;  // in $t0
        int Skip;  // in $a3
        int j;  // in $s2
        int stop;  // in $s1
        int started[4];  // $sp+128
        int next;  // in $s0
        int i;  // in $s0
    }
}

// 0x002641B0-0x00264628 (1144 bytes), lines 273-455
// DoSkids__13CSoundTrafficFv
void CSoundTraffic::DoSkids()
{
    // param CSoundTraffic *this  (in $s5)
    {   // 0x002641B0-0x00264628
        float lrCar_speed;  // optimised away
        float lrSpeedNorm;  // $sp+224
        CTrafficSoundData *d;  // in $s2
        SPlayingTrafficSound *v;  // in $s1
        int i;  // in $s0
        CPlaySoundParams params;  // $sp+144
        SSoundTrafficDBData *db;  // in $s6
        int j;  // in $a3
        int stop;  // in $a2
        int started[2];  // $sp+216
        int next;  // in $s0
        int i;  // in $s0
    }
}

// 0x00264630-0x00264690 (96 bytes), lines 259-268
// UpdateHorns__13CSoundTrafficFiPC17CTrafficSoundDatai
void CSoundTraffic::UpdateHorns(int player, CTrafficSoundData *horns, int num_horns)
{
    // param CSoundTraffic *this  (in $s1)
    // param int player  (in $v0)
    // param CTrafficSoundData *horns  (in $v0)
    // param int num_horns  (in $v0)
    {   // 0x00264630-0x00264690
    }
}

// 0x00264690-0x002646F0 (96 bytes), lines 246-255
// UpdateEngines__13CSoundTrafficFiPC17CTrafficSoundDatai
void CSoundTraffic::UpdateEngines(int player, CTrafficSoundData *engines, int num_engines)
{
    // param CSoundTraffic *this  (in $s1)
    // param int player  (in $v0)
    // param CTrafficSoundData *engines  (in $v0)
    // param int num_engines  (in $v0)
    {   // 0x00264690-0x002646F0
    }
}

// 0x002646F0-0x002646F8 (8 bytes), lines 241-241
// Shutdown__13CSoundTrafficFv
void CSoundTraffic::Shutdown()
{
    // param CSoundTraffic *this  (in $v0)
    {   // 0x002646F0-0x002646F8
    }
}

// 0x00264700-0x00264C10 (1296 bytes), lines 89-235
// Update__13CSoundTrafficFv
void CSoundTraffic::Update()
{
    // param CSoundTraffic *this  (in $s4)
    {   // 0x00264700-0x00264C10
        float max_speed;  // optimised away
        float max_speed;  // optimised away
        float pitch;  // optimised away
        float volume;  // $sp+256
        float car_speed;  // $sp+256
        CTrafficSoundData *d;  // in $v0
        SPlayingTrafficSound *v;  // in $s1
        int i;  // in $s0
        SSoundTrafficDBData *db;  // in $s6
        EVehicleClass tclass;  // in $s1
        CPlaySoundParams params;  // $sp+192
        int next;  // in $s0
        int j;  // in $a2
        int stop;  // in $a1
        int started[4];  // $sp+176
        int i;  // in $s0
    }
}

// 0x00264C10-0x00264CB4 (164 bytes), lines 59-85
// Reset__13CSoundTrafficFv
int CSoundTraffic::Reset()
{
    // param CSoundTraffic *this  (in $s0)
    {   // 0x00264C10-0x00264CB4
        RwaWaveDict *dict;  // in $v0
        int i;  // in $s1
    }
}

// 0x00264CC0-0x00264CCC (12 bytes), lines 53-55
// Setup__13CSoundTrafficFv
int CSoundTraffic::Setup()
{
    // param CSoundTraffic *this  (in $v0)
    {   // 0x00264CC0-0x00264CCC
    }
}

