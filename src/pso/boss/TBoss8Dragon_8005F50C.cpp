#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_8005F50C(void *arg0);

void TBoss8Dragon__sub_8005F50C(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
    switch (temp_r0) {
    default:
    case 0:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x40);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 8);
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x60);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x5C);
        return;
    }
}

}
