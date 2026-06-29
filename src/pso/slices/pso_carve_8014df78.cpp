#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8014E16C(void *, s32);
M2C_UNK TNpcPlayer__sub_8014E33C(void *, M2C_UNK);
M2C_UNK fn_80150A34(void *, M2C_UNK);
s32 fn_80152980(s32);

void fn_8014DF78(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        if (fn_80152980(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            fn_8014E16C(arg0, arg1);
        } else {
            fn_80150A34(arg0, 0xF);
        }
        if (M2C_FIELD(arg0, s32 *, 0x80) & 0x200) {
            TNpcPlayer__sub_8014E33C(arg0, 0x13);
        }
        return;
    case 1:
        if (fn_80152980(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            fn_8014E16C(arg0, arg1);
            return;
        }
        break;
    case 2:
        if (fn_80152980(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            fn_8014E16C(arg0, arg1);
            return;
        }
        fn_80150A34(arg0, 0x10);
        return;
    case 3:
        if (fn_80152980(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            fn_8014E16C(arg0, arg1);
            return;
        }
        fn_80150A34(arg0, 0x11);
        break;
    }
}

}
