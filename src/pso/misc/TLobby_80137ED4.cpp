#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_keyboard_window__6TLobbyFv(void);
s32 TKeyBoardControl__ct(s32, s32, s32, s32, s32, s32);
M2C_UNK *TLobby__sub_8013A14C(M2C_UNK);
M2C_UNK TObjCityMainWarp__sub_80266354(u32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK TWindow__close(u32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TAdChrSelASlotGC__sub_800740FC(u32);
M2C_UNK fn_80131B18(s32, s32);
M2C_UNK TWindowMakeTeam__sub_80131B54(s32, s32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
u32 TAdChrSelASlotGC__sub_80266508(s32, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55D8;
extern u32 lbl_805D55F0;
extern s32 lbl_805D55F4;
extern s32 TLobby__data_805D5604;
extern M2C_UNK *lbl_805D5614;
extern u8 lbl_805D5618;
extern M2C_UNK lbl_805DB0B4;

void open_keyboard_window__6TLobbyFv(void) {
    s32 var_r0;
    s32 tmp_r3;

    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close(TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0U;
    }
    if ((u32) lbl_805D55F0 == 0U) {
        if ((s8) lbl_805D5618 == 0) {
            lbl_805D5614 = &lbl_805DB0B4;
            lbl_805D5618 = 1;
        }
        tmp_r3 = TWindowSubComCard__sub_8026CBB8(0xC3);
        lbl_805D55F0 = TAdChrSelASlotGC__sub_80266508(tmp_r3, 2);
        TObjCityMainWarp__sub_80266354(lbl_805D55F0, TLobby__sub_8013A14C(0x44), 2, 0);
        TObjCityMainWarp__sub_80266354(lbl_805D55F0, lbl_805D5614, 2, 1);
        TWindowSubComCard__sub_80265F60(lbl_805D55F0);
        TWindowSubComCard__sub_80265C30(lbl_805D55F0);
        TAdChrSelASlotGC__sub_800740FC(lbl_805D55F0);
    }
    var_r0 = __nw__7TObjectFUl(0x2C);
    if (var_r0 != 0) {
        var_r0 = TKeyBoardControl__ct(var_r0, TLobby__data_805D5604, 0x10, 0, 0, lbl_805D53A0);
    }
    lbl_805D55F4 = var_r0;
    TWindowMakeTeam__sub_80131B54(lbl_805D55F4, TWindowSubComCard__sub_8026CBB8(0xC4));
    fn_80131B18(lbl_805D55F4, TWindowSubComCard__sub_8026CBB8(0xC5));
    TLobby__data_805D5594 = 9;
}

}
