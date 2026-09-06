#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_all_objects__6TLobbyFv(void);
void init_player_window_effect__6TLobbyFv(void);
void update_com_card_window__6TLobbyFv(void);
void update_player_window__6TLobbyFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowCtrl__sub_8024AEAC(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
s32 TWindowSubComCard__sub_80265BF8(void*);
M2C_UNK clear_lobby_flag__10TObjPlayerFPv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK send_lobby_arrow__9TProtocolFUc(s32, s32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
M2C_UNK init_effect_5f0__10TObjPlayerFPv();
s32 is_visible__17TWindowSubComCardFPv(u32);
void queue_destruction__7TObjectFv(void*);

extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 lbl_805D55D4;
extern u32 TLobby__data_805D55D8;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern u32 lbl_805D55F8;

void destroy_all_objects__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55C8 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55C8);
        TLobby__data_805D55C8 = 0U;
    }
    if ((u32) TLobby__data_805D55CC != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55CC);
        TLobby__data_805D55CC = 0U;
    }
    if ((u32) TLobby__data_805D55D0 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55D0);
        TLobby__data_805D55D0 = 0U;
    }
    if ((u32) lbl_805D55D4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55D4);
        lbl_805D55D4 = 0U;
    }
    if ((u32) TLobby__data_805D55D8 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0U;
    }
    if ((u32) TLobby__data_805D55DC != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55DC);
        TLobby__data_805D55DC = 0U;
    }
    if ((u32) lbl_805D55E0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55E0);
        lbl_805D55E0 = 0U;
    }
    if ((u32) lbl_805D55E4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55E4);
        lbl_805D55E4 = 0U;
    }
    if ((u32) lbl_805D55EC != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55EC);
        lbl_805D55EC = 0U;
    }
    if ((u32) lbl_805D55F0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55F0);
        lbl_805D55F0 = 0U;
    }
    if ((u32) lbl_805D55F4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55F4);
        lbl_805D55F4 = 0U;
    }
    if ((u32) lbl_805D55F8 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55F8);
        lbl_805D55F8 = 0U;
    }
}

extern s32 lbl_805D53A0;

void update_player_window__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        clear_lobby_flag__10TObjPlayerFPv();
    }
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
}

extern s32 lbl_805D53A0;

void init_player_window_effect__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        init_effect_5f0__10TObjPlayerFPv();
    }
    TWindowCtrl__sub_8024AEAC(lbl_805D53A0);
}

extern s32 TLobby__data_805D5580;
extern u32 lbl_805D55E4;

void update_com_card_window__6TLobbyFv(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)lbl_805D55E4);
        if (is_visible__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            send_lobby_arrow__9TProtocolFUc(TLobby__data_805D5580, temp_r31);
            close_all_windows__6TLobbyFv();
            return;
        }
        if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}
