#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_move_vector__17TObjEneMe1CanadinFiPv(s32 arg0, void *arg1);
M2C_UNK vec3_add_to(void *, s32);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
f32 sin_table_lookup(s32, f32);
f32 cos_table_lookup(s32, f32);
s32 get_random_scaled__9TObjEneDDFv();

extern const f32 lbl_805D9898;
extern const f32 lbl_805D989C;
extern const f32 lbl_805D98D0;

void calc_move_vector__17TObjEneMe1CanadinFiPv(s32 arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r31;

    temp_r31 = get_random_scaled__9TObjEneDDFv();
    f32 fv = calc_boss4_scale__10TObjPlayerFi(arg0);
    temp_f31 = (lbl_805D98D0 * fv) + lbl_805D989C;
    temp_f1 = temp_f31 * sin_table_lookup(temp_r31, fv);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_805D9898;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f31 * cos_table_lookup(temp_r31, temp_f1));
    vec3_add_to(arg1, arg0 + 0x38);
}

}
