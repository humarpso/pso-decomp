#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_801B56A4();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK fn_8026400C(void *, s32);
M2C_UNK fn_802640E4(void *);
M2C_UNK close__15TWindowMainMenuFPv(void *);

void fn_80263CAC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r4 & ~5);
    fn_8026400C(arg0, temp_r4);
    fn_802640E4(arg0);
    close__15TWindowMainMenuFPv(arg0);
    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x54)) != 0U) {
        TObjPlayer__sub_801B56A4();
    }
}

}
