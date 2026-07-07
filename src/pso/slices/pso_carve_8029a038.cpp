#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800495BC();
M2C_UNK TObjPlayer__sub_801B5200(int);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK fn_8024AC20(int);
M2C_UNK TWindowCtrl__sub_8024AEF0(int);

void fn_8029A038(void) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if ((temp_r3 != 0) && (fn_800495BC() != 0)) {
            TObjPlayer__sub_801B5200(temp_r3);
        }
        TWindowCtrl__sub_8024AEF0(var_r31);
        fn_8024AC20(var_r31);
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
