#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_802731E8(void);
M2C_UNK TObjCityMainWarp__sub_80186AE4(s32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265E60(s32, f32);
M2C_UNK fn_802661D4(s32, s32, M2C_UNK, M2C_UNK);
s32 fn_8026659C(s32, M2C_UNK, s32);
M2C_UNK fn_8026CBB8(M2C_UNK);

s32 get_main_phase();
extern const f32 lbl_805DD510;

s32 TWindowSubComCard__sub_802731E8(void) {
    s32 temp_r31;

    temp_r31 = fn_8026659C(fn_8026CBB8(0x87), 5, TWindowSubStatusDisp__sub_80077760(0x1D));
    if (get_main_phase() == 0xF) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x59), 6, 0xF);
    } else {
        fn_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x59), 6, 0xF);
    }
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x101), 6, 0x11);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x102), 6, 0x13);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x63), 6, 0x1B);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x5A), 6, 0x15);
    TObjCityMainWarp__sub_80186AE4(temp_r31);
    fn_80265E60(temp_r31, lbl_805DD510);
    fn_80265C30(temp_r31);
    return temp_r31;
}

}
