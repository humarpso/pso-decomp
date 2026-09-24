#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8034E440 { char pad[0x18]; };

struct VObj_8034E440 : Base_8034E440 {
    virtual void m0(int);
};

struct VBase_18_dac7f3 { char pad[0x18]; };

struct VObj_18_dac7f3 : VBase_18_dac7f3 {
    virtual M2C_UNK m0(M2C_UNK);
};

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

struct E_8034E02C { u8 flag; u8 pad[0x35]; };

extern "C" {
    extern int lbl_805D6EA0;
void TNpcPlayer__sub_8034E420(void);
extern int lbl_805D6EA0;
void TNpcPlayer__sub_8034E430(void);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 obj_isState3_324();
void enable_all_battle_ctrl__10TNpcPlayerFv(void);
void send_item_pickup_request__10TObjPlayerFi(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TNpcPlayer__sub_8034E4B0(u16 arg0);
M2C_UNK TObjPlayer__sub_801C5F54(s32, s32, f32, f32, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TTecLuker__sub_801BAB1C(s32, s32);
u16 get_action_flags__10TNpcPlayerFPv(s32);
s32 obj_getField1c(s32);
s32 obj_isState3_324();
void apply_to_players__10TNpcPlayerFiPvi(s32 arg0, void *arg1, s32 arg2);
void TNpcPlayer__sub_8034EA80(s16 arg0);
void TNpcPlayer__sub_8034EAC4(s16 arg0);
M2C_UNK TObjPlayer__sub_801C5F54(s32, s32, f32, f32, f32);
M2C_UNK notify_field1c__10TObjPlayerFi();
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TNpcPlayer__sub_8034EB08(s16 arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
void TObjPlayer__sub_801B1FA4(u16, s32, s32);
M2C_UNK TObjPlayer__sub_801C5F54(s32, s32, f32, f32, f32);
void TNpcPlayer__sub_8034EC40(s16 arg0, s16 arg1, u8 *arg2, s32 arg3);
extern int lbl_805D6EA0;
void TNpcPlayer__sub_8034EDB8(void);
M2C_UNK reset_lobby_model__10TObjPlayerFPv(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TNpcPlayer__sub_8034EE3C(u16 arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 set_type__10TObjPlayerFPvi(s32, s32);
void update_player_field__10TNpcPlayerFUsi(u16 arg0, s32 arg1);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK end_camera_pan__10TObjPlayerFPv();
void TNpcPlayer__sub_8034EEB4(u16 arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 init_photon_blast__10TObjPlayerFPvi(u32, s16);
void apply_to_battle_player_slot__10TNpcPlayerFUss(u16 arg0, s16 arg1);
s32 get_field_67c__10TNpcPlayerFPv(void* p);
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v);
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void byteswap_header__10TNpcPlayerFPv(void* p);
void byteswap_header__10TNpcPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
void send_state_60__10TNpcPlayerFPv(void* p);
void build_6x69_npc_control(void* p);
extern E_8034E02C lbl_804F0280[];
void TNpcPlayer__sub_8034E02C(void);
}

extern "C" {

void send_code_45_to_player__10TNpcPlayerFi(int arg0);
void play_effect__10TNpcPlayerFi(int arg0);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);

s32 obj_isState2_324();

void TNpcPlayer__sub_8034E02C(void) {
    s32 i;
    for (i = 0; i < 25; i++) {
        lbl_804F0280[i].flag = 0;
    }
}

void send_code_45_to_player__10TNpcPlayerFi(int arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        send_code_45_1__10TObjPlayerFi(temp_r3);
    }
}

s32 obj_isState2_324();

void play_effect__10TNpcPlayerFi(int arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
    }
}
void TNpcPlayer__sub_8034E420(void) { lbl_805D6EA0 = (lbl_805D6EA0 & 0xfffffffd); }
void TNpcPlayer__sub_8034E430(void) { lbl_805D6EA0 = (lbl_805D6EA0 | 0x2); }
void enable_all_battle_ctrl__10TNpcPlayerFv(void) {
    s32 var_r31;
    void *temp_r3;
    var_r31 = 0;
    do {
        temp_r3 = ((void *)TPlayerBattleCtrl4P__sub_801BA74C(var_r31));
        if ((temp_r3 != NULL) && (obj_isState3_324() != 0) && (temp_r3 != NULL)) {
            ((VObj_8034E440*)temp_r3)->m0(1);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}
void TNpcPlayer__sub_8034E4B0(u16 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)((void *)TPlayerBattleCtrl4P__sub_801BA74C((s32)((void *) (arg0)))));
    if (temp_r3 != 0) {
        send_item_pickup_request__10TObjPlayerFi(temp_r3);
        if ((u32) temp_r3 != 0U) {
            ((VObj_18_dac7f3 *)(temp_r3))->m0(1);
        }
    }
}
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
void TNpcPlayer__sub_8034EA80(s16 arg0) {
    Stack_8034EA80 stack;
    build_6x69_npc_control((void*)(&stack.sp8));
    stack.spC = arg0;
    stack.sp10 = 2;
    send_state_60__10TNpcPlayerFPv((void*)(&stack.sp8));
}
void TNpcPlayer__sub_8034EAC4(s16 arg0) {
    Stack_8034EAC4 stack;
    build_6x69_npc_control((void*)(&stack.sp8));
    stack.spC = arg0;
    stack.sp10 = 1;
    send_state_60__10TNpcPlayerFPv((void*)(&stack.sp8));
}
void TNpcPlayer__sub_8034EB08(s16 arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4) {
    Stack_8034EB08 stack;
    s32 var_r31;
    build_6x69_npc_control((void*)((void *) (&stack.sp8)));
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
    send_state_60__10TNpcPlayerFPv((void*)((void *) (&stack.sp8)));
}
void TNpcPlayer__sub_8034EC40(s16 arg0, s16 arg1, u8 *arg2, s32 arg3) {
    Stack_8034EC40 stack;
    build_6x69_npc_control((void*)(&stack.sp8));
    stack.spE = 0xFFFF;
    stack.spC = arg0;
    stack.sp10 = 0;
    stack.sp12 = arg1;
    stack.spE = 1;
    TObjPlayer__sub_801C5F54((s32)(1U), (s32)(arg3), M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 4), M2C_FIELD(arg2, f32 *, 8));
    send_state_60__10TNpcPlayerFPv((void*)(&stack.sp8));
    TObjPlayer__sub_801B1FA4(stack.spE, (s32) arg2, arg3);
}
void TNpcPlayer__sub_8034EDB8(void) { lbl_805D6EA0 = 0; }
void TNpcPlayer__sub_8034EE3C(u16 arg0) {
    u32 temp_r3;
    temp_r3 = ((u32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((u32)((void *) (arg0)))));
    if (temp_r3 != 0U) {
        reset_lobby_model__10TObjPlayerFPv((void *) (temp_r3 + 0x644));
    }
}
void update_player_field__10TNpcPlayerFUsi(u16 arg0, s32 arg1) {
    u32 temp_r3;
    temp_r3 = ((u32)TPlayerBattleCtrl4P__sub_801BA74C((s32)(arg0)));
    if (temp_r3 != 0U) {
        set_type__10TObjPlayerFPvi(temp_r3 + 0x644, arg1);
    }
}
void TNpcPlayer__sub_8034EEB4(u16 arg0) {
    if (((u32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((u32)((void *) (arg0))))) != 0U) {
        end_camera_pan__10TObjPlayerFPv();
    }
}
void apply_to_battle_player_slot__10TNpcPlayerFUss(u16 arg0, s16 arg1) {
    u32 temp_r3;
    if ((arg1 < 0x10) && ((temp_r3 = ((u32)TPlayerBattleCtrl4P__sub_801BA74C((s32)(arg0)))) != 0U)) {
        init_photon_blast__10TObjPlayerFPvi(temp_r3, arg1);
    }
}
s32 get_field_67c__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x67c); }
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x67c) = v; }
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x678) = v; }
void byteswap_header__10TNpcPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void send_state_60__10TNpcPlayerFPv(void* p) { byteswap_header__10TNpcPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void build_6x69_npc_control(void* p) { *(u8*)((char*)p + 0x0) = 105; *(u8*)((char*)p + 0x1) = 3; }

}
