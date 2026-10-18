// I:\GameShared\Archive\RpADC\rpAdc.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpMesh *_rpADCRemoveDegeneratesAndInsertADC(RpMesh *, RpMeshHeader *, void *);
RpMesh *_rpADCCountVerticesAfterDegenerateRemoval(RpMesh *, RpMeshHeader *, void *);
RpAtomic *_ADCInAllAtomics(RpAtomic *, void *);
void *RpADCDataCopy(void *, void *, int, int);  // 0x0020CA10
void *RpADCDataDestructor(void *, int, int);  // 0x0020CA20
void *RpADCDataConstructor(void *, int, int);  // 0x0020CAA0
void *RpADCDataClose(void *, int, int);  // 0x0020CAD0
void *RpADCDataOpen(void *, int, int);  // 0x0020CAE0
static int _rpADCDataOffset;  // 0x00310CA0
static int (*_meshCallback)(RpMesh *);  // 0x00310CA4
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0020C970-0x0020C994 (36 bytes), lines 451-457
signed char *RpADCIsGeometryConverted(RpGeometry *pGeom)
{
    // param RpGeometry *pGeom  (in $v0)
    {   // 0x0020C970-0x0020C994
    }
}

// 0x0020C9A0-0x0020CA0C (108 bytes), lines 231-255
int RpADCPluginAttach()
{
    {   // 0x0020C9A0-0x0020CA0C
        int returnVal;  // in $v0
    }
}

// 0x0020CA10-0x0020CA18 (8 bytes), lines 218-218
// RpADCDataCopy__FPvPCvii
static void *RpADCDataCopy(void *dstObject)
{
    // param void *dstObject  (in $v0)
    {   // 0x0020CA10-0x0020CA18
    }
}

// 0x0020CA20-0x0020CA9C (124 bytes), lines 181-192
// RpADCDataDestructor__FPvii
static void *RpADCDataDestructor(void *object)
{
    // param void *object  (in $s1)
    {   // 0x0020CA20-0x0020CA9C
    }
}

// 0x0020CAA0-0x0020CAD0 (48 bytes), lines 155-159
// RpADCDataConstructor__FPvii
static void *RpADCDataConstructor(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0020CAA0-0x0020CAD0
    }
}

// 0x0020CAD0-0x0020CAD8 (8 bytes), lines 132-132
// RpADCDataClose__FPvii
static void *RpADCDataClose(void *instance)
{
    // param void *instance  (in $v0)
    {   // 0x0020CAD0-0x0020CAD8
    }
}

// 0x0020CAE0-0x0020CAE8 (8 bytes), lines 108-108
// RpADCDataOpen__FPvii
static void *RpADCDataOpen(void *instance)
{
    // param void *instance  (in $v0)
    {   // 0x0020CAE0-0x0020CAE8
    }
}

