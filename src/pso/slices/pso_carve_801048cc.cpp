#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8011C8BC(u8, s16 *, s16 *);

u8 fn_801048CC(u8 arg0) {
    s16 spC;
    s16 spA;
    s16 sp8;
    int temp_r31;

    temp_r31 = (u8) arg0 - 1;
    fn_8011C8BC((u8) temp_r31, &spC, &sp8);
    fn_8011C8BC(arg0, &spA, &sp8);
    if ((spC != -1) && (spA != -1)) {
        if (spC == spA) {
            return (u8) temp_r31;
        }
        return arg0;
    }
    return arg0;
}

}
