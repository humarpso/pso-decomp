#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8019DD24(s32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK TWindowSubComCard__sub_80244A14(u32);

void TObjWarpBase__vt12(void *arg0) {
    u32 temp_r3;

    temp_r3 = (u32) M2C_FIELD(arg0, u32 *, 0xB0);
    if (temp_r3 != 0U) {
        TWindowSubComCard__sub_80244A14(temp_r3);
        M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0xB8));
        if (temp_r3 != 0U) {
            fn_8019DD24(temp_r3 + 0x550, 4);
        }
        M2C_FIELD(arg0, u16 *, 0xB8) = 0xFFFFU;
    }
}

}
