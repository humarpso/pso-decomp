#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80255980(void *, u32, M2C_UNK);

void fn_80255950(void *arg0, u32 arg1) {
    M2C_UNK var_r5;

    var_r5 = -0x100;
    if (arg1 == 0U) {
        var_r5 = -1;
    }
    fn_80255980(arg0, arg1, var_r5);
}

}
