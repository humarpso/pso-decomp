#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowOptionCtrl__sub_8026BB68(void);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265E60(s32, f32);
s32 fn_80266508(M2C_UNK, M2C_UNK);
M2C_UNK fn_8026CBA4(M2C_UNK);

extern const f32 lbl_805DD268;

s32 TWindowOptionCtrl__sub_8026BB68(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = fn_8026CBA4(0xCE);
    temp_r31 = fn_80266508(temp_r3, 9);
    TObjCityMainWarp__sub_80266354(temp_r31, fn_80132F2C(0xF, 0), 6, 3);
    TObjCityMainWarp__sub_80266354(temp_r31, fn_80132F2C(0xF, 1), 6, 7);
    TObjCityMainWarp__sub_80266354(temp_r31, fn_80132F2C(0xF, 2), 6, 5);
    TObjCityMainWarp__sub_80266354(temp_r31, fn_80132F2C(0xF, 3), 6, 9);
    TObjCityMainWarp__sub_80266354(temp_r31, fn_80132F2C(0xF, 4), 6, 0xB);
    TObjCityMainWarp__sub_80266354(temp_r31, fn_80132F2C(0xF, 5), 6, 0x10);
    TObjCityMainWarp__sub_80266354(temp_r31, fn_80132F2C(0xF, 6), 6, 0x19);
    TObjCityMainWarp__sub_80266354(temp_r31, fn_80132F2C(0xF, 7), 6, 0x1B);
    fn_80265E60(temp_r31, lbl_805DD268);
    fn_80265C30(temp_r31);
    return temp_r31;
}

}
