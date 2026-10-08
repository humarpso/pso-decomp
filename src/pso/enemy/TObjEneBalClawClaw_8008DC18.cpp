#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_8008DC18 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_8008DC18_lbl_80439B5C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8008DC18_lbl_8048EEE0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

extern "C" {
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern RecoveredGlobal_8008DC18_lbl_80439B5C lbl_80439B5C;
extern RecoveredGlobal_8008DC18_lbl_8048EEE0 lbl_8048EEE0;
extern u8 *lbl_805D4F20;
extern const f32 lbl_805D9618;
void spawn_child_enemy__18TObjEneBalClawClawFv(void);
}

extern "C" {

void TObjEneBalClawClaw__sub_8008DC90(void);
void check_claw_distance__18TObjEneBalClawClawFi(s32 arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(s32, M2C_UNK);
f32 xz_distance_squared(s32, s32);

typedef char RecoveredGlobal_8008DC18_lbl_80439B5C_size[sizeof(RecoveredGlobal_8008DC18_lbl_80439B5C) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8008DC18_lbl_8048EEE0_size[sizeof(RecoveredGlobal_8008DC18_lbl_8048EEE0) == 0x2C ? 1 : -1];
void spawn_child_enemy__18TObjEneBalClawClawFv(void) {
    typedef char sp8_offset[(offsetof(Stack_8008DC18, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8008DC18, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8008DC18, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8008DC18, sp14) == 0xC) ? 1 : -1];
    Stack_8008DC18 stack;
    u8 *temp_r5;
    stack.sp8 = M2C_FIELD(&lbl_80439B5C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80439B5C.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80439B5C.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_80439B5C.value, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(lbl_805D4F20, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(lbl_805D4F20, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0x13), (int) (M2C_FIELD(temp_r5, s32 *, 0x18)), (int) (M2C_FIELD(temp_r5, s32 *, 0x1C)), (void *) (&stack.sp8), (f32) (M2C_FIELD(&lbl_8048EEE0.value, f32 *, 0xC)), (f32) (lbl_805D9618));
}

void TObjEneBalClawClaw__sub_8008DC90(void) {  }

extern f32 lbl_805D961C;

void check_claw_distance__18TObjEneBalClawClawFi(s32 arg0) {
    if (xz_distance_squared(arg0 + 0x38, arg0 + 0x50) > lbl_805D961C) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 8);
        return;
    }
    update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
}

}
