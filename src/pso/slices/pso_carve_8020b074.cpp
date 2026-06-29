#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 fn_8007EBFC();
extern u32 lbl_805D60F0;
extern s32 lbl_805D60F4;

s32 fn_8020B074(s32 arg0) {
    u32 temp_r3;

    temp_r3 = fn_8007EBFC();
    lbl_805D60F0 = temp_r3;
    if (temp_r3 != 0U) {
        lbl_805D60F4 = arg0;
        return 1;
    }
    lbl_805D60F0 = 0U;
    return 0;
}

}
