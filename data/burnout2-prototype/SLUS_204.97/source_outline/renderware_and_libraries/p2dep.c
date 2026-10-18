// p2dep.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void _MyEnumPipelineClustersCallBack(RxClusterDefinition *, unsigned int, void *);  // 0x001809D0

// ---- functions ----

// 0x0017F9B0-0x0017FA70 (192 bytes), lines 130-161
static RwReqEntry *_ReqAddEntry(rxReq *req, RxClusterDefinition *clusterDef, RxClusterValidityReq required, unsigned int inputs, RxPipelineNode *originatingNode)
{
    // param rxReq *req  (in $v0)
    // param RxClusterDefinition *clusterDef  (in $v0)
    // param RxClusterValidityReq required  (in $v0)
    // param unsigned int inputs  (in $v0)
    // param RxPipelineNode *originatingNode  (in $v0)
    {   // 0x0017F9B0-0x0017FA70
        RwReqEntry *reqentry;  // in $v0
    }
}

// 0x0017FA70-0x0017FCB0 (576 bytes), lines 204-245
static void _PropDownElimPath(RxPipeline *pipeline, RxPipelineNode *node, RxClusterDefinition *clusterDef)
{
    // param RxPipeline *pipeline  (in $s2)
    // param RxPipelineNode *node  (in $s1)
    // param RxClusterDefinition *clusterDef  (in $s0)
    {   // 0x0017FA70-0x0017FCB0
        RxClusterValid presinout;  // in $a0
        RxOutputSpec *outspec;  // in $a2
        RxIoSpec *iospec;  // in $s4
        unsigned int i;  // in $s3
    }
}

// 0x0017FCB0-0x0017FD68 (184 bytes), lines 291-328
static void _ScopeTraceMerge(RwScopeTrace **headref, RwScopeTrace *p, RwScopeTrace *q)
{
    // param RwScopeTrace **headref  (in $v0)
    // param RwScopeTrace *p  (in $v0)
    // param RwScopeTrace *q  (in $v0)
    {   // 0x0017FCB0-0x0017FD68
        RwScopeTrace *prootfinalpage;  // in $v1
        RwScopeTrace *qroot;  // in $v0
        RwScopeTrace *proot;  // in $v0
    }
}

// 0x0017FD70-0x001801EC (1148 bytes), lines 515-662
static unsigned int _PropagateDependenciesAndKillDeadPaths(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  ($sp+188)
    {   // 0x0017FD70-0x001801EC
        RwError _rwErrorCode;  // $sp+232
        RwError _rwErrorCode;  // $sp+224
        RwError _rwErrorCode;  // $sp+216
        RxClusterValid presinout;  // in $a1
        RxOutputSpec *outspec;  // in $s1
        RxPipelineNode *outnode;  // in $s0
        RwError _rwErrorCode;  // $sp+208
        RwError _rwErrorCode;  // $sp+200
        RxClusterDefinition *cluster2;  // in $a1
        RwError _rwErrorCode;  // $sp+192
        RxClusterDefinition *cluster;  // in $a0
        RxIoSpec *iospec;  // in $v0
        RxPipelineNode *node;  // in $s7
        unsigned int k;  // in $v1
        unsigned int j;  // in $v0
        unsigned int i;  // in $v0
        unsigned int numUniqueClusters;  // in $s0
    }
}

// 0x001801F0-0x001804A8 (696 bytes), lines 668-757
static unsigned int _ForAllNodeReqsAddOutputClustersAndBuildContinuityBitfields(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  (in $s2)
    {   // 0x001801F0-0x001804A8
        RwError _rwErrorCode;  // $sp+72
        RwReqEntry *drivingreqe;  // in $v0
        RxClusterValid presinout;  // in $v1
        RxOutputSpec *outspec;  // in $t7
        RxPipelineNode *outnode;  // in $t6
        RwError _rwErrorCode;  // $sp+64
        RxIoSpec *iospec;  // in $t5
        RxPipelineNode *node;  // in $v0
        unsigned int k;  // in $t4
        unsigned int j;  // in $t4
        unsigned int i;  // in $t3
    }
}

