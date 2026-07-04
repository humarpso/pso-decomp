#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801FCCDC(u32, u32);
extern u32 lbl_805D5F58;

s32 fn_801FE854(u32 arg0) {
    u32 var_r4 = arg0;
    u32 var_r3;
    if (var_r4 >= 7U) {
        return 0;
    }
    var_r3 = lbl_805D5F58;
    if ((var_r3 != 0U) && (fn_801FCCDC(var_r3, var_r4) != 0)) {
        return 1;
    }
    return 0;
}

}
