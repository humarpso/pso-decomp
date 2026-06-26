#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800196EC();
M2C_UNK fn_8020C07C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8020C9C8(M2C_UNK, M2C_UNK, M2C_UNK);

void fn_80040C7C(s32 arg0) {
    switch (arg0) {
    case 0:
        fn_8020C9C8(fn_800196EC(), 0, 1);
        fn_8020C9C8(fn_800196EC(), 0, 3);
        return;
    case 1:
        fn_8020C9C8(fn_800196EC(), 0, 3);
    case 3:
        fn_8020C9C8(fn_800196EC(), 0, 2);
        fn_8020C07C(fn_800196EC(), 0, 2, -0x11, 0);
        return;
    case 2:
        fn_8020C9C8(fn_800196EC(), 0, 3);
    case 4:
        fn_8020C9C8(fn_800196EC(), 0, 2);
        return;
    case 5:
        fn_8020C9C8(fn_800196EC(), 0, 1);
        fn_8020C9C8(fn_800196EC(), 0, 3);
        return;
    }
}

}
