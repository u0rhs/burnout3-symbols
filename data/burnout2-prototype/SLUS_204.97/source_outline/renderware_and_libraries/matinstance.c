// matinstance.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x00191720-0x00191750 (48 bytes), lines 192-209
void reDestroyCallBack(RwResEntry *resEntry)
{
    // param RwResEntry *resEntry  (in $v0)
    {   // 0x00191720-0x00191750
    }
}

// 0x00191750-0x0019204C (2300 bytes), lines 216-676
int _rwPS2AllRabinsConstructionTimeCode(rxNodePS2AllMatPvtData *pvtData)
{
    // param rxNodePS2AllMatPvtData *pvtData  (in $v0)
    {   // 0x00191750-0x0019204C
        int batchSize;  // in $t6
        int batchSize;  // in $s2
        unsigned int type;  // in $a1
        unsigned int i;  // in $a2
        unsigned int prevSize;  // in $t6
        unsigned int dataTmp;  // in $t5
        unsigned int opaqueStep;  // in $t4
        unsigned char offsetOnVU;  // in $t3
        unsigned char sizeOnVU;  // in $a1
        int totallyOpaque;  // in $v1
        rwPS2AllResEntryFormat *format;  // in $v0
    }
}

// 0x00192050-0x001927C8 (1912 bytes), lines 690-1058
unsigned int DMADataSizeRecalc(RxPS2AllPipeData *ps2AllPipeData, unsigned int numVerts, rwPS2AllFieldRec *fieldRec, unsigned int *batchSizePtr, unsigned int *batchesPerTagPtr, unsigned int *numBatchesPtr)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    // param unsigned int numVerts  (in $v0)
    // param rwPS2AllFieldRec *fieldRec  (in $v0)
    // param unsigned int *batchSizePtr  (in $v0)
    // param unsigned int *batchesPerTagPtr  (in $v0)
    // param unsigned int *numBatchesPtr  (in $v0)
    {   // 0x00192050-0x001927C8
        int qwBatchSize;  // in $s0
        int qwBatchSize;  // in $fp
        int offset;  // in $v0
        short skip;  // in $s1
        int vertsEndCnt;  // $sp+224
        int lastReverse;  // in $t8
        int nonOpaqueOffset;  // in $t7
        int vertsOver;  // in $t2
        int lastReverse;  // in $a1
        int viftags;  // in $v1
        unsigned int i;  // in $s0
        rwPS2AllResEntryFormat *format;  // in $t7
        unsigned int effectiveTotalVerts;  // in $v0
        unsigned int size;  // in $t6
        unsigned int numBatches;  // in $t5
        unsigned int batchesPerTag;  // in $t4
        unsigned int batchSize;  // in $t3
        rxNodePS2AllMatPvtData *pvtData;  // in $t2
    }
}

// 0x001927D0-0x001930A4 (2260 bytes), lines 1067-1452
int DMADataFillTags(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x001927D0-0x001930A4
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $s7
        u_long128 ___ltmp;  // in $v0
        int __size;  // in $t7
        rwPS2AllClusterInstanceInfo *clinfo;  // in $v0
        u_long128 ___ltmp;  // in $a1
        int currentBatchSize;  // in $t6
        u_long128 ___ltmp;  // in $t5
        int j;  // in $t4
        int i;  // $sp+240
        unsigned long tmp;  // in $v0
        int offset;  // in $v0
        int wroteATag;  // in $t3
        unsigned int reverse;  // $sp+224
        unsigned int effectiveTotalVerts;  // $sp+208
        unsigned int numVerts;  // in $v0
        unsigned int batchesPerTag;  // $sp+192
        unsigned int numBatches;  // in $a2
        unsigned int sizeOnVU;  // in $t2
        u_long128 *lastTag;  // in $t1
        u_long128 *data;  // in $t0
        rxNodePS2AllMatPvtData *pvtData;  // $sp+176
        rwPS2AllResEntryHeader *ps2ResHeader;  // in $a3
    }
}

