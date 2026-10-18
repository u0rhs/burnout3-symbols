// C:\dev\rwaudio\source\core\src\rwawavedict.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _RwaWaveDictStreamWriteCallback(RwStream *, RwStreamChunks *, unsigned int, void *);
RwaUUID rwaWAVEDICT_WORK;  // 0x002DA090
unsigned int _rwaGblockAlign;  // 0x003110E4
unsigned char *_rwaGwaveStreamBuf;  // 0x003111D4
unsigned int _rwaGwaveIOBufferSize;  // 0x003111D8
static int _moduleOpen;  // 0x003111DC
static int _moduleClosing;  // 0x003111E0
static RwaWaveDict *_workingDict;  // 0x003111E4
static RwaWaveDict *_currentDict;  // 0x003111E8
static RwLinkList _waveDictList;  // 0x003111F0
unsigned int ourGlobals[4096];  // 0x004486D0
static RwaFreeList _waveDictFreeList;  // 0x00495870

// ---- functions ----

// 0x00274670-0x002746CC (92 bytes), lines 1893-1912
void _rwaWaveDictRemoveAllWave(RwaWave *wave)
{
    // param RwaWave *wave  (in $s2)
    {   // 0x00274670-0x002746CC
        RwLLLink *lastLink;  // in $v0
        RwLLLink *link;  // in $s0
    }
}

// 0x002746D0-0x00274AA0 (976 bytes), lines 1688-1872
RwaWaveDict *_rwaWaveDictStreamRead(RwaWaveDict *waveDict, RwStream *stream, RwaObj *obj, RwaWaveDef *waveDef, RwaWaveFormat *targetFormat, unsigned int flags)
{
    // param RwaWaveDict *waveDict  (in $s4)
    // param RwStream *stream  (in $s3)
    // param RwaObj *obj  ($sp+172)
    // param RwaWaveDef *waveDef  ($sp+168)
    // param RwaWaveFormat *targetFormat  ($sp+164)
    // param unsigned int flags  ($sp+160)
    {   // 0x002746D0-0x00274AA0
        RwaLLNode *lastNode;  // in $v1
        RwaLLNode *node;  // in $v0
        RwaWave *wave;  // in $s3
        void *streamIOBuffer;  // in $s1
        int failed;  // in $s7
        unsigned int i;  // in $fp
        unsigned int noWaves;  // $sp+204
        int createdWaveDict;  // in $s0
        RwChunkHeaderInfo chunkHeaderInfo;  // $sp+176
    }
}

// 0x00274AA0-0x00274AA8 (8 bytes), lines 1230-1230
RwaWaveDict *RwaWaveDictGetCurrent()
{
    {   // 0x00274AA0-0x00274AA8
    }
}

// 0x00274AB0-0x00274B24 (116 bytes), lines 1045-1064
RwaWaveDict *RwaWaveDictAddWave(RwaWaveDict *waveDict, RwaWave *wave)
{
    // param RwaWaveDict *waveDict  (in $s1)
    // param RwaWave *wave  (in $s0)
    {   // 0x00274AB0-0x00274B24
    }
}

// 0x00274B30-0x00274BAC (124 bytes), lines 896-923
RwaWave *RwaWaveDictFindWaveByName(RwaWaveDict *waveDict, char *name)
{
    // param RwaWaveDict *waveDict  (in $v0)
    // param char *name  (in $s3)
    {   // 0x00274B30-0x00274BAC
        RwaLLNode *lastNode;  // in $s2
        RwaLLNode *node;  // in $s1
        RwaWave *wave;  // in $s0
    }
}

// 0x00274BB0-0x00274C0C (92 bytes), lines 836-874
RwaWaveDef *RwaWaveDictUsingAllWaveDef(RwaWaveDef *waveDef)
{
    // param RwaWaveDef *waveDef  (in $v0)
    {   // 0x00274BB0-0x00274C0C
        RwaLLNode *lastNode;  // in $a2
        RwaLLNode *node;  // in $a1
        RwaWaveDict *waveDict;  // in $v0
        RwLLLink *lastLink;  // in $v0
        RwLLLink *link;  // in $v1
    }
}

// 0x00274C10-0x00274C88 (120 bytes), lines 695-722
RwaWaveDict *RwaWaveDictFindByName(char *name)
{
    // param char *name  (in $s3)
    {   // 0x00274C10-0x00274C88
        RwaWaveDict *waveDict;  // in $s1
        RwLLLink *lastLink;  // in $v0
        RwLLLink *link;  // in $s0
    }
}

// 0x00274C90-0x00274DE8 (344 bytes), lines 332-402
void RwaWaveDictDestroy(RwaWaveDict *waveDict)
{
    // param RwaWaveDict *waveDict  (in $s5)
    {   // 0x00274C90-0x00274DE8
        int depends;  // in $s3
        RwaLLNode *lastNode;  // in $s7
        RwaLLNode *node;  // in $s2
        RwLLLink *lastLink;  // in $v0
        RwLLLink *link;  // in $v0
        RwaWaveDict *cWaveDict;  // in $s1
        RwaWave *wave;  // in $s0
    }
}

// 0x00274DF0-0x00274E64 (116 bytes), lines 197-230
void _rwaWaveDictCloseModule()
{
    {   // 0x00274DF0-0x00274E64
        RwLLLink *lastLink;  // in $v0
        RwLLLink *link;  // in $v0
    }
}

// 0x00274E70-0x00274FA8 (312 bytes), lines 145-174
int _rwaWaveDictOpenModule()
{
    {   // 0x00274E70-0x00274FA8
        RwaWaveDict _staticWorkingDict;  // at 0x00495840
    }
}

