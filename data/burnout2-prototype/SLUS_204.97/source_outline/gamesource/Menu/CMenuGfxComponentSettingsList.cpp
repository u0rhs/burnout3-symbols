// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentSettingsList.cpp
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
static CMenuImageData kaImageData[51];  // 0x002D6CB0
static B22dTexAreaTag kaImageTexArea[51];  // 0x002D6FE0
static RwRGBAReal kColourBlueTrans;  // 0x002D7310
static RwRGBAReal kColourWhiteTrans;  // 0x002D7320
static RwRGBAReal kColourBlackTrans;  // 0x002D7330
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentSettingsList::__vtable[];  // 0x0030F980
CMenuGfxComponent *gpMenuGfxComponentSettingsList;  // 0x00310684
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentSettingsList gMenuGfxComponentSettingsList;  // 0x004945B0

// ---- functions ----

// 0x0025BE30-0x0025BFC0 (400 bytes), lines 942-1009
// Destroy__29CMenuGfxComponentSettingsListFv
void CMenuGfxComponentSettingsList::Destroy()
{
    // param CMenuGfxComponentSettingsList *this  (in $s4)
    {   // 0x0025BE30-0x0025BFC0
        int lnFlashingObject;  // in $s0
        int lnItemObject;  // in $s1
        int lnEntryObject;  // in $s1
        int lnEntry;  // in $s0
    }
}

// 0x0025BFC0-0x0025C228 (616 bytes), lines 825-927
// UpdateFlashingButtons__29CMenuGfxComponentSettingsListFfi
void CMenuGfxComponentSettingsList::UpdateFlashingButtons(float lrTimestep, int lbBarIsMoving)
{
    // param CMenuGfxComponentSettingsList *this  (in $v0)
    // param float lrTimestep  ($sp+0)
    // param int lbBarIsMoving  (in $v0)
    {   // 0x0025BFC0-0x0025C228
        float lnRightFlashNum;  // optimised away
        float lrAlpha;  // $sp+0
        int lnFlashingObject;  // in $a3
        CMenuSettingsEntry *lpSettingsEntry;  // in $t1
    }
}

// 0x0025C230-0x0025C92C (1788 bytes), lines 649-805
// InitObjects__29CMenuGfxComponentSettingsListFv
void CMenuGfxComponentSettingsList::InitObjects()
{
    // param CMenuGfxComponentSettingsList *this  (in $s3)
    {   // 0x0025C230-0x0025C92C
        int lbUsePanel;  // $sp+176
        float lrPosY;  // optimised away
        float lrPosX;  // optimised away
        float lrTextHandleX;  // $sp+224
        C2dFont *lpFont;  // in $s5
        CMenuSettingsEntry *lpSettingsEntry;  // in $s7
        int lnFlashingObject;  // in $a1
        int lnItemObject;  // in $fp
        int lnEntry;  // in $s6
    }
}

// 0x0025C930-0x0025CAA4 (372 bytes), lines 595-634
// InitControllers__29CMenuGfxComponentSettingsListFv
void CMenuGfxComponentSettingsList::InitControllers()
{
    // param CMenuGfxComponentSettingsList *this  (in $v0)
    {   // 0x0025C930-0x0025CAA4
        CMenuSettingsEntry *lpSettingsEntry;  // in $t4
        int lnEntry;  // in $t5
    }
}

// 0x0025CAB0-0x0025D0F4 (1604 bytes), lines 493-575
// Create__29CMenuGfxComponentSettingsListFv
void CMenuGfxComponentSettingsList::Create()
{
    // param CMenuGfxComponentSettingsList *this  (in $s0)
    {   // 0x0025CAB0-0x0025D0F4
        int lnFlashingObject;  // in $s1
        int lnItemObject;  // in $s2
        int lnEntry;  // in $s1
    }
}

// 0x0025D100-0x0025D238 (312 bytes), lines 440-478
// SetData__29CMenuGfxComponentSettingsListFPv
void CMenuGfxComponentSettingsList::SetData(void *lpData)
{
    // param CMenuGfxComponentSettingsList *this  (in $s0)
    // param void *lpData  (in $v0)
    {   // 0x0025D100-0x0025D238
        int lnEntry;  // in $v1
        CMenuSettingsList *lpSettingsList;  // in $s1
    }
}

// 0x0025D240-0x0025D52C (748 bytes), lines 326-424
// Update__29CMenuGfxComponentSettingsListFf
void CMenuGfxComponentSettingsList::Update(float lrTimestep)
{
    // param CMenuGfxComponentSettingsList *this  (in $s3)
    // param float lrTimestep  (optimised away)
    {   // 0x0025D240-0x0025D52C
        EButtonImage leImage;  // in $a0
        int lnNearestEntry;  // in $v0
        int lnControllerItem;  // in $v0
        float lrPosX;  // optimised away
        CMenuSettingsEntry *lpSettingsEntry;  // in $s1
        int lnItemObject;  // in $t0
        int lnEntry;  // in $s0
    }
}

// 0x0025D530-0x0025D5F4 (196 bytes), lines 254-292
// Reset__29CMenuGfxComponentSettingsListFv
void CMenuGfxComponentSettingsList::Reset()
{
    // param CMenuGfxComponentSettingsList *this  (in $v0)
    {   // 0x0025D530-0x0025D5F4
        int lnFlashingObject;  // in $a1
        int lnItemObject;  // in $a3
        int lnEntryObject;  // in $a3
        int lnEntry;  // in $a2
    }
}

// 0x0025D600-0x0025D628 (40 bytes), lines 228-232
// IncrementCounts__29CMenuGfxComponentSettingsListFPiPiPiPi
void CMenuGfxComponentSettingsList::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x0025D600-0x0025D628
    }
}

