// I:\Burnout 2 Code\gamesource\Render\PS2ParametricParticle\PS2PParticle.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _PParticleInstanceCode(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001FB010
long pparticlerender;  // 0x00295AC0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001FB010-0x001FB1BC (428 bytes), lines 124-258
// _PParticleInstanceCode__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _PParticleInstanceCode(RpMesh *pMesh, GsPS2RenderObject *pObject)
{
    // param RpMesh *pMesh  (in $v0)
    // param GsPS2RenderObject *pObject  (in $s3)
    {   // 0x001FB010-0x001FB1BC
        int dataLocation;  // in $t2
        int i;  // in $v1
        unsigned long long *pLastDMAtag;  // in $t4
        unsigned long long *pData;  // in $t3
        int lnNumVertices;  // in $v0
        unsigned char *lpucNewMemory;  // in $v0
        int lnNumBatches;  // in $s0
        int lnSize;  // in $v1
    }
}

// 0x001FB1C0-0x001FB22C (108 bytes), lines 69-93
// PS2PParticlePipeCreate__Fv
GsPS2Pipeline *PS2PParticlePipeCreate()
{
    {   // 0x001FB1C0-0x001FB22C
        GsPS2Pipeline *pPParticlePipe;  // in $v0
    }
}

