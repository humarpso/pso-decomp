#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
s32 fn_800196EC();
s32 fn_800196F4(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;

s32 fn_80104860(void) {
    s32 temp_r31;
    s32 temp_r3;

    if (is_split_screen() != 0) {
        return 0;
    }
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        temp_r31 = fn_800196EC();
        return temp_r31 - fn_800196F4(temp_r3) ? 1 : 0;
    }
    return 0;
}

}
