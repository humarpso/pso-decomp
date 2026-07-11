#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_lobby_warp_menu__6TLobbyFv(void);
M2C_UNK init_player_window_effect__6TLobbyFv();
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
s32 TLobby__sub_8013A14C(M2C_UNK);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_8013AD28(s32);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265F60(s32);
s32 fn_80266508(M2C_UNK, M2C_UNK);
M2C_UNK fn_8026CBB8(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B0;
extern s32 lbl_805D55E0;

void open_lobby_warp_menu__6TLobbyFv(void) {
    M2C_UNK temp_r3;
    TLobby__sub_8013990C(3);
    temp_r3 = fn_8026CBB8(0xB4);
    if ((s32) TLobby__data_805D55B0 < 0xD) {
        lbl_805D55E0 = fn_80266508(temp_r3, 2);
        TObjCityMainWarp__sub_80266354(lbl_805D55E0, TLobby__sub_8013A14C(0x35), 6, 0);
        TObjCityMainWarp__sub_80266354(lbl_805D55E0, TLobby__sub_8013A14C(0x36), 6, 1);
    } else {
        lbl_805D55E0 = fn_80266508(temp_r3, 3);
        TObjCityMainWarp__sub_80266354(lbl_805D55E0, TLobby__sub_8013A14C(0x35), 6, 0);
        TObjCityMainWarp__sub_80266354(lbl_805D55E0, TLobby__sub_8013A14C(0x36), 6, 1);
        TObjCityMainWarp__sub_80266354(lbl_805D55E0, TLobby__sub_8013A14C(0x47), 6, 3);
    }
    fn_80265F60(lbl_805D55E0);
    fn_80265C30(lbl_805D55E0);
    fn_8013AD28(lbl_805D55E0);
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D5594 = 3;
}

}
