#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TChallenge4PResult__sub_8034BB90(void *arg0);
M2C_UNK TChallenge4PResult__sub_8034B720(void *, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
s32 fn_80132F2C(M2C_UNK, M2C_UNK);
s32 fn_801AFD84();
s32 fn_802693B4(u32);

extern u8 lbl_8050E208[];

void TChallenge4PResult__sub_8034BB90(void *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    u32 p;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        TChallenge4PResult__sub_8034B720(arg0, fn_80132F2C(0x2B, 6));
    }
    p = M2C_FIELD(arg0, u32 *, 0x2C);
    if ((p != 0U) && (fn_802693B4(p) != 0)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r3 > 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r3 - 1);
            return;
        }
        if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x24)) != 0U) {
            temp_r5 = fn_801AFD84() * 0x50;
            if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + temp_r5 + 0x20, 4, temp_r5) != 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
}

}
