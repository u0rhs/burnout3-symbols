// babinfrm.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwPluginRegistry frameTKList;  // 0x002A2BB0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014FE40-0x0014FE80 (64 bytes), lines 281-291
rwFrameList *_rwFrameListDeinitialize(rwFrameList *frameList)
{
    // param rwFrameList *frameList  (in $s0)
    {   // 0x0014FE40-0x0014FE80
    }
}

// 0x0014FE80-0x00150240 (960 bytes), lines 453-565
rwFrameList *_rwFrameListStreamRead(RwStream *stream, rwFrameList *frameList)
{
    // param RwStream *stream  (in $s5)
    // param rwFrameList *frameList  (in $s4)
    {   // 0x0014FE80-0x00150240
        RwError _rwErrorCode;  // $sp+248
        RwMatrixTag *mat;  // in $s2
        RwFrame *frame;  // in $s1
        _rwStreamFrame f;  // $sp+176
        RwError _rwErrorCode;  // $sp+240
        unsigned int version;  // $sp+268
        unsigned int size;  // $sp+264
        int i;  // in $s0
        _rwStreamFrameList fl;  // $sp+260
    }
}

