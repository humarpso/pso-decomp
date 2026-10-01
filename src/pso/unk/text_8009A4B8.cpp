#include "types.h"
struct Vec_8009A640 { f32 x, y, z; };

struct Pair_8009A640 { f32 ax, ay, az, aw; f32 bx, by, bz, bw; };

struct Obj_8009A640 { u8 pad[0x38]; f32 radius; u8 pad2[4]; Pair_8009A640 pts[6]; };

struct Ent_8009A598 { u8 pad[0xC]; u32 col; };

struct Obj_8009A598 { u8 pad0[0x2C]; f32 f2c; s32 n; u8 pad34[0xC]; Ent_8009A598 ents[1]; };

struct Obj_8009A4B8 {
    u8 pad0[0x1C];
    s32 state;
    u8 pad20[0x2C - 0x20];
    f32 alpha;
    s32 frame;
    s32 angle;
    f32 scale;
    f32 scale_max;
};

extern "C" {
extern Vec_8009A640 lbl_805008B8[6];
extern const f32 lbl_805D9878;
extern const f32 lbl_805D9860;
void fn_8009A640(Obj_8009A640 *self);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
u32 __cvt_fp2unsigned();
extern u32 lbl_80500900[];
extern const f32 lbl_805D9874;
void fn_8009A598(Obj_8009A598 *arg0);
void queue_destruction__7TObjectFv(void *);
void fn_8009A598(Obj_8009A598 *arg0);
void fn_8009A640(Obj_8009A640 *self);
void fn_8009A4B8(Obj_8009A4B8 *self);
}

extern "C" {

void fn_8009A4B8(Obj_8009A4B8 *self) {
    switch (self->state) {
    case 0:
        self->scale += 7.0f;
        if (self->scale >= self->scale_max) {
            self->scale = self->scale_max;
            self->state = 1;
        }
        fn_8009A640((Obj_8009A640 *)(self));
        break;
    case 1:
        self->alpha = self->alpha - 0.05f;
        if (self->alpha < 0.0f) {
            self->alpha = 0.0f;
            queue_destruction__7TObjectFv(self);
            return;
        }
        break;
    }
    self->angle += 0x800;
    self->frame++;
    if (self->frame >= 12) {
        self->frame = 0;
    }
    fn_8009A598((Obj_8009A598 *)(self));
}

void fn_8009A598(Obj_8009A598 *arg0) {
    s32 i;
    s32 n;
    Ent_8009A598 *p;
    u32 c;
    get_random_float__21TObjEneMe3ShinowaRealFv(lbl_805D9874 * arg0->f2c);
    c = __cvt_fp2unsigned() << 24;
    n = arg0->n;
    p = arg0->ents;
    for (i = n; i < 12; i++) {
        u32 v = lbl_80500900[n];
        p->col = v | c;
        p++;
    }
    for (i = 0; i < arg0->n; i++) {
        p->col = lbl_80500900[0] | c;
        p++;
    }
}

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
