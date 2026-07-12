#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjQuestColALock2__vt13(void *arg0);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();
s32 TObjPlayer__sub_801B5874(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 TObjQuestCol__sub_80196B80(void *, f32);
M2C_UNK TObjPlayer__sub_801B35AC(s32);
M2C_UNK TObjPlayer__sub_801B35E4(s32);

extern M2C_UNK lbl_8050E208[];
extern s32 lbl_805D53A0;

s32 TObjQuestColALock2__vt13(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        if (check_flag_100__10TObjPlayerFPv() != 0) {
            TObjPlayer__sub_801B35AC(temp_r3);
            return 0;
        }
        if (TObjPlayer__sub_801B5874(temp_r3) != 0) {
            TObjPlayer__sub_801B35AC(temp_r3);
            return 0;
        }
        TObjPlayer__sub_801B4A18(arg0, -1);
        temp_r3_2 = TObjQuestCol__sub_80196B80(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
        if (temp_r3_2 == 1) {
            TObjPlayer__sub_801B35E4(temp_r3);
        }
        if (temp_r3_2 == 3) {
            TObjPlayer__sub_801B35AC(temp_r3);
        }
        if (temp_r3_2 == 0) {
            TObjPlayer__sub_801B35E4(temp_r3);
            if (TWindowShortListCtrl__check_controller_button((void *)((s8 *)lbl_8050E208 + 0x20), 4) != 0) {
                return 1;
            }
        }
        goto block_12;
    }
block_12:
    return 0;
}

}
