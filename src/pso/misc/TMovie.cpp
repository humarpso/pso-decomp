#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TMovie__sub_80143D9C(s32 arg0, s16 arg1);

M2C_UNK __dl__FPv(s32);
M2C_UNK fn_80143F6C();
M2C_UNK fn_801442D4(s32);
M2C_UNK fn_8022743C();

s32 TMovie__sub_80143D9C(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_80143F6C();
        fn_801442D4(arg0);
        fn_8022743C();
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
