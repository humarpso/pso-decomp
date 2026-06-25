#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80087350(s32, M2C_UNK);

void fn_80358490(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 == 0) {
        fn_80087350(arg0 + 0x2FC, 0xC6);
        fn_80087350(arg0 + 0x2FC, 0xC9);
    }
    if (arg3 == 1) {
        fn_80087350(arg2, 0x1C5);
        fn_80087350(arg2, 0x1C8);
    }
}

}
