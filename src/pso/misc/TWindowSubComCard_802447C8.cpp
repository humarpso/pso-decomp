#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TWindowSubComCard__sub_802447C8(void *arg0);

extern M2C_UNK lbl_8044E678;
extern f32 lbl_805DCAC8;
extern f32 lbl_805DCACC;

f32 TWindowSubComCard__sub_802447C8(void *arg0) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s16 *, 0x22);
    if (temp_r3 != 0) {
        return lbl_805DCAC8 - ((f32) temp_r3 / lbl_805DCACC);
    }
    return lbl_805DCAC8;
}

}
