#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_803D7B68(void *, f32);
M2C_UNK fn_803D7D30(s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);

s32 TObjPlayer__sub_802C3088(void *arg0, s32 arg1, void *arg2, s32 arg3, f32 farg0) {
    M2C_UNK sp24[3];
    M2C_UNK sp18[3];
    M2C_UNK sp8[4];
    f32 var_f1;
    s32 var_r31;
    u32 temp_r7;

    var_f1 = farg0;
    var_r31 = 1;
    temp_r7 = M2C_FIELD(arg2, s32 *, 4) - 1;
    if (var_f1 > (f32) temp_r7) {
        var_r31 = 0;
        var_f1 = (f32) temp_r7;
    }
    fn_803D7B68(arg2, var_f1);
    fn_803D7D30(arg1, arg3, sp24, sp18, sp8);
    return var_r31;
}

}
