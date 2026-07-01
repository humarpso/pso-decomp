#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern const s32 lbl_805D9BFC;

void fn_800ACF60(void *arg0) {
    s16 temp_r0;
    s32 gbits;
    void *temp_r6;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFFFFEFF;
        temp_r6 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r6, s32 *, 0x18) |= lbl_805D9BFC;
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0x33C) = 0xF;
    case 7:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9BFFFF);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
}

}
