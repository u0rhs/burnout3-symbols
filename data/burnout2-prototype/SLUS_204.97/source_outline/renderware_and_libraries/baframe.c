// baframe.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwPluginRegistry frameTKList;  // 0x002A2BB0
RwModuleInfo frameModule;  // 0x00310900
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00152E80-0x00152F0C (140 bytes), lines 106-128
void *_rwFrameOpen(void *instance, int offset)
{
    // param void *instance  (in $s1)
    // param int offset  (in $v0)
    {   // 0x00152E80-0x00152F0C
    }
}

// 0x00152F10-0x00152F84 (116 bytes), lines 141-155
void *_rwFrameClose(void *instance)
{
    // param void *instance  (in $s1)
    {   // 0x00152F10-0x00152F84
    }
}

// 0x00152F90-0x0015303C (172 bytes), lines 175-194
static void rwSetHierarchyRoot(RwFrame *frame, RwFrame *root)
{
    // param RwFrame *frame  (in $s3)
    // param RwFrame *root  (in $s2)
    {   // 0x00152F90-0x0015303C
    }
}

// 0x00153040-0x00153050 (16 bytes), lines 439-445
int RwFrameDirty(RwFrame *frame)
{
    // param RwFrame *frame  (in $v0)
    {   // 0x00153040-0x00153050
    }
}

// 0x00153050-0x0015311C (204 bytes), lines 466-481
void _rwFrameInit(RwFrame *frame)
{
    // param RwFrame *frame  (in $v0)
    {   // 0x00153050-0x0015311C
    }
}

// 0x00153120-0x00153178 (88 bytes), lines 525-543
RwFrame *RwFrameCreate()
{
    {   // 0x00153120-0x00153178
        RwFrame *frame;  // in $s0
    }
}

// 0x00153180-0x0015323C (188 bytes), lines 668-680
int RwFrameDestroy(RwFrame *frame)
{
    // param RwFrame *frame  (in $s0)
    {   // 0x00153180-0x0015323C
    }
}

// 0x00153240-0x00153370 (304 bytes), lines 772-799
static void rwFrameDestroyRecurse(RwFrame *frame)
{
    // param RwFrame *frame  (in $s2)
    {   // 0x00153240-0x00153370
        RwFrame *nextChild;  // in $s1
        RwFrame *child;  // in $s0
    }
}

// 0x00153370-0x00153424 (180 bytes), lines 821-830
int RwFrameDestroyHierarchy(RwFrame *frame)
{
    // param RwFrame *frame  (in $s0)
    {   // 0x00153370-0x00153424
    }
}

// 0x00153430-0x00153498 (104 bytes), lines 867-888
RwFrame *RwFrameUpdateObjects(RwFrame *frame)
{
    // param RwFrame *frame  (in $v0)
    {   // 0x00153430-0x00153498
        unsigned int oldFlags;  // in $a2
    }
}

// 0x001534A0-0x001534E0 (64 bytes), lines 948-963
RwMatrixTag *RwFrameGetLTM(RwFrame *frame)
{
    // param RwFrame *frame  (in $s0)
    {   // 0x001534A0-0x001534E0
    }
}

// 0x001534E0-0x0015363C (348 bytes), lines 1070-1110
RwFrame *RwFrameAddChild(RwFrame *parent, RwFrame *child)
{
    // param RwFrame *parent  (in $s1)
    // param RwFrame *child  (in $s0)
    {   // 0x001534E0-0x0015363C
    }
}

// 0x00153640-0x00153774 (308 bytes), lines 1130-1170
RwFrame *RwFrameRemoveChild(RwFrame *child)
{
    // param RwFrame *child  (in $s0)
    {   // 0x00153640-0x00153774
        RwFrame *curFrame;  // in $v1
    }
}

// 0x00153780-0x0015380C (140 bytes), lines 1309-1324
RwFrame *RwFrameTranslate(RwFrame *frame, RwV3d *translation, RwOpCombineType combineOp)
{
    // param RwFrame *frame  (in $s0)
    // param RwV3d *translation  (in $v0)
    // param RwOpCombineType combineOp  (in $v0)
    {   // 0x00153780-0x0015380C
    }
}

// 0x00153810-0x0015389C (140 bytes), lines 1446-1461
RwFrame *RwFrameRotate(RwFrame *frame, RwV3d *axis, float angle, RwOpCombineType combineOp)
{
    // param RwFrame *frame  (in $s0)
    // param RwV3d *axis  (in $v0)
    // param float angle  ($sp+32)
    // param RwOpCombineType combineOp  (in $v0)
    {   // 0x00153810-0x0015389C
    }
}

// 0x001538A0-0x00153950 (176 bytes), lines 1493-1499
RwFrame *RwFrameSetIdentity(RwFrame *frame)
{
    // param RwFrame *frame  (in $v0)
    {   // 0x001538A0-0x00153950
    }
}

// 0x00153950-0x001539D4 (132 bytes), lines 1573-1603
RwFrame *RwFrameForAllObjects(RwFrame *frame, RwObject *(*callBack)(RwObject *, void *), void *data)
{
    // param RwFrame *frame  (in $s4)
    // param RwObject *(*callBack)(RwObject *, void *)  (in $s3)
    // param void *data  (in $s2)
    {   // 0x00153950-0x001539D4
        RwLLLink *end;  // in $s1
        RwLLLink *next;  // in $s0
        RwLLLink *current;  // in $v0
    }
}

// 0x001539E0-0x001539FC (28 bytes), lines 1626-1630
int RwFrameSetStaticPluginsSize(int size)
{
    // param int size  (in $v0)
    {   // 0x001539E0-0x001539FC
        int ret;  // in $v0
    }
}

