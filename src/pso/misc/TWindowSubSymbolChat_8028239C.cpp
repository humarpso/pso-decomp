#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_edit_menu__20TWindowSubSymbolChatFPv(void *arg0);
s32 open_main_menu__20TWindowSubSymbolChatFv(void);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s8 TWindowSubSymbolChat__sub_80283808();
s32 fn_80077720(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265DEC(s32, f32, f32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK TWindowSubComCard__sub_802661D4(s32, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8026659C(s32, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

s32 open_edit_menu__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8026659C(TWindowSubComCard__sub_8026CBB8(0x79), 3, TWindowSubStatusDisp__sub_80077760(0xA8));
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xB3), 6, 8);
    if (fn_80077720(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xB4), 6, 0x1E);
    } else {
        TWindowSubComCard__sub_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0xB4), 6, 0x1E);
    }
    if (TWindowSubSymbolChat__sub_80283808() > 0) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xB5), 6, 0x20);
    } else {
        TWindowSubComCard__sub_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0xB5), 6, 0x20);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265DEC(temp_r31, lbl_805DD73C, lbl_805DD740);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD73C;

s32 open_main_menu__20TWindowSubSymbolChatFv(void) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8026659C(TWindowSubComCard__sub_8026CBB8(0x78), 6, TWindowSubStatusDisp__sub_80077760(0x1D));
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xA8), 6, 6);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xA9), 6, 0xA);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xAA), 6, 0x14);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xAB), 6, 0x22);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xAC), 6, 0x26);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xAD), 6, 0x28);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD73C);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

}
