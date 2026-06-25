#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(M2C_UNK, M2C_UNK);
u32 fn_8013E2E4(s32);
M2C_UNK fn_8013E308(s32);
s32 fn_80154CB4();
s32 fn_801B91B0(u32, s32);

s32 fn_8013B690(s32 arg0) {
    s32 temp_r3;
    u32 temp_r3b;

    fn_8013E308(arg0 + 0x60);
    temp_r3 = fn_80154CB4();
    if ((temp_r3 != 0) && ((u32) (obj_testFlags30(temp_r3, 0x80000000) + 0x80000000) == 0U) && ((temp_r3b = fn_8013E2E4(arg0)) != 0U) && (fn_801B91B0(temp_r3b, temp_r3) == 0)) {
        return 1;
    }
    return 0;
}

}
