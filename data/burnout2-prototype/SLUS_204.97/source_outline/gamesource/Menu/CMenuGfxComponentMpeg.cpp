// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentMpeg.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
static CMenuImageData kaImageData[51];  // 0x002DBF10
static B22dTexAreaTag kaImageTexArea[51];  // 0x002DC240
static RwRGBAReal kColourBlueTrans;  // 0x002DC570
static B22dTexAreaTag kTexArea;  // 0x002DC580
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentMpeg::__vtable[];  // 0x0030FC20
CMenuGfxComponent *gpMenuGfxComponentMpeg;  // 0x00310728
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentMpeg gMenuGfxComponentMpeg;  // 0x004A3AB0

// ---- functions ----

// 0x0027E2A0-0x0027E2C4 (36 bytes), lines 238-241
// SetData__21CMenuGfxComponentMpegFPv
void CMenuGfxComponentMpeg::SetData(void *lpData)
{
    // param CMenuGfxComponentMpeg *this  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x0027E2A0-0x0027E2C4
    }
}

// 0x0027E2D0-0x0027E57C (684 bytes), lines 160-219
// Update__21CMenuGfxComponentMpegFf
void CMenuGfxComponentMpeg::Update()
{
    // param CMenuGfxComponentMpeg *this  (in $s1)
    {   // 0x0027E2D0-0x0027E57C
        RwRGBAReal lWhite;  // $sp+80
        int lnCount;  // in $s2
        int lnY;  // in $v0
        int lnX;  // in $v0
    }
}

// 0x0027E580-0x0027E5B0 (48 bytes), lines 136-144
// Reset__21CMenuGfxComponentMpegFv
void CMenuGfxComponentMpeg::Reset()
{
    // param CMenuGfxComponentMpeg *this  (in $v0)
    {   // 0x0027E580-0x0027E5B0
        int lnCount;  // in $a1
    }
}

// 0x0027E5B0-0x0027E5D8 (40 bytes), lines 112-116
// IncrementCounts__21CMenuGfxComponentMpegFPiPiPiPi
void CMenuGfxComponentMpeg::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x0027E5B0-0x0027E5D8
    }
}

