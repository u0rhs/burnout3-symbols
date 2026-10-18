// I:\Burnout 2 Code\gamesource\Sound\SoundCar.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static char *sRaceCarNames[22];  // 0x002B9280
static SWave g_Skids[3];  // 0x002D1D20
static SWave g_Horns[8];  // 0x002D1DC0
static SWave g_Waves[15];  // 0x002D1EB0
static SPopParams g_Pops[22];  // 0x002D1F30
CGTFileSystem *gpGTFileSystem;  // 0x003107C0
unsigned int CSoundCar::m_AICarCounter;  // 0x00310C50
CGame gGame;  // 0x003186E0
CRenderer gRenderer;  // 0x00434440
CGameSound gSound;  // 0x004391D0

// ---- functions ----

// 0x001FE330-0x001FE484 (340 bytes), lines 812-840
// SkidSoundUpdate__9CSoundCarFPP13CManagedVoiceP11RwaSPU2Waveff
void CSoundCar::SkidSoundUpdate(CManagedVoice **voice, RwaSPU2Wave *wave, float volume, float freq)
{
    // param CManagedVoice **voice  (in $s2)
    // param RwaSPU2Wave *wave  (in $s1)
    // param float volume  (optimised away)
    // param float freq  (optimised away)
    {   // 0x001FE330-0x001FE484
        CPlaySoundParams params;  // $sp+80
    }
}

// 0x001FE490-0x001FE6F0 (608 bytes), lines 739-808
// UpdateHorns__9CSoundCarFi
void CSoundCar::UpdateHorns(int horn_sounding)
{
    // param CSoundCar *this  (in $s1)
    // param int horn_sounding  (in $v0)
    {   // 0x001FE490-0x001FE6F0
        CPlaySoundParams params;  // $sp+48
    }
}

// 0x001FE6F0-0x001FE920 (560 bytes), lines 689-735
// UpdatePopping__9CSoundCarFfii
void CSoundCar::UpdatePopping(float rpm, int clutch_down, int boost)
{
    // param CSoundCar *this  (in $s1)
    // param float rpm  (optimised away)
    // param int clutch_down  (in $s0)
    // param int boost  (in $v0)
    {   // 0x001FE6F0-0x001FE920
        unsigned int random_pop;  // in $s3
        CPlaySoundParams params;  // $sp+112
        SSoundRaceCarDBData *db;  // in $s2
        int current_time;  // in $v0
    }
}

// 0x001FE920-0x001FEA3C (284 bytes), lines 657-685
// UpdateRoadNoise__9CSoundCarFi
void CSoundCar::UpdateRoadNoise(int boosting)
{
    // param CSoundCar *this  (in $s3)
    // param int boosting  (in $s2)
    {   // 0x001FE920-0x001FEA3C
        float freq;  // optimised away
        float volume;  // $sp+96
        float _result;  // optimised away
        float car_freq_speed;  // $sp+96
        float _result;  // optimised away
        float car_vol_speed;  // $sp+96
        SSoundCarGeneralDBData *db;  // in $s0
    }
}

// 0x001FEA40-0x001FEEB4 (1140 bytes), lines 575-653
// UpdateSkidding__9CSoundCarFP15CRaceCarPhysicsi
void CSoundCar::UpdateSkidding(CRaceCarPhysics *p, int boosting)
{
    // param CSoundCar *this  (in $s2)
    // param CRaceCarPhysics *p  (in $v0)
    // param int boosting  (in $s1)
    {   // 0x001FEA40-0x001FEEB4
        float slip_freq;  // optimised away
        float slip_volume;  // optimised away
        float spin_freq;  // optimised away
        float spin_volume;  // optimised away
        SSoundCarGeneralDBData *db;  // in $s0
        RwV3d up_vector;  // $sp+96
        float speed_at;  // optimised away
        int wheel;  // in $a2
        float slip_amount;  // optimised away
        float spin_amount;  // $sp+112
    }
}

// 0x001FEEC0-0x001FF074 (436 bytes), lines 519-571
// UpdateBoost__9CSoundCarFii
void CSoundCar::UpdateBoost(int boost_start, int current_boost)
{
    // param CSoundCar *this  (in $s1)
    // param int boost_start  (in $v0)
    // param int current_boost  (in $s0)
    {   // 0x001FEEC0-0x001FF074
        CPlaySoundParams params;  // $sp+128
        CPlaySoundParams params;  // $sp+64
    }
}

// 0x001FF080-0x001FF2A8 (552 bytes), lines 443-491
// UpdateDumpValves__9CSoundCarFffi
void CSoundCar::UpdateDumpValves(float rpm, float unsmoothed_accelerator, int clutch_down)
{
    // param CSoundCar *this  (in $s1)
    // param float rpm  (optimised away)
    // param float unsmoothed_accelerator  (optimised away)
    // param int clutch_down  (in $s2)
    {   // 0x001FF080-0x001FF2A8
        CPlaySoundParams params;  // $sp+80
        SSoundRaceCarDBData *db;  // in $s0
    }
}

// 0x001FF2B0-0x001FF60C (860 bytes), lines 363-405
// Update__9CSoundCarFPC5RwV3dPC5RwV3dffiP15CRaceCarPhysicsii
void CSoundCar::Update(RwV3d *pos, RwV3d *velocity, float rpm, float accel, int gear, CRaceCarPhysics *vehicle_physics, int clutch_down, int boosting)
{
    // param CSoundCar *this  (in $s4)
    // param RwV3d *pos  (in $v0)
    // param RwV3d *velocity  (in $v0)
    // param float rpm  (optimised away)
    // param float accel  (optimised away)
    // param int gear  (in $s3)
    // param CRaceCarPhysics *vehicle_physics  (in $s2)
    // param int clutch_down  (in $s1)
    // param int boosting  (in $s0)
    {   // 0x001FF2B0-0x001FF60C
        int i;  // in $s0
        SSoundRaceCarDBData *db;  // in $s5
    }
}

// 0x001FF610-0x001FF8EC (732 bytes), lines 249-359
// Reset__9CSoundCarFv
int CSoundCar::Reset()
{
    // param CSoundCar *this  (in $s0)
    {   // 0x001FF610-0x001FF8EC
        CPlaySoundParams params;  // $sp+80
        int i;  // in $s1
        RwaWaveDict *dict;  // in $v0
        RwaWaveDict *dict;  // in $v0
        RwaWaveDict *dict;  // in $v0
        RwaWaveDict *dict;  // in $v0
        int i;  // in $s1
    }
}

// 0x001FF8F0-0x001FF97C (140 bytes), lines 235-245
// Shutdown__9CSoundCarFv
void CSoundCar::Shutdown()
{
    // param CSoundCar *this  (in $s0)
    {   // 0x001FF8F0-0x001FF97C
        int i;  // in $s1
    }
}

// 0x001FF980-0x001FFB98 (536 bytes), lines 162-231
// Setup__9CSoundCarF13ESoundCarType6ECarIDP8CRaceCari
int CSoundCar::Setup(ESoundCarType type, ECarID id, CRaceCar *racecar, int buffer_size)
{
    // param CSoundCar *this  (in $s0)
    // param ESoundCarType type  (in $v0)
    // param ECarID id  (in $s1)
    // param CRaceCar *racecar  (in $v0)
    // param int buffer_size  (in $s4)
    {   // 0x001FF980-0x001FFB98
        int version;  // $sp+172
        CGTFile *fp;  // in $s2
        int p_end;  // in $s1
        char path[64];  // $sp+96
    }
}

