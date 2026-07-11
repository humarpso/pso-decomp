#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8002AE74(void *, M2C_UNK);
M2C_UNK fn_800E2EF0(void *, M2C_UNK, M2C_UNK);

void TObjEnePanarms__sub_800E13DC(void *arg0) {
    void *temp_r4;

    fn_800E2EF0(arg0, 0xF, 0x3C);
    temp_r4 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x388) = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 1) {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    }
    fn_8002AE74(arg0, 0);
}

}
