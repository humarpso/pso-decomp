#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcEnemy__vt86(void *arg0);

void TObjNpcEnemy__vt86(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x3B8);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(temp_r4, s16 *, 0x1C);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(temp_r4, s16 *, 0x1E);
}

}
