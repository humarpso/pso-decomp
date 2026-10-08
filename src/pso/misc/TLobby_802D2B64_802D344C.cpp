#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_802D361C { u8 pad[5]; u8 state; };

struct O_802D3654 { u8 pad[5]; u8 state; };

extern "C" {
M2C_UNK get_shared_text_buffer();
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK refresh_player_status__6TLobbyFv(int);
M2C_UNK text_builder_append();
M2C_UNK text_builder_reset();
M2C_UNK TLobby__sub_8024AAA0(s32, M2C_UNK);
M2C_UNK reset__6TLobbyFi();
M2C_UNK TLobby__sub_802D30E8(int);
extern s32 lbl_805D53A0;
extern s8 TLobby__data_805D688A;
extern s8 TLobby__data_805D688B;
extern s32 TLobby__data_805D688C;
void TLobby__sub_802D36E0(void *arg0);
s32 close_request_window__19TWindowTradeRequestFv();
void reset__6TLobbyFv(void);
void TLobby__sub_802D361C(O_802D361C *self);
s32 close_request_window__19TWindowTradeRequestFv();
void reset__6TLobbyFv(void);
void TLobby__sub_802D3654(O_802D3654 *self);
}

extern "C" {

void update_music_state__6TLobbyFPv(void *arg0);
void update_flag_by_state__6TLobbyFPv(void *arg0);
M2C_UNK notify_child_if_present__19TWindowSubTradeMainFPvi(u32, s32);

extern u16 lbl_805D6888;
extern u32 TLobby__data_805D6898;

void update_music_state__6TLobbyFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 0:
        lbl_805D6888 |= 0x200;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 2);
        }
        break;
    case 4:
        lbl_805D6888 &= 0xFFFFFDFF;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
        }
        break;
    }
}

extern u16 lbl_805D6888;
extern u32 TLobby__data_805D6898;

void update_flag_by_state__6TLobbyFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 0:
        lbl_805D6888 |= 0x40;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
        }
        break;
    case 4:
        lbl_805D6888 &= 0xFFFFFFBF;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 0);
        }
        break;
    }
}

void TLobby__sub_802D361C(O_802D361C *self) {
    switch (self->state) {
    case 0:
        close_request_window__19TWindowTradeRequestFv();
        reset__6TLobbyFv();
        break;
    case 1:
    case 2:
        break;
    }
}

void TLobby__sub_802D3654(O_802D3654 *self) {
    switch (self->state) {
    case 3:
        break;
    case 4:
        close_request_window__19TWindowTradeRequestFv();
        reset__6TLobbyFv();
        break;
    }
}

void TLobby__sub_802D36E0(void *arg0) {
    u8 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 2:
        TLobby__data_805D688C = M2C_FIELD(arg0, s32 *, 0xC);
        TLobby__sub_8024AAA0(lbl_805D53A0, 0x1D);
        TLobby__data_805D688B = 3;
        return;
    case 3:
        text_builder_reset();
        refresh_player_status__6TLobbyFv(TLobby__data_805D688A);
        get_message_10__20TWindowSubStatusDispFPv(0xD8);
        text_builder_append();
        get_shared_text_buffer();
        reset__6TLobbyFi();
        return;
    case 0:
        TLobby__sub_802D30E8(TLobby__data_805D688A);
    case 4:
        return;
    }
}

}
