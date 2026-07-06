#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800BFCA0(void *);
M2C_UNK fn_800F06B4(M2C_UNK, M2C_UNK);
M2C_UNK fn_800F6B48(void *);
M2C_UNK fn_800F6B68(void *);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void fn_800C0234(u8 *arg0) {
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC0);
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x374);
    if (temp_r3 & 2) {
        if (!(temp_r3 & 4)) {
            M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r3 | 4);
            fn_8022675C(fn_800F06B4(0x3AD13, 5), arg0 + 0x38, 0, 0);
            fn_800F6B48(arg0);
            M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        }
    } else if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 5) {
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        if (!(M2C_FIELD(arg0, s16 *, 0x374) & 0x10)) {
            fn_8022675C(fn_800F06B4(0x3AE10, 5), arg0 + 0x38, 0, 0);
            fn_800F6B68(arg0);
            fn_800BFCA0(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x380) = 0;
    }
}

}
