#include "types.h"
#include "pso/boss/TBoss1DragonEffBreath.h"
#include "pso/boss/TBoss1Dragon.h"

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void *alloc__23TAdSinglePlyChrSelectGCFv(int);
void *TBoss8Dragon__sub_800BC5EC(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__21TBoss1DragonEffBreath[];
extern s32 TBoss1DragonEffBreath__name;
extern const f32 lbl_805D8138;
u8 *TBoss1DragonEffBreath__ct(u8 *arg0, void *arg1, void *arg2, void *arg3);
}

extern "C" {

void *__dt__21TBoss1DragonEffBreathFv(void *arg0, s16 arg1);
s32 deliver_breath_attack__12TBoss1DragonFPvii(int, void *, int);
s32 vec3_add_to(void *, void *);
void delete_buffer__12TBoss8DragonFis(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv(void *);

void TBoss1DragonEffBreath::render() {  }

extern const f32 lbl_805D8130;
extern const f32 lbl_805D8134;

void TBoss1DragonEffBreath::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;

    vec3_add_to((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x20);
    if (temp_f1 < lbl_805D8130) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (temp_f1 < lbl_805D8134) {
        deliver_breath_attack__12TBoss1DragonFPvii((int) TBoss1Dragon::get_instance(), (void *) (arg0 + 0x1C), (int) (*(s32 *)((s8 *)arg0 + 0x34)));
    }
}

extern s32 __vt__21TBoss1DragonEffBreath[];

void *__dt__21TBoss1DragonEffBreathFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TBoss1DragonEffBreath;
        delete_buffer__12TBoss8DragonFis(*(void **)((s8 *)arg0 + 0x34), 1);
        *(s32 *)((s8 *)arg0 + 0x34) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TBoss1DragonEffBreath__ct(u8 *arg0, void *arg1, void *arg2, void *arg3) {
    void *p;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TBoss1DragonEffBreath;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss1DragonEffBreath__name;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), arg2);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), arg3);
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) (*(f32 *)((s8 *)arg0 + 0x28) * lbl_805D8138);
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) (*(f32 *)((s8 *)arg0 + 0x2C) * lbl_805D8138);
    *(f32 *)((s8 *)arg0 + 0x30) = (f32) (*(f32 *)((s8 *)arg0 + 0x30) * lbl_805D8138);
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x10);
    if (p != NULL) {
        p = TBoss8Dragon__sub_800BC5EC(p, 4);
    }
    *(void **)((s8 *)arg0 + 0x34) = p;
    return arg0;
}

}
