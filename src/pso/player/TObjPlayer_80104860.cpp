#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_active_battle_player__10TObjPlayerFv(void);
u8 find_adjacent_matching_slot__10TObjPlayerFUc(u8 arg0);
s32 TObjPlayer__sub_800196EC();
s32 TObjPlayer__sub_800196F4(s32);
M2C_UNK TObjPlayer__sub_8011C8BC(u8, s16 *, s16 *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_split_screen();

extern s32 lbl_805D53A0;

s32 is_active_battle_player__10TObjPlayerFv(void) {
    s32 temp_r31;
    s32 temp_r3;

    if (is_split_screen() != 0) {
        return 0;
    }
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        temp_r31 = TObjPlayer__sub_800196EC();
        return temp_r31 - TObjPlayer__sub_800196F4(temp_r3) ? 1 : 0;
    }
    return 0;
}

u8 find_adjacent_matching_slot__10TObjPlayerFUc(u8 arg0) {
    s16 spC;
    s16 spA;
    s16 sp8;
    int temp_r31;

    temp_r31 = (u8) arg0 - 1;
    TObjPlayer__sub_8011C8BC((u8) temp_r31, &spC, &sp8);
    TObjPlayer__sub_8011C8BC(arg0, &spA, &sp8);
    if ((spC != -1) && (spA != -1)) {
        if (spC == spA) {
            return (u8) temp_r31;
        }
        return arg0;
    }
    return arg0;
}

}
