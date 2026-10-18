// I:\Burnout 2 Code\gamesource\Sound\VoiceManager.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CGame gGame;  // 0x003186E0
CGameSound gSound;  // 0x004391D0
static CManagedVoice sManagedVoices[256];  // 0x0049C160

// ---- functions ----

// 0x00279660-0x0027976C (268 bytes), lines 786-804
// __ct__16CPlaySoundParamsFv
void *CPlaySoundParams::CPlaySoundParams()
{
    // param CPlaySoundParams *this  (in $v0)
    {   // 0x00279660-0x0027976C
        RwV3d origin;  // $sp+0
    }
}

// 0x00279770-0x002798D0 (352 bytes), lines 753-780
// Audibility__13CManagedVoiceCFv
float CManagedVoice::Audibility() const
{
    // param CManagedVoice *this  (in $s1)
    {   // 0x00279770-0x002798D0
        float maxdistance;  // optimised away
        float rollofffactor;  // $sp+112
        float distance;  // optimised away
        RwV3d to_listener;  // $sp+64
        float audibility;  // $sp+112
    }
}

// 0x002798D0-0x002798D8 (8 bytes), lines 743-743
// IsPlaying__13CManagedVoiceFv
int CManagedVoice::IsPlaying()
{
    // param CManagedVoice *this  (in $v0)
    {   // 0x002798D0-0x002798D8
    }
}

// 0x002798E0-0x002798E8 (8 bytes), lines 737-737
// SetPitch__13CManagedVoiceFf
void CManagedVoice::SetPitch(float pitch)
{
    // param CManagedVoice *this  (in $v0)
    // param float pitch  ($sp+0)
    {   // 0x002798E0-0x002798E8
    }
}

// 0x002798F0-0x002798F8 (8 bytes), lines 731-731
// SetVolume__13CManagedVoiceFf
void CManagedVoice::SetVolume(float volume)
{
    // param CManagedVoice *this  (in $v0)
    // param float volume  ($sp+0)
    {   // 0x002798F0-0x002798F8
    }
}

// 0x00279900-0x00279948 (72 bytes), lines 723-725
// SetPosition__13CManagedVoiceFPC5RwV3dPC5RwV3d
void CManagedVoice::SetPosition(RwV3d *position, RwV3d *velocity)
{
    // param CManagedVoice *this  (in $v0)
    // param RwV3d *position  (in $v0)
    // param RwV3d *velocity  (in $v0)
    {   // 0x00279900-0x00279948
    }
}

// 0x00279950-0x00279988 (56 bytes), lines 714-718
// __ct__13CManagedVoiceFv
void *CManagedVoice::CManagedVoice()
{
    // param CManagedVoice *this  (in $s0)
    {   // 0x00279950-0x00279988
    }
}

// 0x00279990-0x00279BB8 (552 bytes), lines 579-635
// TriggerVoices__13CVoiceManagerFv
void CVoiceManager::TriggerVoices()
{
    // param CVoiceManager *this  (in $s2)
    {   // 0x00279990-0x00279BB8
        CHardwareVoice *hv;  // in $s0
        CHardwareVoice *hv;  // in $a0
        CManagedVoice **v;  // in $s0
    }
}

// 0x00279BC0-0x00279C58 (152 bytes), lines 543-575
// AssignNewNormals__13CVoiceManagerFPP13CManagedVoicePUiPUi
void CVoiceManager::AssignNewNormals(CManagedVoice **either, unsigned int *mask0, unsigned int *mask1)
{
    // param CManagedVoice **either  (in $v0)
    // param unsigned int *mask0  (in $v0)
    // param unsigned int *mask1  (in $v0)
    {   // 0x00279BC0-0x00279C58
        CManagedVoice **v;  // in $v0
        int core_add;  // in $t5
        int m;  // in $t4
        unsigned int *mask;  // in $t3
    }
}

// 0x00279C60-0x00279D78 (280 bytes), lines 509-538
// AssignNewSpecials__13CVoiceManagerFPP13CManagedVoicePP13CManagedVoicePUiPUi
void CVoiceManager::AssignNewSpecials(CManagedVoice **core0, CManagedVoice **core1, unsigned int *mask0, unsigned int *mask1)
{
    // param CManagedVoice **core0  (in $v0)
    // param CManagedVoice **core1  (in $v0)
    // param unsigned int *mask0  (in $v0)
    // param unsigned int *mask1  (in $v0)
    {   // 0x00279C60-0x00279D78
        int m;  // in $t4
        CManagedVoice **v;  // in $v0
    }
}

// 0x00279D80-0x00279E1C (156 bytes), lines 485-501
// ReassignThoseAlreadyPlaying__13CVoiceManagerFPP13CManagedVoicePP13CManagedVoicePUiPUi
void CVoiceManager::ReassignThoseAlreadyPlaying(CManagedVoice **core0, CManagedVoice **core1, unsigned int *mask0, unsigned int *mask1)
{
    // param CManagedVoice **core0  (in $v0)
    // param CManagedVoice **core1  (in $v0)
    // param unsigned int *mask0  (in $v0)
    // param unsigned int *mask1  (in $v0)
    {   // 0x00279D80-0x00279E1C
        unsigned int hv_idx;  // in $a0
        unsigned int hv_idx;  // in $a0
        CManagedVoice **v;  // in $v0
    }
}

