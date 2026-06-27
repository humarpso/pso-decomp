#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 obj_getField1c();
u32 fn_80040B28(s32);
M2C_UNK fn_80154D7C();
M2C_UNK fn_8015610C(void *);
M2C_UNK fn_801A720C(u16, M2C_UNK, M2C_UNK, f32);

void fn_801ADC94(void *arg0) {
    s32 var_r31;

    fn_80154D7C();
    fn_8015610C(arg0);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x100000) {
        var_r31 = 0;
        do {
            if (fn_80040B28(var_r31) != 0U) {
                fn_801A720C((u16) obj_getField1c(), 2, 0, M2C_FIELD(arg0, f32 *, 0x150));
            }
            var_r31 += 1;
        } while (var_r31 < 0x10);
    }
}

}
