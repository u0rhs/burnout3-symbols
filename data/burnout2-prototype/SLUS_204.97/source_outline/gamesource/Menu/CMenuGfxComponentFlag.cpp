// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentFlag.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderFlagObject(B22dObjectAnimatablesTag *);  // 0x00267480
RwRGBAReal kColourWhite;  // 0x002C4DD0
static CMenuImageData kaImageData[51];  // 0x002D91D0
static B22dTexAreaTag kaImageTexArea[51];  // 0x002D9500
static RwRGBAReal kColourBlueTrans;  // 0x002D9830
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentFlag::__vtable[];  // 0x0030FA70
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CMenuGfxComponent *gpMenuGfxComponentFlag;  // 0x0031069C
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentFlag gMenuGfxComponentFlag;  // 0x00494EF0

// ---- functions ----

// 0x00267480-0x00267AA4 (1572 bytes), lines 324-419
// RenderFlagObject__21CMenuGfxComponentFlagFPC24B22dObjectAnimatablesTag
void CMenuGfxComponentFlag::RenderFlagObject(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x00267480-0x00267AA4
        float lrAngle2;  // optimised away
        float lrAngle1;  // $sp+3072
        float lrYBottom;  // optimised away
        float lrYTop;  // optimised away
        float lrX;  // optimised away
        float lrYStep;  // optimised away
        float lrXStep;  // optimised away
        B22dTriStripTag lTriStrip;  // $sp+2800
        int lnY;  // in $a2
        int lnX;  // in $a1
        float larOffsets[21][31];  // $sp+192
        B22dObjectCustomDataFlagTag *lpFlagData;  // in $s0
    }
}

// 0x00267AB0-0x00267ADC (44 bytes), lines 270-272
// SetData__21CMenuGfxComponentFlagFPv
void CMenuGfxComponentFlag::SetData(void *lpData)
{
    // param CMenuGfxComponentFlag *this  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x00267AB0-0x00267ADC
    }
}

// 0x00267AE0-0x00267CE8 (520 bytes), lines 190-253
// Update__21CMenuGfxComponentFlagFf
void CMenuGfxComponentFlag::Update(float lrTimestep)
{
    // param CMenuGfxComponentFlag *this  (in $s1)
    // param float lrTimestep  (optimised away)
    {   // 0x00267AE0-0x00267CE8
        float lrAlpha;  // optimised away
    }
}

// 0x00267CF0-0x00267D28 (56 bytes), lines 169-174
// Reset__21CMenuGfxComponentFlagFv
void CMenuGfxComponentFlag::Reset()
{
    // param CMenuGfxComponentFlag *this  (in $v0)
    {   // 0x00267CF0-0x00267D28
    }
}

// 0x00267D30-0x00267D4C (28 bytes), lines 147-151
// IncrementCounts__21CMenuGfxComponentFlagFPiPiPiPi
void CMenuGfxComponentFlag::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x00267D30-0x00267D4C
    }
}

