#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800A8EDC(void *arg0);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);

extern const f32 lbl_805D9AE0;

void TObjPlayer__sub_800A8EDC(void *arg0) {
    s16 temp_r4;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = (s16) ((M2C_FIELD(arg0, u32 *, 0x388) & 0x1000000) ? 0 : 5);
        M2C_FIELD(arg0, u32 *, 0x388) = (u32) (M2C_FIELD(arg0, u32 *, 0x388) | 0x800000);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734(arg0, 0, lbl_805D9AE0);
        }
        if (M2C_FIELD(arg0, s32 *, 0x30) & 0x40000) {
            temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
            M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
            if (temp_r4 < 0) {
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            }
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        break;
    }
}

}
