#include "types.h"
#include "pso/boss/TBoss8Dragon_800BC53C.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss8DragonEffBreath.h"
#include "pso/boss/TBoss8Dragon.h"

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
void *alloc__23TAdSinglePlyChrSelectGCFv(int);
void *__ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__21TBoss8DragonEffBreath[];
extern s32 TBoss8DragonEffBreath__name;
extern const f32 lbl_805DEEF8;
Obj_802FE024 *TBoss8DragonEffBreath__ct(Obj_802FE024 *self, void *parent, void *p, void *v, s32 a, s16 b);
s32 vec3_add_to(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
u8 *get_enemy_entity(u16 arg0);
void queue_destruction__7TObjectFv(void *arg0);

void TBoss8DragonEffBreath::render() {  }

extern const f32 lbl_805DEEF0;
extern const f32 lbl_805DEEF4;

void TBoss8DragonEffBreath::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    u32 ent;

    vec3_add_to(arg0 + 0x1C, arg0 + 0x28);
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x20);
    if (temp_f1 < lbl_805DEEF0) {
        queue_destruction__7TObjectFv((arg0));
        return;
    }
    if ((temp_f1 < lbl_805DEEF4) && ((ent = (u32)get_enemy_entity((this->m_38))) != 0U)) {
        TBoss8Dragon::setup_breath_instance((void *)ent, (int)(arg0 + 0x1C), (u32)((int) (this->m_34)), (int)((int) (this->m_3c)));
    }
}

void *__dt__21TBoss8DragonEffBreathFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TBoss8DragonEffBreath;
        delete_buffer__12TBoss8DragonFis((s32)(*(void **)((s8 *)arg0 + 0x3C)), 1);
        ((TBoss8DragonEffBreath *)arg0)->m_3c = 0;
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
    VecCopy((Vec *)&self->pos, (const Vec *)p);
    VecCopy((Vec *)&self->vel, (const Vec *)v);
    self->vel.x = self->vel.x * lbl_805DEEF8;
    self->vel.y = self->vel.y * lbl_805DEEF8;
    self->vel.z = self->vel.z * lbl_805DEEF8;
    self->a = a;
    self->b = b;
    h = alloc__23TAdSinglePlyChrSelectGCFv(0x10);
    if (h != NULL) {
        h = TBoss8Dragon__sub_800BC5EC((u8 *)h, 4);
    }
    self->h = h;
    return self;
}

}
