// I:\Burnout 2 Code\gamesource\Hud\CHudComponentLapTimes.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void _RenderLapTimes(B22dObjectAnimatablesTag *);  // 0x00202110
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourYellow;  // 0x002C4E20
/* vtable */ void *CHudComponentLapTimes::__vtable[];  // 0x0030F7A0
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x00201EA0-0x00201F34 (148 bytes), lines 378-398
// Update__21CHudComponentLapTimesFf
void CHudComponentLapTimes::Update()
{
    // param CHudComponentLapTimes *this  (in $v0)
    {   // 0x00201EA0-0x00201F34
        CScore *lpScore;  // in $a2
    }
}

// 0x00201F40-0x002020E8 (424 bytes), lines 328-361
// Create__21CHudComponentLapTimesFfffUiPv
int CHudComponentLapTimes::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)
{
    // param CHudComponentLapTimes *this  (in $s0)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param void *lpData  (in $v0)
    {   // 0x00201F40-0x002020E8
    }
}

// 0x002020F0-0x0020210C (28 bytes), lines 303-307
// IncrementCounts__21CHudComponentLapTimesFPiPiPiPi
void CHudComponentLapTimes::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x002020F0-0x0020210C
    }
}

// 0x00202110-0x002027A4 (1684 bytes), lines 95-281
// _RenderLapTimes__FPC24B22dObjectAnimatablesTag
static void _RenderLapTimes(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x00202110-0x002027A4
        int lbBlank;  // $sp+240
        float lrNANPadding;  // optimised away
        C2dFontChar *lpNANChar;  // in $v0
        float lrKernRight;  // optimised away
        float lrKernLeft;  // optimised away
        int lnCount;  // in $s1
        int lnDigit;  // in $v1
        int lnDecimal;  // in $s0
        C2dFontChar *lpChar;  // in $v0
        unsigned char *lpcChar;  // in $s0
        float lrOffsetY;  // $sp+336
        float lrOffsetX;  // $sp+336
        float lrLineSpacing;  // optimised away
        float lrHeight;  // optimised away
        float lrWidthScale;  // optimised away
        int lnSlot;  // $sp+224
        int lnPass;  // in $s7
        B22dSpriteTag lSprite;  // $sp+272
        C2dFont *lpFont;  // in $s5
        B22dObjectCustomDataLapTimesTag *lpLapData;  // $sp+208
    }
}

