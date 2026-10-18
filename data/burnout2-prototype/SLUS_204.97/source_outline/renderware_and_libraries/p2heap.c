// p2heap.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00180E20-0x00180F1C (252 bytes), lines 103-152
static rxHeapFreeBlock *HeapFreeBlocksNewEntry(RxHeap *heap)
{
    // param RxHeap *heap  (in $s2)
    {   // 0x00180E20-0x00180F1C
        rxHeapFreeBlock *iter;  // in $v1
        RwError _rwErrorCode;  // $sp+72
        unsigned int entriesUsed;  // in $s1
        rxHeapFreeBlock *freeBlocks;  // in $s0
    }
}

// 0x00180F20-0x00181014 (244 bytes), lines 253-318
static int HeapSuperBlockReset(rxHeapSuperBlockDescriptor *superBlock, rxHeapSuperBlockDescriptor *attach2SuperBlock, RxHeap *heap)
{
    // param rxHeapSuperBlockDescriptor *superBlock  (in $s1)
    // param rxHeapSuperBlockDescriptor *attach2SuperBlock  (in $s0)
    // param RxHeap *heap  (in $v0)
    {   // 0x00180F20-0x00181014
        rxHeapBlockHeader *blockHdrAttach2;  // in $v0
        rxHeapBlockHeader *blockHdrEnd;  // in $a2
        rxHeapBlockHeader *blockHdrPrincipal;  // in $a1
        rxHeapBlockHeader *blockHdrBeg;  // in $v0
        rxHeapFreeBlock *freeEntry;  // in $v0
    }
}

// 0x00181020-0x00181138 (280 bytes), lines 332-380
static rxHeapBlockHeader *HeapGrow(RxHeap *heap, unsigned int toServiceAllocation)
{
    // param RxHeap *heap  (in $s3)
    // param unsigned int toServiceAllocation  (in $v0)
    {   // 0x00181020-0x00181138
        unsigned int newSize;  // in $v0
        rxHeapSuperBlockDescriptor *tempSuperBlock;  // in $v1
        char string[256];  // $sp+80
        rxHeapSuperBlockDescriptor *superBlock;  // in $v0
        unsigned int superBlockSize;  // in $s0
    }
}

// 0x00181140-0x00181200 (192 bytes), lines 396-454
static void *HeapAllocFrom(RxHeap *heap, rxHeapFreeBlock *freeEntry, unsigned int size)
{
    // param RxHeap *heap  (in $v0)
    // param rxHeapFreeBlock *freeEntry  (in $v0)
    // param unsigned int size  (in $v0)
    {   // 0x00181140-0x00181200
        rxHeapBlockHeader *newBlock;  // in $v1
        rxHeapBlockHeader *blockHdr;  // in $a0
        rxHeapBlockHeader *blockHdr;  // in $a2
        unsigned int delta;  // in $v0
    }
}

// 0x00181200-0x001813B8 (440 bytes), lines 461-548
static void *HeapReallocLarger(RxHeap *heap, void *block, unsigned int newSize, rxHeapBlockHeader *blockHdr, int delta)
{
    // param RxHeap *heap  (in $s3)
    // param void *block  (in $s2)
    // param unsigned int newSize  (in $s1)
    // param rxHeapBlockHeader *blockHdr  (in $s0)
    // param int delta  (in $v0)
    {   // 0x00181200-0x001813B8
        RwError _rwErrorCode;  // $sp+104
        void *newBlock;  // in $s4
        rxHeapBlockHeader *shiftedPartition;  // in $a0
        unsigned int newBlockSize;  // in $v1
    }
}

// 0x001813C0-0x00181470 (176 bytes), lines 555-604
static void *HeapReallocSmaller(RxHeap *heap, void *block, unsigned int newSize, rxHeapBlockHeader *blockHdr, int delta)
{
    // param RxHeap *heap  (in $v0)
    // param void *block  (in $s2)
    // param unsigned int newSize  (in $s1)
    // param rxHeapBlockHeader *blockHdr  (in $s0)
    // param int delta  (in $s3)
    {   // 0x001813C0-0x00181470
        rxHeapFreeBlock *freeEntry;  // in $v0
        rxHeapBlockHeader *newBlock;  // in $a0
    }
}

// 0x00181470-0x0018164C (476 bytes), lines 668-808
void RxHeapFree(RxHeap *heap, void *block)
{
    // param RxHeap *heap  (in $v0)
    // param void *block  (in $v0)
    {   // 0x00181470-0x0018164C
        rxHeapFreeBlock *freeEntry;  // in $v0
        rxHeapBlockHeader *blockHdr;  // in $s0
    }
}

// 0x00181650-0x00181728 (216 bytes), lines 831-924
void *RxHeapAlloc(RxHeap *heap, unsigned int size)
{
    // param RxHeap *heap  (in $s1)
    // param unsigned int size  (in $s0)
    {   // 0x00181650-0x00181728
        RwError _rwErrorCode;  // $sp+56
        rxHeapBlockHeader *blockHdr;  // in $v0
        rxHeapFreeBlock *freeEntry;  // in $v0
        unsigned int n;  // in $v0
    }
}

// 0x00181730-0x00181778 (72 bytes), lines 958-1008
void *RxHeapRealloc(RxHeap *heap, void *block, unsigned int newSize)
{
    // param RxHeap *heap  (in $v0)
    // param void *block  (in $v0)
    // param unsigned int newSize  (in $v0)
    {   // 0x00181730-0x00181778
    }
}

// 0x00181780-0x00181844 (196 bytes), lines 1034-1123
int _rxHeapReset(RxHeap *heap)
{
    // param RxHeap *heap  (in $s2)
    {   // 0x00181780-0x00181844
        rxHeapSuperBlockDescriptor *iter;  // in $s1
        rxHeapSuperBlockDescriptor *prev;  // in $s0
    }
}

// 0x00181850-0x001818E8 (152 bytes), lines 1145-1195
void RxHeapDestroy(RxHeap *heap)
{
    // param RxHeap *heap  (in $s1)
    {   // 0x00181850-0x001818E8
        rxHeapSuperBlockDescriptor *next;  // in $s0
        rxHeapSuperBlockDescriptor *superBlock;  // in $v0
    }
}

// 0x001818F0-0x00181A14 (292 bytes), lines 1237-1320
RxHeap *RxHeapCreate(unsigned int size)
{
    // param unsigned int size  (in $s3)
    {   // 0x001818F0-0x00181A14
        rxHeapSuperBlockDescriptor *superBlock;  // in $v0
        RxHeap *heap;  // in $s0
    }
}

