#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemMag__sub_801125DC(void *arg0, s8 arg1);
M2C_UNK TItemMag__sub_80112E20(void *, u8);
M2C_UNK TOBoss4Rock__sub_8039C880();
s32 TItemMag__sub_80110FD8(void *, M2C_UNK);

void TItemMag__sub_801125DC(void *arg0, s8 arg1) {
    TOBoss4Rock__sub_8039C880();
    if (arg1 & 0x40) {
        if (TItemMag__sub_80110FD8(arg0, 0) != 0) {
            TItemMag__sub_80112E20(arg0, M2C_FIELD(arg0, u8 *, 0x1BD));
        }
    } else if (arg1 & 1) {
        if (TItemMag__sub_80110FD8(arg0, 1) != 0) {
            TItemMag__sub_80112E20(arg0, M2C_FIELD(arg0, u8 *, 0x1BE));
        }
    } else if (arg1 & 2) {
        if (TItemMag__sub_80110FD8(arg0, 2) != 0) {
            TItemMag__sub_80112E20(arg0, M2C_FIELD(arg0, u8 *, 0x1BF));
        }
    } else if (arg1 & 0x80) {
        if (TItemMag__sub_80110FD8(arg0, 3) != 0) {
            TItemMag__sub_80112E20(arg0, M2C_FIELD(arg0, u8 *, 0x1C0));
        }
    } else {
        if (arg1 & 0x20) {
            TItemMag__sub_80112E20(arg0, 2U);
            return;
        }
        if (arg1 & 0x10) {
            TItemMag__sub_80112E20(arg0, 3U);
            return;
        }
        if (arg1 & 4) {
            TItemMag__sub_80112E20(arg0, 5U);
            return;
        }
        if (arg1 & 8) {
            TItemMag__sub_80112E20(arg0, 4U);
        }
    }
}

}
