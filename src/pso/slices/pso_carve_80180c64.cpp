#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjPlayer__sub_80020898(void *, void *);

u8 *fn_80180C64(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    VecCopy__FP3VecPC3Vec(arg0 + 0xC, arg1 + 0xC);
    VecCopy__FP3VecPC3Vec(arg0 + 0x18, arg1 + 0x18);
    TObjPlayer__sub_80020898(arg0 + 0x24, arg1 + 0x24);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    return arg0;
}

}
