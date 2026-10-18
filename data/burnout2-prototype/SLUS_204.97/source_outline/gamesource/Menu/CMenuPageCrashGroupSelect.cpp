// I:\Burnout 2 Code\gamesource\Menu\CMenuPageCrashGroupSelect.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CGameMode *gapGameModes[21];  // 0x0029EB90
RwRGBAReal kColourRed;  // 0x002C4E00
static CMenuImageData kaImageData[51];  // 0x002CEA80
static B22dTexAreaTag kaImageTexArea[51];  // 0x002CEDB0
static RwRGBAReal kColourBlueTrans;  // 0x002CF0E0
static char *kapacNumberStrings[16];  // 0x002CF170
/* vtable */ void *CMenuPageCrashGroupSelect::__vtable[];  // 0x0030F5D0
CMenuPage *gpMenuPageCrashGroupSelect;  // 0x003105F0
CGame gGame;  // 0x003186E0
CMenuManager gMenuManager;  // 0x003B0E60
CGameSound gSound;  // 0x004391D0
static CMenuPageCrashGroupSelect gMenuPageCrashGroupSelect;  // 0x00455150

// ---- functions ----

// 0x001F5520-0x001F57E4 (708 bytes), lines 235-280
// UpdateDisplay__25CMenuPageCrashGroupSelectFv
void CMenuPageCrashGroupSelect::UpdateDisplay()
{
    // param CMenuPageCrashGroupSelect *this  (in $s3)
    {   // 0x001F5520-0x001F57E4
        EStringID leZoneNameID;  // in $s0
        EStringID leZoneHeadingID;  // in $s1
        unsigned int lunZone;  // in $s0
    }
}

// 0x001F57F0-0x001F59E8 (504 bytes), lines 163-220
// Update__25CMenuPageCrashGroupSelectFf
void CMenuPageCrashGroupSelect::Update()
{
    // param CMenuPageCrashGroupSelect *this  (in $s0)
    {   // 0x001F57F0-0x001F59E8
        CControllerMapping *lpController;  // in $a1
    }
}

// 0x001F59F0-0x001F59F8 (8 bytes), lines 147-147
// Leave__25CMenuPageCrashGroupSelectFv
void CMenuPageCrashGroupSelect::Leave()
{
    {   // 0x001F59F0-0x001F59F8
    }
}

// 0x001F5A00-0x001F5B6C (364 bytes), lines 88-131
// Enter__25CMenuPageCrashGroupSelectFv
void CMenuPageCrashGroupSelect::Enter()
{
    // param CMenuPageCrashGroupSelect *this  (in $s2)
    {   // 0x001F5A00-0x001F5B6C
        COnePlayerCRASH *lpOnePlayerCRASH;  // in $s1
        CMenuCarouselEntry *lpCarouselEntry;  // in $v0
        unsigned int lunGroup;  // in $s0
    }
}

// 0x001F5B70-0x001F5B8C (28 bytes), lines 70-73
// Reset__25CMenuPageCrashGroupSelectFv
void CMenuPageCrashGroupSelect::Reset()
{
    // param CMenuPageCrashGroupSelect *this  (in $v0)
    {   // 0x001F5B70-0x001F5B8C
    }
}

