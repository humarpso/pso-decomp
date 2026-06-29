#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 fn_80107B0C(s32);
extern s32 lbl_805D60A0;

u32 fn_80209CF8(u32 arg0) {
    u32 var_r3;

    var_r3 = fn_80107B0C(lbl_805D60A0);
    if (var_r3 < arg0) {
        var_r3 = arg0;
    }
    return var_r3;
}

}
