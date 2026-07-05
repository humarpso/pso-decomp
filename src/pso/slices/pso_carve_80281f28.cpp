#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK TObjCityMainWarp__sub_80186AE4(s32);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265DEC(s32, f32, f32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 fn_8026659C(s32, M2C_UNK, s32);
M2C_UNK fn_8026CBB8(M2C_UNK);
extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

s32 TWindowSubSymbolChat__sub_80281F28(void) {
    s32 temp_r31;

    temp_r31 = fn_8026659C(fn_8026CBB8(0x79), 9, TWindowSubStatusDisp__sub_80077760(0xAB));
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xB6), 0x26, 0);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xB7), 0x26, 1);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xB8), 0x26, 2);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xB9), 0x26, 3);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xBA), 0x26, 4);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xBB), 0x26, 5);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xBC), 0x26, 6);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xBD), 0x26, 7);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xBE), 0x26, 8);
    TObjCityMainWarp__sub_80186AE4(temp_r31);
    fn_80265DEC(temp_r31, lbl_805DD73C, lbl_805DD740);
    fn_80265C30(temp_r31);
    return temp_r31;
}

}
