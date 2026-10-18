// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentCarousel.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderNull(B22dObjectAnimatablesTag *);  // 0x001AF2B0
void RenderCarIcon(B22dObjectAnimatablesTag *);  // 0x001AF2C0
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
void RenderBox(B22dObjectAnimatablesTag *);  // 0x001B0F70
B22dFrameAnimatablesTag C2dFrame::mgIdentityAnimatables;  // 0x002B4DC0
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourBlack;  // 0x002C4DF0
static CMenuImageData kaImageData[51];  // 0x002CB9F0
static B22dTexAreaTag kaImageTexArea[51];  // 0x002CBD20
static B22dTexAreaTag kFullImageTexArea;  // 0x002CC050
static RwRGBAReal kColourBlueTrans;  // 0x002CC060
static RwRGBAReal kColourBlackTrans;  // 0x002CC070
static RwRGBAReal kColourRedTrans;  // 0x002CC080
static B22dTexAreaTag kSwatchTexArea;  // 0x002CC090
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentCarousel::__vtable[];  // 0x0030F360
CMenuGfxComponent *gpMenuGfxComponentCarousel;  // 0x003105B0
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentCarousel gMenuGfxComponentCarousel;  // 0x00452A70

// ---- functions ----

// 0x001D45F0-0x001D5B94 (5540 bytes), lines 298-698
// SetData__25CMenuGfxComponentCarouselFPv
void CMenuGfxComponentCarousel::SetData(void *lpData)
{
    // param CMenuGfxComponentCarousel *this  (in $s3)
    // param void *lpData  (in $v0)
    {   // 0x001D45F0-0x001D5B94
        C2dObject *lpCopyObject;  // in $t3
        float lrMoveX;  // optimised away
        unsigned int lunCopyEntry;  // in $v1
        B22dTexAreaTag *lpOutlineTexArea;  // $sp+192
        RwRaster *lpOutlineRaster;  // $sp+176
        RwRGBAReal lOutlineColour;  // $sp+304
        RwRGBAReal lBackGroundColour;  // $sp+288
        float lrPosX;  // $sp+320
        C2dFont *lpFont;  // in $s7
        CMenuCarouselEntry *lpEntry;  // in $s5
        unsigned int lunIconLayer;  // in $s1
        int lnEntry;  // in $s0
        CMenuCarousel *lpCarousel;  // in $s6
    }
}

// 0x001D5BA0-0x001D5D4C (428 bytes), lines 210-282
// Update__25CMenuGfxComponentCarouselFf
void CMenuGfxComponentCarousel::Update(float lrTimestep)
{
    // param CMenuGfxComponentCarousel *this  (in $s0)
    // param float lrTimestep  ($sp+32)
    {   // 0x001D5BA0-0x001D5D4C
        float lrNumEntries;  // optimised away
        unsigned int lunIconLayer;  // in $t5
        int lnActualEntry;  // in $t0
        int lnStartEntry;  // in $a3
        int lnNumEntries;  // in $a2
        float lrEntryPos;  // $sp+32
        int lnMaxEntry;  // in $a1
        int lnMinEntry;  // in $a0
        int lnEntry;  // in $v0
    }
}

// 0x001D5D50-0x001D5DE4 (148 bytes), lines 170-194
// Reset__25CMenuGfxComponentCarouselFv
void CMenuGfxComponentCarousel::Reset()
{
    // param CMenuGfxComponentCarousel *this  (in $v0)
    {   // 0x001D5D50-0x001D5DE4
        unsigned int lunIconLayer;  // in $t0
        int lnEntry;  // in $a3
    }
}

// 0x001D5DF0-0x001D5E18 (40 bytes), lines 146-150
// IncrementCounts__25CMenuGfxComponentCarouselFPiPiPiPi
void CMenuGfxComponentCarousel::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001D5DF0-0x001D5E18
    }
}

