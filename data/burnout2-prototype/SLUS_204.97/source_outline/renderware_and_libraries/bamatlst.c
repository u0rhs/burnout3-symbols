// bamatlst.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00186D50-0x00186DF8 (168 bytes), lines 65-93
RpMaterialList *_rpMaterialListDeinitialize(RpMaterialList *matList)
{
    // param RpMaterialList *matList  (in $s0)
    {   // 0x00186D50-0x00186DF8
        int nI;  // in $s3
        int materialCount;  // in $s2
        RpMaterial **materialArray;  // in $s1
    }
}

// 0x00186E00-0x00186E14 (20 bytes), lines 108-113
RpMaterialList *_rpMaterialListInitialize(RpMaterialList *matList)
{
    // param RpMaterialList *matList  (in $v0)
    {   // 0x00186E00-0x00186E14
    }
}

// 0x00186E20-0x00186E34 (20 bytes), lines 211-212
RpMaterial *_rpMaterialListGetMaterial(RpMaterialList *matList, int matIndex)
{
    // param RpMaterialList *matList  (in $v0)
    // param int matIndex  (in $v0)
    {   // 0x00186E20-0x00186E34
    }
}

// 0x00186E40-0x00186F6C (300 bytes), lines 268-325
int _rpMaterialListAppendMaterial(RpMaterialList *matList, RpMaterial *material)
{
    // param RpMaterialList *matList  (in $s2)
    // param RpMaterial *material  (in $s1)
    {   // 0x00186E40-0x00186F6C
        RwError _rwErrorCode;  // $sp+72
        unsigned int memSize;  // in $v0
        RpMaterial **materials;  // in $v0
    }
}

// 0x00186F70-0x00186FB0 (64 bytes), lines 345-357
int _rpMaterialListFindMaterialIndex(RpMaterialList *matList, RpMaterial *material)
{
    // param RpMaterialList *matList  (in $v0)
    // param RpMaterial *material  (in $v0)
    {   // 0x00186F70-0x00186FB0
        int numMats;  // in $v0
    }
}

// 0x00186FB0-0x00187488 (1240 bytes), lines 502-617
RpMaterialList *_rpMaterialListStreamRead(RwStream *stream, RpMaterialList *matList)
{
    // param RwStream *stream  (in $s5)
    // param RpMaterialList *matList  (in $s4)
    {   // 0x00186FB0-0x00187488
        RwError _rwErrorCode;  // $sp+144
        RwError _rwErrorCode;  // $sp+136
        RpMaterial *material;  // in $v0
        int status;  // in $v0
        unsigned int version;  // $sp+172
        unsigned int size;  // $sp+168
        int *matindex;  // in $s1
        int len;  // $sp+164
        int i;  // in $s0
    }
}

