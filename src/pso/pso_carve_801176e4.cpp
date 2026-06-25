#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019704(s32);
s32 fn_80115D84(void *);
M2C_UNK fn_8011F710(s32, s32);

void fn_801176E4(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80019704(M2C_FIELD(arg0, s32 *, 0xF0));
    if (temp_r3 != 0) {
        fn_8011F710(temp_r3, fn_80115D84(arg0));
    }
}

}
