#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 tl_05;

void fn_8011E738(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r12)(s32, void *, s32, s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, void *, s32, s32), 0x1EC);
    if (temp_r12 != NULL) {
        temp_r12(tl_05, arg0, arg1, arg2);
    }
}

}
