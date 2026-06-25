#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803112A4(void *, M2C_UNK);
M2C_UNK fn_803112BC();

void TPlayerBattleCtrl4P__vt19(void *arg0) {
    s32 temp_r0;

    fn_803112BC();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        M2C_FIELD(arg0, s32 *, 0x24C) = 0x1E;
        fn_803112A4(arg0, 8);
    }
}

}
