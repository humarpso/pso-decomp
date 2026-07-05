#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001DB44(s32);
extern s32 lbl_805D4A98;

s32 fn_8001DB50(s32 arg0) {
    s32 var_r3;
    s32 ret;

    ret = fn_8001DB44(arg0);
    if (ret == arg0) {
        return 0;
    }
    var_r3 = lbl_805D4A98 & 0xFFFFFFFE;
    if (arg0 != 0) {
        var_r3 = lbl_805D4A98 | 1;
    }
    lbl_805D4A98 = var_r3;
    return 1;
}

}
