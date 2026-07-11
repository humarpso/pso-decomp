#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_set_state_13__6TLobbyFv(void);
void reset_state__6TLobbyFv(void);
void update_state__6TLobbyFv(void);
M2C_UNK init_player_window_effect__6TLobbyFv();
M2C_UNK TLobby__sub_801397E8();
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
M2C_UNK fn_80244888(s32);

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
                fn_80244888(TLobby__data_805D55D8);
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

}
