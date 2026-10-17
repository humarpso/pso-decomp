#include "types.h"
#include "pso/system/vector.h"
#include "pso/player/TUnk_804CCC68.h"

#include <stddef.h>
#include <stddef.h>
#include "pso/misc/TTecGiZonde.h"
struct Stack_8023A510 {
    s32 sp8;
    s32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 sp1C;
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
s32 check_technique_projectile_wall_hit__13TUnk_804CCC68Fv(void *, f32, f32);
f32 fabs_float(f32);
s32 queue_destruction__7TObjectFv(void *);
u8 *csnVecterUnder(s32 *, s32);
u8 *csnVector(f32 *, f32 *, s32);
s32 angle_difference_abs(int, int);
void step_ground_technique_projectile(RecoveredFields_8023A510_arg0 *arg0);
}
void direction_to_rotation_xy(u8 *arg0, s32 *arg1, s32 *arg2);
extern const f32 lbl_805DC918;
extern const f32 lbl_805DC91C;
extern const f32 lbl_805DC920;
void move_ground_technique_projectile(void* p);

void TUnk_804CCC68::render() {  }
void TUnk_804CCC68::advance_lifetime_or_destroy() {
    f32 temp_f1;

    temp_f1 = this->traveled;
    if (temp_f1 > this->range) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    this->traveled = (f32) (temp_f1 + *(f32 *)((s8 *)this + 0x64));
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

void step_ground_technique_projectile(RecoveredFields_8023A510_arg0 *arg0) {
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
    VecCopy((Vec *)(((u8 *)arg0) + 0x78), (const Vec *)(((u8 *)arg0) + 0x20));
    arg0->field_20 = (f32) ((arg0->field_48 * arg0->field_64) + arg0->field_20);
    arg0->field_28 = (f32) ((arg0->field_50 * arg0->field_64) + arg0->field_28);
    VecCopy((Vec *)(&stack.sp1C), (const Vec *)(((u8 *)arg0) + 0x20));
    stack.sp20 += lbl_805DC918;
    temp_r3 = (u8 *)(csnVecterUnder(&stack.sp1C, 0x16EF));
    if (temp_r3 != NULL) {
        arg0->field_24 = (f32) (lbl_805DC91C + *(f32 *)((s8 *)(((RecoveredFields_8023A510_temp_r3 *)temp_r3)->field_4) + 4));
    }
    if (fabs_float(arg0->field_7C - arg0->field_24) > lbl_805DC920) {
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
        direction_to_rotation_xy((u8 *)&stack.sp10, &stack.spC, &stack.sp8);
        if (angle_difference_abs(0, stack.spC) >= 0x1555) {
            queue_destruction__7TObjectFv((void *)((void *) (((u8 *)arg0))));
        }
    }
}
#pragma pop

void move_ground_technique_projectile(void* p) { step_ground_technique_projectile((RecoveredFields_8023A510_arg0 *)(p)); }

#pragma push
#pragma fp_contract on
void TUnk_804CCC68::move_technique_projectile() {
    f32 temp_f1;
    f32 temp_f2;
    u8 *arg0 = (u8 *)this;
    VecCopy((Vec *)(arg0 + 0x78), (const Vec *)(arg0 + 0x20));
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) ((*(f32 *)((s8 *)arg0 + 0x48) * *(f32 *)((s8 *)arg0 + 0x64)) + *(f32 *)((s8 *)arg0 + 0x20));
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) ((*(f32 *)((s8 *)arg0 + 0x4C) * *(f32 *)((s8 *)arg0 + 0x64)) + *(f32 *)((s8 *)arg0 + 0x24));
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x50);
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x64);
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) ((temp_f2 * temp_f1) + *(f32 *)((s8 *)arg0 + 0x28));
    check_technique_projectile_wall_hit__13TUnk_804CCC68Fv(arg0, temp_f1, temp_f2);
}
#pragma pop

void TUnk_804CCC68::run_task() { move_technique_projectile(); this->advance_lifetime_or_destroy(); }
