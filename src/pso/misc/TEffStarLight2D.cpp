#include "pso/TEffStarLight2D.h"
#include "pso/TEffStarLightChild.h"
#include "types.h"

typedef s32 M2C_UNK;

struct Vec_800851B0 { f32 x; f32 y; f32 z; };

struct P2_800851B0 { f32 x; f32 z; };

struct Star_800851B0 {
    u8 pad0[0x1C];
    f32 curX;
    f32 curZ;
    f32 prevX;
    f32 prevZ;
    Vec_800851B0 pos;
    f32 f38;
    f32 f3C;
};

struct O_80085388 { u32 f0; u8 pad4[0x14]; void *vptr; f32 f1c; f32 f20; f32 f24; f32 f28; };

struct P2_80085388 { f32 x; f32 z; };

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
void *__nw__7TObjectFUl(u32);
void TCameraCtrl__sub_803D8934(int, void *, void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
void TParticleCtrl__sub_803D8D1C(int, void *, void *);
extern u8 __vt__15TEffStarLight2D[];
extern u32 lbl_805D292C;
M2C_UNK queue_destruction__7TObjectFv(void *);
f32 TEffStarLightChild__sub_80141FBC(void *, void *, void *, f32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
f32 TObjPlayer__sub_8001978C(f32);
extern void *__vt__18TEffStarLightChild[];
extern s32 lbl_805D2928;
void run_task__15TEffStarLight2DFv(Star_800851B0 *self);
void copy_from__15TEffStarLight2DFPvPv(void* p, void* q);
void copy_from_subobject__15TEffStarLight2DFPvPv(void* p, void* a1);
O_80085388 *__ct__15TEffStarLight2DFv(O_80085388 *arg0, void *arg1, void *arg2, void *arg3);
void render__18TEffStarLightChildFv(void);
void run_task__18TEffStarLightChildFv(Star_80085424 *self);
Star_800855F8 *__ct__18TEffStarLightChildFv(Star_800855F8 *self, Pt_800855F8 *a, Pt_800855F8 *b, void *parent, f32 w, f32 speed);
}

extern "C" {

void run_task__15TEffStarLight2DFv(Star_800851B0 *self) {
    P2_800851B0 scr;
    Vec_800851B0 view;
    f32 dx;
    f32 dz;
    void *child;

    TCameraCtrl__sub_803D8934(0, &self->pos, &view);
    if (view.z > 0.0f) {
        return;
    }
    TParticleCtrl__sub_803D8D1C(0, &self->pos, &scr);
    if (scr.x >= -100.0f && scr.x <= 740.0f && scr.z >= -100.0f && scr.z <= 580.0f) {
        self->prevX = self->curX;
        self->prevZ = self->curZ;
        self->curX = scr.x;
        self->curZ = scr.z;
        dx = self->curX - self->prevX;
        dz = self->curZ - self->prevZ;
        if (dx * dx + dz * dz >= 1.0f) {
            child = __nw__7TObjectFUl(0x30);
            if (child != NULL) {
                ((void *(*)(void *, void *, void *, void *, f32, f32))__ct__18TEffStarLightChildFv)(child, &self->prevX, &self->curX, self, self->f38, self->f3C);
            }
        }
    }
}
void copy_from_subobject__15TEffStarLight2DFPvPv(void* p, void* a1) { copy_from__15TEffStarLight2DFPvPv((void*)((char*)p + 0x38), (void*)(a1)); }
void copy_from__15TEffStarLight2DFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u8*)((char*)p + 0x8) = *(u8*)((char*)q + 0x8); *(u8*)((char*)p + 0x9) = *(u8*)((char*)q + 0x9); *(u8*)((char*)p + 0xa) = *(u8*)((char*)q + 0xa); *(u8*)((char*)p + 0xb) = *(u8*)((char*)q + 0xb); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); }

}

TEffStarLight2D::~TEffStarLight2D() {}

extern "C" {

#pragma push
#pragma opt_common_subs off
O_80085388 *__ct__15TEffStarLight2DFv(O_80085388 *arg0, void *arg1, void *arg2, void *arg3) {
    P2_80085388 p;
    __ct__7TObjectFP7TObject(arg0, arg3);
    arg0->vptr = __vt__15TEffStarLight2D;
    arg0->f0 = lbl_805D292C;
    copy_from__15TEffStarLight2DFPvPv((void*)((u8 *)arg0 + 0x38), (void*)(arg2));
    VecCopy__FP3VecPC3Vec((u8 *)arg0 + 0x2C, arg1);
    TParticleCtrl__sub_803D8D1C(0, (u8 *)arg0 + 0x2C, &p);
    arg0->f24 = p.x;
    arg0->f28 = p.z;
    arg0->f1c = arg0->f24;
    arg0->f20 = arg0->f28;
    return arg0;
}
#pragma pop

void render__18TEffStarLightChildFv(void) {  }
void run_task__18TEffStarLightChildFv(Star_80085424 *self) {
    Vec_80085424 a;
    Vec_80085424 b;
    Vec_80085424 c;
    s32 inside = 0;
    c.z = 0.0f;
    c.x = 0.5f * (self->x0 + self->x1);
    c.y = 0.5f * (self->y0 + self->y1);
    a.z = 0.0f;
    a.x = self->x0;
    a.y = self->y0;
    b.z = 0.0f;
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

}

TEffStarLightChild::~TEffStarLightChild() {}

extern "C" {

#pragma push
#pragma fp_contract on
Star_800855F8 *__ct__18TEffStarLightChildFv(Star_800855F8 *self, Pt_800855F8 *a, Pt_800855F8 *b, void *parent, f32 w, f32 speed) {
    Vec_800855F8 d;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__18TEffStarLightChild;
    self->name = lbl_805D2928;
    if (speed <= 0.0f) {
        speed = 1.0f;
    }
    d.x = b->x - a->x;
    d.y = b->y - a->y;
    d.z = 0.0f;
    if (0.0f != TBoss6Kakusan__sub_803D8BD8(&d)) {
        TNpcPlayer__sub_803D97B4(&d);
    } else {
        d.x = 0.0f;
        d.y = 0.0f;
        d.z = 0.0f;
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
