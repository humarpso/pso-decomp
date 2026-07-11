#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjPlayer__sub_8001972C(s32);
M2C_UNK fn_80110B50(s32, M2C_UNK);
s32 TItemMag__sub_80111828();

void TItemMag__sub_8011222C(s32 arg0) {
    s32 temp_r31;
    u8 temp_r3;

    temp_r31 = TItemMag__sub_80111828();
    temp_r3 = TObjPlayer__sub_8001972C(arg0);
    switch ((s32) temp_r3) {
    case 1:
        if (temp_r31 & 0x108) {
            fn_80110B50(arg0, 0xE);
            return;
        }
        if (temp_r31 & 0x10) {
            fn_80110B50(arg0, 0xF);
            return;
        }
        if (temp_r31 & 0x20) {
            fn_80110B50(arg0, 4);
        }
        break;
    case 13:
        if (temp_r31 & 0x110) {
            fn_80110B50(arg0, 2);
            return;
        }
        if (temp_r31 & 8) {
            fn_80110B50(arg0, 3);
            return;
        }
        if (temp_r31 & 0x20) {
            fn_80110B50(arg0, 0xB);
            return;
        }
        break;
    case 25:
        if (temp_r31 & 0x120) {
            fn_80110B50(arg0, 0x1A);
            return;
        }
        if (temp_r31 & 8) {
            fn_80110B50(arg0, 0x1B);
            return;
        }
        if (temp_r31 & 0x10) {
            fn_80110B50(arg0, 0x14);
        }
        break;
    }
}

}
