#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
void *TBoss8Dragon__sub_800BC5EC(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__21TBoss1DragonEffBreath[];
extern s32 lbl_805D2668;
extern const f32 lbl_805D8138;
u8 *TBoss1DragonEffBreath__ct(u8 *arg0, void *arg1, void *arg2, void *arg3);
}

extern "C" {

void *__dt__21TBoss1DragonEffBreathFv(void *arg0, s16 arg1);
void render__21TBoss1DragonEffBreathFv(void);
void run_task__21TBoss1DragonEffBreathFv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80027710(int, void *, int);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
void TBoss8Dragon__sub_800BC5A0(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK get_instance__12TBoss1DragonFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

void render__21TBoss1DragonEffBreathFv(void) {  }

extern const f32 lbl_805D8130;
extern const f32 lbl_805D8134;

void run_task__21TBoss1DragonEffBreathFv(u8 *arg0) {
    f32 temp_f1;

    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
    if (temp_f1 < lbl_805D8130) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (temp_f1 < lbl_805D8134) {
        TBoss1Dragon__sub_80027710((int) get_instance__12TBoss1DragonFv(), (void *) (arg0 + 0x1C), (int) (M2C_FIELD(arg0, s32 *, 0x34)));
    }
}

extern M2C_UNK __vt__21TBoss1DragonEffBreath[];

void *__dt__21TBoss1DragonEffBreathFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TBoss1DragonEffBreath;
        TBoss8Dragon__sub_800BC5A0(M2C_FIELD(arg0, void **, 0x34), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0;
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TBoss1DragonEffBreath;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2668;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), arg2);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), arg3);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * lbl_805D8138);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * lbl_805D8138);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) * lbl_805D8138);
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != NULL) {
        p = TBoss8Dragon__sub_800BC5EC(p, 4);
    }
    M2C_FIELD(arg0, void **, 0x34) = p;
    return arg0;
}

}
