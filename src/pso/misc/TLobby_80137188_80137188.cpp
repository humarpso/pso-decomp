#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_801371B0 { s32 a; s32 b; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_80137228 { s32 a; s32 b; };

extern "C" {
extern u32 TLobby__data_805D55DC;
extern s32 TLobby__data_805D5594;
extern const Pair_801371B0 lbl_8043EE10[];
s32 get_window_layout_position(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
void TLobby__sub_801371B0(s32 arg0);
extern u32 TLobby__data_805D55CC;
extern const Pair_80137228 lbl_8043EE08[];
s32 get_window_layout_position(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
void TLobby__sub_80137228(s32 arg0);
}

extern "C" {

void disable_window_flags__6TLobbyFPv(void* a0);
void handle_state__6TLobbyFi(s32 arg0);
M2C_UNK reset_character_data__23TAdSinglePlyChrSelectGCFv();
M2C_UNK save_online_character__23TAdSinglePlyChrSelectGCFv();
s32 TLobby__sub_80146740();
M2C_UNK close_and_set_state_13__6TLobbyFv(M2C_UNK);
M2C_UNK send_server_time_request__9TProtocolFv(s32);
M2C_UNK reset_state__6TLobbyFv(M2C_UNK);
int set_window_flags_off__11TWindowCtrlFPvi(void*, void*);

    extern int lbl_805D53A0;
void disable_window_flags__6TLobbyFPv(void* a0) { set_window_flags_off__11TWindowCtrlFPvi((void*)(lbl_805D53A0), a0); }

extern s32 TLobby__data_805D5580;

void TLobby__sub_801371B0(s32 arg0) {
    if (TLobby__data_805D55DC == 0) {
        Pair_801371B0 tmp = lbl_8043EE10[0];
        TLobby__data_805D55DC = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xc8), &tmp);
    }
    send_and_handle__6TLobbyFPvii(TLobby__data_805D55DC, arg0, 3);
    TLobby__data_805D5594 = 0x16;
}

void TLobby__sub_80137228(s32 arg0) {
    if (TLobby__data_805D55CC == 0) {
        Pair_80137228 tmp = lbl_8043EE08[0];
        TLobby__data_805D55CC = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xc7), &tmp);
    }
    send_and_handle__6TLobbyFPvii(TLobby__data_805D55CC, arg0, 3);
}

void handle_state__6TLobbyFi(s32 arg0) {
    s32 temp_r3;

    if (arg0 != 0) {
        save_online_character__23TAdSinglePlyChrSelectGCFv();
        temp_r3 = TLobby__sub_80146740();
        switch (temp_r3) {
        case 0:
            send_server_time_request__9TProtocolFv(TLobby__data_805D5580);
            return;
        case 1:
            close_and_set_state_13__6TLobbyFv(0x13);
            return;
        case 2:
            close_and_set_state_13__6TLobbyFv(0x14);
            return;
        }
    } else {
        reset_state__6TLobbyFv(0x20);
        reset_character_data__23TAdSinglePlyChrSelectGCFv();
        save_online_character__23TAdSinglePlyChrSelectGCFv();
    }
}

}
