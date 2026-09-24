#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct T_8031A494 { u8 pad[0x354]; f32 f354; };

extern "C" {
extern const f32 TObjEneMe3SinowZoa__data_805DF32C;
s32 TObjEneMe3SinowZoa__sub_8031A4D0(u8 *arg0);
extern f32 TObjEneMe3SinowZoa__data_805DF2F4;
extern const f32 TObjEneMe3SinowZoa__data_805DF32C;
extern f32 TObjEneMe3SinowZoa__data_805DF328;
u8 TObjEneMe3SinowZoa__sub_8031A494(T_8031A494 *self);
}

extern "C" {

u8 TObjEneMe3SinowZoa__sub_8031A494(T_8031A494 *self) {
    s32 r = 0;
    if (self->f354 < TObjEneMe3SinowZoa__data_805DF2F4 ||
        (self->f354 >= (*(f32 *)&TObjEneMe3SinowZoa__data_805DF32C) && self->f354 < TObjEneMe3SinowZoa__data_805DF328)) r = 1;
    return r;
}

s32 TObjEneMe3SinowZoa__sub_8031A4D0(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x354) < TObjEneMe3SinowZoa__data_805DF32C;
}

}