// 0x001804B0-0x00180748 (664 bytes), lines 762-853
static unsigned int _TraceClusterScopes(RxPipeline *pipeline, RwScopeTrace **stheadref)
{
    // param RxPipeline *pipeline  (in $s5)
    // param RwScopeTrace **stheadref  (in $s4)
    {   // 0x001804B0-0x00180748
        RxPipelineNode *outnode;  // in $t0
        RwError _rwErrorCode;  // $sp+136
        RxPipelineNode *node;  // in $s1
        unsigned int k;  // in $s0
        unsigned int j;  // in $v0
        unsigned int i;  // in $s6
    }
}

// 0x00180750-0x00180834 (228 bytes), lines 861-928
static unsigned int _AssignClusterSlots(RxPipeline *pipeline, RwScopeTrace **stheadref)
{
    // param RxPipeline *pipeline  (in $v0)
    // param RwScopeTrace **stheadref  (in $v0)
    {   // 0x00180750-0x00180834
        RwReqEntry *reqentry;  // in $t2
        RwReqEntry *reqentry;  // in $t1
        unsigned int assignedslot;  // in $t1
        unsigned int unavailslots;  // in $a2
        RwScopeTrace *st2;  // in $v1
        RwScopeTrace *st;  // in $t0
        unsigned int numslotsused;  // in $a3
    }
}

// 0x00180840-0x0018090C (204 bytes), lines 941-977
static unsigned int _EnumPipelineClusters(RwScopeTrace *head, void (*fp)(RxClusterDefinition *, unsigned int, void *), void *callbackprivatedata)
{
    // param RwScopeTrace *head  (in $s4)
    // param void (*fp)(RxClusterDefinition *, unsigned int, void *)  (in $s3)
    // param void *callbackprivatedata  (in $s2)
    {   // 0x00180840-0x0018090C
        RwScopeTrace *stdedupe;  // in $a0
        RwScopeTrace *st;  // in $s1
        unsigned int numpipelineclusters;  // in $s0
    }
}

// 0x00180910-0x001809C8 (184 bytes), lines 1007-1032
static void _WriteHeadNodeRqdsAndOpts2PipelineRequirements(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  (in $t4)
    {   // 0x00180910-0x001809C8
        RxPipelineRequiresCluster *reqcl;  // in $v1
        unsigned int count;  // in $t0
        unsigned int i;  // in $a3
        RxPipelineNode *node;  // in $a2
    }
}

// 0x001809D0-0x00180A20 (80 bytes), lines 1047-1079
static void _MyEnumPipelineClustersCallBack(RxClusterDefinition *clusterdef, void *data)
{
    // param RxClusterDefinition *clusterdef  (in $s1)
    // param void *data  (in $v0)
    {   // 0x001809D0-0x00180A20
        RxPipelineCluster *pipelineCluster;  // in $v0
        RxPipelineCluster **array;  // in $s0
    }
}

// 0x00180A20-0x00180DA8 (904 bytes), lines 1085-1243
static unsigned int _ForAllNodesWriteClusterAllocations(RxPipeline *pipeline, RwScopeTrace *stHead)
{
    // param RxPipeline *pipeline  (in $s5)
    // param RwScopeTrace *stHead  (in $s1)
    {   // 0x00180A20-0x00180DA8
        RxPipelineCluster *pipelineCluster;  // in $t1
        unsigned int k;  // in $t0
        unsigned int j;  // in $v0
        unsigned int i;  // in $s2
        unsigned int slotsContinueAND;  // in $v1
        unsigned char *miteBase;  // in $v0
        unsigned char *titeBase;  // in $s2
        RxPipelineNode *node;  // in $s1
        RxPipelineCluster *pipelineClusters;  // $sp+124
        unsigned int numPipelineClusters;  // in $s0
    }
}

// 0x00180DB0-0x00180E18 (104 bytes), lines 1250-1367
unsigned int _rxChaseDependencies(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  (in $s0)
    {   // 0x00180DB0-0x00180E18
        unsigned int result;  // in $v0
        RwScopeTrace *sthead;  // $sp+44
    }
}

