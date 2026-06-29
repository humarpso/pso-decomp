#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern f32 lbl_805DC9C0;
extern f32 lbl_805DC9C4;

void fn_8023F858(void *arg0, f32 farg0) {
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_805DC9C0) {
        var_f1 = lbl_805DC9C0;
    }
    if (var_f1 > lbl_805DC9C4) {
        var_f1 = lbl_805DC9C4;
    }
    M2C_FIELD(arg0, f32 *, 0x27C) = var_f1;
}

}
