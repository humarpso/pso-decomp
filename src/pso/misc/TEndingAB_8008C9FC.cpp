#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TEndingAB__sub_8008C9FC(void *arg0);
M2C_UNK fn_8001A808(s32);

extern s32 TEndingAB__data_805D4F10;

void TEndingAB__sub_8008C9FC(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;

    switch ((s32) TEndingAB__data_805D4F10) {
    case 1:
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3;
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 > (s32) ((temp_r4 * 3) - temp_r4)) {
            TEndingAB__data_805D4F10 = 2;
            fn_8001A808(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
            return;
        }
        break;
    case 2:
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_2;
        if (temp_r3_2 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0xD)) {
            TEndingAB__data_805D4F10 = 3;
            return;
        }
        break;
    case 3:
        temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_3;
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3_3 > (s32) ((temp_r4_2 * 0xE) - temp_r4_2)) {
            TEndingAB__data_805D4F10 = 4;
            fn_8001A808(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
            return;
        }
        break;
    case 4:
        temp_r3_4 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_4;
        if (temp_r3_4 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0x18)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            TEndingAB__data_805D4F10 = 1;
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
            M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
            if (temp_r0 > 5) {
                M2C_FIELD(arg0, s32 *, 0x28) = 5;
                TEndingAB__data_805D4F10 = 5;
                return;
            }
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x28) = 5;
        break;
    }
}

}
