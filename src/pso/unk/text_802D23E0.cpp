#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_F8 { u8 bytes[0xf8]; };

extern "C" {
u8 * TLobby__sub_802D27E0(s32 arg0, s32 arg1);
M2C_UNK TLobby__sub_8001DC24();
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK refresh_player_status__6TLobbyFv(int);
M2C_UNK TWindowSubStatusDisp__sub_80229080();
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
extern s8 TLobby__data_805D688A;
void TLobby__sub_802D268C(void);
}

extern "C" {

#pragma push
#pragma scheduling off
void TLobby__sub_802D268C(void) {
    TWindowSubStatusDisp__sub_802290E0();
    refresh_player_status__6TLobbyFv(TLobby__data_805D688A);
    get_message_10__20TWindowSubStatusDispFPv(0xF6);
    TWindowSubStatusDisp__sub_80229080();
    TLobby__sub_8001DC24();
}
#pragma pop

u8 * TLobby__sub_802D27E0(s32 arg0, s32 arg1) {
    *(M2CCopy_F8 *)(arg0) = *(const M2CCopy_F8 *)(arg1);
    return (u8 *)arg0;
}

}
