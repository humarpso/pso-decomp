#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_prev_position__10TObjPlayerFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805DA8DC;

void update_prev_position__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x2B0));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) ((lbl_805DA8DC * M2C_FIELD(temp_r3, f32 *, 0x10)) + M2C_FIELD(arg0, f32 *, 0x300));
    }
}

}
