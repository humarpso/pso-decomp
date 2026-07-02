#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjGrass__vt57(void *arg0);

M2C_UNK obj_clearFlags30(void *, M2C_UNK);

void TObjGrass__vt57(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 1)) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        if ((s16) M2C_FIELD(arg0, s16 *, 0x39C) == 2) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 2;
        }
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        obj_clearFlags30(arg0, 0x04040000);
    }
}

}
