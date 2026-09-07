#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80084C10 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_80084C10_lbl_804393AC {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
s32 TObjRoomId__sub_80141CF4(void *, void *, int, int, int, void *, f32);
extern RecoveredGlobal_80084C10_lbl_804393AC lbl_804393AC;
extern const f32 lbl_805D9450;
void TEffStarLight2D_Base__sub_80084C10(s32 arg0);
}

extern "C" {

void *TEffStarLight2D_Base__create(void *arg0);
void *__dt__20TEffStarLight2D_BaseFPvs(void *arg0, s16 arg1);
void *TEffStarLight2D_Base__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern void *tl_particle;

void *TEffStarLight2D_Base__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = TEffStarLight2D_Base__ct(o, tl_particle, arg0);
    }
    return o;
}

extern M2C_UNK lbl_8048E640[];

typedef char RecoveredGlobal_80084C10_lbl_804393AC_size[sizeof(RecoveredGlobal_80084C10_lbl_804393AC) == 0x14 ? 1 : -1];
void TEffStarLight2D_Base__sub_80084C10(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80084C10, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80084C10, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80084C10, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80084C10, sp14) == 0xC) ? 1 : -1];
    Stack_80084C10 stack;
    stack.sp8 = M2C_FIELD(&lbl_804393AC.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804393AC.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804393AC.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_804393AC.value, s32 *, 0xC);
    TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&stack.sp8), (int) (M2C_FIELD(&lbl_804393AC.value, s32 *, 8)), (int) (M2C_FIELD(&lbl_804393AC.value, s32 *, 4)), (int) (M2C_FIELD(&lbl_804393AC.value, s32 *, 0)), (void *) (&lbl_804393AC.value), (f32) (lbl_805D9450));
}

void *__dt__20TEffStarLight2D_BaseFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E640;
        if (M2C_FIELD(arg0, void **, 0x90) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x90)); M2C_FIELD(arg0, M2C_UNK *, 0x90) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
