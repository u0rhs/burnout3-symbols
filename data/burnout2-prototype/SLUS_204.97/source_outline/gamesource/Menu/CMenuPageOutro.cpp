// I:\Burnout 2 Code\gamesource\Menu\CMenuPageOutro.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourBlack;  // 0x002C4DF0
static CMenuImageData kaImageData[51];  // 0x002D8A90
static B22dTexAreaTag kaImageTexArea[51];  // 0x002D8DC0
static RwRGBAReal kBorderPauseColour;  // 0x002D90F0
static RwRGBAReal kColourBlueTrans;  // 0x002D9100
static RwV2d kCrosslineOnePlayerHeadlinePos;  // 0x002D9110
static RwV2d kCrosslineOnePlayerHeadline2Pos;  // 0x002D9118
static RwV2d kCrosslineVerticalPlayer1HeadlinePos;  // 0x002D9120
static RwV2d kCrosslineVerticalPlayer2HeadlinePos;  // 0x002D9128
static RwV2d kCrosslineHorizontalPlayer1HeadlinePos;  // 0x002D9130
static RwV2d kCrosslineHorizontalPlayer2HeadlinePos;  // 0x002D9138
static RwV2d kCrosslineHorizontalPlayer1FillImagePos;  // 0x002D9140
static RwV2d kCrosslineHorizontalPlayer1TopImagePos;  // 0x002D9148
static RwV2d kCrosslineHorizontalPlayer2FillImagePos;  // 0x002D9150
static RwV2d kCrosslineHorizontalPlayer2TopImagePos;  // 0x002D9158
static RwV2d kCrosslineHorizontalBorderFillImageSize;  // 0x002D9160
static RwV2d kCrosslineHorizontalBorderTopImageSize;  // 0x002D9168
static RwV2d kCrosslineCrashSummaryHeadlinePos;  // 0x002D9170
static RwV2d kCrosslineCrashSummaryBodyPos;  // 0x002D9178
static RwV2d kCrosslineCrashMedalImagePos;  // 0x002D9180
static RwV2d kCrosslineCrashMedalImageSize;  // 0x002D9188
/* vtable */ void *CMenuGfxComponentSummaryText::__vtable[];  // 0x0030FA40
/* vtable */ void *CMenuPageOutro::__vtable[];  // 0x0030FA50
/* vtable */ void *CMenuGfxComponentSummaryItem::__vtable[];  // 0x0030FAE8
/* vtable */ void *CMenuGfxComponentSummaryImage::__vtable[];  // 0x0030FAF8
/* vtable */ void *CMenuGfxComponentSummaryItalicText::__vtable[];  // 0x0030FB10
CMenuPage *gpMenuPageOutro;  // 0x00310698
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuPageOutro gMenuPageOutro;  // 0x004949A0

// ---- functions ----

// 0x00265110-0x0026531C (524 bytes), lines 1845-1934
// UpdateAnimation__14CMenuPageOutroFUiUi
void CMenuPageOutro::UpdateAnimation(unsigned int lunFirstItem, unsigned int lunLastItem)
{
    // param CMenuPageOutro *this  (in $s2)
    // param unsigned int lunFirstItem  (in $s1)
    // param unsigned int lunLastItem  (in $s0)
    {   // 0x00265110-0x0026531C
        float lrPrevX;  // $sp+128
        unsigned int lunItem;  // in $s5
        C2dObject *lpObject;  // in $s4
        CMenuGfxComponentSummary *lpComponent;  // in $s3
    }
}

// 0x00265320-0x002656A4 (900 bytes), lines 1698-1828
// SetCrosslineFaceOffMultiPlayer__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslineFaceOffMultiPlayer()
{
    {   // 0x00265320-0x002656A4
        CMenuGfxComponentSummaryItem *lapSummaryItem[7];  // $sp+544
        CMenuGfxComponentSummaryImage laSummaryImage[4];  // $sp+256
        CMenuGfxComponentSummaryText laSummaryText[2];  // $sp+128
        RwV2d lAlignment;  // $sp+584
        EStringID leHeading2String;  // in $s0
        EStringID leHeading1String;  // in $v1
        int lnRacePosition;  // in $t0
    }
}

