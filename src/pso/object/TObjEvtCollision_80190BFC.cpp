#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_any_player_in_range__16TObjEvtCollisionFif(s32 arg0, f32 farg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
f32 fn_801315A0(s32, s32);
s32 is_split_screen();

extern s32 lbl_805D53A0;

s32 is_any_player_in_range__16TObjEvtCollisionFif(s32 arg0, f32 farg0) {
    s32 var_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    if (is_split_screen() != 0) {
        for (var_r31 = 0; var_r31 < 4; var_r31 += 1) {
            temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
            if ((temp_r3 != 0U) && (fn_801315A0(temp_r3 + 0x38, arg0 + 0x38) < farg0)) {
                return 1;
            }
        }
        goto block_10;
    }
    temp_r3_2 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3_2 != 0U) && (fn_801315A0(temp_r3_2 + 0x38, arg0 + 0x38) < farg0)) {
        return 1;
    }
block_10:
    return 0;
}

}
