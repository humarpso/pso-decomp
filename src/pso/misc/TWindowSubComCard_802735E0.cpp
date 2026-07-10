#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__create_menu(void);
M2C_UNK TObjCityMainWarp__sub_80186AE4(s32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 fn_8006EF6C(M2C_UNK);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265E60(s32, f32);
M2C_UNK fn_802661D4(s32, s32, M2C_UNK, M2C_UNK);
s32 fn_8026659C(s32, M2C_UNK, s32);
M2C_UNK fn_8026CBB8(M2C_UNK);

s32 get_main_phase();
extern const f32 lbl_805DD530;

s32 TWindowSubComCard__create_menu(void) {
    s32 temp_r31;

    temp_r31 = fn_8026659C(fn_8026CBB8(0x7F), 6, TWindowSubStatusDisp__sub_80077760(0x1D));
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x52), 6, 3);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x53), 6, 0xB);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x54), 6, 0x1D);
    if (get_main_phase() == 0xF) {
        TObjCityMainWarp__sub_80266354(temp_r31, fn_8006EF6C(0x49), 6, 0x27);
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x6D), 6, 0x33);
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xF8), 6, 0x39);
    } else {
        fn_802661D4(temp_r31, fn_8006EF6C(0x49), 6, 0x27);
        fn_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x6D), 6, 0x33);
        fn_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0xF8), 6, 0x39);
    }
    TObjCityMainWarp__sub_80186AE4(temp_r31);
    fn_80265E60(temp_r31, lbl_805DD530);
    fn_80265C30(temp_r31);
    return temp_r31;
}

}
