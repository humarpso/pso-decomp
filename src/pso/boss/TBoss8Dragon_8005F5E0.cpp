#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_8005F5E0(void *arg0);
void TBoss8Dragon__sub_8005F660(void *arg0);
M2C_UNK TBoss8Dragon__sub_8005F578(void *, M2C_UNK);

void TBoss8Dragon__sub_8005F5E0(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) | 8);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
    switch (temp_r0) {
    default:
    case 0:
        TBoss8Dragon__sub_8005F578(arg0, 0x19);
        return;
    case 1:
        TBoss8Dragon__sub_8005F578(arg0, 0x1A);
        return;
    case 3:
        TBoss8Dragon__sub_8005F578(arg0, 0x1B);
        return;
    case 2:
        TBoss8Dragon__sub_8005F578(arg0, 0x1C);
        return;
    }
}

void TBoss8Dragon__sub_8005F660(void *arg0) {
    TBoss8Dragon__sub_8005F578(arg0, 0);
}

}
