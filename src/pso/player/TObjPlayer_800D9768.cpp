#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800D9768(void *arg0, f32 farg0);
f32 fn_8002ADE4(f32, f32);

extern const f32 lbl_805DA3E8;

s32 TObjPlayer__sub_800D9768(void *arg0, f32 farg0) {
    void *var_r31;
    f32 temp_f2;
    f32 temp_f_sda;
    s32 temp_r4;
    s32 temp_r0;
    s32 temp_r3;

    var_r31 = arg0;
    temp_f2 = M2C_FIELD(var_r31, f32 *, 0xC);
    if ((farg0 < temp_f2) || (farg0 > M2C_FIELD(var_r31, f32 *, 0x10))) {
        return 0;
    }
    temp_f_sda = lbl_805DA3E8;
    {
        f32 temp_sub = farg0 - temp_f2;
        temp_r4 = (s32) fn_8002ADE4((temp_sub + lbl_805DA3E8) / M2C_FIELD(var_r31, f32 *, 0x14), lbl_805DA3E8);
    }
    temp_r0 = M2C_FIELD(var_r31, s32 *, 0x4);
    temp_r3 = M2C_FIELD(var_r31, s32 *, 0x0);
    return temp_r3 + temp_r0 * temp_r4 * 0xC;
}

}
