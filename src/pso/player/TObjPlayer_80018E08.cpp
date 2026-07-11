#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_attach_pos__10TObjPlayerFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 TObjPlayer__data_805D7D4C;

void calc_attach_pos__10TObjPlayerFPv(u8 *arg0) {
    if ((void *) M2C_FIELD(arg0, void **, 0x2B0) != NULL) {
        M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) ((TObjPlayer__data_805D7D4C * M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), f32 *, 0x10)) + M2C_FIELD(arg0, f32 *, 0x3C));
        M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
        return;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
}

}
