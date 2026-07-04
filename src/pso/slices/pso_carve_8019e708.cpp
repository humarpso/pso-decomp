#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80049598(s32);
M2C_UNK TObjPlayer__sub_801B5200();
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

void fn_8019E708(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B5200();
        fn_80049598(temp_r3);
    }
}

}
