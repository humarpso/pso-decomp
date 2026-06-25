#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802B4B64(void *, M2C_UNK);
M2C_UNK fn_802B4BA8(void *, M2C_UNK);

void fn_802B3B10(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x4AC) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4A8);
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4A4);
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r0_2;
        M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    }
    fn_802B4BA8(arg0, 0);
    fn_802B4B64(arg0, 1);
}

}
