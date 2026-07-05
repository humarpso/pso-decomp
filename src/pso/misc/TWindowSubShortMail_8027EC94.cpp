#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubShortMail__sub_8027EC94(void);
M2C_UNK TObjCityMainWarp__sub_80186AE4(s32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 fn_80225CB0();
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265E60(s32, f32);
M2C_UNK fn_802661D4(s32, s32, M2C_UNK, M2C_UNK);
s32 fn_8026659C(s32, M2C_UNK, s32);
M2C_UNK fn_8026CBB8(M2C_UNK);

s32 get_main_phase();
extern const f32 lbl_805DD6D4;

s32 TWindowSubShortMail__sub_8027EC94(void) {
    s32 temp_r31;

    temp_r31 = fn_8026659C(fn_8026CBB8(0x9A), 3, TWindowSubStatusDisp__sub_80077760(0x1D));
    if (get_main_phase() == 0xF) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x57), 6, 3);
    } else {
        fn_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x57), 6, 3);
    }
    if (fn_80225CB0() > 0) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xCE), 6, 7);
    } else {
        fn_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0xCE), 6, 7);
    }
    if (get_main_phase() == 0xF) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x103), 6, 0x13);
    } else {
        fn_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x103), 6, 0x13);
    }
    TObjCityMainWarp__sub_80186AE4(temp_r31);
    fn_80265E60(temp_r31, lbl_805DD6D4);
    fn_80265C30(temp_r31);
    return temp_r31;
}

}
