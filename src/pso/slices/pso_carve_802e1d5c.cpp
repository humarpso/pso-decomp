#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001C5F0();
s32 fn_802E3AE4();
s32 fn_802E3AEC();

s32 fn_802E1D5C(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x400) {
        var_r31 = fn_802E3AEC();
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x800) {
        var_r31 += fn_802E3AE4();
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x1000) {
        var_r31 += fn_8001C5F0();
    }
    return var_r31;
}

}
