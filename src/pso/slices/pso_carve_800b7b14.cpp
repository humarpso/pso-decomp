#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f64 fn_80019760(f32, f32);
f32 fn_803D64C0(s32);
f32 fn_803D64DC(s32);
extern const f64 lbl_8043B5B0;

void fn_800B7B14(void *arg0, s32 arg1, void *arg2, s32 *arg3) {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = fn_803D64C0(arg1);
    temp_f1 = fn_803D64DC(arg1);
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A8)) - (temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A8)) + (temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    *arg3 = (s32) (lbl_8043B5B0 * fn_80019760(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
}

}
