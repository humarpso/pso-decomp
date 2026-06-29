#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8003F6B4(u16, M2C_UNK);
extern s32 lbl_805D4C14;

void fn_80041C1C(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) && ((s32) lbl_805D4C14 >= 0) && ((s32) ((s32) lbl_805D4C14 / 4) == (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x38C) / 4))) {
        fn_8003F6B4(M2C_FIELD(arg0, u16 *, 0x2D4), 0);
    }
}

}
