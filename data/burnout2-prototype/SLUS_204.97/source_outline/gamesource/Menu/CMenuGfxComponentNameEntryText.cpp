// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentNameEntryText.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderBox(B22dObjectAnimatablesTag *);  // 0x001B0F70
void _RenderNameEntryObject(B22dObjectAnimatablesTag *);  // 0x001E9660
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
static CMenuImageData kaImageData[51];  // 0x002CCC70
static B22dTexAreaTag kaImageTexArea[51];  // 0x002CCFA0
static RwRGBAReal kColourBlueTrans;  // 0x002CD2D0
static RwRGBAReal kColourBlackTrans;  // 0x002CD2E0
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentNameEntryText::__vtable[];  // 0x0030F4E0
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CMenuGfxComponent *gpMenuGfxComponentNameEntryText;  // 0x003105D4
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentNameEntryText gMenuGfxComponentNameEntryText;  // 0x00454BF0

// ---- functions ----

// 0x001E9660-0x001E9904 (676 bytes), lines 288-356
// _RenderNameEntryObject__30CMenuGfxComponentNameEntryTextFPC24B22dObjectAnimatablesTag
void CMenuGfxComponentNameEntryText::_RenderNameEntryObject(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001E9660-0x001E9904
        int lnChar;  // in $s3
        float lrCharWidth;  // optimised away
        float lrOffsetY;  // optimised away
        float lrOffsetX;  // $sp+240
        int lnPass;  // in $s2
        float lrScaleX;  // optimised away
        B22dSpriteTag lSprite;  // $sp+176
        unsigned char *lpacString;  // in $s5
        C2dFont *lpFont;  // in $s1
        CNameEntryCustomObjectData *lpNameEntryData;  // in $s0
    }
}

// 0x001E9910-0x001E9C74 (868 bytes), lines 201-272
// SetData__30CMenuGfxComponentNameEntryTextFPv
void CMenuGfxComponentNameEntryText::SetData(void *lpData)
{
    // param CMenuGfxComponentNameEntryText *this  (in $s5)
    // param void *lpData  (in $v0)
    {   // 0x001E9910-0x001E9C74
        float lrBoxWidth;  // optimised away
        C2dFont *lpFont;  // in $s0
        CNameEntryCustomObjectData *lpNameEntryData;  // in $v0
        unsigned int lunObject;  // in $s0
        char *lpacText;  // in $s6
    }
}

// 0x001E9C80-0x001E9C88 (8 bytes), lines 185-185
// Update__30CMenuGfxComponentNameEntryTextFf
void CMenuGfxComponentNameEntryText::Update()
{
    {   // 0x001E9C80-0x001E9C88
    }
}

// 0x001E9C90-0x001E9CBC (44 bytes), lines 162-168
// Reset__30CMenuGfxComponentNameEntryTextFv
void CMenuGfxComponentNameEntryText::Reset()
{
    // param CMenuGfxComponentNameEntryText *this  (in $v0)
    {   // 0x001E9C90-0x001E9CBC
        unsigned int lunObject;  // in $a1
    }
}

// 0x001E9CC0-0x001E9CDC (28 bytes), lines 139-143
// IncrementCounts__30CMenuGfxComponentNameEntryTextFPiPiPiPi
void CMenuGfxComponentNameEntryText::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001E9CC0-0x001E9CDC
    }
}

