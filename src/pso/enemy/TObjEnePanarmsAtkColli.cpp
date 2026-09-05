#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_800E3428(void *);
M2C_UNK fn_800E35C8(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
void run_task__22TObjEnePanarmsAtkColliFv(u8 *arg0);
}

extern "C" {

void *__dt__22TObjEnePanarmsAtkColliFv(void *arg0, s16 arg1);
void * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TObjEnePanarmsAtkColli__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);

void run_task__22TObjEnePanarmsAtkColliFv(u8 *arg0) {
    s32 temp_r0_2;
    if (--M2C_FIELD(arg0, s32 *, 0x380) < 0) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    TBoss4Zako__sub_803D8910(arg0 + 0x38, arg0 + 0x308);
    M2C_FIELD(arg0, f32 *, 0x378) = (f32) (M2C_FIELD(arg0, f32 *, 0x378) + M2C_FIELD(arg0, f32 *, 0x37C));
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0_2) {
    case 0:
        fn_800E35C8(arg0);
        return;
    case 1:
        TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BA2A), arg0, arg0 + 0x38, 0, 0);
        fn_800E3428(arg0);
        return;
    }
}

void * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x390);
    if (o != NULL) {
        o = TObjEnePanarmsAtkColli__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

extern M2C_UNK __vt__22TObjEnePanarmsAtkColli[];

void *__dt__22TObjEnePanarmsAtkColliFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEnePanarmsAtkColli;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
