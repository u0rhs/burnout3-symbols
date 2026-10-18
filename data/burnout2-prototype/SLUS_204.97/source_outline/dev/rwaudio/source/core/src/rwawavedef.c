// C:\dev\rwaudio\source\core\src\rwawavedef.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _RwaWaveDefFindByUUIDCallback(RwaObjDef *, RwaObjDef *, void *);  // 0x002752B0
int _RwaWaveDefDestroyCallback(RwaObjDef *, RwaObjDef *, void *);  // 0x00275700
RwaUUID *_rwaGwaveFormats[8];  // 0x002BB840
RwaUUID rwaWAVEFORMAT_VAG;  // 0x002DA0B0
RwaUUID rwaWAVEFORMAT_PCM;  // 0x002DA0C0
RwaUUID rwaWAVEFORMAT_FLOAT;  // 0x002DA0D0
RwaUUID rwaWAVEFORMAT_GCNADPCM;  // 0x002DA0E0
RwaUUID rwaWAVEFORMAT_XADPCM;  // 0x002DA0F0
RwaUUID rwaWAVEFORMAT_WMA;  // 0x002DA100
RwaUUID rwaWAVEFORMAT_MP3;  // 0x002DA110
RwaUUID rwaWAVEFORMAT_AC3;  // 0x002DA120
RwaObjDef *_rwaGnullObjDef;  // 0x003111AC
static int _moduleOpen;  // 0x003111F8
static RwaFreeList _waveDefFreeList;  // 0x004958A0

// ---- functions ----

// 0x00274FB0-0x002750C8 (280 bytes), lines 1639-1702
RwaWaveFormat *_rwaWaveFormatSerialize(RwaWaveFormat *waveFormat, void *block, int save)
{
    // param RwaWaveFormat *waveFormat  (in $s1)
    // param void *block  (in $v0)
    // param int save  (in $v0)
    {   // 0x00274FB0-0x002750C8
        unsigned char *readPos;  // in $s0
        unsigned char *writePos;  // in $s0
    }
}

// 0x002750D0-0x002750FC (44 bytes), lines 1599-1611
unsigned int _rwaWaveFormatGetSize(RwaWaveFormat *waveFormat)
{
    // param RwaWaveFormat *waveFormat  (in $v0)
    {   // 0x002750D0-0x002750FC
        unsigned int size;  // in $v0
    }
}

// 0x00275100-0x00275174 (116 bytes), lines 1145-1166
void RwaWaveDefAssignSupportedFormats(RwaWaveDef *waveDef, RwaWaveDefFormat **formats, unsigned int noSupportedFormats)
{
    // param RwaWaveDef *waveDef  (in $s2)
    // param RwaWaveDefFormat **formats  (in $s1)
    // param unsigned int noSupportedFormats  (in $s0)
    {   // 0x00275100-0x00275174
    }
}

// 0x00275180-0x0027523C (188 bytes), lines 1028-1040
int RwaWaveDefFormatWaveFormatCompare(RwaWaveDefFormat *waveDefFormat, RwaWaveFormat *waveFormat)
{
    // param RwaWaveDefFormat *waveDefFormat  (in $s1)
    // param RwaWaveFormat *waveFormat  (in $s0)
    {   // 0x00275180-0x0027523C
    }
}

// 0x00275240-0x002752A4 (100 bytes), lines 991-1002
void RwaWaveDefFormatCopyToWaveFormat(RwaWaveDefFormat *waveDefFormat, RwaWaveFormat *waveFormat)
{
    // param RwaWaveDefFormat *waveDefFormat  (in $v0)
    // param RwaWaveFormat *waveFormat  (in $v0)
    {   // 0x00275240-0x002752A4
    }
}

