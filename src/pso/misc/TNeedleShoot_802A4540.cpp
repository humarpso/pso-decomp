#include "types.h"

#include <stddef.h>
#include "pso/misc/TNeedleShoot.h"
struct Stack_802A45D4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_802A45D4_lbl_80466678 {
    s32 value;
    u8 remaining[0xC];
};

struct Stack_802A4544 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

extern "C" {
s32 TObjRoomId__sub_80141CF4(void *, void *, int, int, int, void *, f32);
extern RecoveredGlobal_802A45D4_lbl_80466678 needle_shoot_color_white;
extern const f32 lbl_805DDF68;
s32 VecCopy__FP3VecPC3Vec(void *, int);
u8 *csnVector(f32 *, f32 *, s32);
void check_wall_hit__12TNeedleShootFPv(u8 *arg0);
}

extern "C" {

void vfunc_8__12TNeedleShootFv(void);

void TNeedleShoot::vfunc_8() {  }
typedef char RecoveredGlobal_802A45D4_lbl_80466678_size[sizeof(RecoveredGlobal_802A45D4_lbl_80466678) == 0x10 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
void check_wall_hit__12TNeedleShootFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_802A4544, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802A4544, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802A4544, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802A4544, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_802A4544, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_802A4544, sp1C) == 0x14) ? 1 : -1];
    Stack_802A4544 stack;
    u8 *temp_r3;
    stack.sp8 = *(f32 *)((s8 *)arg0 + 0x28);
    stack.spC = *(f32 *)((s8 *)arg0 + 0x2C);
    stack.sp10 = *(f32 *)((s8 *)arg0 + 0x30);
    stack.sp14 = *(f32 *)((s8 *)arg0 + 0x6C);
    stack.sp18 = *(f32 *)((s8 *)arg0 + 0x70);
    stack.sp1C = *(f32 *)((s8 *)arg0 + 0x74);
    temp_r3 = (u8 *)(csnVector(&stack.sp8, &stack.sp14, 0x100));
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x6C), (int) (*(s32 *)((s8 *)temp_r3 + 4)));
        ((TNeedleShoot *)(arg0))->vfunc_6();
    }
}
#pragma pop

void TNeedleShoot::render() {
    s32 arg0 = (s32)this;
    typedef char sp8_offset[(offsetof(Stack_802A45D4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802A45D4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802A45D4, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802A45D4, sp14) == 0xC) ? 1 : -1];
    Stack_802A45D4 stack;
    stack.sp8 = *(s32 *)((s8 *)(&needle_shoot_color_white.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&needle_shoot_color_white.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&needle_shoot_color_white.value) + 8);
    stack.sp14 = *(s32 *)((s8 *)(&needle_shoot_color_white.value) + 0xC);
    TObjRoomId__sub_80141CF4((void *) (arg0 + 0x6C), (void *) (&stack.sp8), (int) (*(s32 *)((s8 *)(&needle_shoot_color_white.value) + 8)), (int) (*(s32 *)((s8 *)(&needle_shoot_color_white.value) + 4)), (int) (*(s32 *)((s8 *)(&needle_shoot_color_white.value) + 0)), (void *) (&needle_shoot_color_white.value), (f32) (lbl_805DDF68));
}

}