// 0x00279E20-0x0027A090 (624 bytes), lines 387-478
// BuildTargetLists__13CVoiceManagerFPP13CManagedVoicePP13CManagedVoicePP13CManagedVoicePUiPUi
void CVoiceManager::BuildTargetLists(CManagedVoice **core0, CManagedVoice **core1, CManagedVoice **either, unsigned int *mask0, unsigned int *mask1)
{
    // param CVoiceManager *this  (in $s5)
    // param CManagedVoice **core0  (in $fp)
    // param CManagedVoice **core1  ($sp+172)
    // param CManagedVoice **either  ($sp+168)
    // param unsigned int *mask0  (in $s4)
    // param unsigned int *mask1  (in $s3)
    {   // 0x00279E20-0x0027A090
        CManagedVoice **v;  // in $s3
        int i;  // in $v1
        int either_idx;  // in $s2
        int core1_idx;  // in $s6
        int core0_idx;  // in $s7
        int core1_used;  // in $s1
        int core0_used;  // in $s0
    }
}

// 0x0027A090-0x0027A1D8 (328 bytes), lines 343-383
// SortManagedVoices__13CVoiceManagerFv
int CVoiceManager::SortManagedVoices()
{
    // param CVoiceManager *this  (in $fp)
    {   // 0x0027A090-0x0027A1D8
        int j;  // in $s2
        int any_swapped_this_time;  // in $s7
        int i;  // in $s1
        int any_swapped_ever;  // in $s0
    }
}

// 0x0027A1E0-0x0027A414 (564 bytes), lines 267-339
// UpdateWaves__13CVoiceManagerFUi
int CVoiceManager::UpdateWaves(unsigned int elapsed_ms)
{
    // param CVoiceManager *this  (in $s3)
    // param unsigned int elapsed_ms  (in $v0)
    {   // 0x0027A1E0-0x0027A414
        CManagedVoice *assigned;  // in $s2
        CHardwareVoice *hv;  // in $s1
        CManagedVoice **v;  // in $t0
        int any_triggered;  // in $s0
    }
}

// 0x0027A420-0x0027A538 (280 bytes), lines 228-263
// InitRwaVoices__13CVoiceManagerFP13RwaSPU2Output
void CVoiceManager::InitRwaVoices(RwaSPU2Output *output_object)
{
    // param CVoiceManager *this  (in $s2)
    // param RwaSPU2Output *output_object  (in $s1)
    {   // 0x0027A420-0x0027A538
        unsigned int spu_channel;  // in $a2
        int i;  // in $a1
        RwaSPU2VoiceStateDMA *first_voice_dma_state;  // in $a0
        RwaSPU2VoiceCreationParams params;  // $sp+268
        int i;  // in $s0
        RwaSPU2Voice *unsorted_voices[48];  // $sp+64
    }
}

// 0x0027A540-0x0027A58C (76 bytes), lines 203-217
// ReserveSpuChannel__13CVoiceManagerFi
int CVoiceManager::ReserveSpuChannel(int reverb)
{
    // param CVoiceManager *this  (in $v0)
    // param int reverb  (in $v0)
    {   // 0x0027A540-0x0027A58C
        int channel;  // in $v0
    }
}

// 0x0027A590-0x0027A5FC (108 bytes), lines 182-198
// StopSound__13CVoiceManagerFP13CManagedVoice
void CVoiceManager::StopSound(CManagedVoice *voice)
{
    // param CVoiceManager *this  (in $v0)
    // param CManagedVoice *voice  (in $s0)
    {   // 0x0027A590-0x0027A5FC
    }
}

// 0x0027A600-0x0027A870 (624 bytes), lines 137-178
// PlaySound__13CVoiceManagerFPC16CPlaySoundParams
CManagedVoice *CVoiceManager::PlaySound(CPlaySoundParams *params)
{
    // param CVoiceManager *this  (in $v0)
    // param CPlaySoundParams *params  (in $s2)
    {   // 0x0027A600-0x0027A870
        float pos;  // optimised away
        RwaWaveFormat format;  // $sp+64
        CManagedVoice **v;  // in $s0
    }
}

// 0x0027A870-0x0027A93C (204 bytes), lines 82-117
// Update__13CVoiceManagerFv
void CVoiceManager::Update()
{
    // param CVoiceManager *this  (in $s1)
    {   // 0x0027A870-0x0027A93C
        unsigned int mask1;  // $sp+444
        unsigned int mask0;  // $sp+440
        CManagedVoice *either[48];  // $sp+240
        CManagedVoice *core1[24];  // $sp+144
        CManagedVoice *core0[24];  // $sp+48
        int any_triggered;  // in $s0
        unsigned int elapsed_ms;  // in $v0
        unsigned int time_ms;  // in $v0
    }
}

// 0x0027A940-0x0027A9E0 (160 bytes), lines 58-78
// Reset__13CVoiceManagerFv
void CVoiceManager::Reset()
{
    // param CVoiceManager *this  (in $s1)
    {   // 0x0027A940-0x0027A9E0
        CHardwareVoice *hv;  // in $a0
        int i;  // in $s0
        CManagedVoice **mv;  // in $a2
    }
}

// 0x0027A9E0-0x0027AA60 (128 bytes), lines 45-54
// Init__13CVoiceManagerFP13RwaSPU2Output
void CVoiceManager::Init(RwaSPU2Output *output_object)
{
    // param CVoiceManager *this  (in $s1)
    // param RwaSPU2Output *output_object  (in $s0)
    {   // 0x0027A9E0-0x0027AA60
        int i;  // in $a1
    }
}

