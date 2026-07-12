#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_cancel_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DC440(void *arg0);
void handle_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdChrMoveEffectGC__sub_803490AC();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
M2C_UNK TAdPlayerLoadGC__sub_800F9EF8(M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5594(s32);
s32 TAdMultiPlyChrSelectGC__sub_802D50A0(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E00BC(s32, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_802E00C4(s32);
u32 TAdMultiPlyChrSelectGC__sub_802E0100();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s8 lbl_8050E3B8[];

void check_cancel_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((TAdMultiPlyChrSelectGC__sub_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) || (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0)) {
        TAdPlayerLoadGC__sub_800F9EF8(1);
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
    }
}

void TAdMultiPlyChrSelectGC__sub_802DC440(void *arg0) {
    if (TAdMultiPlyChrSelectGC__sub_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (TAdMultiPlyChrSelectGC__sub_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if (TAdMultiPlyChrSelectGC__sub_802E0100() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) == 0x14) {
        TAdMultiPlyChrSelectGC__sub_802E00BC(M2C_FIELD(arg0, s32 *, 0x6C), 0x1B);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x25;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) == 0x13) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if (TAdMultiPlyChrSelectGC__sub_802E0100() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        TAdMultiPlyChrSelectGC__sub_802C5594(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0x24;
    }
}

extern s8 lbl_8050E3B8[];

void handle_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    void *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x94));
        M2C_FIELD(arg0, u32 *, 0x94) = 0U;
    }
    if (TAdMultiPlyChrSelectGC__sub_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (TAdMultiPlyChrSelectGC__sub_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    temp_r31 = lbl_8050E3B8 + 0x20;
    if ((TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) || (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
    }
}

}
