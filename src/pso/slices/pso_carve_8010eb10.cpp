#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TItemData__sub_8010CD98(void *);
s32 fn_8010EBD8();
s32 TObjPlayer__sub_8011C55C(u8);

int fn_8010EB10(void *arg0) {
    s16 temp_r3;
    u8 temp_b;
    int var_r31;

    var_r31 = fn_8010EBD8();
    switch ((s32) (u8) M2C_FIELD(arg0, u8 *, 0)) {
    case 0:
        if ((u8) var_r31 < 9U) {
            temp_b = M2C_FIELD(arg0, u8 *, 4);
            if (!(temp_b & 0x80)) {
                var_r31 += TObjPlayer__sub_8011C55C(temp_b);
            }
        } else if (M2C_FIELD(arg0, u8 *, 4) & 0x80) {
            var_r31 = 0;
        }
        break;
    case 1:
        if ((u8) M2C_FIELD(arg0, u8 *, 1) == 3) {
            temp_r3 = TItemData__sub_8010CD98(arg0);
            if (temp_r3 < 0) {
                var_r31 -= 1;
            } else if (temp_r3 > 0) {
                var_r31 += 1;
            }
        }
        break;
    }
    if ((u8) var_r31 > 0xCU) {
        var_r31 = 0xC;
    }
    return var_r31;
}

}
