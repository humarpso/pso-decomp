#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_800F4814 { u8 pad[0x354]; f32 f354; };

extern "C" {
extern const f32 TObjEneMe3Stelth__data_805DA850;
s32 TObjEneMe3Stelth__sub_800F4850(u8 *arg0);
extern const f32 TObjEneMe3Stelth__data_805DA80C;
extern const f32 TObjEneMe3Stelth__data_805DA850;
extern const f32 TObjEneMe3Stelth__data_805DA84C;
s32 TObjEneMe3Stelth__sub_800F4814(O_800F4814 *self);
}

extern "C" {

s32 TObjEneMe3Stelth__sub_800F4814(O_800F4814 *self) {
    return self->f354 < TObjEneMe3Stelth__data_805DA80C ||
           (self->f354 >= TObjEneMe3Stelth__data_805DA850 && self->f354 < TObjEneMe3Stelth__data_805DA84C);
}

s32 TObjEneMe3Stelth__sub_800F4850(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x354) < TObjEneMe3Stelth__data_805DA850;
}

}
