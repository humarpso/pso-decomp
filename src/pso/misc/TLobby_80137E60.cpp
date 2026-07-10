#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_room_change__6TLobbyFi(s32 arg0);
void TLobby__sub_80137EA8(void);
M2C_UNK TLobby__sub_80137CC8();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK send_room_change__9TProtocolFi(s32, s32);

extern s32 lbl_805D5580;
extern s32 lbl_805D5588;
extern s32 lbl_805D5594;

void send_room_change__6TLobbyFi(s32 arg0) {
    lbl_805D5588 = 1;
    TLobby__sub_80137CC8();
    send_room_change__9TProtocolFi(lbl_805D5580, arg0);
    lbl_805D5594 = 0x13;
}

extern s32 lbl_805D5594;

void TLobby__sub_80137EA8(void) {
    close_all_windows__6TLobbyFv();
    TLobby__sub_80137CC8();
    lbl_805D5594 = 0x12;
}

}
