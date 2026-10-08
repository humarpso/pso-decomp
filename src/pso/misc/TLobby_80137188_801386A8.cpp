#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_all_windows__6TLobbyFv(void);
void destroy_lobby_ui__6TLobbyFv(void);
void set_menu_mode_0__6TLobbyFv(void);
void set_menu_mode_1__6TLobbyFv(void);
void set_menu_mode_2__6TLobbyFv(void);
M2C_UNK show_seq_phase_message__6TLobbyFi(M2C_UNK);
M2C_UNK TWindow__close(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_player_window__6TLobbyFv();

extern s32 TLobby__data_805D5594;

void set_menu_mode_2__6TLobbyFv(void) {
    show_seq_phase_message__6TLobbyFi(2);
    TLobby__data_805D5594 = 0x15;
}

extern s32 TLobby__data_805D5594;

void set_menu_mode_1__6TLobbyFv(void) {
    show_seq_phase_message__6TLobbyFi(1);
    TLobby__data_805D5594 = 1;
}

extern s32 TLobby__data_805D5594;

void set_menu_mode_0__6TLobbyFv(void) {
    show_seq_phase_message__6TLobbyFi(0);
    TLobby__data_805D5594 = 1;
}

extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 TLobby__data_805D55D8;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55E8;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F8;

void destroy_lobby_ui__6TLobbyFv(void) {
    void *temp;
    temp = (void*)(u32)TLobby__data_805D55C8;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55C8 = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55CC;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55CC = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55D0;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55D0 = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55D8;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55D8 = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55DC;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55DC = 0U;
    }
    temp = (void*)(u32)lbl_805D55E0;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        lbl_805D55E0 = 0U;
    }
    temp = (void*)(u32)lbl_805D55E4;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        lbl_805D55E4 = 0U;
    }
    temp = (void*)(u32)lbl_805D55E8;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        lbl_805D55E8 = 0U;
    }
    temp = (void*)(u32)lbl_805D55EC;
    if (temp != 0) {
        queue_destruction__7TObjectFv((void *)(temp));
        lbl_805D55EC = 0U;
    }
    temp = (void*)(u32)lbl_805D55F0;
    if (temp != 0) {
        queue_destruction__7TObjectFv((void *)(temp));
        lbl_805D55F0 = 0U;
    }
    temp = (void*)(u32)lbl_805D55F8;
    if (temp != 0) {
        queue_destruction__7TObjectFv((void *)(temp));
        lbl_805D55F8 = 0U;
    }
    TLobby__data_805D5594 = 0xE;
}

extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 TLobby__data_805D55D8;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55E8;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern u32 lbl_805D55F8;

void close_all_windows__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55C8 != 0U) {
        TWindow__close((void *)(TLobby__data_805D55C8));
        TLobby__data_805D55C8 = 0U;
    }
    if ((u32) TLobby__data_805D55CC != 0U) {
        TWindow__close((void *)(TLobby__data_805D55CC));
        TLobby__data_805D55CC = 0U;
    }
    if ((u32) TLobby__data_805D55D0 != 0U) {
        TWindow__close((void *)(TLobby__data_805D55D0));
        TLobby__data_805D55D0 = 0U;
    }
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((void *)(TLobby__data_805D55D8));
        TLobby__data_805D55D8 = 0U;
    }
    if ((u32) TLobby__data_805D55DC != 0U) {
        TWindow__close((void *)(TLobby__data_805D55DC));
        TLobby__data_805D55DC = 0U;
    }
    if ((u32) lbl_805D55E0 != 0U) {
        TWindow__close((void *)(lbl_805D55E0));
        lbl_805D55E0 = 0U;
    }
    if ((u32) lbl_805D55E4 != 0U) {
        TWindow__close((void *)(lbl_805D55E4));
        lbl_805D55E4 = 0U;
    }
    if ((u32) lbl_805D55E8 != 0U) {
        TWindow__close((void *)(lbl_805D55E8));
        lbl_805D55E8 = 0U;
    }
    if ((u32) lbl_805D55EC != 0U) {
        queue_destruction__7TObjectFv((void *)(lbl_805D55EC));
        lbl_805D55EC = 0U;
    }
    if ((u32) lbl_805D55F0 != 0U) {
        queue_destruction__7TObjectFv((void *)(lbl_805D55F0));
        lbl_805D55F0 = 0U;
    }
    if ((u32) lbl_805D55F4 != 0U) {
        queue_destruction__7TObjectFv((void *)(lbl_805D55F4));
        lbl_805D55F4 = 0U;
    }
    if ((u32) lbl_805D55F8 != 0U) {
        queue_destruction__7TObjectFv((void *)(lbl_805D55F8));
        lbl_805D55F8 = 0U;
    }
    update_player_window__6TLobbyFv();
    TLobby__data_805D5594 = 0;
}

}
