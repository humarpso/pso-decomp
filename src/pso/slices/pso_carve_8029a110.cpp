#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800495BC();
M2C_UNK TObjPlayer__sub_801B5408(s32, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

void fn_8029A110(void) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    do {
        var_r30 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if (var_r30 != 0) {
            if (fn_800495BC() == 0) {
                TObjPlayer__sub_801B5408(var_r30, -1);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
