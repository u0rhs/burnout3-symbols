// batkreg.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void *_rwFreeListAllocReal(RwFreeList *);  // 0x0014D130
void rwDestroyEntry(void *, void *);  // 0x0014EB70
void *PluginDefaultConstructor(void *, int, int);  // 0x0014ED00
void *PluginDefaultDestructor(void *, int, int);  // 0x0014ED10
void *PluginDefaultCopy(void *, void *, int, int);  // 0x0014ED20
static RwPluginRegistry **toolkitNonFLRegList;  // 0x003108D8
static unsigned int numRegToolkits;  // 0x003108DC
RwFreeList *toolkitRegEntries;  // 0x003108E0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014EB20-0x0014EB68 (72 bytes), lines 75-89
int _rwPluginRegistryOpen()
{
    {   // 0x0014EB20-0x0014EB68
    }
}

// 0x0014EB70-0x0014EBB8 (72 bytes), lines 104-117
static void rwDestroyEntry(void *object, void *freelist)
{
    // param void *object  (in $v0)
    // param void *freelist  (in $v0)
    {   // 0x0014EB70-0x0014EBB8
        RwPluginRegEntry *entry;  // in $v1
    }
}

// 0x0014EBC0-0x0014ECFC (316 bytes), lines 132-202
int _rwPluginRegistryClose()
{
    {   // 0x0014EBC0-0x0014ECFC
        RwPluginRegEntry *nextEntry;  // in $s2
        RwPluginRegistry *parentReg;  // in $s1
        RwPluginRegEntry *entry;  // in $v0
        unsigned int i;  // in $s0
    }
}

// 0x0014ED00-0x0014ED08 (8 bytes), lines 220-220
static void *PluginDefaultConstructor(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0014ED00-0x0014ED08
    }
}

// 0x0014ED10-0x0014ED18 (8 bytes), lines 238-238
static void *PluginDefaultDestructor(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0014ED10-0x0014ED18
    }
}

// 0x0014ED20-0x0014ED28 (8 bytes), lines 257-257
static void *PluginDefaultCopy(void *dstObject)
{
    // param void *dstObject  (in $v0)
    {   // 0x0014ED20-0x0014ED28
    }
}

// 0x0014ED30-0x0014ED78 (72 bytes), lines 274-294
int _rwPluginRegistrySetStaticPluginsSize(RwPluginRegistry *reg, int size)
{
    // param RwPluginRegistry *reg  (in $v0)
    // param int size  (in $v0)
    {   // 0x0014ED30-0x0014ED78
    }
}

// 0x0014ED80-0x0014F090 (784 bytes), lines 344-508
int _rwPluginRegistryAddPlugin(RwPluginRegistry *reg, int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param RwPluginRegistry *reg  (in $s4)
    // param int size  (in $s3)
    // param unsigned int pluginID  (in $s2)
    // param void *(*constructCB)(void *, int, int)  (in $fp)
    // param void *(*destructCB)(void *, int, int)  ($sp+192)
    // param void *(*copyCB)(void *, void *, int, int)  ($sp+176)
    {   // 0x0014ED80-0x0014F090
        RwError _rwErrorCode;  // $sp+216
        unsigned int j;  // in $s1
        RwPluginRegistry **newRegistryList;  // in $s0
        unsigned int i;  // in $a0
        RwError _rwErrorCode;  // $sp+208
        int newStructSize;  // in $s0
        RwPluginRegEntry *entry;  // in $s0
    }
}

// 0x0014F090-0x0014F134 (164 bytes), lines 602-643
RwPluginRegistry *_rwPluginRegistryInitObject(RwPluginRegistry *reg, void *object)
{
    // param RwPluginRegistry *reg  (in $s2)
    // param void *object  (in $s1)
    {   // 0x0014F090-0x0014F134
        RwPluginRegEntry *entry;  // in $s0
    }
}

// 0x0014F140-0x0014F1A4 (100 bytes), lines 655-689
RwPluginRegistry *_rwPluginRegistryDeInitObject(RwPluginRegistry *reg, void *object)
{
    // param RwPluginRegistry *reg  (in $s2)
    // param void *object  (in $s1)
    {   // 0x0014F140-0x0014F1A4
        RwPluginRegEntry *entry;  // in $s0
    }
}

