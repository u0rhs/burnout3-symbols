// I:\Burnout 2 Code\gamesource\Hud\CHudComponentLapHistory.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void _RenderLapHistory(B22dObjectAnimatablesTag *);  // 0x001DED90
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourYellow;  // 0x002C4E20
/* vtable */ void *CHudComponentLapHistory::__vtable[];  // 0x0030F400
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x001DEB00-0x001DEC24 (292 bytes), lines 373-415
// Update__23CHudComponentLapHistoryFf
void CHudComponentLapHistory::Update()
{
    // param CHudComponentLapHistory *this  (in $v0)
    {   // 0x001DEB00-0x001DEC24
        CScore *lpScore;  // in $a3
        float *lprLapTime;  // in $v0
        int lnFirstDisplayedLap;  // in $a2
    }
}

// 0x001DEC30-0x001DED70 (320 bytes), lines 323-354
// Create__23CHudComponentLapHistoryFfffUiPv
int CHudComponentLapHistory::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)
{
    // param CHudComponentLapHistory *this  (in $s1)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param void *lpData  (in $v0)
    {   // 0x001DEC30-0x001DED70
        int lnCount;  // in $a1
        C2dFont *lpFont;  // in $s0
    }
}

// 0x001DED70-0x001DED8C (28 bytes), lines 297-301
// IncrementCounts__23CHudComponentLapHistoryFPiPiPiPi
void CHudComponentLapHistory::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001DED70-0x001DED8C
    }
}

// 0x001DED90-0x001DF524 (1940 bytes), lines 83-276
// _RenderLapHistory__FPC24B22dObjectAnimatablesTag
static void _RenderLapHistory(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001DED90-0x001DF524
        float lrNANPadding;  // optimised away
        C2dFontChar *lpNANChar;  // in $v0
        float lrKernRight;  // optimised away
        float lrKernLeft;  // optimised away
        int lnCount;  // in $s1
        int lnDigit;  // in $v1
        int lnDecimal;  // in $s0
        B22dTexAreaTag lLapStopTexArea;  // $sp+336
        float lrLapStopLeftKern;  // optimised away
        float lrLapStopWidth;  // optimised away
        C2dFontChar *lpChar;  // in $v0
        float lrOffsetY;  // $sp+352
        float lrOffsetX;  // $sp+352
        float lrY;  // $sp+352
        float lrLineSpacing;  // optimised away
        float lrHeight;  // optimised away
        float lrWidthScale;  // optimised away
        int lnLap;  // in $s7
        int lnPass;  // $sp+224
        B22dSpriteTag lSprite;  // $sp+272
        C2dFont *lpFont;  // in $fp
        B22dObjectCustomDataLapHistoryTag *lpLapData;  // $sp+208
    }
}

