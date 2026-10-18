// I:\Burnout 2 Code\gamesource\Sound\HUDSound.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static HUDSWave m_HUDWaves[17];  // 0x002D99C0
CGameSound gSound;  // 0x004391D0

// ---- functions ----

// 0x00267F30-0x00267FBC (140 bytes), lines 555-570
// FinalLap__9CHudSoundFv
void CHudSound::FinalLap()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00267F30-0x00267FBC
    }
}

// 0x00267FC0-0x0026804C (140 bytes), lines 537-552
// PerfectLap__9CHudSoundFv
void CHudSound::PerfectLap()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00267FC0-0x0026804C
    }
}

// 0x00268050-0x002680DC (140 bytes), lines 519-534
// CheckPoint__9CHudSoundFv
void CHudSound::CheckPoint()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268050-0x002680DC
    }
}

// 0x002680E0-0x0026816C (140 bytes), lines 502-516
// VolumeTick__9CHudSoundFv
void CHudSound::VolumeTick()
{
    // param CHudSound *this  (in $s0)
    {   // 0x002680E0-0x0026816C
    }
}

// 0x00268170-0x002681FC (140 bytes), lines 485-499
// Cancel__9CHudSoundFv
void CHudSound::Cancel()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268170-0x002681FC
    }
}

// 0x00268200-0x0026828C (140 bytes), lines 468-482
// Selection__9CHudSoundFv
void CHudSound::Selection()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268200-0x0026828C
    }
}

// 0x00268290-0x0026831C (140 bytes), lines 451-465
// MenuMove__9CHudSoundFv
void CHudSound::MenuMove()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268290-0x0026831C
    }
}

// 0x00268320-0x002683AC (140 bytes), lines 434-448
// BoostReady__9CHudSoundFv
void CHudSound::BoostReady()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268320-0x002683AC
    }
}

// 0x002683B0-0x00268448 (152 bytes), lines 414-431
// AirtimeFinish__9CHudSoundFv
void CHudSound::AirtimeFinish()
{
    // param CHudSound *this  (in $s0)
    {   // 0x002683B0-0x00268448
    }
}

// 0x00268450-0x002684F0 (160 bytes), lines 391-411
// AirtimeTick__9CHudSoundFf
void CHudSound::AirtimeTick(float PitchOffset)
{
    // param CHudSound *this  (in $s0)
    // param float PitchOffset  (optimised away)
    {   // 0x00268450-0x002684F0
    }
}

// 0x002684F0-0x00268594 (164 bytes), lines 365-387
// NearMiss__9CHudSoundFifi
void CHudSound::NearMiss(int LeftOrRight, int PitchOffset)
{
    // param CHudSound *this  (in $v0)
    // param int LeftOrRight  (in $s2)
    // param int PitchOffset  (in $s1)
    {   // 0x002684F0-0x00268594
    }
}

// 0x002685A0-0x002685A8 (8 bytes), lines 361-361
// DriftFinish__9CHudSoundFv
void CHudSound::DriftFinish()
{
    {   // 0x002685A0-0x002685A8
    }
}

// 0x002685B0-0x00268688 (216 bytes), lines 301-339
// DriftTick__9CHudSoundFf
void CHudSound::DriftTick(float lrTick)
{
    // param CHudSound *this  (in $s0)
    // param float lrTick  ($sp+128)
    {   // 0x002685B0-0x00268688
    }
}

// 0x00268690-0x00268698 (8 bytes), lines 298-298
// OncomingFinish__9CHudSoundFv
void CHudSound::OncomingFinish()
{
    {   // 0x00268690-0x00268698
    }
}

// 0x002686A0-0x00268780 (224 bytes), lines 246-276
// OncomingTick__9CHudSoundFf
void CHudSound::OncomingTick(float lrTick)
{
    // param CHudSound *this  (in $s0)
    // param float lrTick  ($sp+128)
    {   // 0x002686A0-0x00268780
    }
}

// 0x00268780-0x0026880C (140 bytes), lines 221-237
// SplitTime__9CHudSoundFv
void CHudSound::SplitTime()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268780-0x0026880C
    }
}

// 0x00268810-0x002688EC (220 bytes), lines 195-218
// TimerCountDown__9CHudSoundFi
void CHudSound::TimerCountDown(int TimeLeft)
{
    // param CHudSound *this  (in $s0)
    // param int TimeLeft  (in $s1)
    {   // 0x00268810-0x002688EC
        float lrPCTLeft;  // optimised away
        CPlaySoundParams params;  // $sp+64
    }
}

// 0x002688F0-0x002689A4 (180 bytes), lines 162-189
// TimeAdded__9CHudSoundFv
void CHudSound::TimeAdded()
{
    // param CHudSound *this  (in $s0)
    {   // 0x002688F0-0x002689A4
        CPlaySoundParams params;  // $sp+64
    }
}

// 0x002689B0-0x00268A3C (140 bytes), lines 144-159
// Go__9CHudSoundFv
void CHudSound::Go()
{
    // param CHudSound *this  (in $s0)
    {   // 0x002689B0-0x00268A3C
    }
}

// 0x00268A40-0x00268ACC (140 bytes), lines 126-141
// One__9CHudSoundFv
void CHudSound::One()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268A40-0x00268ACC
    }
}

// 0x00268AD0-0x00268B5C (140 bytes), lines 107-123
// Two__9CHudSoundFv
void CHudSound::Two()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268AD0-0x00268B5C
    }
}

// 0x00268B60-0x00268BEC (140 bytes), lines 89-104
// Three__9CHudSoundFv
void CHudSound::Three()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268B60-0x00268BEC
    }
}

// 0x00268BF0-0x00268C0C (28 bytes), lines 79-80
// Update__9CHudSoundFv
void CHudSound::Update()
{
    // param CHudSound *this  (in $v0)
    {   // 0x00268BF0-0x00268C0C
    }
}

// 0x00268C10-0x00268CA4 (148 bytes), lines 49-74
// Reset__9CHudSoundFv
int CHudSound::Reset()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268C10-0x00268CA4
        RwaWaveDict *dict;  // in $v0
        int i;  // in $s1
    }
}

// 0x00268CB0-0x00268CDC (44 bytes), lines 30-41
// Init__9CHudSoundFi
int CHudSound::Init(int HudMenuBank)
{
    // param CHudSound *this  (in $v0)
    // param int HudMenuBank  (in $v0)
    {   // 0x00268CB0-0x00268CDC
    }
}

// 0x00268CE0-0x00268D24 (68 bytes), lines 20-21
// __dt__9CHudSoundFv
void *CHudSound::~CHudSound()
{
    // param CHudSound *this  (in $s0)
    {   // 0x00268CE0-0x00268D24
    }
}

// 0x00268D30-0x00268D38 (8 bytes), lines 18-18
// __ct__9CHudSoundFv
void *CHudSound::CHudSound()
{
    // param CHudSound *this  (in $v0)
    {   // 0x00268D30-0x00268D38
    }
}

