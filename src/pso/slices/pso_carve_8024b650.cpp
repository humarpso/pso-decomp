#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TWindowCtrl__sub_8024C5FC();
M2C_UNK fn_8024D87C(u32, s32, s32);

void fn_8024B650(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;

    temp_r3 = TWindowCtrl__sub_8024C5FC();
    if (temp_r3 != 0U) {
        fn_8024D87C(temp_r3, arg1, arg2 | 0xE);
    }
}

}
