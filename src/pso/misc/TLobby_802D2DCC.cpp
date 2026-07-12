#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_sub_status_disp__6TLobbyFi(s32 arg0);
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK TLobby__sub_8001DC24();
M2C_UNK refresh_player_status__6TLobbyFv(s32);
M2C_UNK TWindowSubStatusDisp__sub_80229080();

extern s32 lbl_805D53A0;

void update_sub_status_disp__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D53A0 == arg0) {
        get_message_10__20TWindowSubStatusDispFPv(0xF0);
        return;
    }
    TWindowSubStatusDisp__sub_802290E0();
    refresh_player_status__6TLobbyFv(arg0);
    get_message_10__20TWindowSubStatusDispFPv(0xEF);
    TWindowSubStatusDisp__sub_80229080();
    TLobby__sub_8001DC24();
}

}
