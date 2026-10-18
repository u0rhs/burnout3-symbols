// I:\Burnout 2 Code\gamesource\Menu\CMenuPageOnePlayerCrashZoneSelect.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CGameMode *gapGameModes[21];  // 0x0029EB90
RwRGBAReal kColourRed;  // 0x002C4E00
RwRGBAReal kColourBlue;  // 0x002C4E10
static CMenuImageData kaImageData[51];  // 0x002CF1B0
static B22dTexAreaTag kaImageTexArea[51];  // 0x002CF4E0
static B22dBoxTag kMenuPanelStandardBox;  // 0x002CF810
static RwRGBAReal kColourBlueTrans;  // 0x002CF820
static char *kapacNumberStrings[16];  // 0x002CF8B0
static RwV2d kCrashGameHeadSummaryPos;  // 0x002CF8F0
static RwV2d kCrashGameSubSummaryPos;  // 0x002CF8F8
/* vtable */ void *CMenuPageOnePlayerCrashZoneSelect::__vtable[];  // 0x0030F5F0
/* vtable */ void *CMenuGfxComponentSummaryText::__vtable[];  // 0x0030FA40
/* vtable */ void *CMenuGfxComponentSummaryItem::__vtable[];  // 0x0030FAE8
CMenuPage *gpMenuPageOnePlayerCrashZoneSelect;  // 0x003105F4
CGame gGame;  // 0x003186E0
CMenuManager gMenuManager;  // 0x003B0E60
CGameSound gSound;  // 0x004391D0
static CMenuPageOnePlayerCrashZoneSelect gMenuPageOnePlayerCrashZoneSelect;  // 0x00455280

// ---- functions ----

// 0x001F5B90-0x001F5E10 (640 bytes), lines 195-249
// Update__33CMenuPageOnePlayerCrashZoneSelectFf
void CMenuPageOnePlayerCrashZoneSelect::Update()
{
    // param CMenuPageOnePlayerCrashZoneSelect *this  (in $s2)
    {   // 0x001F5B90-0x001F5E10
        CControllerMapping *lpController;  // in $s0
    }
}

// 0x001F5E10-0x001F5E18 (8 bytes), lines 176-176
// Leave__33CMenuPageOnePlayerCrashZoneSelectFv
void CMenuPageOnePlayerCrashZoneSelect::Leave()
{
    {   // 0x001F5E10-0x001F5E18
    }
}

// 0x001F5E20-0x001F6114 (756 bytes), lines 98-160
// Enter__33CMenuPageOnePlayerCrashZoneSelectFv
void CMenuPageOnePlayerCrashZoneSelect::Enter()
{
    // param CMenuPageOnePlayerCrashZoneSelect *this  (in $s3)
    {   // 0x001F5E20-0x001F6114
        COnePlayerCRASH *lpOnePlayerCRASH;  // in $s1
        CMenuCarouselEntry *lpCarouselEntry;  // in $v0
        unsigned int lunZoneID;  // in $s0
    }
}

// 0x001F6120-0x001F6128 (8 bytes), lines 81-81
// Reset__33CMenuPageOnePlayerCrashZoneSelectFv
void CMenuPageOnePlayerCrashZoneSelect::Reset()
{
    {   // 0x001F6120-0x001F6128
    }
}

