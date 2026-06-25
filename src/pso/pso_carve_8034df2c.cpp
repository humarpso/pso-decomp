#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801B1848();
u32 fn_801BA74C(s32);

void fn_8034DF2C(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (fn_801BA74C(var_r31) != 0U) {
            fn_801B1848();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
