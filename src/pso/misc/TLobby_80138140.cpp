#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_warp_menu__6TLobbyFv(void);
s32 TLobby__sub_8013A14C(M2C_UNK);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK fn_8013AD28(s32);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265F60(s32);
s32 fn_80266508(M2C_UNK, M2C_UNK);
M2C_UNK fn_8026CBB8(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void open_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv(lbl_805D55E0);
    temp_r3 = fn_8026CBB8(0xB5);
    lbl_805D55E4 = fn_80266508(temp_r3, 2);
    TObjCityMainWarp__sub_80266354(lbl_805D55E4, TLobby__sub_8013A14C(0x3E), 6, 0);
    TObjCityMainWarp__sub_80266354(lbl_805D55E4, TLobby__sub_8013A14C(0x3F), 6, 1);
    fn_80265F60(lbl_805D55E4);
    fn_80265C30(lbl_805D55E4);
    fn_8013AD28(lbl_805D55E4);
    TLobby__data_805D5594 = 5;
}

}
