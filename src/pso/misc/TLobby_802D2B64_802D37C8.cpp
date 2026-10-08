#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Half_802D38B4 { u8 data[0x1F0]; };

extern "C" {
M2C_UNK cancel_trade__6TLobbyFv();
M2C_UNK TLobby__sub_802D3070(s32);
u32 get_player_by_client_id(s32);
s32 TWindowSubTradeMain__sub_802D3924(s32);
extern s8 TLobby__data_805D688A;
extern u8 TLobby__data_805D688B;
void update_trade_partner__6TLobbyFv(void);
void update_both_halves__6TLobbyFPv(void *);
void close_trade_request__6TLobbyFv(void);
extern Half_802D38B4 TLobby__data_80540BD0[];
extern s8 TLobby__data_805D688A;
extern u8 TLobby__data_805D688B;
extern s32 TLobby__data_805D688C;
extern s32 lbl_805D6890;
extern s32 TLobby__data_805D6894;
extern s32 TLobby__data_805D6898;
extern s32 TLobby__data_805D689C;
void TLobby__sub_802D38B4(void);
}

extern "C" {

void close_trade_request__6TLobbyFv(void);
void update_battle_mode__6TLobbyFv(void);
M2C_UNK cancel_trade__6TLobbyFv();
M2C_UNK TLobby__sub_802D3070(s32);
u32 get_player_by_client_id(s32);
s32 TWindowSubTradeMain__sub_802D3924(s32);
int close_request_window__19TWindowTradeRequestFv(void);

extern s32 lbl_805D53A0;
extern u8 TLobby__data_805D688B;

void update_battle_mode__6TLobbyFv(void) {
    if ((s8) TLobby__data_805D688B != 0) {
        if (get_player_by_client_id(lbl_805D53A0) == 0U) {
            cancel_trade__6TLobbyFv();
            return;
        }
        if (TWindowSubTradeMain__sub_802D3924(lbl_805D53A0) == 0) {
            TLobby__sub_802D3070(lbl_805D53A0);
        }
    }
}

    extern short lbl_805D6888;

void update_trade_partner__6TLobbyFv(void) {
    if ((s8) TLobby__data_805D688B == 0) {
        return;
    }
    if (TLobby__data_805D688A == 4) {
        return;
    }
    if (get_player_by_client_id(TLobby__data_805D688A) == 0U) {
        cancel_trade__6TLobbyFv();
        return;
    }
    if (TWindowSubTradeMain__sub_802D3924(TLobby__data_805D688A) == 0) {
        TLobby__sub_802D3070(TLobby__data_805D688A);
    }
}

void close_trade_request__6TLobbyFv(void) { lbl_805D6888 = 0; close_request_window__19TWindowTradeRequestFv(); }
void TLobby__sub_802D38B4(void) {
    s32 i;
    TLobby__data_805D688A = 4;
    TLobby__data_805D688B = 0;
    TLobby__data_805D688C = 0;
    lbl_805D6890 = 0;
    TLobby__data_805D6894 = 0;
    TLobby__data_805D6898 = 0;
    TLobby__data_805D689C = 0;
    for (i = 0; i < 2; i++) {
        update_both_halves__6TLobbyFPv(&TLobby__data_80540BD0[i]);
    }
    close_trade_request__6TLobbyFv();
}

}
