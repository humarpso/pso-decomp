#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK fn_80154764(void *, M2C_UNK, M2C_UNK);

void fn_800D54BC(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 4;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) M2C_FIELD(arg0, s16 *, 0x3D8);
    obj_clearFlags30(arg0, 0x04240000);
    fn_80154764(arg0, 0, 0x0A000000);
}

}
