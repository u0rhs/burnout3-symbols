// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentPressStart.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
static CMenuImageData kaImageData[51];  // 0x002DC590
static B22dTexAreaTag kaImageTexArea[51];  // 0x002DC8C0
static RwRGBAReal kColourBlueTrans;  // 0x002DCBF0
static B22dTexAreaTag kTexArea;  // 0x002DCC00
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentPressStart::__vtable[];  // 0x0030FC40
CMenuGfxComponent *gpMenuGfxComponentPressStart;  // 0x0031072C
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentPressStart gMenuGfxComponentPressStart;  // 0x004A3B70

// ---- functions ----

// 0x0027E5E0-0x0027E654 (116 bytes), lines 224-242
// SetData__27CMenuGfxComponentPressStartFPv
void CMenuGfxComponentPressStart::SetData(void *lpData)
{
    // param CMenuGfxComponentPressStart *this  (in $s1)
    // param void *lpData  (in $v0)
    {   // 0x0027E5E0-0x0027E654
    }
}

// 0x0027E660-0x0027E8CC (620 bytes), lines 158-208
// Update__27CMenuGfxComponentPressStartFf
void CMenuGfxComponentPressStart::Update(float lrTimestep)
{
    // param CMenuGfxComponentPressStart *this  (in $s2)
    // param float lrTimestep  ($sp+64)
    {   // 0x0027E660-0x0027E8CC
        C2dFont *lpFont;  // in $s0
    }
}

// 0x0027E8D0-0x0027E8F8 (40 bytes), lines 133-142
// Reset__27CMenuGfxComponentPressStartFv
void CMenuGfxComponentPressStart::Reset()
{
    // param CMenuGfxComponentPressStart *this  (in $v0)
    {   // 0x0027E8D0-0x0027E8F8
    }
}

// 0x0027E900-0x0027E928 (40 bytes), lines 111-115
// IncrementCounts__27CMenuGfxComponentPressStartFPiPiPiPi
void CMenuGfxComponentPressStart::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x0027E900-0x0027E928
    }
}

