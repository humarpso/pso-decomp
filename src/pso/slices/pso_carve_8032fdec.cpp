#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK apply_damage__11TBoss6Type2FPvi(s32, s32);
M2C_UNK fn_8032FE44();

void fn_8032FDEC(void *arg0) {
    s16 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x404);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x32C);
    if (temp_r4 != temp_r0) {
        if (temp_r4 < temp_r0) {
            fn_8032FE44();
            return;
        }
        apply_damage__11TBoss6Type2FPvi(M2C_FIELD(arg0, s32 *, 0x378), temp_r4 - temp_r0);
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}

}
