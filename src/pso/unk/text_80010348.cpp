#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 TObjPlayer__data_805D7D24;
void TObjPlayer__sub_8001053C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8001053C(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjPlayer__data_805D7D24;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805D7D24;
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjPlayer__data_805D7D24;
}

}
