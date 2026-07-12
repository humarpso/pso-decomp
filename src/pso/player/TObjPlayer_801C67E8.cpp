#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjPlayer__sub_801C67E8(s32 arg0, s32 arg1, f32 farg0);
f32 TItemMag__sub_80113F08(s32);
s32 TItemMag__sub_80113F10(s32);
s32 TObjPlayer__sub_8001BEF8(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801C6FCC(s32, f32);
s32 is_flag30_8_set__10TObjPlayerFi(s32);

extern const f32 lbl_805DC33C;
extern const f32 lbl_805DC340;

f32 TObjPlayer__sub_801C67E8(s32 arg0, s32 arg1, f32 farg0) {
    f32 var_f31;

    var_f31 = farg0;
    if (is_flag30_8_set__10TObjPlayerFi(arg1) != 0) {
        var_f31 *= lbl_805DC33C;
    } else if (TObjPlayer__sub_8001BEF8(arg0 + 0xC, 8) != 0) {
        var_f31 *= lbl_805DC340;
    }
    TObjPlayer__sub_801C6FCC(arg0, var_f31);
    if (TItemMag__sub_80113F10(arg1 + 0x5B0) != 0) {
        var_f31 *= TItemMag__sub_80113F08(arg1 + 0x5B0);
    }
    return var_f31;
}

}
