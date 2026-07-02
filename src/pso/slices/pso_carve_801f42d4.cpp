#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007EBB4(s32);
s32 fn_8007EBFC();
s32 fn_800F9D80();
M2C_UNK fn_800F9DF4(s32, s32);
M2C_UNK fn_801F3E1C();
M2C_UNK fn_801F4340();
extern s32 lbl_805D5EE0;
extern s16 lbl_805D6134;

void fn_801F42D4(s32 arg0) {
    s32 t;

    if (fn_800F9D80() >= 0) {
        t = (lbl_805D5EE0 = fn_8007EBFC());
        if (t != 0) {
            fn_800F9DF4(arg0, t);
            fn_801F3E1C();
            fn_801F4340();
            lbl_805D6134 = 1;
            fn_8007EBB4(lbl_805D5EE0);
            lbl_805D5EE0 = 0;
        }
    }
}

}
