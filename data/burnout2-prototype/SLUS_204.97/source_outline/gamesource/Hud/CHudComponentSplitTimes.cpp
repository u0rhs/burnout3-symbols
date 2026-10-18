// I:\Burnout 2 Code\gamesource\Hud\CHudComponentSplitTimes.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void _RenderSplitTime(B22dObjectAnimatablesTag *);  // 0x001E5B70
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
static float krSplitTimeColourBehindRed;  // 0x002CCC00
static float krSplitTimeColourBehindGreen;  // 0x002CCC08
static float krSplitTimeColourBehindBlue;  // 0x002CCC10
static float krSplitTimeColourAheadRed;  // 0x002CCC18
static float krSplitTimeColourAheadGreen;  // 0x002CCC20
static float krSplitTimeColourAheadBlue;  // 0x002CCC28
static unsigned char kapcSplitTimePositions[4][4];  // 0x002CCC30
static unsigned char kapcSplitTimePlayerLabelsLeft[4][4];  // 0x002CCC40
static unsigned char kapcSplitTimePlayerLabelsRight[4][4];  // 0x002CCC50
static unsigned char kacCurrentLapLabel[4];  // 0x002CCC60
static unsigned char kacBestLapLabel[4];  // 0x002CCC68
/* vtable */ void *CHudComponentSplitTimes::__vtable[];  // 0x0030F480
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440
CGameSound gSound;  // 0x004391D0

// ---- functions ----

// 0x001E5570-0x001E5ABC (1356 bytes), lines 560-800
// Update__23CHudComponentSplitTimesFf
void CHudComponentSplitTimes::Update(float lrTimestep)
{
    // param CHudComponentSplitTimes *this  (in $s0)
    // param float lrTimestep  (optimised away)
    {   // 0x001E5570-0x001E5ABC
        float lrNewAlpha;  // $sp+192
        unsigned char *lpcLeadCarLabel;  // in $s6
        CRaceCar *lpLeadCar;  // in $s5
        CRaceCar *lpRaceCar;  // in $s4
        unsigned char *lpcFollowingCarLabel;  // in $s3
        CRaceCar *lpFollowingCar;  // in $s2
        float lrFollowingTime;  // $sp+192
        float lrLeadTime;  // optimised away
        int lnCurrentLap;  // $sp+176
        int lnCheckPointFromStart;  // in $fp
        int lnCheckPoint;  // in $s1
        int lnRacePosition;  // in $v1
        CRaceCar *lpCar;  // in $a2
        unsigned int lunCar;  // in $a3
    }
}

// 0x001E5AC0-0x001E5B44 (132 bytes), lines 510-543
// Create__23CHudComponentSplitTimesFfffUiPv
int CHudComponentSplitTimes::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)
{
    // param CHudComponentSplitTimes *this  (in $v0)
    // param float lrPosX  ($sp+0)
    // param float lrPosY  ($sp+0)
    // param float lrSize  ($sp+0)
    // param void *lpData  (in $v0)
    {   // 0x001E5AC0-0x001E5B44
        unsigned int lunNumCars;  // in $t0
        unsigned int lunCar;  // in $a3
    }
}

// 0x001E5B50-0x001E5B6C (28 bytes), lines 482-486
// IncrementCounts__23CHudComponentSplitTimesFPiPiPiPi
void CHudComponentSplitTimes::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001E5B50-0x001E5B6C
    }
}

// 0x001E5B70-0x001E6868 (3320 bytes), lines 125-461
// _RenderSplitTime__FPC24B22dObjectAnimatablesTag
static void _RenderSplitTime(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001E5B70-0x001E6868
        float lrBlink;  // optimised away
        float lrArrowWidth;  // optimised away
        float lrTotalWidth;  // optimised away
        float lrIndentX;  // optimised away
        float lrScaleX;  // $sp+352
        unsigned char *lpcText;  // in $s5
        int lnChar;  // $sp+256
        int lnCar;  // in $fp
        int lnDigit;  // in $a0
        int lnDecimal;  // in $s2
        int lnNumDigits;  // $sp+240
        C2dFontChar *lpChar;  // in $s5
        C2dFontChar *lpSignChar;  // $sp+224
        float lrSignWidth;  // optimised away
        float lrPointWidth;  // optimised away
        float lrDigitWidth;  // optimised away
        int lnPass;  // in $s7
        float lrOffsetY;  // optimised away
        float lrOffsetX;  // $sp+352
        float lrIconWidth;  // optimised away
        float lrScaleX;  // $sp+352
        C2dFontChar *lpChar;  // in $v0
        float lrWidthScale;  // $sp+220
        C2dFont *lpFont;  // in $s1
        float lrBoxBottom;  // $sp+216
        float lrBoxRight;  // $sp+212
        float lrBoxHeight;  // optimised away
        float lrBoxWidth;  // optimised away
        float lrBoxTop;  // optimised away
        float lrBoxLeft;  // optimised away
        B22dSpriteTag lSprite;  // $sp+288
        int lnCount;  // in $s2
        B22dObjectCustomDataSplitTimeTag *lpSplitData;  // in $s0
    }
}

