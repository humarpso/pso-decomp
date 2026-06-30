#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_802A55E0(s32);
M2C_UNK TWindowSubComCard__sub_802A5768(s32, M2C_UNK);
M2C_UNK fn_802A596C(s32, s32, s32, f32);
s32 TWindowMessageYesNo__sub_802A59D8(s32, s32, M2C_UNK, M2C_UNK);
extern f32 lbl_805DF210;

s32 fn_8030C9E8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    fn_8022675C(0x53F06, 0, 0, 0);
    temp_r31 = TWindowMessageYesNo__sub_802A59D8(arg0, arg2, 0, 0);
    fn_802A596C(temp_r31, fn_80132F2C(0x16, 0x1B), arg1, lbl_805DF210);
    TWindowSubComCard__sub_802A5768(temp_r31, 1);
    fn_802A55E0(temp_r31);
    return temp_r31;
}

}
