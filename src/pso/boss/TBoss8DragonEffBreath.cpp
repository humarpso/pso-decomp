#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
extern M2C_UNK __vt__21TBoss8DragonEffBreath[];
extern s32 lbl_805D4010;
extern const f32 lbl_805DEEF8;
Obj_802FE024 *TBoss8DragonEffBreath__ct(Obj_802FE024 *self, void *parent, void *p, void *v, s32 a, s16 b);
}

extern "C" {

void *__dt__21TBoss8DragonEffBreathFv(void *arg0, s16 arg1);
void render__21TBoss8DragonEffBreathFv(void);
void run_task__21TBoss8DragonEffBreathFv(u8 *arg0);
M2C_UNK vec3_add_to(void *, void *);
void delete_buffer__12TBoss8DragonFis(void *, int);
M2C_UNK TBoss8Dragon__sub_802FB290(u32, void *, int, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
u32 get_enemy_entity(int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void render__21TBoss8DragonEffBreathFv(void) {  }

extern const f32 lbl_805DEEF0;
extern const f32 lbl_805DEEF4;

void run_task__21TBoss8DragonEffBreathFv(u8 *arg0) {
    f32 temp_f1;
    u32 ent;

    vec3_add_to((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
    if (temp_f1 < lbl_805DEEF0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((temp_f1 < lbl_805DEEF4) && ((ent = get_enemy_entity((int) (M2C_FIELD(arg0, u16 *, 0x38)))) != 0U)) {
        TBoss8Dragon__sub_802FB290(ent, (void *) (arg0 + 0x1C), (int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0x3C)));
    }
}

extern M2C_UNK __vt__21TBoss8DragonEffBreath[];

void *__dt__21TBoss8DragonEffBreathFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TBoss8DragonEffBreath;
        delete_buffer__12TBoss8DragonFis(M2C_FIELD(arg0, void **, 0x3C), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0;
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
    *(s32 *)self = lbl_805D4010;
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
