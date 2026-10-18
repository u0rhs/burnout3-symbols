// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentResultsTable.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderNull(B22dObjectAnimatablesTag *);  // 0x001AF2B0
void RenderCarIcon(B22dObjectAnimatablesTag *);  // 0x001AF2C0
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void _RenderNTextOutline(B22dObjectAnimatablesTag *);  // 0x001D6BB0
B22dFrameAnimatablesTag C2dFrame::mgIdentityAnimatables;  // 0x002B4DC0
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourBlue;  // 0x002C4E10
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentResultsTable::__vtable[];  // 0x0030F3A0
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CMenuGfxComponent *gpMenuGfxComponentResultsTable;  // 0x003105B8
CGame gGame;  // 0x003186E0
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentResultsTable gMenuGfxComponentResultsTable;  // 0x00452E00

// ---- functions ----

// 0x001D6360-0x001D6930 (1488 bytes), lines 1256-1385
// UpdateCounts__15CComponentTableFf
void CComponentTable::UpdateCounts(float lrTimestep)
{
    // param CComponentTable *this  (in $s0)
    // param float lrTimestep  ($sp+240)
    {   // 0x001D6360-0x001D6930
        C2dFont *lpFont;  // in $s7
        int lbUpdateCounts;  // $sp+208
        float lrPosX;  // $sp+240
        C2dObject *lpObject;  // in $s5
        unsigned int lunCountUpVal;  // in $v0
        unsigned int lunCountDownVal;  // in $s4
        float lrScale;  // optimised away
        CMenuResultsTableColumn *lpCountDownColumn;  // $sp+192
        CMenuResultsTableColumn *lpColumn;  // in $a1
        CMenuResultsTableRow *lpRow;  // in $s6
        unsigned int lunRow;  // in $s3
        unsigned int lunColumn;  // in $s2
        unsigned int lunString;  // in $s1
    }
}

// 0x001D6930-0x001D69B4 (132 bytes), lines 1179-1197
// Reset__15CComponentTableFv
void CComponentTable::Reset()
{
    // param CComponentTable *this  (in $v0)
    {   // 0x001D6930-0x001D69B4
        unsigned int lunSortItem;  // in $a3
        unsigned int lunObject;  // in $a1
    }
}

// 0x001D69C0-0x001D6BA4 (484 bytes), lines 1041-1125
// MakeNTextOutline__15CComponentTableFP9C2dObjectffffffPC10RwRGBARealPC7C2dFontPCcff
char *CComponentTable::MakeNTextOutline(C2dObject *lpObject, float lrPosX, float lrPosY, float lrHandleX, float lrHandleY, float lrWidth, float lrHeight, RwRGBAReal *lpColour, C2dFont *lpFont, char *lpcString, float lrShadowOffsetX, float lrShadowOffsetY)
{
    // param C2dObject *lpObject  (in $v0)
    // param float lrPosX  ($sp+0)
    // param float lrPosY  ($sp+0)
    // param float lrHandleX  ($sp+0)
    // param float lrHandleY  ($sp+0)
    // param float lrWidth  ($sp+0)
    // param float lrHeight  ($sp+0)
    // param RwRGBAReal *lpColour  (in $v0)
    // param C2dFont *lpFont  (in $v0)
    // param char *lpcString  (in $v0)
    // param float lrShadowOffsetX  ($sp+0)
    // param float lrShadowOffsetY  ($sp+0)
    {   // 0x001D69C0-0x001D6BA4
        char *lpcPtr;  // in $t5
        unsigned int lunNumChars;  // in $t4
        CB22dObjectCustomDataNText *lpTextData;  // in $t3
        C2dFontChar *lpChar;  // in $v0
        float lrLength;  // optimised away
        float lrStringWidth;  // optimised away
    }
}

// 0x001D6BB0-0x001D6E60 (688 bytes), lines 931-1009
// _RenderNTextOutline__15CComponentTableFPC24B22dObjectAnimatablesTag
void CComponentTable::_RenderNTextOutline(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001D6BB0-0x001D6E60
        unsigned int lunCharNum;  // in $s7
        float lrOffsetY;  // optimised away
        float lrOffsetX;  // $sp+240
        int lnPass;  // in $s1
        CB22dObjectCustomDataNText *lpTextData;  // in $s6
        float lrScaleX;  // optimised away
        unsigned char *lpcString;  // in $v0
        C2dFont *lpFont;  // in $s0
        C2dFontChar *lpChar;  // in $v0
        B22dSpriteTag lSprite;  // $sp+176
    }
}

