#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu1P__vt5(u8 *arg0);
M2C_UNK TCameraCtrl__sub_800695A0(void *);

void TWindowMainMenu1P__vt5(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (!(temp_r3 & 2)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r3 | 2);
        TCameraCtrl__sub_800695A0(arg0 + 0x64);
    }
}

}
