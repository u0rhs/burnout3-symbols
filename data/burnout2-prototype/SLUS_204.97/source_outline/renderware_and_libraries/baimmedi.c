// baimmedi.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014B880-0x0014B890 (16 bytes), lines 137-138
float RwIm2DGetNearScreenZ()
{
    {   // 0x0014B880-0x0014B890
    }
}

// 0x0014B890-0x0014B8A0 (16 bytes), lines 158-159
float RwIm2DGetFarScreenZ()
{
    {   // 0x0014B890-0x0014B8A0
    }
}

// 0x0014B8A0-0x0014B8F4 (84 bytes), lines 196-209
int RwRenderStateSet(RwRenderState state, void *value)
{
    // param RwRenderState state  (in $v0)
    // param void *value  (in $v0)
    {   // 0x0014B8A0-0x0014B8F4
        RwError _rwErrorCode;  // $sp+24
    }
}

// 0x0014B900-0x0014B914 (20 bytes), lines 230-230
int RwRenderStateGet(RwRenderState state, void *value)
{
    // param RwRenderState state  (in $v0)
    // param void *value  (in $v0)
    {   // 0x0014B900-0x0014B914
    }
}

// 0x0014B920-0x0014B934 (20 bytes), lines 479-479
int RwIm2DRenderPrimitive(RwPrimitiveType primType, RwSky2DVertex *vertices, int numVertices)
{
    // param RwPrimitiveType primType  (in $v0)
    // param RwSky2DVertex *vertices  (in $v0)
    // param int numVertices  (in $v0)
    {   // 0x0014B920-0x0014B934
    }
}

// 0x0014B940-0x0014B954 (20 bytes), lines 583-583
int RwIm2DRenderIndexedPrimitive(RwPrimitiveType primType, RwSky2DVertex *vertices, int numVertices, unsigned short *indices, int numIndices)
{
    // param RwPrimitiveType primType  (in $v0)
    // param RwSky2DVertex *vertices  (in $v0)
    // param int numVertices  (in $v0)
    // param unsigned short *indices  (in $v0)
    // param int numIndices  (in $v0)
    {   // 0x0014B940-0x0014B954
        int result;  // in $v0
    }
}

