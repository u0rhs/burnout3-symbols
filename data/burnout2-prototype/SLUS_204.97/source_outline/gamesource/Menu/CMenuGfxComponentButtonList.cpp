// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentButtonList.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderNull(B22dObjectAnimatablesTag *);  // 0x001AF2B0
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void RenderText(B22dObjectAnimatablesTag *);  // 0x001B0A40
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
void RenderVignetteH(B22dObjectAnimatablesTag *);  // 0x001B0E30
void RenderBox(B22dObjectAnimatablesTag *);  // 0x001B0F70
B22dFrameAnimatablesTag C2dFrame::mgIdentityAnimatables;  // 0x002B4DC0
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourBlue;  // 0x002C4E10
static CMenuImageData kaImageData[51];  // 0x002C8A50
static B22dTexAreaTag kaImageTexArea[51];  // 0x002C8D80
static B22dBoxTag kMenuPanelStandardBox;  // 0x002C90B0
static RwRGBAReal kColourBlueTrans;  // 0x002C90C0
static RwRGBAReal kColourWhiteTrans;  // 0x002C90D0
static RwRGBAReal kColourBlackTrans;  // 0x002C90E0
static RwRGBAReal kColourGrey;  // 0x002C90F0
static RwRGBAReal kFrameColourGrey;  // 0x002C9100
static RwRGBAReal kFrameColourWhite;  // 0x002C9110
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentButtonList::__vtable[];  // 0x0030F1C0
CMenuGfxComponent *gpMenuGfxComponentButtonList;  // 0x00310580
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentButtonList gMenuGfxComponentButtonList;  // 0x004515E0

// ---- functions ----

// 0x001C5300-0x001C5CB4 (2484 bytes), lines 279-491
// SetData__27CMenuGfxComponentButtonListFPv
void CMenuGfxComponentButtonList::SetData(void *lpData)
{
    // param CMenuGfxComponentButtonList *this  (in $s6)
    // param void *lpData  (in $v0)
    {   // 0x001C5300-0x001C5CB4
        float lrTextAlignX;  // optimised away
        RwRGBAReal *lpSelectedColour;  // in $v0
        RwRGBAReal *lpUnselectedColour;  // in $s1
        C2dFont *lpFont;  // in $s0
        int lnTextLayer;  // in $s1
        int lnEntry;  // in $s0
        CMenuTableColumn *lpColumn;  // in $s2
    }
}

// 0x001C5CC0-0x001C5EC8 (520 bytes), lines 219-263
// Update__27CMenuGfxComponentButtonListFf
void CMenuGfxComponentButtonList::Update(float lrTimestep)
{
    // param CMenuGfxComponentButtonList *this  (in $s0)
    // param float lrTimestep  ($sp+32)
    {   // 0x001C5CC0-0x001C5EC8
        int lnEntry;  // in $t1
    }
}

// 0x001C5ED0-0x001C5F70 (160 bytes), lines 165-185
// Reset__27CMenuGfxComponentButtonListFv
void CMenuGfxComponentButtonList::Reset()
{
    // param CMenuGfxComponentButtonList *this  (in $v0)
    {   // 0x001C5ED0-0x001C5F70
        int lnTextLayer;  // in $a3
        int lnEntry;  // in $a2
    }
}

// 0x001C5F70-0x001C5F98 (40 bytes), lines 141-145
// IncrementCounts__27CMenuGfxComponentButtonListFPiPiPiPi
void CMenuGfxComponentButtonList::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001C5F70-0x001C5F98
    }
}

