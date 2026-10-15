#include "types.h"
#include "pso/boss/TBoss2LaserLight.h"

struct V3_80037264 { f32 x, y, z; };

struct S_80037264 {
    u8 pad0[0x18];
    void *vt;
    V3_80037264 recs[20];
    s32 a10c, a110, a114, a118, a11c, a120;
};

struct Obj_800372F0 {
    u8 pad0[0x1C];
    s32 f1C;
    s32 state;
    u32 req;
    u8 pad28[0x38 - 0x28];
    f32 f38;
    f32 f3C;
    void *light;
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_80482C58[];
extern const f32 TBoss2LaserLight__data_805D849C;
S_80037264 *ct_init_points__16TBoss2LaserLightFPvPvii(S_80037264 *o, void *parent, s32 arg2, s32 arg3);
s32 noop_laser__23TAdSinglePlyChrSelectGCFv(void *);
s32 TAdSinglePlyChrSelectGC__sub_80133508(void *);
s32 forward_to_field_0x14__23TAdSinglePlyChrSelectGCFPv(void *, void *);
s32 set_vec3__23TAdSinglePlyChrSelectGCFPv(void *, s32);
extern const f32 lbl_805D84A8;
}

extern "C" {

void TBoss2LaserLight__sub_80037474(void* p);
void TBoss2LaserLight__sub_80037480(void* p);
void *__dt__16TBoss2LaserLightFPvs(void *arg0, s16 arg1);
void *__dt__16TBoss2LaserLightFv(void *arg0, s16 arg1);
void unregister_and_free__9TObjLightFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern s32 lbl_80482C58[];

void *__dt__16TBoss2LaserLightFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80482C58;
        if (*(void **)((s8 *)arg0 + 0x11C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x11C)); *(s32 *)((s8 *)arg0 + 0x11C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

S_80037264 *ct_init_points__16TBoss2LaserLightFPvPvii(S_80037264 *o, void *parent, s32 arg2, s32 arg3) {
    s32 i;
    __ct__7TObjectFP7TObject(o, parent);
    o->vt = ((u8 *)&lbl_80482C58);
    for (i = 0; i < 20; i++) {
        o->recs[i].x = TBoss2LaserLight__data_805D849C;
        o->recs[i].y = TBoss2LaserLight__data_805D849C;
        o->recs[i].z = TBoss2LaserLight__data_805D849C;
    }
    o->a10c = 0;
    o->a110 = 0;
    o->a114 = arg2;
    o->a118 = arg3;
    o->a11c = 0;
    o->a120 = 0;
    return o;
}

void TBoss2LaserLight::render() {  }

void TBoss2LaserLight::run_task() {
    Obj_800372F0 *self = (Obj_800372F0 *)this;
    f32 v;
    switch (self->state) {
    case 0:
    case 3:
        if (self->req == 1) {
            self->req = 0;
            self->state = 1;
            TAdSinglePlyChrSelectGC__sub_80133508(self->light);
        }
        break;
    case 1:
    case 2:
        if (self->req == 2) {
            self->req = 0;
            self->state = 3;
        }
        break;
    }
    switch (self->state) {
    case 0:
        break;
    case 1:
        v = self->f38;
        v += 3.0f;
        if (v >= 60.0f) {
            v = 60.0f;
            self->state = 2;
        }
        self->f38 = v;
        self->f3C = lbl_805D84A8 + v;
        forward_to_field_0x14__23TAdSinglePlyChrSelectGCFPv(self->light, &self->f38);
        set_vec3__23TAdSinglePlyChrSelectGCFPv(self->light, self->f1C);
        break;
    case 2:
        set_vec3__23TAdSinglePlyChrSelectGCFPv(self->light, self->f1C);
        break;
    case 3:
        v = self->f38;
        v -= 3.0f;
        if (v <= 0.0f) {
            v = 0.0f;
            self->state = 0;
            noop_laser__23TAdSinglePlyChrSelectGCFv(self->light);
        }
        self->f38 = v;
        self->f3C = lbl_805D84A8 + v;
        forward_to_field_0x14__23TAdSinglePlyChrSelectGCFPv(self->light, &self->f38);
        set_vec3__23TAdSinglePlyChrSelectGCFPv(self->light, self->f1C);
        break;
    }
}

void TBoss2LaserLight__sub_80037474(void* p) { *(s32*)((char*)p + 0x24) = 2; }
void TBoss2LaserLight__sub_80037480(void* p) { *(s32*)((char*)p + 0x24) = 1; }

extern s32 __vt__16TBoss2LaserLight[];

void *__dt__16TBoss2LaserLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TBoss2LaserLight;
        if (*(void **)((s8 *)arg0 + 0x40) != NULL) { unregister_and_free__9TObjLightFv(*(void **)((s8 *)arg0 + 0x40)); *(s32 *)((s8 *)arg0 + 0x40) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
