#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_80292FB8();
M2C_UNK fn_80299E84(void *);
M2C_UNK fn_80299F44(void *);
M2C_UNK fn_8029A038(void *);
M2C_UNK fn_8029A0D8();

void fn_8029A184(void *arg0) {
    s32 temp_r0;

    fn_8029A0D8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    if (temp_r0 <= 0) {
        fn_80292FB8();
        fn_8029A038(arg0);
        fn_80299F44(arg0);
        fn_80299E84(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
