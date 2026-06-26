#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80113E8C(u32);

s32 fn_80110F90(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (fn_80113E8C(M2C_FIELD(arg0, u32 *, 0xF0)) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

}
