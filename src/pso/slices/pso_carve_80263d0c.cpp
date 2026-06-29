#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_801B56EC(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK fn_80263DF4(void *, s32);
M2C_UNK TWindowMainMenu__sub_802646E4(void *, s32);

void fn_80263D0C(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x54));
    if (temp_r3 != 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C) | 1;
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
        M2C_FIELD(arg0, s16 *, 0x50) = 0;
        fn_80263DF4(arg0, temp_r4);
        TWindowMainMenu__sub_802646E4(arg0, M2C_FIELD(arg0, s32 *, 0x5C));
        TObjPlayer__sub_801B56EC(temp_r3);
    }
}

}
