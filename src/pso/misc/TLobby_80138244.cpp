#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_menu_window__6TLobbyFv(void);
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
s32 TLobby__sub_8013A14C(M2C_UNK);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_8013AD28(s32);
M2C_UNK fn_80265C10(s32, M2C_UNK);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265F60(s32);
s32 fn_80266508(M2C_UNK, s32);
M2C_UNK fn_8026CBB8(M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(u32);

extern s32 lbl_805D5594;
extern u32 lbl_805D55E4;
extern s32 lbl_805D55E8;

void open_menu_window__6TLobbyFv(void) {
    u32 tmp_e4 = lbl_805D55E4;
    if (tmp_e4 != 0U) {
        open__17TWindowOptionCtrlFPv(tmp_e4);
    }
    TLobby__sub_8013990C(0x11);
    lbl_805D55E8 = fn_80266508(fn_8026CBB8(0xB6), 2);
    TObjCityMainWarp__sub_80266354(lbl_805D55E8, TLobby__sub_8013A14C(0x45), 6, 0);
    TObjCityMainWarp__sub_80266354(lbl_805D55E8, TLobby__sub_8013A14C(0x46), 6, 1);
    fn_80265F60(lbl_805D55E8);
    fn_80265C30(lbl_805D55E8);
    fn_8013AD28(lbl_805D55E8);
    fn_80265C10(lbl_805D55E8, 0);
    lbl_805D5594 = 0x18;
}

}
