// p2clpcom.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _rwForAllEdgesWithRxInterpolant(RxCluster *, RxCluster *, RxCluster *, unsigned short *, int *, int *, int, float (*)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *));  // 0x0017AF20
int _rwForAllEdgesWithoutRxInterpolant(RxCluster *, RxCluster *, RxCluster *, unsigned short *, int *, int *, int, float (*)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *));  // 0x0017B1B0
RwClipInfo _rwClipInfoGlobal;  // 0x0044DD20

// ---- functions ----

// 0x0017AF20-0x0017B1A4 (644 bytes), lines 79-179
int _rwForAllEdgesWithRxInterpolant(RxCluster *CamVerts, RxCluster *DevVerts, RxCluster *RxInterpolants, unsigned short *npClipBuffer, int *npInIndex, int *npOutIndex, int clipCode, float (*clipit)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *))
{
    // param RxCluster *CamVerts  (in $s5)
    // param RxCluster *DevVerts  (in $s4)
    // param RxCluster *RxInterpolants  (in $s3)
    // param unsigned short *npClipBuffer  ($sp+220)
    // param int *npInIndex  ($sp+216)
    // param int *npOutIndex  ($sp+212)
    // param int clipCode  ($sp+208)
    // param float (*clipit)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *)  ($sp+204)
    {   // 0x0017AF20-0x0017B1A4
        RxInterp *RxInterpolant;  // in $s2
        int nInEnd;  // $sp+200
        unsigned short clipIndex;  // in $s7
        unsigned short nextIndex;  // in $s1
        unsigned short thisIndex;  // $sp+176
        RwSky2DVertex *dvpClip;  // in $v0
        RwSky2DVertex *dvpNext;  // $sp+160
        RwSky2DVertex *dvpThis;  // in $v0
        RxCamSpace3DVertex *cvpClip;  // in $v0
        RxCamSpace3DVertex *cvpNext;  // in $s6
        RxCamSpace3DVertex *cvpThis;  // in $v0
        int nPntOutVerts;  // in $s0
        int nPntInVerts;  // in $fp
    }
}

// 0x0017B1B0-0x0017B3B0 (512 bytes), lines 189-275
int _rwForAllEdgesWithoutRxInterpolant(RxCluster *CamVerts, RxCluster *DevVerts, unsigned short *npClipBuffer, int *npInIndex, int *npOutIndex, int clipCode, float (*clipit)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *))
{
    // param RxCluster *CamVerts  (in $s5)
    // param RxCluster *DevVerts  (in $s4)
    // param unsigned short *npClipBuffer  (in $s7)
    // param int *npInIndex  ($sp+172)
    // param int *npOutIndex  ($sp+168)
    // param int clipCode  (in $fp)
    // param float (*clipit)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *)  ($sp+164)
    {   // 0x0017B1B0-0x0017B3B0
        int nInEnd;  // $sp+160
        unsigned short clipIndex;  // in $v0
        unsigned short nextIndex;  // in $s3
        unsigned short thisIndex;  // in $v0
        RwSky2DVertex *dvpClip;  // in $v0
        RwSky2DVertex *dvpNext;  // in $s6
        RwSky2DVertex *dvpThis;  // in $v0
        RxCamSpace3DVertex *cvpClip;  // in $v0
        RxCamSpace3DVertex *cvpNext;  // in $s2
        RxCamSpace3DVertex *cvpThis;  // in $v0
        int nPntOutVerts;  // in $s1
        int nPntInVerts;  // in $s0
    }
}

// 0x0017B3B0-0x0017B3D0 (32 bytes), lines 300-300
int _rwForAllEdges(RxCluster *CamVerts, RxCluster *DevVerts, RxCluster *RxInterpolants, unsigned short *npClipBuffer, int *npInIndex, int *npOutIndex, int clipCode, float (*clipit)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *))
{
    // param RxCluster *CamVerts  (in $v0)
    // param RxCluster *DevVerts  (in $v0)
    // param RxCluster *RxInterpolants  (in $v0)
    // param unsigned short *npClipBuffer  (in $v0)
    // param int *npInIndex  (in $v0)
    // param int *npOutIndex  (in $v0)
    // param int clipCode  (in $v0)
    // param float (*clipit)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *)  (in $v0)
    {   // 0x0017B3B0-0x0017B3D0
        int result;  // in $v0
    }
}