// 0x002656B0-0x00265A50 (928 bytes), lines 1550-1682
// SetCrosslinePursuitMultiPlayer__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslinePursuitMultiPlayer()
{
    {   // 0x002656B0-0x00265A50
        CMenuGfxComponentSummaryItem *lapSummaryItem[7];  // $sp+544
        CMenuGfxComponentSummaryImage laSummaryImage[4];  // $sp+256
        CMenuGfxComponentSummaryText laSummaryText[2];  // $sp+128
        RwV2d lAlignment;  // $sp+584
        CScore *lpScore2;  // in $t0
        EStringID leHeading2String;  // in $s0
        EStringID leHeading1String;  // in $v1
    }
}

// 0x00265A50-0x00265DBC (876 bytes), lines 1411-1533
// SetCrosslineRaceMultiPlayer__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslineRaceMultiPlayer()
{
    {   // 0x00265A50-0x00265DBC
        CMenuGfxComponentSummaryItem *lapSummaryItem[7];  // $sp+544
        CMenuGfxComponentSummaryImage laSummaryImage[4];  // $sp+256
        CMenuGfxComponentSummaryText laSummaryText[2];  // $sp+128
        RwV2d lAlignment;  // $sp+584
        EStringID leHeading2String;  // in $s6
        EStringID leHeading1String;  // in $a1
    }
}

// 0x00265DC0-0x00266158 (920 bytes), lines 1264-1395
// SetCrosslineRaceTimeOutMultiPlayer__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslineRaceTimeOutMultiPlayer()
{
    {   // 0x00265DC0-0x00266158
        CMenuGfxComponentSummaryItem *lapSummaryItem[7];  // $sp+544
        CMenuGfxComponentSummaryImage laSummaryImage[4];  // $sp+256
        CMenuGfxComponentSummaryText laSummaryText[2];  // $sp+128
        RwV2d lAlignment;  // $sp+584
        CScore *lpScore2;  // in $t2
        CScore *lpScore1;  // in $t1
        EStringID leHeading2String;  // in $s0
        EStringID leHeading1String;  // in $v1
    }
}

// 0x00266160-0x00266300 (416 bytes), lines 1147-1197
// SetCrosslineCrashFailedOnePlayer__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslineCrashFailedOnePlayer()
{
    {   // 0x00266160-0x00266300
        CMenuGfxComponentSummaryText *lapSummaryText[4];  // $sp+272
        CMenuGfxComponentSummaryText laSummaryText[3];  // $sp+80
        RwV2d lAlignment;  // $sp+296
    }
}

// 0x00266300-0x00266610 (784 bytes), lines 1025-1131
// SetCrosslineCrashSuccessfulOnePlayer__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslineCrashSuccessfulOnePlayer()
{
    // param CMenuPageOutro *this  (in $s2)
    {   // 0x00266300-0x00266610
        CMenuGfxComponentSummaryItem *lapSummaryItem[5];  // $sp+384
        CMenuGfxComponentSummaryImage laSummaryImage[1];  // $sp+304
        CMenuGfxComponentSummaryText laSummaryText[3];  // $sp+112
        RwV2d lAlignment;  // $sp+408
        EMenuRaster leMenuRaster;  // in $s2
        RwRGBAReal *lpColour;  // in $s0
        char *lpcString;  // in $s5
        COnePlayerCRASH *lpCurrentGame;  // in $s3
    }
}

// 0x00266610-0x00266884 (628 bytes), lines 953-1009
// SetCrosslineTimeAttackOnePlayer__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslineTimeAttackOnePlayer()
{
    // param CMenuPageOutro *this  (in $s0)
    {   // 0x00266610-0x00266884
        CMenuGfxComponentSummaryItem *lapSummaryItem[3];  // $sp+256
        CMenuGfxComponentSummaryText laSummaryText[1];  // $sp+176
        CMenuGfxComponentSummaryItalicText laSummaryItalicText[1];  // $sp+112
        RwV2d lAlignment;  // $sp+248
        char *lpcTimeString;  // in $v0
        CScore *lpScore1;  // in $s1
    }
}

