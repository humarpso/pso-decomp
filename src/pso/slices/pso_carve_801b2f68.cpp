#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800A7798(s32, f32);
s32 is_flag30_8_set__10TObjPlayerFi();
extern f32 TObjPlayer__data_805DC28C;

void fn_801B2F68(s32 arg0, f32 farg0) {
    f32 var_f1;

    if (is_flag30_8_set__10TObjPlayerFi() != 0) {
        var_f1 = TObjPlayer__data_805DC28C * farg0;
    } else {
        var_f1 = farg0;
    }
    fn_800A7798(arg0, var_f1);
}

}
