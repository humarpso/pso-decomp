#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void fn_802B292C(u8 *arg0) {
    s32 temp_r3;

    TOTrapAncient01__sub_80226578(0x40032614, arg0, 0, 0, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0x3C) {
        fn_8022675C(0x39403, arg0 + 0x38, 0, 1);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x410);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x410) = (s32) (temp_r3 - 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x410) = 0;
}

}
