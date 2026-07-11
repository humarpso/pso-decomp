#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8039DCE0(s32, s32);
s32 strlen();
extern s32 lbl_805D5ED4;

void append_string(s32 arg0) {
    s32 temp_r31;

    temp_r31 = strlen();
    fn_8039DCE0(lbl_805D5ED4, arg0);
    lbl_805D5ED4 += temp_r31;
}

}
