#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern u8 lbl_805D5DBC;

s32 fn_801C2BCC(void) {
    u8 *var_r31;
    s32 var_r30;
    s32 var_r29;

    var_r31 = &lbl_805D5DBC;
    var_r30 = 1;
    var_r29 = 0;
loop_1:
    if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r29) != 0U) && ((s8) *var_r31 == 0)) {
        var_r30 = 0;
    } else {
        var_r29 += 1;
        var_r31 += 1;
        if (var_r29 < 4) {
            goto loop_1;
        }
    }
    return var_r30;
}

}
