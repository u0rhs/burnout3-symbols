// I:\Burnout 2 Code\gamesource\Hud\CHudComponentSpeedo.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void _RenderSpeedoMini(B22dObjectAnimatablesTag *);  // 0x001DB470
void _RenderSpeedoCS(B22dObjectAnimatablesTag *);  // 0x001DC4C0
void _RenderSpeedoStandard(B22dObjectAnimatablesTag *);  // 0x001DD5F0
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourYellow;  // 0x002C4E20
static B22dTexAreaTag kTexAreaMiniSpeedoEmpty;  // 0x002CC330
static B22dTexAreaTag kTexAreaMiniSpeedoFull;  // 0x002CC340
/* vtable */ void *CHudComponentSpeedo::__vtable[];  // 0x0030F3E0
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
static float krMiniSpeedoMPHTextY;  // 0x003105C8
static float krMiniSpeedoMPHDigitsY;  // 0x003105CC
CRace gRace;  // 0x0031D4B0
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x001DB030-0x001DB414 (996 bytes), lines 1315-1500
// Update__19CHudComponentSpeedoFf
void CHudComponentSpeedo::Update(float lrTimestep)
{
    // param CHudComponentSpeedo *this  (in $s1)
    // param float lrTimestep  (optimised away)
    {   // 0x001DB030-0x001DB414
        unsigned char lbAlternateLayout;  // in $s5
        float lrHeight;  // optimised away
        float lrWidth;  // optimised away
        void (*lpRenderFunction)(B22dObjectAnimatablesTag *);  // in $s4
        RwRaster *lpRaster;  // in $s3
        unsigned char lcGear;  // in $s3
        int lnGear;  // in $a0
        CRaceCarPhysics *lpPhysics;  // in $s2
        CRaceCar *lpCar;  // in $a0
    }
}

// 0x001DB420-0x001DB44C (44 bytes), lines 1285-1299
// Create__19CHudComponentSpeedoFfffUiPv
int CHudComponentSpeedo::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)
{
    // param CHudComponentSpeedo *this  (in $v0)
    // param float lrPosX  ($sp+0)
    // param float lrPosY  ($sp+0)
    // param float lrSize  ($sp+0)
    // param unsigned int lnFlags  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x001DB420-0x001DB44C
    }
}

// 0x001DB450-0x001DB46C (28 bytes), lines 1258-1262
// IncrementCounts__19CHudComponentSpeedoFPiPiPiPi
void CHudComponentSpeedo::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001DB450-0x001DB46C
    }
}

// 0x001DB470-0x001DC4BC (4172 bytes), lines 900-1237
// _RenderSpeedoMini__FPC24B22dObjectAnimatablesTag
static void _RenderSpeedoMini(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001DB470-0x001DC4BC
        float lrDigitWidth;  // optimised away
        float lrShearX;  // optimised away
        float lrWidthScale;  // optimised away
        float lrTextHeight;  // optimised away
        float lrPosY;  // optimised away
        float lrPosX;  // optimised away
        C2dFontChar *lpCharDigit;  // in $s6
        unsigned char lnDigit;  // in $t0
        unsigned char lnMPH;  // in $v0
        float lrShearX;  // optimised away
        float lrWidthScale;  // optimised away
        float lrTextHeight;  // optimised away
        float lrWidthScale;  // optimised away
        float lrTextHeight;  // optimised away
        float lrMidPoint;  // optimised away
        float lrMPHPosX;  // optimised away
        float lrScaleY;  // optimised away
        float lrScaleX;  // optimised away
        int lnPass;  // in $s7
        C2dFont *lpFont;  // in $s0
        B22dTriStripTag lTriStrip;  // $sp+304
        B22dSpriteTag lSprite;  // $sp+240
        B22dObjectCustomDataSpeedoTag *lpSpeedoData;  // $sp+208
    }
}

// 0x001DC4C0-0x001DD5E4 (4388 bytes), lines 682-895
// _RenderSpeedoCS__FPC24B22dObjectAnimatablesTag
static void _RenderSpeedoCS(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001DC4C0-0x001DD5E4
        float lrShearX;  // optimised away
        float lrWidthScale;  // optimised away
        float lrTextHeight;  // optimised away
        float lrOutlineOffY;  // optimised away
        float lrOutlineOffX;  // optimised away
        float lrPosY;  // $sp+592
        float lrPosX;  // optimised away
        C2dFontChar *lpCharDigit;  // in $fp
        C2dFont *lpFont;  // $sp+208
        int lnPass;  // $sp+192
        B22dTriStripTag lTriStrip;  // $sp+320
        B22dSpriteTag lSprite;  // $sp+256
        B22dObjectCustomDataSpeedoTag *lpSpeedoData;  // in $fp
    }
}

// 0x001DD5F0-0x001DEAF8 (5384 bytes), lines 353-677
// _RenderSpeedoStandard__FPC24B22dObjectAnimatablesTag
static void _RenderSpeedoStandard(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001DD5F0-0x001DEAF8
        float lrDigitWidth;  // optimised away
        float lrShearX;  // optimised away
        float lrWidthScale;  // optimised away
        float lrTextHeight;  // optimised away
        float lrPosY;  // optimised away
        float lrPosX;  // optimised away
        C2dFontChar *lpCharDigit;  // $sp+240
        unsigned char lnDigit;  // in $a1
        unsigned char lnMPH;  // in $v0
        float lrShearX;  // optimised away
        float lrWidthScale;  // optimised away
        float lrTextHeight;  // optimised away
        float lrWidthScale;  // optimised away
        float lrTextHeight;  // optimised away
        C2dFont *lpFont;  // in $fp
        float lrOutlineOffY;  // optimised away
        float lrOutlineOffX;  // optimised away
        int lnPass;  // $sp+224
        B22dTriStripTag lTriStrip;  // $sp+464
        B22dSpriteTag lSprite;  // $sp+400
        B22dObjectCustomDataSpeedoTag *lpSpeedoData;  // $sp+208
    }
}

