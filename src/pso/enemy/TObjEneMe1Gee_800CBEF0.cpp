#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800CBEF0 { u8 pad[0x3c8]; u32 f3c8; u8 pad2[0x3f8 - 0x3cc]; f32 f3f8; f32 f3fc; f32 f400; };

extern "C" {
extern const f32 TObjEneMe1Gee__data_805DA0D4;
extern const f32 lbl_805DA13C;
void TObjEneMe1Gee__sub_800CBF58(u8 *arg0, f32 farg0);
void TObjEneMe1Gee__sub_800CBEF0(Obj_800CBEF0 *self, f32 target);
}

extern "C" {

void TObjEneMe1Gee__sub_800CBEF0(Obj_800CBEF0 *self, f32 target) {
    f32 d = target - self->f3f8;
    self->f3c8 &= ~0x80000;
    if (d >= self->f400) {
        self->f3f8 += self->f400;
    } else if (d <= -self->f400) {
        self->f3f8 -= self->f400;
    } else {
        self->f3f8 = target;
        self->f3c8 |= 0x80000;
    }
}

void TObjEneMe1Gee__sub_800CBF58(u8 *arg0, f32 farg0) {
    f32 temp_f3;
    temp_f3 = farg0 - M2C_FIELD(arg0, f32 *, 0x3F8);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFF7FFFF);
    if (temp_f3 >= TObjEneMe1Gee__data_805DA0D4) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) + TObjEneMe1Gee__data_805DA0D4);
        return;
    }
    if (temp_f3 <= lbl_805DA13C) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) - TObjEneMe1Gee__data_805DA0D4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x3F8) = farg0;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x80000);
}

}
