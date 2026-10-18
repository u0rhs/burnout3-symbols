// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentTrackMap.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderNull(B22dObjectAnimatablesTag *);  // 0x001AF2B0
void RenderImageGlow(B22dObjectAnimatablesTag *);  // 0x001B0C10
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
void _RenderTrackMap(B22dObjectAnimatablesTag *);  // 0x001CD170
B22dFrameAnimatablesTag C2dFrame::mgIdentityAnimatables;  // 0x002B4DC0
static B2MenuGfxTrackMapInfoTag _gaTrackMapInfo[30];  // 0x002B8B80
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourGlow;  // 0x002C4E40
static CMenuImageData kaImageData[51];  // 0x002C97E0
static B22dTexAreaTag kaImageTexArea[51];  // 0x002C9B10
static B22dTexAreaTag kFullImageTexArea;  // 0x002C9E40
static RwRGBAReal kColourBlueTrans;  // 0x002C9E50
static B22dTexAreaTag kTexArea0011;  // 0x002C9E60
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentTrackMap::__vtable[];  // 0x0030F200
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CMenuGfxComponent *gpMenuGfxComponentTrackMap;  // 0x00310588
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentTrackMap gMenuGfxComponentTrackMap;  // 0x004524C0

// ---- functions ----

// 0x001CC4E0-0x001CC504 (36 bytes), lines 700-702
// SetData__25CMenuGfxComponentTrackMapFPv
void CMenuGfxComponentTrackMap::SetData(void *lpData)
{
    // param CMenuGfxComponentTrackMap *this  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x001CC4E0-0x001CC504
    }
}

// 0x001CC510-0x001CCFC4 (2740 bytes), lines 390-683
// Update__25CMenuGfxComponentTrackMapFf
void CMenuGfxComponentTrackMap::Update(float lrTimestep)
{
    // param CMenuGfxComponentTrackMap *this  (in $s4)
    // param float lrTimestep  (optimised away)
    {   // 0x001CC510-0x001CCFC4
        float lrHandleX;  // optimised away
        float lrVel;  // optimised away
        float lrTarget;  // optimised away
        RwRaster *lpRaster;  // in $a2
        float lrSizeY;  // optimised away
        float lrSizeX;  // $sp+112
        float lrPosY;  // optimised away
        float lrPosX;  // optimised away
        CTrackData *lpTrackData;  // in $s1
        B2MenuGfxTrackMapInfoTag *lpTrackInfo;  // in $s0
        B22dObjectCustomDataTrackMapTag *lpMapData;  // in $v0
        float lnCarouselControllerPos;  // optimised away
        float lrAlpha;  // optimised away
    }
}

// 0x001CCFD0-0x001CD13C (364 bytes), lines 345-374
// Reset__25CMenuGfxComponentTrackMapFv
void CMenuGfxComponentTrackMap::Reset()
{
    // param CMenuGfxComponentTrackMap *this  (in $v0)
    {   // 0x001CCFD0-0x001CD13C
        int lnCount;  // in $t0
    }
}

// 0x001CD140-0x001CD168 (40 bytes), lines 319-323
// IncrementCounts__25CMenuGfxComponentTrackMapFPiPiPiPi
void CMenuGfxComponentTrackMap::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001CD140-0x001CD168
    }
}

// 0x001CD170-0x001CD4A0 (816 bytes), lines 245-298
// _RenderTrackMap__FPC24B22dObjectAnimatablesTag
static void _RenderTrackMap(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001CD170-0x001CD4A0
        int lnCount;  // in $s0
        B22dSpriteTag lSprite;  // $sp+160
        B22dObjectCustomDataTrackMapTag *lpMapData;  // in $s5
    }
}

