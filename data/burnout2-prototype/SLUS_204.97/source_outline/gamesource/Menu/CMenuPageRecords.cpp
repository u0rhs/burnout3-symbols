// I:\Burnout 2 Code\gamesource\Menu\CMenuPageRecords.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CTrackData CMenuManager::maTracks[30];  // 0x002C1A40
RwRGBAReal kColourRed;  // 0x002C4E00
static CMenuImageData kaImageData[51];  // 0x002CE350
static B22dTexAreaTag kaImageTexArea[51];  // 0x002CE680
static RwRGBAReal kColourBlueTrans;  // 0x002CE9B0
static char *kapacNumberStrings[16];  // 0x002CEA40
/* vtable */ void *CMenuPageRecords::__vtable[];  // 0x0030F5B0
CMenuPage *gpMenuPageRecords;  // 0x003105EC
CGame gGame;  // 0x003186E0
CTrack gTrack;  // 0x0031F280
CMenuManager gMenuManager;  // 0x003B0E60
CGameSound gSound;  // 0x004391D0
static CMenuPageRecords gMenuPageRecords;  // 0x00454D40

// ---- functions ----

// 0x001F4BB0-0x001F5110 (1376 bytes), lines 257-315
// Update__16CMenuPageRecordsFf
void CMenuPageRecords::Update()
{
    // param CMenuPageRecords *this  (in $v0)
    {   // 0x001F4BB0-0x001F5110
        CControllerMapping *lpController;  // in $a2
    }
}

// 0x001F5110-0x001F5118 (8 bytes), lines 241-241
// Leave__16CMenuPageRecordsFv
void CMenuPageRecords::Leave()
{
    {   // 0x001F5110-0x001F5118
    }
}

// 0x001F5120-0x001F5334 (532 bytes), lines 183-225
// Enter__16CMenuPageRecordsFv
void CMenuPageRecords::Enter()
{
    // param CMenuPageRecords *this  (in $s1)
    {   // 0x001F5120-0x001F5334
    }
}

// 0x001F5340-0x001F5520 (480 bytes), lines 127-168
// Reset__16CMenuPageRecordsFv
void CMenuPageRecords::Reset()
{
    // param CMenuPageRecords *this  (in $v0)
    {   // 0x001F5340-0x001F5520
        CMenuCarouselEntry *lpCarouselEntry;  // in $v0
        int lnZone;  // in $t0
        int lnTrack;  // in $a3
    }
}

