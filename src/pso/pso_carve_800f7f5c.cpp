#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800F7FB8();
M2C_UNK fn_800F8024();
M2C_UNK fn_800F80D8();

void fn_800F7F5C(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 1:
        fn_800F80D8();
        return;
    case 2:
        fn_800F8024();
        return;
    case 3:
        fn_800F7FB8();
    case 0:
        return;
    }
}

}
