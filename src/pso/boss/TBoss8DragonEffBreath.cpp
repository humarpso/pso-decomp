#include "types.h"

struct Vec_802FE024 { f32 x, y, z; };

struct Obj_802FE024 {
    u8 pad0[0x18];
    void *vt;
    Vec_802FE024 pos;
    Vec_802FE024 vel;
    s32 a;
    s16 b;
    void *h;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
void *TBoss8Dragon__sub_800BC5EC(void *, int);
void *__ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__21TBoss8DragonEffBreath[];
extern s32 TBoss8DragonEffBreath__name;
extern const f32 lbl_805DEEF8;
Obj_802FE024 *TBoss8DragonEffBreath__ct(Obj_802FE024 *self, void *parent, void *p, void *v, s32 a, s16 b);
}

extern "C" {

void *__dt__21TBoss8DragonEffBreathFv(void *arg0, s16 arg1);
void render__21TBoss8DragonEffBreathFv(void);
void run_task__21TBoss8DragonEffBreathFv(u8 *arg0);
s32 vec3_add_to(void *, void *);
void delete_buffer__12TBoss8DragonFis(void *, int);
s32 setup_breath_instance__12TBoss8DragonFPviUii(u32, void *, int, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
u32 get_enemy_entity(int);
s32 queue_destruction__7TObjectFv(void *);

void render__21TBoss8DragonEffBreathFv(void) {  }

extern const f32 lbl_805DEEF0;
extern const f32 lbl_805DEEF4;

void run_task__21TBoss8DragonEffBreathFv(u8 *arg0) {
    f32 temp_f1;
    u32 ent;

    vec3_add_to((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x20);
    if (temp_f1 < lbl_805DEEF0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((temp_f1 < lbl_805DEEF4) && ((ent = get_enemy_entity((int) (*(u16 *)((s8 *)arg0 + 0x38)))) != 0U)) {
        setup_breath_instance__12TBoss8DragonFPviUii(ent, (void *) (arg0 + 0x1C), (int) (*(s32 *)((s8 *)arg0 + 0x34)), (int) (*(s32 *)((s8 *)arg0 + 0x3C)));
    }
}

extern s32 __vt__21TBoss8DragonEffBreath[];

void *__dt__21TBoss8DragonEffBreathFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TBoss8DragonEffBreath;
        delete_buffer__12TBoss8DragonFis(*(void **)((s8 *)arg0 + 0x3C), 1);
        *(s32 *)((s8 *)arg0 + 0x3C) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_802FE024 *TBoss8DragonEffBreath__ct(Obj_802FE024 *self, void *parent, void *p, void *v, s32 a, s16 b) {
    void *h;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = ((u8 *)&__vt__21TBoss8DragonEffBreath);
    *(s32 *)self = TBoss8DragonEffBreath__name;
    VecCopy__FP3VecPC3Vec(&self->pos, p);
    VecCopy__FP3VecPC3Vec(&self->vel, v);
    self->vel.x = self->vel.x * lbl_805DEEF8;
    self->vel.y = self->vel.y * lbl_805DEEF8;
    self->vel.z = self->vel.z * lbl_805DEEF8;
    self->a = a;
    self->b = b;
    h = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (h != NULL) {
        h = TBoss8Dragon__sub_800BC5EC(h, 4);
    }
    self->h = h;
    return self;
}

}
