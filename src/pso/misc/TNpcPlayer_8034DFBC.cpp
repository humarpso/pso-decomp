#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8034EA80 {
    M2C_UNK sp8;
    s16 spC;
    u8 pad_E[0x2];
    s16 sp10;
};

struct Stack_8034EAC4 {
    M2C_UNK sp8;
    s16 spC;
    u8 pad_E[0x2];
    s16 sp10;
};

struct Stack_8034EC40 {
    M2C_UNK sp8;
    s16 spC;
    u16 spE;
    s16 sp10;
    s16 sp12;
};

struct Stack_8034EB08 {
    M2C_UNK sp8;
    s16 spC;
    u16 spE;
    s16 sp10;
    s16 sp12;
};

extern "C" {
M2C_UNK send_state_60__10TNpcPlayerFPv(void *);
M2C_UNK build_6x69_npc_control(void *);
void TNpcPlayer__sub_8034EA80(s16 arg0);
M2C_UNK send_state_60__10TNpcPlayerFPv(void *);
M2C_UNK build_6x69_npc_control(void *);
void TNpcPlayer__sub_8034EAC4(s16 arg0);
void TObjPlayer__sub_801B1FA4(u16, s32, s32);
M2C_UNK TObjPlayer__sub_801C5F54(s32, s32, f32, f32, f32);
M2C_UNK send_state_60__10TNpcPlayerFPv(void *);
M2C_UNK build_6x69_npc_control(void *);
void TNpcPlayer__sub_8034EC40(s16 arg0, s16 arg1, u8 *arg2, s32 arg3);
M2C_UNK notify_field1c__10TObjPlayerFi();
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TObjPlayer__sub_801C5F54(s32, s32, f32, f32, f32);
M2C_UNK send_state_60__10TNpcPlayerFPv(void *);
M2C_UNK build_6x69_npc_control(void *);
void TNpcPlayer__sub_8034EB08(s16 arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
}

extern "C" {

void TNpcPlayer__sub_8034EDB8(void);
void apply_to_players__10TNpcPlayerFiPvi(s32 arg0, void *arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_801C5F54(s32, s32, f32, f32, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TTecLuker__sub_801BAB1C(s32, s32);
u16 get_action_flags__10TNpcPlayerFPv(s32);
s32 obj_getField1c(s32);
s32 obj_isState3_324();

void apply_to_players__10TNpcPlayerFiPvi(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r31;
    s32 temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if ((temp_r3 != 0) && (obj_isState3_324() != 0) && ((u16) get_action_flags__10TNpcPlayerFPv(temp_r3) != 0xFFFF)) {
            TObjPlayer__sub_801C5F54(obj_getField1c(temp_r3), arg2, M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8));
            TTecLuker__sub_801BAB1C(temp_r3, arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

    extern int lbl_805D6EA0;

void TNpcPlayer__sub_8034EA80(s16 arg0) {
    Stack_8034EA80 stack;
    build_6x69_npc_control(&stack.sp8);
    stack.spC = arg0;
    stack.sp10 = 2;
    send_state_60__10TNpcPlayerFPv(&stack.sp8);
}

void TNpcPlayer__sub_8034EAC4(s16 arg0) {
    Stack_8034EAC4 stack;
    build_6x69_npc_control(&stack.sp8);
    stack.spC = arg0;
    stack.sp10 = 1;
    send_state_60__10TNpcPlayerFPv(&stack.sp8);
}

void TNpcPlayer__sub_8034EB08(s16 arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4) {
    Stack_8034EB08 stack;
    s32 var_r31;
    build_6x69_npc_control((void *) (&stack.sp8));
    stack.spC = arg0;
    var_r31 = 0;
    stack.spE = 0xFFFF;
    stack.sp10 = 3;
    stack.sp12 = arg2;
loop_1:
    if (((u32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((int) (var_r31)))) != 0U) {
        notify_field1c__10TObjPlayerFi();
    } else {
        var_r31 += 1;
        if (var_r31 < 4) {
            goto loop_1;
        }
    }
    stack.spE = arg1;
    TObjPlayer__sub_801C5F54((s32)((void *) (arg1)), (s32)((void *) (arg4)), (f32) (M2C_FIELD(arg3, f32 *, 0)), (f32) (M2C_FIELD(arg3, f32 *, 4)), (f32) (M2C_FIELD(arg3, f32 *, 8)));
    send_state_60__10TNpcPlayerFPv((void *) (&stack.sp8));
}

void TNpcPlayer__sub_8034EC40(s16 arg0, s16 arg1, u8 *arg2, s32 arg3) {
    Stack_8034EC40 stack;
    build_6x69_npc_control(&stack.sp8);
    stack.spE = 0xFFFF;
    stack.spC = arg0;
    stack.sp10 = 0;
    stack.sp12 = arg1;
    stack.spE = 1;
    TObjPlayer__sub_801C5F54((s32)(1U), (s32)(arg3), M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 4), M2C_FIELD(arg2, f32 *, 8));
    send_state_60__10TNpcPlayerFPv(&stack.sp8);
    TObjPlayer__sub_801B1FA4(stack.spE, (s32) arg2, arg3);
}

void TNpcPlayer__sub_8034EDB8(void) { lbl_805D6EA0 = 0; }

}
