#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802D49A8(void *arg0);
M2C_UNK TAdEnterSerialAccessGC__sub_802AEBA8(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802B1850(s32, M2C_UNK, M2C_UNK *);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK *fn_80132F2C(M2C_UNK, M2C_UNK);
s32 fn_801A6D60(void *, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_802D50A0(s32);
M2C_UNK fn_802D50B0(s32, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern char lbl_8050E208[];
extern M2C_UNK lbl_805DE784;

void TAdSinglePlyChrSelectGC__sub_802D49A8(void *arg0) {
    TAdEnterSerialAccessGC__sub_802AEBA8(M2C_FIELD(arg0, s32 *, 0x2C));
    fn_802D50B0(M2C_FIELD(arg0, s32 *, 0x30), 1);
    TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x34), 0, &lbl_805DE784);
    TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x34), 1, &lbl_805DE784);
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x48));
        M2C_FIELD(arg0, u32 *, 0x48) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x54));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
    }
    if ((TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 2) != 0) || (fn_801A6D60(lbl_8050E208 + 0x160, 2) != 0)) {
        fn_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x28)) == 0xE) {
        TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x34), 0, fn_80132F2C(0x1E, 0));
        TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x34), 1, &lbl_805DE784);
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
}

}
