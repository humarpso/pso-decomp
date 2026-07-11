#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

void copy_offset_position__10TObjPlayerFPvPv(void *arg0, void *arg1);
void *fn_8007EAF8(void *);

extern const f32 lbl_805DC334;

void copy_offset_position__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(fn_8007EAF8(arg1), f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((lbl_805DC334 * temp_f2) + M2C_FIELD(arg1, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
}

}
