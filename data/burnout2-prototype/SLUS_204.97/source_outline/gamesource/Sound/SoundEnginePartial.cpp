// I:\Burnout 2 Code\gamesource\Sound\SoundEnginePartial.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CGameSound gSound;  // 0x004391D0

// ---- functions ----

// 0x001FFC10-0x001FFDA0 (400 bytes), lines 214-245
// Update__19CSoundEnginePartialFPC5RwV3dPC5RwV3dfffff
void CSoundEnginePartial::Update(RwV3d *pos, RwV3d *velocity, float RPM, float dRdT, float Accel, float Gear, float volume_mult)
{
    // param CSoundEnginePartial *this  (in $s2)
    // param RwV3d *pos  (in $s1)
    // param RwV3d *velocity  (in $s0)
    // param float RPM  (optimised away)
    // param float dRdT  (optimised away)
    // param float Accel  (optimised away)
    // param float Gear  (optimised away)
    // param float volume_mult  (optimised away)
    {   // 0x001FFC10-0x001FFDA0
        Sb2distUpdateParams dist;  // $sp+160
        float outputs[7];  // $sp+128
        float inputs[5];  // $sp+96
    }
}

// 0x001FFDA0-0x001FFE34 (148 bytes), lines 198-210
// Destroy__19CSoundEnginePartialFv
void CSoundEnginePartial::Destroy()
{
    // param CSoundEnginePartial *this  (in $s0)
    {   // 0x001FFDA0-0x001FFE34
    }
}

// 0x001FFE40-0x001FFF98 (344 bytes), lines 162-194
// Reset__19CSoundEnginePartialFP11RwaWaveDict
int CSoundEnginePartial::Reset(RwaWaveDict *engine_dict)
{
    // param CSoundEnginePartial *this  (in $s3)
    // param RwaWaveDict *engine_dict  (in $s2)
    {   // 0x001FFE40-0x001FFF98
        CPlaySoundParams params;  // $sp+80
        int success;  // in $s0
    }
}

// 0x001FFFA0-0x0020012C (396 bytes), lines 134-158
// Init__19CSoundEnginePartialFi
int CSoundEnginePartial::Init(int fixup_offset)
{
    // param CSoundEnginePartial *this  (in $s1)
    // param int fixup_offset  (in $s2)
    {   // 0x001FFFA0-0x0020012C
        int success;  // in $v0
    }
}

// 0x00200130-0x00200254 (292 bytes), lines 73-124
// ApplyGraph__18CSoundPartialGraphFPfPf
void CSoundPartialGraph::ApplyGraph(float *inputs, float *outputs)
{
    // param CSoundPartialGraph *this  (in $v0)
    // param float *inputs  (in $v0)
    // param float *outputs  (in $v0)
    {   // 0x00200130-0x00200254
        float *ylast;  // in $v1
        float *xlast;  // in $a3
        float *ypoint;  // in $t1
        float *xpoint;  // in $t0
        float result;  // optimised away
        float input;  // optimised away
    }
}

// 0x00200260-0x002002D8 (120 bytes), lines 37-47
// Init__18CSoundPartialGraphFi
int CSoundPartialGraph::Init(int fixup_offset)
{
    // param CSoundPartialGraph *this  (in $v0)
    // param int fixup_offset  (in $v0)
    {   // 0x00200260-0x002002D8
        int success;  // in $v0
    }
}