// 0x001D6E60-0x001D6ED4 (116 bytes), lines 866-879
// DestroySortFrames__15CComponentTableFv
void CComponentTable::DestroySortFrames()
{
    // param CComponentTable *this  (in $s0)
    {   // 0x001D6E60-0x001D6ED4
        unsigned int lunSortItem;  // in $s1
    }
}

// 0x001D6EE0-0x001D7018 (312 bytes), lines 828-851
// UpdateSort__15CComponentTableFf
void CComponentTable::UpdateSort(float krTimestep)
{
    // param CComponentTable *this  (in $s2)
    // param float krTimestep  (optimised away)
    {   // 0x001D6EE0-0x001D7018
        int lbUpdated;  // in $s1
        unsigned int lunSortItem;  // in $s0
    }
}

// 0x001D7020-0x001D7338 (792 bytes), lines 751-812
// SetupSort__15CComponentTableFv
void CComponentTable::SetupSort()
{
    // param CComponentTable *this  (in $s0)
    {   // 0x001D7020-0x001D7338
        C2dObject *lpObject;  // in $s3
        unsigned int lunRow;  // in $s2
        unsigned int lunColumn;  // in $s1
        CSortData lSortData;  // $sp+112
        unsigned int lunSortItem;  // in $a1
    }
}

// 0x001D7340-0x001D7DA4 (2660 bytes), lines 462-736
// SetData__15CComponentTableFP26CMenuComponentResultsTablei
void CComponentTable::SetData(CMenuComponentResultsTable *lpTable, int lnBaseLayer)
{
    // param CComponentTable *this  (in $s4)
    // param CMenuComponentResultsTable *lpTable  (in $v0)
    // param int lnBaseLayer  (in $fp)
    {   // 0x001D7340-0x001D7DA4
        CCarData *lpCarData;  // in $v0
        float lrMaxWidth;  // optimised away
        C2dFrame *lpFrame;  // $sp+256
        RwRGBAReal *lpColour;  // $sp+240
        CMenuResultsTableRow *lpRow;  // in $s1
        CMenuResultsTableColumn *lpColumn;  // in $s0
        char *lpacLongTextPos;  // $sp+224
        unsigned int lunSortItemCount;  // $sp+208
        unsigned int lunSortItem;  // in $s0
        C2dFont *lpFont;  // $sp+192
        float lrUsePosY;  // optimised away
        float lrPosY;  // optimised away
        float lrPosX;  // optimised away
        unsigned int lunColumn;  // in $s7
        unsigned int lunRow;  // in $a2
    }
}

// 0x001D7DB0-0x001D7E84 (212 bytes), lines 403-445
// SetData__29CMenuGfxComponentResultsTableFPv
void CMenuGfxComponentResultsTable::SetData(void *lpData)
{
    // param CMenuGfxComponentResultsTable *this  (in $s0)
    // param void *lpData  (in $v0)
    {   // 0x001D7DB0-0x001D7E84
        CMenuComponentResultsTable *lpTable;  // in $s1
    }
}

// 0x001D7E90-0x001D7F8C (252 bytes), lines 380-387
// Update__29CMenuGfxComponentResultsTableFf
void CMenuGfxComponentResultsTable::Update(float lrTimestep)
{
    // param CMenuGfxComponentResultsTable *this  (in $s1)
    // param float lrTimestep  (optimised away)
    {   // 0x001D7E90-0x001D7F8C
        unsigned int lunTable;  // in $s0
    }
}

// 0x001D7F90-0x001D7FE4 (84 bytes), lines 355-364
// Reset__29CMenuGfxComponentResultsTableFv
void CMenuGfxComponentResultsTable::Reset()
{
    // param CMenuGfxComponentResultsTable *this  (in $s1)
    {   // 0x001D7F90-0x001D7FE4
        unsigned int lunTable;  // in $s0
    }
}

// 0x001D7FF0-0x001D8018 (40 bytes), lines 335-339
// IncrementCounts__29CMenuGfxComponentResultsTableFPiPiPiPi
void CMenuGfxComponentResultsTable::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001D7FF0-0x001D8018
    }
}

