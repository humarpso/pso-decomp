#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, s32);
u32 TObjEneDD__sub_800BB218(f32, f32, f32);

void TObjEneDD__sub_800BB158(u8 *arg0, u8 *arg1, f32 farg0, f32 farg1, f32 farg2) {
    s32 temp_r5;

    f32 temp_f3 = farg2 + M2C_FIELD(arg0, f32 *, 0x37C);
    if (TObjEneDD__sub_800BB218(farg0, farg1, temp_f3) == 0U) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) ((farg0 * farg2) + M2C_FIELD(arg0, f32 *, 0x38));
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg1, f32 *, 8) = (f32) ((farg1 * farg2) + M2C_FIELD(arg0, f32 *, 0x40));
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        return;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x380);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_r5 + 1);
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x38, temp_r5);
}

}
