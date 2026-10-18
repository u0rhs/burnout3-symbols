// p2resort.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x00181F00-0x0018204C (332 bytes), lines 106-191
static void _repartition(unsigned char *l, unsigned char *r, unsigned int elementSize, unsigned int elementKeyOffset, unsigned int partitioningBit)
{
    // param unsigned char *l  (in $v0)
    // param unsigned char *r  (in $v0)
    // param unsigned int elementSize  (in $v0)
    // param unsigned int elementKeyOffset  (in $v0)
    // param unsigned int partitioningBit  (in $v0)
    {   // 0x00181F00-0x0018204C
        unsigned char *defer_l;  // in $t2
        unsigned int t1;  // in $s0
        unsigned int _elementSize;  // in $t9
        unsigned char *_r;  // in $t8
        unsigned char *_l;  // in $t7
        unsigned char *saver;  // in $t6
        unsigned char *savel;  // in $t5
        tagStackEntry *stackptr;  // in $t4
        tagStackEntry stack[32];  // $sp+16
    }
}

// 0x00182050-0x001820D8 (136 bytes), lines 213-221
static void _insertionsort(unsigned char *elements, unsigned int numElements, unsigned int elementSize, unsigned int elementKeyOffset)
{
    // param unsigned char *elements  (in $v0)
    // param unsigned int numElements  (in $v0)
    // param unsigned int elementSize  (in $v0)
    // param unsigned int elementKeyOffset  (in $v0)
    {   // 0x00182050-0x001820D8
        unsigned int t1;  // in $t6
        unsigned int _elementSize;  // in $t5
        unsigned char *_r;  // in $t4
        unsigned char *_l;  // in $t3
        unsigned char *p;  // in $t2
        unsigned int keyToPlace;  // in $t1
    }
}

// 0x001820E0-0x00182248 (360 bytes), lines 229-300
void _rx_rxRadixExchangeSort(void *elements, unsigned int numElements, unsigned int elementSize, unsigned int elementKeyOffset, unsigned int keyLo, unsigned int keyHi)
{
    // param void *elements  (in $s1)
    // param unsigned int numElements  (in $s0)
    // param unsigned int elementSize  (in $v0)
    // param unsigned int elementKeyOffset  (in $v0)
    // param unsigned int keyLo  (in $v0)
    // param unsigned int keyHi  (in $v0)
    {   // 0x001820E0-0x00182248
        unsigned int t1;  // in $t1
        unsigned int _elementSize;  // in $t0
        unsigned char *_r;  // in $a0
        unsigned char *_l;  // in $a1
        unsigned int key;  // in $v1
        unsigned int minKeyIndex;  // in $t0
        unsigned int minKey;  // in $a1
        unsigned int i;  // in $a0
    }
}

