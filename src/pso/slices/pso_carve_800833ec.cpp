#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80068EF0();
M2C_UNK fn_80069024();
M2C_UNK fn_80084038(s32, M2C_UNK, f32);
M2C_UNK fn_8008453C();
M2C_UNK fn_80084764();
s32 fn_80084774();
M2C_UNK fn_80084780();
M2C_UNK fn_80084790();
s32 fn_800847A8();
s32 fn_800847CC();
M2C_UNK fn_80141404();
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
extern u8 lbl_805D2910;
extern f32 lbl_805D93D0;

void fn_800833EC(void *arg0) {
    if (!(fn_800847CC() & 4)) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) & 1) {
            if (fn_800847A8() == 1) {
                fn_80069024();
                fn_801E2EFC();
                fn_80084038(lbl_805D2910 << 0x18, 0, lbl_805D93D0);
                fn_801E2F20();
                fn_80068EF0();
                fn_80084790();
            }
        } else {
            fn_80084780();
            fn_8008453C();
        }
        if (fn_80084774() != 0) {
            fn_80084764();
            fn_80141404();
        }
    }
}

}
