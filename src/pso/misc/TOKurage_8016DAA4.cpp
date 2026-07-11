#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__8TOKurageFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805DB7A8;
extern const f32 TOKurage__data_805DB7AC;

void init__8TOKurageFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0xCC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0xE4, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, s8 *, 0x100) = 0;
    M2C_FIELD(arg0, s8 *, 0x101) = 0;
    M2C_FIELD(arg0, s16 *, 0xFC) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xFE) = 0;
    M2C_FIELD(arg0, f32 *, 0x104) = (f32) TOKurage__data_805DB7AC;
    M2C_FIELD(arg0, f32 *, 0x108) = (f32) TOKurage__data_805DB7AC;
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) TOKurage__data_805DB7AC;
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) TOKurage__data_805DB7AC;
}

}
