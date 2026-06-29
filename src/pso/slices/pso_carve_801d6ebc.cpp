#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801AF288();

void fn_801D6EBC(void *arg0, s16 arg1) {
    s16 var_r31;

    var_r31 = arg1;
    if ((var_r31 < 0) || (var_r31 > TObjPlayer__sub_801AF288())) {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x14) = var_r31;
}

}
