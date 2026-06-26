#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 obj_getS16_32C(s32);
M2C_UNK fn_80112BC4(void *, M2C_UNK);
M2C_UNK fn_80112E20(void *, M2C_UNK);

void TItemMag__sub_801131E4(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if (temp_r0 == 0x5A) {
        if (obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0)) > 0) {
            fn_80112BC4(arg0, 0xF);
        }
    } else if (temp_r0 > 0x5A) {
        fn_80112E20(arg0, 1);
    }
}

}
