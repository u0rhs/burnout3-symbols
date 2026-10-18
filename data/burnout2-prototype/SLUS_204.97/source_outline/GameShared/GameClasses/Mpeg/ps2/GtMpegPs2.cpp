// I:\GameShared\GameClasses\Mpeg\ps2\GtMpegPs2.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int NodataCallback(sceMpeg *, sceMpegCbData *, void *);  // 0x0027D110
int RestartDMA(sceMpeg *, sceMpegCbData *, void *);  // 0x0027D580
int StopDMA(sceMpeg *, sceMpegCbData *, void *);  // 0x0027D5B0

// ---- functions ----

// 0x0027C590-0x0027C5A4 (20 bytes), lines 670-671
// IsComplete__14CGTMpegManagerFv
int CGTMpegManager::IsComplete()
{
    // param CGTMpegManager *this  (in $v0)
    {   // 0x0027C590-0x0027C5A4
    }
}

// 0x0027C5B0-0x0027C5E8 (56 bytes), lines 654-655
// GetLastFrame__14CGTMpegManagerFv
CGTMpegImage *CGTMpegManager::GetLastFrame()
{
    // param CGTMpegManager *this  (in $v0)
    {   // 0x0027C5B0-0x0027C5E8
    }
}

// 0x0027C5F0-0x0027C618 (40 bytes), lines 629-639
// Update__14CGTMpegManagerFv
int CGTMpegManager::Update()
{
    // param CGTMpegManager *this  (in $v0)
    {   // 0x0027C5F0-0x0027C618
    }
}

// 0x0027C620-0x0027C674 (84 bytes), lines 607-614
// Play__14CGTMpegManagerFP7CGTFilei
void CGTMpegManager::Play(CGTFile *lpMpegStream, int lbLoop)
{
    // param CGTMpegManager *this  (in $v0)
    // param CGTFile *lpMpegStream  (in $v0)
    // param int lbLoop  (in $v0)
    {   // 0x0027C620-0x0027C674
    }
}

// 0x0027C680-0x0027C688 (8 bytes), lines 586-586
// Close__14CGTMpegManagerFv
void CGTMpegManager::Close()
{
    {   // 0x0027C680-0x0027C688
    }
}

// 0x0027C690-0x0027C698 (8 bytes), lines 570-570
// Open__14CGTMpegManagerFv
void CGTMpegManager::Open()
{
    // param CGTMpegManager *this  (in $v0)
    {   // 0x0027C690-0x0027C698
    }
}

// 0x0027C6A0-0x0027CE54 (1972 bytes), lines 408-551
// Update__14CGTMpegDecoderFv
int CGTMpegDecoder::Update()
{
    // param CGTMpegDecoder *this  (in $s0)
    {   // 0x0027C6A0-0x0027CE54
    }
}

// 0x0027CE60-0x0027CF34 (212 bytes), lines 367-393
// Destroy__14CGTMpegDecoderFP14CGTMpegManager
void CGTMpegDecoder::Destroy(CGTMpegManager *lpManager)
{
    // param CGTMpegDecoder *this  (in $s3)
    // param CGTMpegManager *lpManager  (in $s2)
    {   // 0x0027CE60-0x0027CF34
        RwRaster **rppRaster;  // in $s4
        unsigned int nBuffer;  // in $s1
        unsigned int nCount;  // in $s0
    }
}

// 0x0027CF40-0x0027D108 (456 bytes), lines 311-352
// Init__14CGTMpegDecoderFP14CGTMpegManagerf
void CGTMpegDecoder::Init(CGTMpegManager *lpManager, float lrTimestep)
{
    // param CGTMpegDecoder *this  (in $s3)
    // param CGTMpegManager *lpManager  (in $s2)
    // param float lrTimestep  (optimised away)
    {   // 0x0027CF40-0x0027D108
        RwRaster **rppRaster;  // in $s4
        unsigned int nBuffer;  // in $s1
        unsigned int nCount;  // in $s0
    }
}

// 0x0027D110-0x0027D340 (560 bytes), lines 263-296
// NodataCallback__14CGTMpegDecoderFP7sceMpegP13sceMpegCbDataPv
int CGTMpegDecoder::NodataCallback(void *lpData)
{
    // param void *lpData  (in $v0)
    {   // 0x0027D110-0x0027D340
        CGTMpegDecoder *lpDecoder;  // in $s0
    }
}

// 0x0027D340-0x0027D574 (564 bytes), lines 75-137
// ConvertToRasters__14CGTMpegDecoderFv
int CGTMpegDecoder::ConvertToRasters()
{
    // param CGTMpegDecoder *this  (in $s5)
    {   // 0x0027D340-0x0027D574
        CGTMpegImage *mtpTiles;  // in $s4
        sceIpuRGB32 *irgbpImageBuffer;  // in $s3
        unsigned int *pix;  // in $s6
        RwRaster **rppRaster;  // in $s2
        int nRasterStride;  // in $s7
        unsigned char *cpPixels;  // in $s1
        int nMacroY;  // in $fp
        int nY;  // $sp+192
        int nX;  // $sp+176
        int nTileY;  // in $s0
        int nTileX;  // $sp+160
    }
}

// 0x0027D580-0x0027D5A8 (40 bytes), lines 47-51
// RestartDMA__14CGTMpegDecoderFP7sceMpegP13sceMpegCbDataPv
int CGTMpegDecoder::RestartDMA(void *lpDecoder)
{
    // param void *lpDecoder  (in $v0)
    {   // 0x0027D580-0x0027D5A8
    }
}

// 0x0027D5B0-0x0027D5D8 (40 bytes), lines 35-39
// StopDMA__14CGTMpegDecoderFP7sceMpegP13sceMpegCbDataPv
int CGTMpegDecoder::StopDMA(void *lpDecoder)
{
    // param void *lpDecoder  (in $v0)
    {   // 0x0027D5B0-0x0027D5D8
    }
}

