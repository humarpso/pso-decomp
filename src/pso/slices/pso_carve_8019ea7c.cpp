#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80187D1C();
s32 fn_8019E4E8(void *);
u32 fn_8019E570(f32);
M2C_UNK fn_8019E5F8();
M2C_UNK fn_8019E6C0(void *, M2C_UNK);
M2C_UNK fn_8019E748(void *, s32);
M2C_UNK fn_8019EFF0(void *);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern s32 lbl_805D53A0;
extern s32 lbl_805D5C94;
extern s32 lbl_805D5C9C;

void fn_8019EA7C(u8 *arg0) {
    s16 temp_r0;
    s32 var_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x160) = 0x12C;
        fn_8022675C(0x40003205, arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) lbl_805D5C94;
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) lbl_805D5C9C;
        return;
    case 1:
        if (fn_8019E570(M2C_FIELD(arg0, f32 *, 0xAC)) != 0U) {
            fn_8019EFF0(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x170) == 0) {
                fn_8019E748(arg0, lbl_805D53A0);
                M2C_FIELD(arg0, s32 *, 0x170) = 1;
            }
        }
        if (fn_80187D1C() != 0) {
            M2C_FIELD(arg0, s32 *, 0x160) = (s32) (M2C_FIELD(arg0, s32 *, 0x160) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x160) <= 0) {
                var_r3 = 1;
            } else {
                var_r3 = fn_8019E4E8(arg0);
            }
            if (var_r3 != 0) {
                fn_8019E6C0(arg0, 2);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        break;
    case -1:
        fn_8019E5F8();
        break;
    }
}

}
