#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800DED30(void *, M2C_UNK);
s32 fn_800DFB44(s32);
M2C_UNK fn_800F5EB4(void *, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void fn_800DD080(u8 *arg0) {
    s32 temp_r0;

    if ((fn_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E4)) != 0) || (fn_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E8)) != 0)) {
        fn_800DED30(arg0, 0xA);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        fn_800DED30(arg0, 0xC);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x388) == 0x13) {
        fn_8022675C(fn_800F5EB4(arg0, 0x4003BC32), arg0 + 0x38, 0, 0);
    }
}

}
