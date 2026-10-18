// I:\Burnout 2 Code\gamesource\Hud\CHudComponentCountdown.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void _RenderCountdown(B22dObjectAnimatablesTag *);  // 0x001E3240
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
/* vtable */ void *CHudComponentCountdown::__vtable[];  // 0x0030F420
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
float CTimer::mrGameTimestepSeconds;  // 0x00310898
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440
CGameSound gSound;  // 0x004391D0

// ---- functions ----

// 0x001E2AD0-0x001E3048 (1400 bytes), lines 292-501
// Update__22CHudComponentCountdownFf
void CHudComponentCountdown::Update(float lrTimestep)
{
    // param CHudComponentCountdown *this  (in $s2)
    // param float lrTimestep  (optimised away)
    {   // 0x001E2AD0-0x001E3048
        C2dFont *lpFont;  // in $s4
        CScore *lpScore;  // in $s3
        float lrTime;  // optimised away
    }
}

// 0x001E3050-0x001E3210 (448 bytes), lines 217-276
// Create__22CHudComponentCountdownFfffUiPv
int CHudComponentCountdown::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)
{
    // param CHudComponentCountdown *this  (in $s1)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param unsigned int lnFlags  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x001E3050-0x001E3210
        float lrWidth;  // optimised away
        C2dFont *lpFont;  // in $s0
    }
}

// 0x001E3210-0x001E3238 (40 bytes), lines 191-195
// IncrementCounts__22CHudComponentCountdownFPiPiPiPi
void CHudComponentCountdown::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001E3210-0x001E3238
    }
}

// 0x001E3240-0x001E3670 (1072 bytes), lines 68-164
// _RenderCountdown__FPC24B22dObjectAnimatablesTag
static void _RenderCountdown(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001E3240-0x001E3670
        float lrOffsetY;  // optimised away
        float lrOffsetX;  // $sp+240
        int lnCount;  // in $s2
        float lrWidthScale;  // optimised away
        B22dSpriteTag lSprite;  // $sp+176
        C2dFont *lpFont;  // in $s1
        int lnSecondDigit;  // in $s7
        int lnFirstDigit;  // in $v1
        B22dObjectCustomDataCountdownTag *lpCountdownData;  // in $s0
    }
}

