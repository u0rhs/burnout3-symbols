// bamateri.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwPluginRegistry materialTKList;  // 0x002B3700
static RwSurfaceProperties defaultSurfaceProperties;  // 0x002B3718
RwModuleInfo materialModule;  // 0x00310B48
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001865D0-0x0018661C (76 bytes), lines 84-97
void _rpMaterialSetDefaultSurfaceProperties(RwSurfaceProperties *surfaceProps)
{
    // param RwSurfaceProperties *surfaceProps  (in $v0)
    {   // 0x001865D0-0x0018661C
    }
}

// 0x00186620-0x001866A4 (132 bytes), lines 114-134
void *_rpMaterialOpen(void *instance, int offset)
{
    // param void *instance  (in $s1)
    // param int offset  (in $v0)
    {   // 0x00186620-0x001866A4
    }
}

// 0x001866B0-0x00186724 (116 bytes), lines 146-160
void *_rpMaterialClose(void *instance)
{
    // param void *instance  (in $s1)
    {   // 0x001866B0-0x00186724
    }
}

// 0x00186730-0x001867F8 (200 bytes), lines 199-234
RpMaterial *RpMaterialCreate()
{
    {   // 0x00186730-0x001867F8
        RwRGBA color;  // $sp+44
        RpMaterial *material;  // in $s0
    }
}

// 0x00186800-0x0018687C (124 bytes), lines 260-284
int RpMaterialDestroy(RpMaterial *material)
{
    // param RpMaterial *material  (in $s0)
    {   // 0x00186800-0x0018687C
    }
}

// 0x00186880-0x001868D8 (88 bytes), lines 590-613
RpMaterial *RpMaterialSetTexture(RpMaterial *material, RwTexture *texture)
{
    // param RpMaterial *material  (in $s1)
    // param RwTexture *texture  (in $s0)
    {   // 0x00186880-0x001868D8
    }
}

// 0x001868E0-0x00186D4C (1132 bytes), lines 961-1060
RpMaterial *RpMaterialStreamRead(RwStream *stream)
{
    // param RwStream *stream  (in $s0)
    {   // 0x001868E0-0x00186D4C
        RwError _rwErrorCode;  // $sp+152
        RwError _rwErrorCode;  // $sp+144
        RwRGBA tmp;  // $sp+168
        RpMaterialChunkInfo mat;  // $sp+112
        unsigned int version;  // $sp+164
        unsigned int size;  // $sp+160
    }
}