// 0x002752B0-0x00275328 (120 bytes), lines 934-961
static int _RwaWaveDefFindByUUIDCallback(RwaObjDef *objDef, void *userData)
{
    // param RwaObjDef *objDef  (in $v0)
    // param void *userData  (in $v0)
    {   // 0x002752B0-0x00275328
        RwaWaveDefFindByUUIDData *findData;  // in $s3
        RwaWaveDef *waveDef;  // in $s2
        RwLLLink *lastLink;  // in $s1
        RwLLLink *link;  // in $s0
    }
}

// 0x00275330-0x00275378 (72 bytes), lines 896-907
RwaWaveDef *RwaWaveDefFindByUUID(RwaUUID *uuid)
{
    // param RwaUUID *uuid  (in $v0)
    {   // 0x00275330-0x00275378
        RwaWaveDefFindByUUIDData findData;  // $sp+40
    }
}

// 0x00275380-0x0027543C (188 bytes), lines 801-843
int RwaWaveDefDestroy(RwaWaveDef *waveDef)
{
    // param RwaWaveDef *waveDef  (in $s0)
    {   // 0x00275380-0x0027543C
    }
}

// 0x00275440-0x0027554C (268 bytes), lines 720-779
RwaWaveDef *RwaWaveDefCreate(RwaObjDef *objDef, RwaWaveDef *waveDef)
{
    // param RwaObjDef *objDef  (in $s1)
    // param RwaWaveDef *waveDef  (in $s0)
    {   // 0x00275440-0x0027554C
    }
}

// 0x00275550-0x002755A8 (88 bytes), lines 633-649
RwaWaveDef *RwaWaveDefAssignID(RwaWaveDef *waveDef, RwaUUID *uuid, char *name)
{
    // param RwaWaveDef *waveDef  (in $s1)
    // param RwaUUID *uuid  (in $v0)
    // param char *name  (in $s0)
    {   // 0x00275550-0x002755A8
    }
}

// 0x002755B0-0x002755F4 (68 bytes), lines 560-576
int _rwaWaveDefFindByObjCallback(RwaObjDef *objDef, void *userData)
{
    // param RwaObjDef *objDef  (in $v0)
    // param void *userData  (in $v0)
    {   // 0x002755B0-0x002755F4
        RwaWaveDefFindByObjData *findData;  // in $v0
        RwaWaveDef *waveDef;  // in $a3
        RwLLLink *lastLink;  // in $a1
        RwLLLink *link;  // in $a0
    }
}

// 0x00275600-0x0027568C (140 bytes), lines 470-483
int RwaWaveFormatCompare(RwaWaveFormat *waveFormat1, RwaWaveFormat *waveFormat2)
{
    // param RwaWaveFormat *waveFormat1  (in $s1)
    // param RwaWaveFormat *waveFormat2  (in $s0)
    {   // 0x00275600-0x0027568C
    }
}

// 0x00275690-0x00275700 (112 bytes), lines 389-403
int _rwaWaveRegister(RwaWaveDef *(**registerFuncs)(), unsigned int numRegisterFuncs)
{
    // param RwaWaveDef *(**registerFuncs)()  (in $s2)
    // param unsigned int numRegisterFuncs  (in $s1)
    {   // 0x00275690-0x00275700
        unsigned int i;  // in $s0
    }
}

// 0x00275700-0x002757E4 (228 bytes), lines 338-361
static int _RwaWaveDefDestroyCallback(RwaObjDef *objDef)
{
    // param RwaObjDef *objDef  (in $v0)
    {   // 0x00275700-0x002757E4
        RwaWaveDef *waveDef;  // in $s2
        RwLLLink *lastLink;  // in $s1
        RwLLLink *nextLink;  // in $s0
        RwLLLink *link;  // in $v0
    }
}

// 0x002757F0-0x00275830 (64 bytes), lines 224-236
void _rwaWaveDefCloseModule()
{
    {   // 0x002757F0-0x00275830
    }
}

// 0x00275830-0x002758B0 (128 bytes), lines 188-208
int _rwaWaveDefOpenModule()
{
    {   // 0x00275830-0x002758B0
    }
}

