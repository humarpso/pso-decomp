#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *fn_80242F94(s32);
void *fn_80243010();

void fn_80242DA0(s16 arg0, s32 arg1) {
    void *var_r3;

    var_r3 = fn_80242F94(arg1);
    if ((var_r3 != NULL) || (var_r3 = fn_80243010(), ((var_r3 == NULL) == 0))) {
        M2C_FIELD(var_r3, u8 *, 0) = 0x99;
        M2C_FIELD(var_r3, s16 *, 0x10) = arg0;
        M2C_FIELD(var_r3, s32 *, 0x14) = arg1;
    }
}

}
