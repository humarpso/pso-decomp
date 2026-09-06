#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_800E9238 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern const f32 lbl_805DA6FC;
void fn_800E9238(s32 arg0);
}

extern "C" {

void fn_800E9238(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_800E9238, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800E9238, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800E9238, sp10) == 0x8) ? 1 : -1];
    Stack_800E9238 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (arg0 + 0x374));
    stack.sp8 *= lbl_805DA6FC;
    stack.spC *= lbl_805DA6FC;
    stack.sp10 *= lbl_805DA6FC;
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x374), (void *) (&stack.sp8));
}

}
