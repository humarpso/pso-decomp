#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOVS2Wall01__vt4(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK init__11TOVS2Wall01Fi();

void TOVS2Wall01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    s32 temp_r0;

    if (arg1 != NULL) {
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) *arg1;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 1) {
        if ((temp_r0 >= 1) || (temp_r0 < 0)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x33C) = 0;
        if (arg2 != 0) {
            init__11TOVS2Wall01Fi();
        }
    }
}

}
