#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
#include <stddef.h>
struct Stack_8023A510 {
    M2C_UNK sp8;
    s32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    M2C_UNK sp1C;
    f32 sp20;
    u8 pad_24[0x4];
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
};

struct RecoveredFields_8023A510_arg0 {
    u8 unknown_0[0x20];
    f32 field_20;
    f32 field_24;
    f32 field_28;
    u8 unknown_2C[0x1C];
    f32 field_48;
    u8 unknown_4C[0x4];
    f32 field_50;
    u8 unknown_54[0x10];
    f32 field_64;
    u8 unknown_68[0x10];
    f32 field_78;
    f32 field_7C;
    f32 field_80;
};

struct RecoveredFields_8023A510_temp_r3 {
    u8 unknown_0[0x4];
    u8 * field_4;
};

struct RecoveredFields_8023A510_temp_r3_2 {
    u8 unknown_0[0x4];
    u8 * field_4;
};

struct RecoveredFields_8023A510_temp_r6 {
    u8 unknown_0[0xC];
    f32 field_C;
    f32 field_10;
    f32 field_14;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_8023A434(void *, f32, f32);
void move_technique_projectile(u8 *arg0);
f32 get_random_float__8TObjFishFv(f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
u8 *csnVecterUnder(M2C_UNK *, s32);
u8 *csnVector(f32 *, f32 *, s32);
s32 angle_difference_abs(int, int);
s32 TObjPlayer__sub_801422A8(void *, void *, void *);
extern const f32 lbl_805DC918;
extern const f32 lbl_805DC91C;
extern const f32 lbl_805DC920;
void TObjPlayer__sub_8023A510(RecoveredFields_8023A510_arg0 *arg0);
}

extern "C" {

void TObjPlayer__sub_8023A70C(void* p);
void TTecBarta__sub_8023A674(void* p);
void advance_lifetime_or_destroy(void *arg0);
void render__11TTecGiZondeFv(void);

void render__11TTecGiZondeFv(void) {  }
void advance_lifetime_or_destroy(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x74);
    if (temp_f1 > M2C_FIELD(arg0, f32 *, 0x70)) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x64));
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char RecoveredFields_8023A510_arg0_20_offset[offsetof(RecoveredFields_8023A510_arg0, field_20) == 0x20 ? 1 : -1];
typedef char RecoveredFields_8023A510_arg0_24_offset[offsetof(RecoveredFields_8023A510_arg0, field_24) == 0x24 ? 1 : -1];
typedef char RecoveredFields_8023A510_arg0_28_offset[offsetof(RecoveredFields_8023A510_arg0, field_28) == 0x28 ? 1 : -1];
typedef char RecoveredFields_8023A510_arg0_48_offset[offsetof(RecoveredFields_8023A510_arg0, field_48) == 0x48 ? 1 : -1];
typedef char RecoveredFields_8023A510_arg0_50_offset[offsetof(RecoveredFields_8023A510_arg0, field_50) == 0x50 ? 1 : -1];
typedef char RecoveredFields_8023A510_arg0_64_offset[offsetof(RecoveredFields_8023A510_arg0, field_64) == 0x64 ? 1 : -1];
typedef char RecoveredFields_8023A510_arg0_78_offset[offsetof(RecoveredFields_8023A510_arg0, field_78) == 0x78 ? 1 : -1];
typedef char RecoveredFields_8023A510_arg0_7C_offset[offsetof(RecoveredFields_8023A510_arg0, field_7C) == 0x7C ? 1 : -1];
typedef char RecoveredFields_8023A510_arg0_80_offset[offsetof(RecoveredFields_8023A510_arg0, field_80) == 0x80 ? 1 : -1];
typedef char RecoveredFields_8023A510_temp_r3_4_offset[offsetof(RecoveredFields_8023A510_temp_r3, field_4) == 0x4 ? 1 : -1];
typedef char RecoveredFields_8023A510_temp_r3_2_4_offset[offsetof(RecoveredFields_8023A510_temp_r3_2, field_4) == 0x4 ? 1 : -1];
typedef char RecoveredFields_8023A510_temp_r6_C_offset[offsetof(RecoveredFields_8023A510_temp_r6, field_C) == 0xC ? 1 : -1];
typedef char RecoveredFields_8023A510_temp_r6_10_offset[offsetof(RecoveredFields_8023A510_temp_r6, field_10) == 0x10 ? 1 : -1];
typedef char RecoveredFields_8023A510_temp_r6_14_offset[offsetof(RecoveredFields_8023A510_temp_r6, field_14) == 0x14 ? 1 : -1];
void TObjPlayer__sub_8023A510(RecoveredFields_8023A510_arg0 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8023A510, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8023A510, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8023A510, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8023A510, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8023A510, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8023A510, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_8023A510, sp20) == 0x18) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_8023A510, sp28) == 0x20) ? 1 : -1];
    typedef char sp2C_offset[(offsetof(Stack_8023A510, sp2C) == 0x24) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_8023A510, sp30) == 0x28) ? 1 : -1];
    typedef char sp34_offset[(offsetof(Stack_8023A510, sp34) == 0x2C) ? 1 : -1];
    typedef char sp38_offset[(offsetof(Stack_8023A510, sp38) == 0x30) ? 1 : -1];
    typedef char sp3C_offset[(offsetof(Stack_8023A510, sp3C) == 0x34) ? 1 : -1];
    Stack_8023A510 stack;
    f32 temp_f1;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r6;
    VecCopy__FP3VecPC3Vec((void *) (((u8 *)arg0) + 0x78), (void *) (((u8 *)arg0) + 0x20));
    arg0->field_20 = (f32) ((arg0->field_48 * arg0->field_64) + arg0->field_20);
    arg0->field_28 = (f32) ((arg0->field_50 * arg0->field_64) + arg0->field_28);
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp1C), (void *) (((u8 *)arg0) + 0x20));
    stack.sp20 += lbl_805DC918;
    temp_r3 = (u8 *)(csnVecterUnder(&stack.sp1C, 0x16EF));
    if (temp_r3 != NULL) {
        arg0->field_24 = (f32) (lbl_805DC91C + M2C_FIELD(((RecoveredFields_8023A510_temp_r3 *)temp_r3)->field_4, f32 *, 4));
    }
    if (get_random_float__8TObjFishFv(arg0->field_7C - arg0->field_24) > lbl_805DC920) {
        arg0->field_24 = (f32) arg0->field_7C;
        queue_destruction__7TObjectFv((void *)((void *) (((u8 *)arg0))));
        return;
    }
    stack.sp28 = arg0->field_78;
    temp_f1 = lbl_805DC91C + arg0->field_7C;
    stack.sp2C = temp_f1;
    stack.sp30 = arg0->field_80;
    stack.sp34 = arg0->field_20;
    stack.sp38 = temp_f1;
    stack.sp3C = arg0->field_28;
    temp_r3_2 = (u8 *)(csnVector(&stack.sp28, &stack.sp34, 0x100));
    if (temp_r3_2 != NULL) {
        temp_r6 = (u8 *)(((RecoveredFields_8023A510_temp_r3_2 *)temp_r3_2)->field_4);
        stack.sp10 = ((RecoveredFields_8023A510_temp_r6 *)temp_r6)->field_C;
        stack.sp14 = ((RecoveredFields_8023A510_temp_r6 *)temp_r6)->field_10;
        stack.sp18 = ((RecoveredFields_8023A510_temp_r6 *)temp_r6)->field_14;
        TObjPlayer__sub_801422A8((void *) (&stack.sp10), (void *) (&stack.spC), (void *) (&stack.sp8));
        if (angle_difference_abs((int) (0), (int) (stack.spC)) >= 0x1555) {
            queue_destruction__7TObjectFv((void *)((void *) (((u8 *)arg0))));
        }
    }
}
#pragma pop

void TTecBarta__sub_8023A674(void* p) { TObjPlayer__sub_8023A510((RecoveredFields_8023A510_arg0 *)(p)); }

#pragma push
#pragma fp_contract on
void move_technique_projectile(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x78), (void *) (arg0 + 0x20));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((M2C_FIELD(arg0, f32 *, 0x48) * M2C_FIELD(arg0, f32 *, 0x64)) + M2C_FIELD(arg0, f32 *, 0x20));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((M2C_FIELD(arg0, f32 *, 0x4C) * M2C_FIELD(arg0, f32 *, 0x64)) + M2C_FIELD(arg0, f32 *, 0x24));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x50);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((temp_f2 * temp_f1) + M2C_FIELD(arg0, f32 *, 0x28));
    fn_8023A434((void *) (arg0), (f32) (temp_f1), (f32) (temp_f2));
}
#pragma pop

void TObjPlayer__sub_8023A70C(void* p) { move_technique_projectile((u8 *)((void*)(p))); advance_lifetime_or_destroy((void *)(p)); }

}
