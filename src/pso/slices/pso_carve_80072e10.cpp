#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800495BC();
M2C_UNK TObjPlayer__sub_801B5408(s32, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;

void fn_80072E10(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3 != 0) && (fn_800495BC() == 0)) {
        TObjPlayer__sub_801B5408(temp_r3, -1);
    }
}

}
