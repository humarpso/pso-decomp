#include "types.h"

#include <stddef.h>
#include "pso/enemy/TObjEneBalClawClaw.h"
struct Stack_8008DC18 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_8008DC18_lbl_80439B5C {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8008DC18_lbl_8048EEE0 {
    s32 value;
    u8 remaining[0x28];
};

extern "C" {
s32 spawn_npc_enemy__6TLobbyFslllff(int, int, int, void *, f32, f32);
extern RecoveredGlobal_8008DC18_lbl_80439B5C lbl_80439B5C;
extern RecoveredGlobal_8008DC18_lbl_8048EEE0 lbl_8048EEE0;
extern u8 *lbl_805D4F20;
extern const f32 lbl_805D9618;
}

extern "C" {

void TObjEneBalClawClaw__sub_8008DC90(void);
s32 update_if_active__15TObjEneMe1GiGueFl(s32, s32);
f32 xz_distance_squared(s32, s32);

typedef char RecoveredGlobal_8008DC18_lbl_80439B5C_size[sizeof(RecoveredGlobal_8008DC18_lbl_80439B5C) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8008DC18_lbl_8048EEE0_size[sizeof(RecoveredGlobal_8008DC18_lbl_8048EEE0) == 0x2C ? 1 : -1];
void TObjEneBalClawClaw::spawn_child_enemy() {
    typedef char sp8_offset[(offsetof(Stack_8008DC18, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8008DC18, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8008DC18, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8008DC18, sp14) == 0xC) ? 1 : -1];
    Stack_8008DC18 stack;
    u8 *temp_r5;
    stack.sp8 = *(s32 *)((s8 *)(&lbl_80439B5C.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_80439B5C.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_80439B5C.value) + 8);
    stack.sp14 = *(s32 *)((s8 *)(&lbl_80439B5C.value) + 0xC);
    stack.sp8 = *(s32 *)((s8 *)lbl_805D4F20 + 0x430);
    temp_r5 = (u8 *)(*(u8 **)((s8 *)lbl_805D4F20 + 0x42C));
    spawn_npc_enemy__6TLobbyFslllff((int) (0x13), (int) (*(s32 *)((s8 *)temp_r5 + 0x18)), (int) (*(s32 *)((s8 *)temp_r5 + 0x1C)), (void *) (&stack.sp8), (f32) (*(f32 *)((s8 *)(&lbl_8048EEE0.value) + 0xC)), (f32) (lbl_805D9618));
}

void TObjEneBalClawClaw__sub_8008DC90(void) {  }

extern f32 lbl_805D961C;

void TObjEneBalClawClaw::check_claw_distance() {
    s32 arg0 = (s32)this;
    if (xz_distance_squared(arg0 + 0x38, arg0 + 0x50) > lbl_805D961C) {
        update_if_active__15TObjEneMe1GiGueFl(arg0, 8);
        return;
    }
    update_if_active__15TObjEneMe1GiGueFl(arg0, 0);
}

}
