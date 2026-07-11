#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_reset__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802B1850(s32, M2C_UNK, M2C_UNK *);
s32 TWindowShortListCtrl__check_controller_button(char *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5594(s32);
s32 fn_802D50A0(s32);
M2C_UNK fn_802D50B0(s32, M2C_UNK);
s32 fn_802E00C4(s32);
s32 fn_802E00CC(s32);

extern char lbl_8050E3B8[];
extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;

void close_and_reset__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x94));
        M2C_FIELD(arg0, u32 *, 0x94) = 0U;
    }
    TAdMultiPlyChrSelectGC__sub_802C5594(M2C_FIELD(arg0, s32 *, 0x5C));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        disallow_rendering__7TObjectFv(M2C_FIELD(arg0, void **, 0x70));
    }
    fn_802D50B0(M2C_FIELD(arg0, s32 *, 0x60), 1);
    TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x64), 0, &TAdMultiPlyChrSelectGC__data_805DE898);
    TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    if ((fn_802E00CC(M2C_FIELD(arg0, s32 *, 0x6C)) == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0)) {
        fn_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1B;
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
        return;
    }
    if ((fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) == 0xE) && (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x14)) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1E;
    }
}

}
