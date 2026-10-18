// I:\Burnout 2 Code\gamesource\Hud\CHudComponentCrashScore.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextSoftDropShadow(B22dObjectAnimatablesTag *);  // 0x001AF450
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourYellow;  // 0x002C4E20
/* vtable */ void *CHudComponentCrashScore::__vtable[];  // 0x0030F750
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x001FC5C0-0x001FC684 (196 bytes), lines 252-292
// GetMoneyString__23CHudComponentCrashScoreFUi
char *CHudComponentCrashScore::GetMoneyString(unsigned int lunValue)
{
    // param CHudComponentCrashScore *this  (in $v0)
    // param unsigned int lunValue  (in $v0)
    {   // 0x001FC5C0-0x001FC684
        char *lpcFormattedText;  // in $v0
        unsigned int lunLastLen;  // in $v0
        unsigned int lunTextLen;  // in $v0
        char *lpcEndOfValueText;  // in $v0
        char *lpcValueText;  // in $s0
    }
}

// 0x001FC690-0x001FC7B8 (296 bytes), lines 207-235
// Update__23CHudComponentCrashScoreFf
void CHudComponentCrashScore::Update()
{
    // param CHudComponentCrashScore *this  (in $s0)
    {   // 0x001FC690-0x001FC7B8
        float lrCostDiff;  // optimised away
        char *lpcScoreText;  // in $s1
        CScore *lpScore;  // in $s1
    }
}

// 0x001FC7C0-0x001FC99C (476 bytes), lines 159-190
// Create__23CHudComponentCrashScoreFfffUiPv
int CHudComponentCrashScore::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)
{
    // param CHudComponentCrashScore *this  (in $s0)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param void *lpData  (in $s1)
    {   // 0x001FC7C0-0x001FC99C
        char *lpcString;  // in $s3
        RwV2d lAlignment;  // $sp+120
        RwV2d lPos;  // $sp+112
    }
}

// 0x001FCAD0-0x001FCAF8 (40 bytes), lines 133-137
// IncrementCounts__23CHudComponentCrashScoreFPiPiPiPi
void CHudComponentCrashScore::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001FCAD0-0x001FCAF8
    }
}

// 0x001FCB00-0x001FCB68 (104 bytes), lines 67-81
// Initialise__23CHudComponentCrashScoreFii
void CHudComponentCrashScore::Initialise(int lnLayer)
{
    // param CHudComponentCrashScore *this  (in $s0)
    // param int lnLayer  (in $v0)
    {   // 0x001FCB00-0x001FCB68
        unsigned int lunText;  // in $a0
    }
}

