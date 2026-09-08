#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80238388 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
};

struct RecoveredGlobal_80238388_lbl_8044DAF0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 TTecRaFoie__sub_80082688(void *, void *, f32);
s32 fn_80082764(void *, void *, f32);
extern RecoveredGlobal_80238388_lbl_8044DAF0 lbl_8044DAF0;
extern const f32 TTecRaFoie__data_805DC8CC;
extern const f32 lbl_805DC8D8;
extern const f32 lbl_805DC8DC;
extern const f32 lbl_805DC8E0;
void TTecRaFoie__sub_80238388(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80238388_lbl_8044DAF0_size[sizeof(RecoveredGlobal_80238388_lbl_8044DAF0) == 0x10 ? 1 : -1];
void TTecRaFoie__sub_80238388(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80238388, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80238388, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80238388, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80238388, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80238388, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80238388, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80238388, sp20) == 0x18) ? 1 : -1];
    Stack_80238388 stack;
    f32 temp_f1;
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) >= 0x10) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x58) > 0x6E) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    stack.sp8 = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 0xC);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x40);
    stack.sp18 = temp_f1;
    stack.sp1C = temp_f1;
    stack.sp20 = temp_f1;
    if (M2C_FIELD(arg0, f32 *, 0x34) >= (temp_f1 - TTecRaFoie__data_805DC8CC)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) != 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = 0;
        }
        TTecRaFoie__sub_80082688((void *) (arg0 + 0x34), (void *) (&stack.sp18), (f32) (lbl_805DC8D8));
    } else {
        TTecRaFoie__sub_80082688((void *) (arg0 + 0x34), (void *) (&stack.sp18), (f32) (lbl_805DC8DC));
    }
    fn_80082764((void *) (arg0 + 0x48), (void *) (&stack.sp8), (f32) (lbl_805DC8E0));
}
#pragma pop

}
