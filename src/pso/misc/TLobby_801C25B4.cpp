#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_801C3CFC {
    M2C_UNK sp8;
    s8 spC;
    s8 spD;
    u8 pad_E[0x2];
    s32 sp10;
    s32 sp14;
};

extern "C" {
void handle_6x7E(void);
extern void *TLobby__data_805D5D98;
void TLobby__sub_801C38A4(void);
int TLobby__sub_801B09A4(void);
int inc_player_count__10TObjPlayerFv(void);
    extern int lbl_805D5DB4;
void init_and_set_flag__6TLobbyFv(void);
u32 TPlayerBattleCtrl__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
void strncpy(void *, void *, int);
extern void *TLobby__data_805D5D98;
extern s32 TLobby__data_805D5DA0;
extern s32 tl_00;
void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK send_set_battle_mode_data__6TLobbyFPv(void *);
M2C_UNK build_6x7D_set_battle_mode_data(void *);
void TLobby__sub_801C3CFC(s8 arg0, s32 arg1, s32 arg2);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK send_code_45_1__10TObjPlayerFi();
extern s32 lbl_805D53A0;
void handle_battle_result__6TLobbyFii(int arg0, s32 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK TWindowCtrl__sub_8024AEAC(s32);
M2C_UNK fn_8024ACEC(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, M2C_UNK);
extern s32 lbl_805D53A0;
M2C_UNK request_active_window_close();
void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1);
extern s32 TLobby__data_805D5DA0;
s32 TLobby__sub_801C417C(void);
}

extern "C" {

void TLobby__sub_801C36E4(void *arg0, void *arg1);
s32 assign_player_id__6TLobbyFv(void);
void *deleting_dtor__6TLobbyFPvs(void *arg0, s16 arg1);
void handle_6x7F_battle_scores(s32 arg0);
void *init_with_name__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void release_ref__6TLobbyFPv(u8 *arg0);
void send_neg50__6TLobbyFPvPv(void* p, void* a1);
int TLobby__sub_8022727C(void*);
M2C_UNK TObjBgmColCtrl__sub_802274B8(void *);
s32 TObjPlayer__sub_801AFFD0();
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK bswap_packet_header__6TLobbyFPv();
int fn_801C23A8(void*, void*);
M2C_UNK memcpy(M2C_UNK *, s32, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_battle_mode__19TPlayerBattleCtrl4PFPvi(s32, s32);
void strncpy(void *, void *, int);
s32 update_battle_controller__10TObjPlayerFv();

void release_ref__6TLobbyFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 <= 0) {
        TObjBgmColCtrl__sub_802274B8(arg0 + 0x20);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK lbl_804C3E88[];

void *deleting_dtor__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3E88;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804C3E88[];

void *init_with_name__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3E88;
    M2C_FIELD(arg0, void **, 0x1C) = arg3;
    strncpy((void *)((char *)arg0 + 32), arg2, 32);
    return arg0;
}

s32 assign_player_id__6TLobbyFv(void) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3_2 = update_battle_controller__10TObjPlayerFv();
    if (temp_r3_2 == 0) {
        return 0;
    }
    temp_r3 = TObjPlayer__sub_801AFFD0();
    set_battle_mode__19TPlayerBattleCtrl4PFPvi(temp_r3_2 + 0x7AC, temp_r3);
    return temp_r3;
}

void send_neg50__6TLobbyFPvPv(void* p, void* a1) { TLobby__sub_8022727C(p); fn_801C23A8((void*)-50, a1); }

void TLobby__sub_801C36E4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

extern M2C_UNK TLobby__data_80511C80[];
extern s32 lbl_805D5DAC;

void handle_6x7F_battle_scores(s32 arg0) {
    bswap_packet_header__6TLobbyFPv();
    memcpy(TLobby__data_80511C80, arg0 + 4, 0x20);
    lbl_805D5DAC = 1;
}
void handle_6x7E(void) {  }
void TLobby__sub_801C38A4(void) {
    if ((void *) TLobby__data_805D5D98 != NULL) {
        M2C_FIELD(TLobby__data_805D5D98, s32 *, 0x24) = 0;
    }
}
void init_and_set_flag__6TLobbyFv(void) { TLobby__sub_801B09A4(); inc_player_count__10TObjPlayerFv(); lbl_805D5DB4 = 1; }
void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 var_r3;
    if ((u32) (*(u32 *)&TLobby__data_805D5D98) == 0U) {
        var_r3 = __nw__7TObjectFUl(0x278);
        if (var_r3 != 0U) {
            var_r3 = TPlayerBattleCtrl__ct(var_r3, tl_00);
        }
        (*(u32 *)&TLobby__data_805D5D98) = var_r3;
    }
    if ((u32) (*(u32 *)&TLobby__data_805D5D98) != 0U) {
        strncpy((void *)((*(u32 *)&TLobby__data_805D5D98) + 0x68), (void *)(arg1), (int)(0x200));
        TLobby__data_805D5DA0 = arg0;
    }
}
void TLobby__sub_801C3CFC(s8 arg0, s32 arg1, s32 arg2) {
    Stack_801C3CFC stack;
    build_6x7D_set_battle_mode_data(&stack.sp8);
    stack.spD = arg0;
    stack.spC = 0;
    stack.sp10 = arg1;
    stack.sp14 = arg2;
    send_set_battle_mode_data__6TLobbyFPv(&stack.sp8);
}
void handle_battle_result__6TLobbyFii(int arg0, s32 arg1) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        send_code_45_1__10TObjPlayerFi();
    }
    if (arg1 != 0) {
        TWindowChat__sub_8024AD30(lbl_805D53A0);
        clear_flag__11TWindowCtrlFv();
        TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
    }
}
void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        play_effect_default__10TObjPlayerFii(temp, -1);
    }
    if (arg1 != 0) {
        fn_8024ACEC(lbl_805D53A0);
        request_active_window_close();
        TWindowCtrl__sub_8024AEAC(lbl_805D53A0);
    }
}
s32 TLobby__sub_801C417C(void) {
    return M2C_FIELD((*(void * *)&TLobby__data_805D5DA0), s32 *, 0x24) * 0x3C;
}

}