// 0x0017B3D0-0x0017B580 (432 bytes), lines 318-396
int _rwForOneEdge(RxCluster *CamVerts, RxCluster *DevVerts, unsigned short *npClipBuffer, int *npInIndex, int *npOutIndex, int clipCode, float (*clipit)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *))
{
    // param RxCluster *CamVerts  (in $v0)
    // param RxCluster *DevVerts  (in $v0)
    // param unsigned short *npClipBuffer  (in $s6)
    // param int *npInIndex  (in $s5)
    // param int *npOutIndex  (in $s4)
    // param int clipCode  (in $s3)
    // param float (*clipit)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *)  (in $v0)
    {   // 0x0017B3D0-0x0017B580
        int nInEnd;  // in $s7
        unsigned short clipIndex;  // in $v0
        unsigned short nextIndex;  // in $s2
        unsigned short thisIndex;  // in $v0
        RwSky2DVertex *dvpClip;  // in $v0
        RwSky2DVertex *dvpNext;  // in $v0
        RwSky2DVertex *dvpThis;  // in $v1
        RxCamSpace3DVertex *cvpClip;  // in $v0
        RxCamSpace3DVertex *cvpNext;  // in $s1
        RxCamSpace3DVertex *cvpThis;  // in $v0
        int nPntOutVerts;  // in $s0
        int nPntInVerts;  // in $v0
    }
}

// 0x0017B580-0x0017B7C0 (576 bytes), lines 416-441
float _rwGeneratePerspClippedVertexZLO(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017B580-0x0017B7C0
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

// 0x0017B7C0-0x0017BA00 (576 bytes), lines 460-485
float _rwGeneratePerspClippedVertexZHI(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017B7C0-0x0017BA00
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

// 0x0017BA00-0x0017BBEC (492 bytes), lines 504-528
float _rwGeneratePerspClippedVertexYLO(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017BA00-0x0017BBEC
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

// 0x0017BBF0-0x0017BDE8 (504 bytes), lines 547-576
float _rwGeneratePerspClippedVertexYHI(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017BBF0-0x0017BDE8
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
        float nThisVal;  // optimised away
    }
}

// 0x0017BDF0-0x0017BF90 (416 bytes), lines 595-618
float _rwGeneratePerspClippedVertexXLO(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017BDF0-0x0017BF90
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

// 0x0017BF90-0x0017C13C (428 bytes), lines 637-665
float _rwGeneratePerspClippedVertexXHI(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017BF90-0x0017C13C
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
        float nThisVal;  // optimised away
    }
}

// 0x0017C140-0x0017C390 (592 bytes), lines 685-710
float _rwGenerateParallelZLOClippedVertex(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017C140-0x0017C390
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

// 0x0017C390-0x0017C5E0 (592 bytes), lines 728-753
float _rwGenerateParallelZHIClippedVertex(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017C390-0x0017C5E0
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

// 0x0017C5E0-0x0017C7D4 (500 bytes), lines 771-795
float _rwGenerateParallelYLOClippedVertex(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017C5E0-0x0017C7D4
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

// 0x0017C7E0-0x0017C9D4 (500 bytes), lines 813-838
float _rwGenerateParallelYHIClippedVertex(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017C7E0-0x0017C9D4
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

// 0x0017C9E0-0x0017CB80 (416 bytes), lines 856-879
float _rwGenerateParallelXLOClippedVertex(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017C9E0-0x0017CB80
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

// 0x0017CB80-0x0017CD2C (428 bytes), lines 897-921
float _rwGenerateParallelXHIClippedVertex(RxCamSpace3DVertex *cvpClip, RxCamSpace3DVertex *cvpThis, RxCamSpace3DVertex *cvpNext, RwSky2DVertex *dvpClip, RwSky2DVertex *dvpThis, RwSky2DVertex *dvpNext)
{
    // param RxCamSpace3DVertex *cvpClip  (in $v0)
    // param RxCamSpace3DVertex *cvpThis  (in $v0)
    // param RxCamSpace3DVertex *cvpNext  (in $v0)
    // param RwSky2DVertex *dvpClip  (in $v0)
    // param RwSky2DVertex *dvpThis  (in $v0)
    // param RwSky2DVertex *dvpNext  (in $v0)
    {   // 0x0017CB80-0x0017CD2C
        int fixinterp;  // in $t2
        float nRxInterp;  // $sp+0
    }
}

