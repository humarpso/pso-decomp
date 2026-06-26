#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800BBA04(void *, M2C_UNK);
M2C_UNK fn_800BBA18(void *, M2C_UNK);

void TObjEneDellBiter__sub_8030535C(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        fn_800BBA04(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        return;
    case 3:
        fn_800BBA18(arg0, 1);
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
    case 5:
        return;
    }
}

}
