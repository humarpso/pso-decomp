#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80156844(void *, void *, M2C_UNK);

void fn_800BFBBC(u8 *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (temp_r4 & 0x60) {
        M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r4 & 0xFFFFFF9F);
        TObjPlayer__sub_80156844(arg0, arg0 + 0x38, 0);
        obj_setFlags30(arg0, 0x800000);
    }
}

}