// 0x00266890-0x00266A64 (468 bytes), lines 873-937
// SetCrosslinePursuitOnePlayer__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslinePursuitOnePlayer()
{
    {   // 0x00266890-0x00266A64
        CMenuGfxComponentSummaryItem *lapSummaryItem[3];  // $sp+208
        CMenuGfxComponentSummaryText laSummaryText[2];  // $sp+80
        RwV2d lAlignment;  // $sp+200
        CScore *lpScore2;  // in $a3
        EStringID leHeadingString;  // in $s0
    }
}

// 0x00266A70-0x00266C24 (436 bytes), lines 798-856
// SetCrosslineFaceOffOnePlayer__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslineFaceOffOnePlayer()
{
    {   // 0x00266A70-0x00266C24
        CMenuGfxComponentSummaryItem *lapSummaryItem[3];  // $sp+208
        CMenuGfxComponentSummaryText laSummaryText[2];  // $sp+80
        RwV2d lAlignment;  // $sp+200
        EStringID leHeadingString;  // in $s0
    }
}

// 0x00266C30-0x00266E18 (488 bytes), lines 638-734
// SetCrosslineChampionship__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslineChampionship()
{
    {   // 0x00266C30-0x00266E18
        CMenuGfxComponentSummaryItem *lapSummaryItem[3];  // $sp+208
        CMenuGfxComponentSummaryImage laSummaryImage[1];  // $sp+128
        CMenuGfxComponentSummaryText laSummaryText[1];  // $sp+64
        RwV2d lAlignment;  // $sp+200
        int lnRacePosition;  // in $t0
        EMenuRaster leMenuRaster;  // in $s2
        RwRGBAReal *lpColour;  // in $s1
        CScore *lpScore1;  // in $v0
        EStringID leHeadingString;  // in $s0
    }
}

// 0x00266E20-0x00266FA4 (388 bytes), lines 528-575
// SetCrosslineDriving101Failed__14CMenuPageOutroFv
void CMenuPageOutro::SetCrosslineDriving101Failed()
{
    {   // 0x00266E20-0x00266FA4
        CMenuGfxComponentSummaryItem *lapSummaryItem[3];  // $sp+208
        CMenuGfxComponentSummaryText laSummaryText[2];  // $sp+80
        RwV2d lAlignment;  // $sp+200
        EStringID leHeadingString;  // in $s0
    }
}

// 0x00266FB0-0x00267010 (96 bytes), lines 432-452
// Update__14CMenuPageOutroFf
void CMenuPageOutro::Update()
{
    // param CMenuPageOutro *this  (in $v0)
    {   // 0x00266FB0-0x00267010
    }
}

// 0x00267010-0x00267048 (56 bytes), lines 409-416
// Leave__14CMenuPageOutroFv
void CMenuPageOutro::Leave()
{
    // param CMenuPageOutro *this  (in $v0)
    {   // 0x00267010-0x00267048
        unsigned int lunItem;  // in $a1
    }
}

// 0x00267050-0x0026743C (1004 bytes), lines 280-391
// Enter__14CMenuPageOutroFv
void CMenuPageOutro::Enter()
{
    // param CMenuPageOutro *this  (in $s2)
    {   // 0x00267050-0x0026743C
        ELessonMedal leMedal;  // in $v0
        CScore *lpScore2;  // in $a2
        CScore *lpScore1;  // in $a1
    }
}

// 0x00267440-0x00267474 (52 bytes), lines 256-265
// Reset__14CMenuPageOutroFv
void CMenuPageOutro::Reset()
{
    // param CMenuPageOutro *this  (in $v0)
    {   // 0x00267440-0x00267474
        unsigned int lunItem;  // in $a1
    }
}

