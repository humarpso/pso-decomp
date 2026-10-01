#include "pso/TEffStarLightChild.h"

TEffStarLightChild::~TEffStarLightChild() {}

#include "types.h"

typedef s32 M2C_UNK;
struct Vec_80085424 { f32 x, y, z; };

struct Star_80085424 {
    u8 pad0[0x1C];
    f32 angle;
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;
};

struct Vec_800855F8 { f32 x, y, z; };

struct Pt_800855F8 { f32 x, y; };

struct Star_800855F8 {
    s32 name;
    u8 pad4[0x18 - 0x4];
    void *vt;
    f32 angle;
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
f32 TEffStarLightChild__sub_80141FBC(void *, void *, void *, f32);
extern const f32 lbl_805D9454;
extern const f32 lbl_805D9470;
void run_task__18TEffStarLightChildFv(Star_80085424 *self);
void __ct__7TObjectFP7TObject(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
f32 TObjPlayer__sub_8001978C(f32);
extern void *__vt__18TEffStarLightChild[];
extern s32 lbl_805D2928;
extern const f32 lbl_805D9454;
extern const f32 lbl_805D946C;
Star_800855F8 *__ct__18TEffStarLightChildFv(Star_800855F8 *self, Pt_800855F8 *a, Pt_800855F8 *b, void *parent, f32 w, f32 speed);
}

extern "C" {

void render__18TEffStarLightChildFv(void);

void render__18TEffStarLightChildFv(void) {  }
void run_task__18TEffStarLightChildFv(Star_80085424 *self) {
    Vec_80085424 a;
    Vec_80085424 b;
    Vec_80085424 c;
    s32 inside = 0;
    c.z = lbl_805D9454;
    c.x = lbl_805D9470 * (self->x0 + self->x1);
    c.y = lbl_805D9470 * (self->y0 + self->y1);
    a.z = lbl_805D9454;
    a.x = self->x0;
    a.y = self->y0;
    b.z = lbl_805D9454;
    b.x = self->x1;
    b.y = self->y1;
    TEffStarLightChild__sub_80141FBC(&a, &c, &a, self->angle);
    self->x0 = a.x;
    self->y0 = a.y;
    TEffStarLightChild__sub_80141FBC(&b, &c, &b, self->angle);
    self->x1 = b.x;
    self->y1 = b.y;
    if (self->x0 >= -100.0f && self->x0 <= 740.0f) {
        if (self->y0 >= -100.0f && self->y0 <= 580.0f) {
            if (self->x1 >= -100.0f && self->x1 <= 740.0f) {
                if (self->y1 >= -100.0f && self->y1 <= 580.0f) {
                    inside = 1;
                }
            }
        }
    }
    if (inside == 0) {
        queue_destruction__7TObjectFv(self);
    } else if (c.x == b.x && c.y == b.y) {
        queue_destruction__7TObjectFv(self);
    }
}
#pragma push
#pragma fp_contract on
Star_800855F8 *__ct__18TEffStarLightChildFv(Star_800855F8 *self, Pt_800855F8 *a, Pt_800855F8 *b, void *parent, f32 w, f32 speed) {
    Vec_800855F8 d;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__18TEffStarLightChild;
    self->name = lbl_805D2928;
    if (speed <= 0.0f) {
        speed = lbl_805D946C;
    }
    d.x = b->x - a->x;
    d.y = b->y - a->y;
    d.z = lbl_805D9454;
    if (lbl_805D9454 != TBoss6Kakusan__sub_803D8BD8(&d)) {
        TNpcPlayer__sub_803D97B4(&d);
    } else {
        d.x = lbl_805D9454;
        d.y = lbl_805D9454;
        d.z = lbl_805D9454;
    }
    self->x0 = d.y * w + b->x;
    self->y0 = d.x * w + b->y;
    self->x1 = -d.y * w + b->x;
    self->y1 = -d.x * w + b->y;
    if (self->y0 <= self->y1) {
        f32 t0 = self->y0;
        f32 t1 = self->y1;
        self->y1 = t0;
        self->y0 = t1;
    }
    self->angle = TObjPlayer__sub_8001978C((self->x0 - self->x1) * (self->x0 - self->x1) + (self->y0 - self->y1) * (self->y0 - self->y1)) / 2.0f / speed;
    return self;
}
#pragma pop

}
