#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void *fn_8007A544(void *, M2C_UNK, f32);
extern f32 lbl_805D9210;

s32 fn_8007E44C(s32 arg0, void *arg1, void *arg2) {
    f32 temp_f1;
    void *temp_r3;

    VecCopy__FP3VecPC3Vec(arg1, arg0);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f1 + lbl_805D9210);
    temp_r3 = fn_8007A544(arg1, 0x16EF, temp_f1);
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(temp_r3, s32 *, 4));
        VecCopy__FP3VecPC3Vec(arg2, M2C_FIELD(temp_r3, s32 *, 4) + 0xC);
        return 1;
    }
    VecCopy__FP3VecPC3Vec(arg1, arg0);
    return 0;
}

}
