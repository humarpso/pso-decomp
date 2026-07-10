#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_menu__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
M2C_UNK TObjCityMainWarp__sub_80186AE4(s32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 TWindowSubSymbolChat__sub_80077310();
M2C_UNK fn_802655E4(s32);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265DEC(s32, f32, f32);
M2C_UNK fn_802661D4(s32, s32, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD744;

void open_menu__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    fn_802655E4(arg1);
    temp_r3 = TWindowSubSymbolChat__sub_80077310();
    if (temp_r3 > 0) {
        TObjCityMainWarp__sub_80266354(arg1, TWindowSubStatusDisp__sub_80077760(0xAE), 6, 0xC);
    } else {
        fn_802661D4(arg1, TWindowSubStatusDisp__sub_80077760(0xAE), 6, 0xC);
    }
    TObjCityMainWarp__sub_80266354(arg1, TWindowSubStatusDisp__sub_80077760(0xAF), 6, 0x10);
    TObjCityMainWarp__sub_80186AE4(arg1);
    fn_80265DEC(arg1, lbl_805DD73C, lbl_805DD744);
    fn_80265C30(arg1);
}

}
