#include "types.h"
struct Vec_8009A640 { f32 x, y, z; };

struct Pair_8009A640 { f32 ax, ay, az, aw; f32 bx, by, bz, bw; };

struct Obj_8009A640 { u8 pad[0x38]; f32 radius; u8 pad2[4]; Pair_8009A640 pts[6]; };

extern "C" {
extern Vec_8009A640 lbl_805008B8[6];
extern const f32 lbl_805D9878;
extern const f32 lbl_805D9860;
void fn_8009A640(Obj_8009A640 *self);
}

extern "C" {

void fn_8009A640(Obj_8009A640 *self) {
    s32 i;
    f32 outer = lbl_805D9878 + self->radius;
    f32 inner = self->radius - lbl_805D9878;
    Vec_8009A640 *src = lbl_805008B8;
    Pair_8009A640 *dst = self->pts;
    for (i = 0; i < 6; i++) {
        f32 x = src->x;
        f32 z = src->z;
        src++;
        dst->ax = x * outer;
        dst->ay = lbl_805D9860;
        dst->az = z * outer;
        dst->bx = x * inner;
        dst->by = lbl_805D9860;
        dst->bz = z * inner;
        dst++;
    }
}

}
