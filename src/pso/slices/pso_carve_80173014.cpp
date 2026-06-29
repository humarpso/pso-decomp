#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_80141CF8(s32, s32);
s32 TPhotonMylla__sub_80154CB4(u16);
extern s32 lbl_805D53A0;

s32 fn_80173014(s32 arg0, f32 farg0) {
    s32 temp_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4((u16) lbl_805D53A0);
    if ((temp_r3 != 0) && (fn_80141CF8(arg0 + 0x38, temp_r3 + 0x38) < farg0)) {
        return 1;
    }
    return 0;
}

}
