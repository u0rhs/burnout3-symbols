// bamemory.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int FreeListPurgeSort(void *, void *);
void *FakeCalloc(unsigned int, unsigned int);  // 0x0014CE70
void *malloc(unsigned int);  // 0x001BC690
void free(void *);  // 0x001BC6E8
void *realloc(void *, unsigned int);  // 0x001BF140
RwLinkList llGAllFreeLists;  // 0x003108C0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014CE70-0x0014CEBC (76 bytes), lines 91-108
static void *FakeCalloc(unsigned int numObj, unsigned int sizeObj)
{
    // param unsigned int numObj  (in $v0)
    // param unsigned int sizeObj  (in $v0)
    {   // 0x0014CE70-0x0014CEBC
        void *newMem;  // in $s1
        unsigned int totalSize;  // in $s0
    }
}

// 0x0014CEC0-0x0014CED0 (16 bytes), lines 476-477
RwMemoryFunctions *RwOsGetMemoryInterface()
{
    {   // 0x0014CEC0-0x0014CED0
    }
}

// 0x0014CED0-0x0014CF74 (164 bytes), lines 504-533
int RwFreeListDestroy(RwFreeList *freelist)
{
    // param RwFreeList *freelist  (in $s0)
    {   // 0x0014CED0-0x0014CF74
        RwFreeBlock *nextBlock;  // in $s1
        RwFreeBlock *fbpCur;  // in $v0
    }
}

// 0x0014CF80-0x0014D0F4 (372 bytes), lines 537-596
static RwFreeList *FreeListCreate(int entrySize, int blockEntries, int alignment)
{
    // param int entrySize  (in $s4)
    // param int blockEntries  (in $s3)
    // param int alignment  (in $s2)
    {   // 0x0014CF80-0x0014D0F4
        RwError _rwErrorCode;  // $sp+120
        RwError _rwErrorCode;  // $sp+112
        RwFreeList *freelist;  // in $s0
    }
}

// 0x0014D100-0x0014D108 (8 bytes), lines 664-664
RwFreeList *RwFreeListCreate(int entrySize, int blockEntries, int alignment)
{
    // param int entrySize  (in $v0)
    // param int blockEntries  (in $v0)
    // param int alignment  (in $v0)
    {   // 0x0014D100-0x0014D108
        RwFreeList *freelist;  // in $v0
    }
}

// 0x0014D110-0x0014D128 (24 bytes), lines 699-702
RwFreeList *_rwFreeListFreeReal(RwFreeList *freelist, void *pBlock)
{
    // param RwFreeList *freelist  (in $v0)
    // param void *pBlock  (in $v0)
    {   // 0x0014D110-0x0014D128
    }
}

// 0x0014D130-0x0014D2D4 (420 bytes), lines 706-804
void *_rwFreeListAllocReal(RwFreeList *freelist)
{
    // param RwFreeList *freelist  (in $s3)
    {   // 0x0014D130-0x0014D2D4
        int nI;  // in $a1
        unsigned char *cpData;  // in $a0
        RwError _rwErrorCode;  // $sp+104
        RwError _rwErrorCode;  // $sp+96
        unsigned int bytes;  // in $s4
        void **freeListStack;  // in $s1
        RwFreeBlock *fbpBlock;  // in $s0
        void *pBlock;  // in $v0
    }
}

// 0x0014D2E0-0x0014D3D0 (240 bytes), lines 957-1008
RwFreeList *RwFreeListForAllUsed(RwFreeList *freelist, void (*fpCallBack)(void *, void *), void *pData)
{
    // param RwFreeList *freelist  (in $s5)
    // param void (*fpCallBack)(void *, void *)  (in $s4)
    // param void *pData  (in $s3)
    {   // 0x0014D2E0-0x0014D3D0
        void **ppPos;  // in $v1
        int nI;  // in $s1
        RwFreeBlock *fbpCur;  // in $s0
        unsigned char *cpCur;  // in $v1
    }
}

// 0x0014D3D0-0x0014D3D8 (8 bytes), lines 1097-1097
void _rwMemoryClose()
{
    {   // 0x0014D3D0-0x0014D3D8
    }
}

// 0x0014D3E0-0x0014D45C (124 bytes), lines 1111-1136
int _rwMemoryOpen(RwMemoryFunctions *memFuncs)
{
    // param RwMemoryFunctions *memFuncs  (in $v0)
    {   // 0x0014D3E0-0x0014D45C
    }
}

