#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state_serial__22TAdMultiPlyChrSelectGCFPv(void *arg0);
u32 TAdEnterSerialAccessGC__sub_80202984();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5594(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 fn_802D50A0(s32);
M2C_UNK fn_802D50B0(s32, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0008(s32);
s32 fn_802E011C();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s8 lbl_8050E3B8[];
extern u32 lbl_805D68CC;

void update_state_serial__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r5;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x90));
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x98));
        M2C_FIELD(arg0, u32 *, 0x98) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
    TAdMultiPlyChrSelectGC__sub_802C5594(M2C_FIELD(arg0, s32 *, 0x5C));
    fn_802D50B0(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r5 + 1);
    if ((TWindowShortListCtrl__check_controller_button((void *)(lbl_8050E3B8 + 0x20), 2, temp_r5) != 0) && (fn_802E011C() == 0)) {
        if ((fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) != 0xE) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA)) {
            fn_8022675C(0x52F16, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
            return;
        }
        if (TAdMultiPlyChrSelectGC__sub_802C6558() < 1) {
            fn_8022675C(0x52F16, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
            return;
        }
        goto block_19;
    }
block_19:
    if (fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) == 0xE) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
            M2C_FIELD(arg0, s32 *, 0x9C) = 0;
            if ((u32) lbl_805D68CC != TAdEnterSerialAccessGC__sub_80202984()) {
                TAdMultiPlyChrSelectGC__sub_802C6A10();
            }
        }
    }
}

}
