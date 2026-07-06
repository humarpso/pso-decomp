#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C10D0(u8 *arg0);

extern const f32 lbl_805DC278;

void TObjPlayer__sub_801C10D0(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_805DC278;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_805DC278;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_805DC278;
    M2C_FIELD(arg0, s8 *, 0) = 0x2A;
    M2C_FIELD(arg0, s8 *, 1) = 6;
}

}
