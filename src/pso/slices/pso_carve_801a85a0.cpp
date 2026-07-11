#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800196EC();
s32 TObjPlayer__sub_800196F4();
s32 fn_801AA17C(void *, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

s32 fn_801A85A0(void) {
    struct { u8 _pad[0x20]; } sp8;
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = TObjPlayer__sub_800196EC();
    var_r30 = 0;
loop_1:
    if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U) && (temp_r31 == TObjPlayer__sub_800196F4()) && (fn_801AA17C(&sp8, var_r30) == 2)) {
        return 1;
    }
    var_r30 += 1;
    if (var_r30 >= 4) {
        return 0;
    }
    goto loop_1;
}

}
