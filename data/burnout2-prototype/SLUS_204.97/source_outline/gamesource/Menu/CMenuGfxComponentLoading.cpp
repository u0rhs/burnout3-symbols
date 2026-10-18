// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentLoading.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
void RenderVignetteH(B22dObjectAnimatablesTag *);  // 0x001B0E30
void RenderBox(B22dObjectAnimatablesTag *);  // 0x001B0F70
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourBlue;  // 0x002C4E10
static CMenuImageData kaImageData[51];  // 0x002DAAA0
static B22dTexAreaTag kaImageTexArea[51];  // 0x002DADD0
static RwRGBAReal kColourBlueTrans;  // 0x002DB100
static RwRGBAReal kColourWhiteTrans;  // 0x002DB110
static RwRGBAReal kColourBlackTrans;  // 0x002DB120
static RwRGBAReal kColourGreyTrans;  // 0x002DB130
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentLoading::__vtable[];  // 0x0030FB60
CMenuGfxComponent *gpMenuGfxComponentLoading;  // 0x00310714
CGame gGame;  // 0x003186E0
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentLoading gMenuGfxComponentLoading;  // 0x004A39A0

// ---- functions ----

// 0x0027B090-0x0027B4E4 (1108 bytes), lines 228-327
// SetData__24CMenuGfxComponentLoadingFPv
void CMenuGfxComponentLoading::SetData(void *lpData)
{
    // param CMenuGfxComponentLoading *this  (in $s0)
    // param void *lpData  (in $v0)
    {   // 0x0027B090-0x0027B4E4
        C2dFont *lpFont;  // in $s1
        float lrOffsetX;  // $sp+128
        float lrPosX;  // optimised away
        int lnObject;  // in $s1
    }
}

// 0x0027B4F0-0x0027B644 (340 bytes), lines 168-212
// Update__24CMenuGfxComponentLoadingFf
void CMenuGfxComponentLoading::Update(float lrTimestep)
{
    // param CMenuGfxComponentLoading *this  (in $v0)
    // param float lrTimestep  ($sp+0)
    {   // 0x0027B4F0-0x0027B644
        int lnLastObject;  // in $t1
        int lnObject;  // in $t0
        int lnPass;  // in $a3
        float lrScale;  // optimised away
        int lnDecayBits;  // in $a2
        int lnCurrentPos;  // in $a1
    }
}

// 0x0027B650-0x0027B678 (40 bytes), lines 143-149
// Reset__24CMenuGfxComponentLoadingFv
void CMenuGfxComponentLoading::Reset()
{
    // param CMenuGfxComponentLoading *this  (in $v0)
    {   // 0x0027B650-0x0027B678
        int lnObject;  // in $a1
    }
}

// 0x0027B680-0x0027B69C (28 bytes), lines 120-124
// IncrementCounts__24CMenuGfxComponentLoadingFPiPiPiPi
void CMenuGfxComponentLoading::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x0027B680-0x0027B69C
    }
}

