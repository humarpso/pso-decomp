#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubStatusDisp__sub_8006F094(M2C_UNK);
extern s32 lbl_8048C9D8[];

void fn_80071500(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = arg0;
    temp_r3 = TWindowSubStatusDisp__sub_8006F094(-1);
    if ((var_r31 < 0) || (var_r31 >= temp_r3)) {
        var_r31 = 0;
    }
    lbl_8048C9D8[0] = var_r31;
}

}
