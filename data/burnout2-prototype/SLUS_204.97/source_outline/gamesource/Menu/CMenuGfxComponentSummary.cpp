// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentSummary.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentSummary::__vtable[];  // 0x0030F670
CMenuGfxComponent *gpMenuGfxComponentSummary;  // 0x00310600
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentSummary gMenuGfxComponentSummary;  // 0x00455440

// ---- functions ----

// 0x001FA380-0x001FA688 (776 bytes), lines 372-451
// Create__24CMenuGfxComponentSummaryFv
void CMenuGfxComponentSummary::Create()
{
    // param CMenuGfxComponentSummary *this  (in $s1)
    {   // 0x001FA380-0x001FA688
        CMenuGfxComponentSummaryImage *lpSummaryImage;  // in $s4
        CMenuGfxComponentSummaryText *lpSummaryText;  // in $s3
        unsigned int lunItem;  // in $s2
        unsigned int lunImage;  // in $s3
        unsigned int lunText;  // in $s2
    }
}

// 0x001FA690-0x001FA6A0 (16 bytes), lines 322-323
// GetSummaryItemFrame__24CMenuGfxComponentSummaryFUi
C2dFrame *CMenuGfxComponentSummary::GetSummaryItemFrame(unsigned int lunItemID)
{
    // param CMenuGfxComponentSummary *this  (in $v0)
    // param unsigned int lunItemID  (in $v0)
    {   // 0x001FA690-0x001FA6A0
    }
}

// 0x001FA6A0-0x001FA6B0 (16 bytes), lines 302-303
// GetSummaryItemObject__24CMenuGfxComponentSummaryFUi
C2dObject *CMenuGfxComponentSummary::GetSummaryItemObject(unsigned int lunItemID)
{
    // param CMenuGfxComponentSummary *this  (in $v0)
    // param unsigned int lunItemID  (in $v0)
    {   // 0x001FA6A0-0x001FA6B0
    }
}

// 0x001FA6B0-0x001FA814 (356 bytes), lines 222-282
// Update__24CMenuGfxComponentSummaryFf
void CMenuGfxComponentSummary::Update(float lrTimestep)
{
    // param CMenuGfxComponentSummary *this  (in $s0)
    // param float lrTimestep  ($sp+96)
    {   // 0x001FA6B0-0x001FA814
    }
}

// 0x001FA820-0x001FAA78 (600 bytes), lines 137-204
// SetData__24CMenuGfxComponentSummaryFPv
void CMenuGfxComponentSummary::SetData(void *lpData)
{
    // param CMenuGfxComponentSummary *this  (in $s0)
    // param void *lpData  (in $v0)
    {   // 0x001FA820-0x001FAA78
        CMenuGfxComponentSummaryImage *lpSummaryImage;  // in $v0
        CMenuGfxComponentSummaryText *lpSummaryText;  // in $v0
        CMenuGfxComponentSummaryItem **lppSummaryItem;  // in $v0
        unsigned int lunItem;  // in $a3
    }
}

// 0x001FAA80-0x001FAAC4 (68 bytes), lines 95-120
// Reset__24CMenuGfxComponentSummaryFv
void CMenuGfxComponentSummary::Reset()
{
    // param CMenuGfxComponentSummary *this  (in $v0)
    {   // 0x001FAA80-0x001FAAC4
        unsigned int lunItem;  // in $a1
    }
}

// 0x001FAAD0-0x001FAAF8 (40 bytes), lines 70-74
// IncrementCounts__24CMenuGfxComponentSummaryFPiPiPiPi
void CMenuGfxComponentSummary::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001FAAD0-0x001FAAF8
    }
}

