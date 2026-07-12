#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800A617C(void *arg0);

void TObjPlayer__sub_800A617C(void *arg0) {
    s16 temp_r0;
    s32 temp_r4;
    void *temp_r3;
    void *temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    default:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 & 4) {
            M2C_FIELD(arg0, s16 *, 0x326) = 3;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
        } else if (temp_r4 & 1) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
        return;
    case 1:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 2) {
            M2C_FIELD(arg0, s16 *, 0x326) = 2;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
        }
        return;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 4) {
            M2C_FIELD(arg0, s16 *, 0x326) = 3;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
            return;
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 3) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 1);
            temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x18) | 1);
            return;
        }
        break;
    }
}

}
