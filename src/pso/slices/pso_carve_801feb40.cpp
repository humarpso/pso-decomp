#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801FFF58();
M2C_UNK fn_80242D2C();
extern u32 lbl_805D5F6C;
extern u32 lbl_805D5F9C;

s32 fn_801FEB40(void) {
    s32 var_r3;

    fn_80242D2C();
    var_r3 = 0;
    if (((u32) lbl_805D5F6C != 0U) && ((u32) lbl_805D5F9C != 0U)) {
        fn_801FFF58();
        var_r3 = 1;
    }
    return var_r3;
}

}
