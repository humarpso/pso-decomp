#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D4C24;
void TLobby__sub_801EA240(s32 arg0);
s32 is_split_screen();
s32 get_state__6TLobbyFv();
s32 get_normalized_mode__6TLobbyFv();
void TLobby__sub_801EA690(s32 arg0);
M2C_UNK send_code50_packet__10TObjPlayerFi(int);
M2C_UNK send_code_49_1__10TObjPlayerFi();
s32 TPlayerBattleCtrl4P__sub_801BA74C(int, void *);
void TLobby__sub_801EA7A0(s32 arg0);
s32 is_split_screen();
s32 check_ready_state__6TLobbyFv();
s32 check_ready_status__6TLobbyFv();
void TLobby__sub_801EA84C(s32 arg0);
void TLobby__sub_801EA9F4(s32 arg0, s32 arg1);
void TLobby__sub_801EAA14(s32 arg0, s32 arg1);
s32 is_split_screen();
s32 TLobby__sub_80070DCC();
s32 TLobby__sub_8029204C();
void TLobby__sub_801EB048(s32 arg0);
s32 is_split_screen();
M2C_UNK TLobby__sub_80070EE4(int);
M2C_UNK TLobby__sub_80292200(int);
void TLobby__sub_801EB0A0(s32 arg0);
void TLobby__sub_801EB0F8(s32 arg0);
}

extern "C" {

void TLobby__sub_801EA8E8(void);
void apply_split_screen__6TLobbyFv(void);
void draw_or_send__6TLobbyFv(void);
void get_or_create_handle__6TLobbyFv(void);
void handle_split_screen__6TLobbyFv(void);
s32 init_guild_card_tag__6TLobbyFi(s32 arg0);
void set_handler__6TLobbyFi(int a0);
M2C_UNK TLobby__sub_80070BE8(M2C_UNK);
M2C_UNK TLobby__sub_80070C50();
M2C_UNK TLobby__sub_801036CC();
M2C_UNK TLobby__sub_802089B0();
M2C_UNK TLobby__sub_8020DBCC();
M2C_UNK TLobby__sub_80291EAC(M2C_UNK);
M2C_UNK TLobby__sub_80291FC0();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022945C();
M2C_UNK __ct__16TPlyGuildCardTagFv(s32);
M2C_UNK clear_buffer__12TQuestThreadFPv(u32);
M2C_UNK draw_if_ready2__6TLobbyFv();
M2C_UNK draw_if_ready__6TLobbyFv();
M2C_UNK fn_801F57B4(s32);
int get_game_mode__6TLobbyFv(void);
u32 get_serial_access__22TQuestVmDownLoadServerFPv();
M2C_UNK init_sub_objects__6TLobbyFv();
s32 is_split_screen();
u32 poll_serial_access__22TQuestVmDownLoadServerFPv();

    extern int* TLobby__data_805D5E78;
void set_handler__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = get_game_mode__6TLobbyFv(); }

extern u32 TLobby__data_805D5EC4;

void TLobby__sub_801EA240(s32 arg0) {
    if ((s32) lbl_805D4C24 != 0) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void get_or_create_handle__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = get_serial_access__22TQuestVmDownLoadServerFPv();
    TLobby__data_805D5EC4 = temp_r3;
    if (temp_r3 == 0U) {
        TLobby__data_805D5EC4 = poll_serial_access__22TQuestVmDownLoadServerFPv();
    }
}

void TLobby__sub_801EA690(s32 arg0) {
    if (is_split_screen() == 1) {
        if (get_normalized_mode__6TLobbyFv() != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    if (get_state__6TLobbyFv() != 0) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void handle_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291EAC(0);
        return;
    }
    TLobby__sub_80070BE8(0);
}

void apply_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291EAC(1);
        return;
    }
    TLobby__sub_80070BE8(1);
}

void TLobby__sub_801EA7A0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__data_805D5E78)));
    if (temp_r3 != 0) {
        send_code_49_1__10TObjPlayerFi();
        send_code50_packet__10TObjPlayerFi((int) (temp_r3));
    }
}

void draw_or_send__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        draw_if_ready2__6TLobbyFv();
        return;
    }
    draw_if_ready__6TLobbyFv();
}

extern u32 lbl_805D5EE8;
extern s32 tl_00;

void TLobby__sub_801EA84C(s32 arg0) {
    s32 var_r3;
    if (is_split_screen() == 1) {
        var_r3 = check_ready_status__6TLobbyFv();
    } else {
        var_r3 = check_ready_state__6TLobbyFv();
    }
    switch (var_r3) {
    case -1:
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    case 0:
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    case 1:
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 2;
        return;
    }
}

void TLobby__sub_801EA8E8(void) {
    TLobby__sub_801036CC();
    if ((u32) lbl_805D5EE8 != 0U) {
        clear_buffer__12TQuestThreadFPv(lbl_805D5EE8);
    }
    fn_801F57B4(tl_00);
    init_sub_objects__6TLobbyFv();
    TLobby__sub_8020DBCC();
    TLobby__sub_802089B0();
    TSwitch__sub_8022945C();
    TRaderMapCore__sub_801F9540();
    if (is_split_screen() == 1) {
        TLobby__sub_80291FC0();
        return;
    }
    TLobby__sub_80070C50();
}

void TLobby__sub_801EA9F4(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) >> M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void TLobby__sub_801EAA14(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) << M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void TLobby__sub_801EB048(s32 arg0) {
    if (is_split_screen() == 1) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_8029204C();
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80070DCC();
}

void TLobby__sub_801EB0A0(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_80292200((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80070EE4((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}

void TLobby__sub_801EB0F8(s32 arg0) {
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 3;
}

s32 init_guild_card_tag__6TLobbyFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}

}
