#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_flags_and_proceed__6TLobbyFv(void);
void clear_flag400__6TLobbyFv(void);
void handle_6xA7(void);
void handle_reset_choice__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_801DA2A4(s32);
M2C_UNK TLobby__sub_802D2D64();
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK reset__6TLobbyFi();

extern u8 TLobby__data_805D688B;

void handle_reset_choice__6TLobbyFi(s32 arg0) {
    if ((s8) TLobby__data_805D688B != 0) {
        switch (arg0) {
        case 0:
            get_message_10__20TWindowSubStatusDispFPv(0xEC);
            reset__6TLobbyFi();
            return;
        case 1:
            get_message_10__20TWindowSubStatusDispFPv(0xEB);
            reset__6TLobbyFi();
            break;
        }
    }
}

void handle_6xA7(void) {  }

extern s32 TLobby__data_805D5580;
extern u16 lbl_805D6888;

void clear_flag400__6TLobbyFv(void) {
    if (lbl_805D6888 & 0x400) {
        TLobby__sub_801DA2A4(TLobby__data_805D5580);
        lbl_805D6888 &= 0xFFFFFBFF;
    }
}

extern u32 TLobby__data_805D6894;
extern u32 TLobby__data_805D6898;
extern u32 TLobby__data_805D689C;

void check_flags_and_proceed__6TLobbyFv(void) {
    if (((u32) TLobby__data_805D6894 == 0U) && ((u32) TLobby__data_805D6898 == 0U) && ((u32) TLobby__data_805D689C == 0U)) {
        TLobby__sub_802D2D64();
    }
}

}
