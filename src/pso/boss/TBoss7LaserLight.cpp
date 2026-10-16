#include "types.h"
#include "pso/boss/TBoss7LaserLight.h"
#include "pso/object/TObjLight.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct V3_802EEF10 { f32 x, y, z; };

struct Obj_802EEF10 { u8 pad[0x1C]; V3_802EEF10 v[20]; };

typedef struct Obj_802EEF9C {
    u8 pad0[0x1C];
    s32 x1C;
    s32 state;
    u32 req;
    u8 pad28[0x38 - 0x28];
    f32 x38;
    f32 x3C;
    s32 x40;
} Obj_802EEF9C;

extern "C" {
s32 __ct__7TObjectFP7TObject(void *, s32);
extern s32 lbl_804E4788[];
extern const f32 TBoss7LaserLight__data_805DEBC4;
u8 *construct_with_params__16TBoss7LaserLightFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void noop_laser__23TAdSinglePlyChrSelectGCFv(s32);
void TAdSinglePlyChrSelectGC__sub_80133508(s32);
}

extern "C" {

void TBoss7LaserLight__sub_802EF120(void* p);
void TBoss7LaserLight__sub_802EF12C(void* p);
void *__dt__16TBoss7LaserLightFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

u8 *construct_with_params__16TBoss7LaserLightFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E4788;
    for (i = 0; i < 20; i++) {
        ((Obj_802EEF10 *)arg0)->v[i].x = TBoss7LaserLight__data_805DEBC4;
        ((Obj_802EEF10 *)arg0)->v[i].y = TBoss7LaserLight__data_805DEBC4;
        ((Obj_802EEF10 *)arg0)->v[i].z = TBoss7LaserLight__data_805DEBC4;
    }
    *(s32 *)((s8 *)arg0 + 0x10C) = 0;
    *(s32 *)((s8 *)arg0 + 0x110) = 0;
    *(s32 *)((s8 *)arg0 + 0x114) = arg2;
    *(s32 *)((s8 *)arg0 + 0x118) = arg3;
    *(s32 *)((s8 *)arg0 + 0x11C) = 0;
    *(s32 *)((s8 *)arg0 + 0x120) = 0;
    return arg0;
}

void TBoss7LaserLight::render() {  }

void TBoss7LaserLight::run_task() {
    Obj_802EEF9C *arg0 = (Obj_802EEF9C *)this;
    f32 v;
    switch (arg0->state) {
    case 0:
    case 3:
        if (arg0->req == 1) {
            arg0->req = 0;
            arg0->state = 1;
            TAdSinglePlyChrSelectGC__sub_80133508(arg0->x40);
        }
        break;
    case 1:
    case 2:
        if (arg0->req == 2) {
            arg0->req = 0;
            arg0->state = 3;
        }
        break;
    }
    switch (arg0->state) {
    case 0:
        break;
    case 1:
        v = arg0->x38;
        v += 3.0f;
        if (v >= 60.0f) {
            v = 60.0f;
            arg0->state = 2;
        }
        arg0->x38 = v;
        arg0->x3C = 40.0f + v;
        ((TAdSinglePlyChrSelectGC *)(arg0->x40))->forward_to_field_0x14(&arg0->x38);
        ((TAdSinglePlyChrSelectGC *)(arg0->x40))->set_vec3((void*)(arg0->x1C));
        break;
    case 2:
        ((TAdSinglePlyChrSelectGC *)(arg0->x40))->set_vec3((void*)(arg0->x1C));
        break;
    case 3:
        v = arg0->x38;
        v -= 3.0f;
        if (v <= 0.0f) {
            v = 0.0f;
            arg0->state = 0;
            noop_laser__23TAdSinglePlyChrSelectGCFv(arg0->x40);
        }
        arg0->x38 = v;
        arg0->x3C = 40.0f + v;
        ((TAdSinglePlyChrSelectGC *)(arg0->x40))->forward_to_field_0x14(&arg0->x38);
        ((TAdSinglePlyChrSelectGC *)(arg0->x40))->set_vec3((void*)(arg0->x1C));
        break;
    }
}

void TBoss7LaserLight__sub_802EF120(void* p) { *(s32*)((char*)p + 0x24) = 2; }
void TBoss7LaserLight__sub_802EF12C(void* p) { *(s32*)((char*)p + 0x24) = 1; }

extern s32 __vt__16TBoss7LaserLight[];

void *__dt__16TBoss7LaserLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TBoss7LaserLight;
        if (*(void **)((s8 *)arg0 + 0x40) != NULL) { ((TObjLight *)(*(void **)((s8 *)arg0 + 0x40)))->unregister_and_free(); *(s32 *)((s8 *)arg0 + 0x40) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
