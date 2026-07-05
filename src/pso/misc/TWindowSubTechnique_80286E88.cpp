#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubTechnique__sub_80286E88(void *arg0);
M2C_UNK TObjCityMainWarp__sub_80186AE4(s32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TWindowOptionCtrl__sub_8026C610(s32);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK fn_80244D2C(s32);
M2C_UNK fn_80263AF8(s32, M2C_UNK);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265E60(s32, f32);
s32 fn_8026652C(s32, M2C_UNK, s32, s32);
M2C_UNK fn_8026CBB8(M2C_UNK);

extern const f32 lbl_805DD838;

s32 TWindowSubTechnique__sub_80286E88(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_8026652C(fn_8026CBB8(0x12), 5, TWindowSubStatusDisp__sub_80077760(0x2F), M2C_FIELD(arg0, s32 *, 0x28));
    fn_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 0);
    fn_80244D2C(temp_r31);
    TWindowOptionCtrl__sub_8026C610(temp_r31);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x9C), 6, 0);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x9D), 6, 1);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x9E), 6, 2);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x9F), 6, 3);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xA0), 6, 4);
    TObjCityMainWarp__sub_80186AE4(temp_r31);
    fn_80265E60(temp_r31, lbl_805DD838);
    fn_80265C30(temp_r31);
    return temp_r31;
}

}
