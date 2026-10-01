#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80081CD0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80081CD0_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80081CD0_lbl_8058D490_size[sizeof(RecoveredGlobal_80081CD0_lbl_8058D490) == 0x30 ? 1 : -1];

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK queue_destruction__10TObjPlayerFPv(void *);
M2C_UNK fn_80081B7C(void *);
M2C_UNK TObjFish__sub_80081BB0(void *);
u32 TNpcPlayer__sub_800D87EC(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
void TObjPlayer__sub_80081DC8(void *arg0);
s32 TLobby__sub_800869A4(void *, int, int, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 TScene__sub_803D8DB4(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_80081CD0_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805D9378;
extern const f32 lbl_805D9388;
extern const f32 lbl_805D938C;
void TObjPlayer__sub_80081CD0(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80081CD0(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80081CD0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80081CD0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80081CD0, sp10) == 0x8) ? 1 : -1];
    Stack_80081CD0 stack;
    f32 temp_f0;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x1000);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg0, f32 *, 0x70) + lbl_805D9388);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0x6C) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0x68) = temp_f0;
    if (M2C_FIELD(arg0, f32 *, 0x338) < M2C_FIELD(arg0, f32 *, 0x68)) {
        M2C_FIELD(arg0, s32 *, 0x334) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x33C) = (s32) (M2C_FIELD(arg0, s32 *, 0x33C) + 1);
    if ((M2C_FIELD(arg0, s32 *, 0x33C) % 3) == 0) {
        stack.sp8 = lbl_805D9378;
        stack.spC = lbl_805D9378;
        stack.sp10 = lbl_805D938C * M2C_FIELD(arg0, f32 *, 0x68);
        TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60) * 2));
        TScene__sub_803D8DB4((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
        TObjPlayer__sub_803D9B78();
        TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        TLobby__sub_800869A4((void *) (&stack.sp8), (int) (0x12D), (int) (0), (int) (0xA));
    }
}

void TObjPlayer__sub_80081DC8(void *arg0) {
    s32 temp_r0;
    u32 var_r3;
    u16 id = M2C_FIELD(arg0, u16 *, 0x358);
    if ((id != 0xffffU) && (id < 0x4000U)) {
        var_r3 = TNpcPlayer__sub_800D87EC(id);
    } else {
        var_r3 = 0U;
    }
    if (var_r3 == 0U) {
        queue_destruction__7TObjectFv(arg0);
        disallow_rendering__7TObjectFv(arg0);
        return;
    }
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0) {
        disallow_rendering__7TObjectFv(arg0);
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x334);
    switch (temp_r0) {
    case 0:
        TObjPlayer__sub_80081CD0((u8 *)(arg0));
        return;
    case 1:
        TObjFish__sub_80081BB0(arg0);
        return;
    case 2:
        fn_80081B7C(arg0);
        return;
    case 3:
        queue_destruction__10TObjPlayerFPv(arg0);
        return;
    }
}

}
