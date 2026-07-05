#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_8007E918();
M2C_UNK fn_8007E9EC(void *, f32);
f32 fn_803D64C0(s32);
f32 fn_803D64DC(s32, f32);
extern const f32 lbl_805D8198;
extern const f32 lbl_805D81F4;
extern const f32 lbl_805D81F8;

f32 fn_8002DDDC(void *arg0, f32 farg0, f32 farg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 var_f31;
    s32 temp_r31;

    temp_f1 = fn_8007E918();
    if (temp_f1 > farg0) {
        var_f31 = lbl_805D8198;
        M2C_FIELD(arg0, f32 *, 0) = var_f31;
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805D81F4;
        M2C_FIELD(arg0, f32 *, 8) = var_f31;
    } else {
        temp_r31 = (s32) (lbl_805D81F8 * (temp_f1 / farg0));
        var_f31 = farg1 * (lbl_805D81F4 + fn_803D64DC(temp_r31, lbl_805D81F8));
        temp_f1_2 = fn_803D64C0(temp_r31);
        temp_f2 = M2C_FIELD(arg0, f32 *, 0) * temp_f1_2;
        M2C_FIELD(arg0, f32 *, 0) = temp_f2;
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805D81F4;
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f1_2);
        fn_8007E9EC(arg0, temp_f1_2);
    }
    return var_f31;
}

}
