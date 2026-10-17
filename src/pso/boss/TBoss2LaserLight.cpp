#include "types.h"
#include "pso/boss/TBoss2LaserLight.h"
#include "pso/boss/TUnk_80482C58.h"
#include "pso/object/TObjLight.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

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
extern const f32 TBoss2LaserLight__data_805D849C;
s32 noop_laser__23TAdSinglePlyChrSelectGCFv(void *);
s32 TAdSinglePlyChrSelectGC__sub_80133508(void *);
extern const f32 lbl_805D84A8;
void TBoss2LaserLight__sub_80037474(void* p);
void TBoss2LaserLight__sub_80037480(void* p);
void queue_destruction__7TObjectFv(void *);

}
TUnk_80482C58::~TUnk_80482C58() {
    if (*(void **)((s8 *)this + 0x11C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x11C)); *(s32 *)((s8 *)this + 0x11C) = 0; }
}
extern "C" {

}
TUnk_80482C58::TUnk_80482C58(TObject *parent, s32 arg2, s32 arg3) : TObject(parent) {
    s32 i;
    for (i = 0; i < 20; i++) {
        ((S_80037264 *)this)->recs[i].x = TBoss2LaserLight__data_805D849C;
        ((S_80037264 *)this)->recs[i].y = TBoss2LaserLight__data_805D849C;
        ((S_80037264 *)this)->recs[i].z = TBoss2LaserLight__data_805D849C;
    }
    ((S_80037264 *)this)->a10c = 0;
    ((S_80037264 *)this)->a110 = 0;
    ((S_80037264 *)this)->a114 = arg2;
    ((S_80037264 *)this)->a118 = arg3;
    ((S_80037264 *)this)->a11c = 0;
    ((S_80037264 *)this)->a120 = 0;
}
extern "C" {

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
        ((TAdSinglePlyChrSelectGC *)(self->light))->forward_to_field_0x14(&self->f38);
        ((TAdSinglePlyChrSelectGC *)(self->light))->set_vec3((void*)(self->f1C));
        break;
    case 2:
        ((TAdSinglePlyChrSelectGC *)(self->light))->set_vec3((void*)(self->f1C));
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
        ((TAdSinglePlyChrSelectGC *)(self->light))->forward_to_field_0x14(&self->f38);
        ((TAdSinglePlyChrSelectGC *)(self->light))->set_vec3((void*)(self->f1C));
        break;
    }
}

void TBoss2LaserLight__sub_80037474(void* p) { *(s32*)((char*)p + 0x24) = 2; }
void TBoss2LaserLight__sub_80037480(void* p) { *(s32*)((char*)p + 0x24) = 1; }

}
TBoss2LaserLight::~TBoss2LaserLight() {
    if (*(void **)((s8 *)this + 0x40) != NULL) { ((TObjLight *)(*(void **)((s8 *)this + 0x40)))->unregister_and_free(); *(s32 *)((s8 *)this + 0x40) = 0; }
}
