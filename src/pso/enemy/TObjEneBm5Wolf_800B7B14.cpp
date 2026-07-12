#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_rotated_vector__14TObjEneBm5WolfFPviPvPv(void *arg0, s32 arg1, void *arg2, s32 *arg3);
f64 TObjPlayer__sub_80019760(f32, f32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f64 TObjEneBm5Wolf__data_8043B5B0;

void calc_rotated_vector__14TObjEneBm5WolfFPviPvPv(void *arg0, s32 arg1, void *arg2, s32 *arg3) {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = TBoss8Dragon__sub_803D64C0(arg1);
    temp_f1 = TBoss8Dragon__sub_803D64DC(arg1);
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A8)) - (temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A8)) + (temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    *arg3 = (s32) (TObjEneBm5Wolf__data_8043B5B0 * TObjPlayer__sub_80019760(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
}

}
