#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK init_player_window_effect__6TLobbyFv();
void TLobby__sub_80139894(s32 arg0);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80244888(s32);
int sprintf(char *, const char *, ...);
extern char lbl_80509D3C[];
extern char lbl_8050AC38[];
extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B4;
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D55D8;
extern s32 TLobby__data_805D55FC;
extern u32 TLobby__data_805D5604;
void TLobby__sub_801384E4(void);
}

extern "C" {

void close_and_set_state_13__6TLobbyFv(void);
void create_warp_menu__6TLobbyFv(void);
void open_lobby_warp_menu__6TLobbyFv(void);
void reset_state__6TLobbyFv(void);
void update_state__6TLobbyFv(void);
M2C_UNK TLobby__sub_801397E8();
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80244888(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK init_player_window_effect__6TLobbyFv();
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);

extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void create_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv(lbl_805D55E0);
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xB5);
    lbl_805D55E4 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x39), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x3A), 6, 1);
    TWindowSubComCard__sub_80265F60(lbl_805D55E4);
    TWindowSubComCard__sub_80265C30(lbl_805D55E4);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E4);
    TLobby__data_805D5594 = 4;
}

extern s32 TLobby__data_805D5594;

void close_and_set_state_13__6TLobbyFv(void) {
    TLobby__sub_801397E8();
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D5594 = 0xD;
}

extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B4;
extern s32 lbl_805D55C0;

void reset_state__6TLobbyFv(void) {
    TLobby__sub_801397E8();
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D55B4 = 0;
    TLobby__data_805D5594 = 0xC;
    lbl_805D55C0 = 1;
}

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B4;
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D55D8;
extern s32 TLobby__data_805D55FC;
extern u32 TLobby__data_805D5604;

void update_state__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D5604 != 0U) {
        if ((s32) TLobby__data_805D55FC == 0) {
            if ((s32) TLobby__data_805D5594 != 0xC) {
                TLobby__sub_8013990C(0x21);
                TWindowSubComCard__sub_80244888(TLobby__data_805D55D8);
                init_player_window_effect__6TLobbyFv();
                TLobby__data_805D55B4 = 0;
                TLobby__data_805D5594 = 0xC;
                if ((void *) TLobby__data_805D5580 != NULL) {
                    M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) = (u8) (M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) | 1);
                }
            }
        } else {
            TLobby__data_805D5590 = 5;
            TLobby__data_805D5594 = 0x17;
        }
        lbl_805D55C0 = 1;
    }
}

extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B0;
extern s32 lbl_805D55E0;

void TLobby__sub_801384E4(void) {
    if ((u32) TLobby__data_805D5604 != 0U) {
        if ((s32) TLobby__data_805D55FC == 0) {
            if ((s32) TLobby__data_805D5594 != 0xC) {
                sprintf(lbl_8050AC38, (const char *)get_seq_phase__6TLobbyFPv(7), lbl_80509D3C);
                TLobby__sub_80139894((s32)lbl_8050AC38);
                TWindowSubComCard__sub_80244888(TLobby__data_805D55D8);
                init_player_window_effect__6TLobbyFv();
                TLobby__data_805D55B4 = 0;
                TLobby__data_805D5594 = 0xC;
                if ((void *) TLobby__data_805D5580 != NULL) {
                    M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) = (u8) (M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) | 1);
                }
            }
        } else {
            TLobby__data_805D5590 = 5;
            TLobby__data_805D5594 = 0x17;
        }
        lbl_805D55C0 = 1;
    }
}

void open_lobby_warp_menu__6TLobbyFv(void) {
    M2C_UNK temp_r3;
    TLobby__sub_8013990C(3);
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xB4);
    if ((s32) TLobby__data_805D55B0 < 0xD) {
        lbl_805D55E0 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x35), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x36), 6, 1);
    } else {
        lbl_805D55E0 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 3);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x35), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x36), 6, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x47), 6, 3);
    }
    TWindowSubComCard__sub_80265F60(lbl_805D55E0);
    TWindowSubComCard__sub_80265C30(lbl_805D55E0);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E0);
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D5594 = 3;
}

}
