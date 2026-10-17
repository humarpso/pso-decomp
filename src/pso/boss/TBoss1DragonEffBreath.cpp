#include "types.h"
#include "pso/boss/TBoss8Dragon_800BC53C.h"
#include "pso/boss/TBoss1DragonEffBreath.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss1DragonEffBreath.h"
#include "pso/boss/TBoss1Dragon.h"

extern "C" {
void *alloc__23TAdSinglePlyChrSelectGCFv(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__21TBoss1DragonEffBreath[];
extern s32 TBoss1DragonEffBreath__name;
extern const f32 lbl_805D8138;
u8 *__ct__21TBoss1DragonEffBreathFP7TObjectPvPv(u8 *arg0, void *arg1, void *arg2, void *arg3);
s32 vec3_add_to(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *arg0);

void TBoss1DragonEffBreath::render() {  }

extern const f32 lbl_805D8130;
extern const f32 lbl_805D8134;

void TBoss1DragonEffBreath::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;

    vec3_add_to(arg0 + 0x1C, arg0 + 0x28);
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x20);
    if (temp_f1 < lbl_805D8130) {
        queue_destruction__7TObjectFv((arg0));
        return;
    }
    if (temp_f1 < lbl_805D8134) {
        ((TBoss1Dragon *)((int) TBoss1Dragon::get_instance()))->deliver_breath_attack((s32)(arg0 + 0x1C), (s32)((int)this->m_34));
    }
}

void *__dt__21TBoss1DragonEffBreathFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TBoss1DragonEffBreath;
        delete_buffer__12TBoss8DragonFis((s32)(*(void **)((s8 *)arg0 + 0x34)), 1);
        ((TBoss1DragonEffBreath *)arg0)->m_34 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
}
TBoss1DragonEffBreath::TBoss1DragonEffBreath(TObject *arg1, void *arg2, void *arg3) : TObject(arg1) {
    void *p;
    *(s32 *)((s8 *)this + 0) = (s32) TBoss1DragonEffBreath__name;
    VecCopy((Vec *)(((u8 *)this) + 0x1C), (const Vec *)arg2);
    VecCopy((Vec *)(((u8 *)this) + 0x28), (const Vec *)arg3);
    *(f32 *)((s8 *)this + 0x28) = (f32) (*(f32 *)((s8 *)this + 0x28) * lbl_805D8138);
    *(f32 *)((s8 *)this + 0x2C) = (f32) (*(f32 *)((s8 *)this + 0x2C) * lbl_805D8138);
    this->m_30 = (f32) (this->m_30 * lbl_805D8138);
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x10);
    if (p != NULL) {
        p = TBoss8Dragon__sub_800BC5EC((u8 *)p, 4);
    }
    *(void **)((s8 *)this + 0x34) = p;
}
