#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8007341C(u32);
s32 fn_80073DB8(u32);
M2C_UNK fn_80073DC4(void *, M2C_UNK);
M2C_UNK fn_80244A14(u32);
s32 fn_80265BF8(u32);

void TMedicalCenterSequence__sub_802166B8(void *arg0) {
    s32 temp_r3;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) && (fn_8007341C((u32) M2C_FIELD(arg0, u32 *, 0x30)) != 0)) {
        temp_r3 = fn_80265BF8(M2C_FIELD(arg0, u32 *, 0x30));
        if (temp_r3 == 0) {
            fn_80244A14(M2C_FIELD(arg0, u32 *, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
            fn_80073DC4(arg0, 4);
            return;
        }
        if (temp_r3 == 1) {
            fn_80244A14(M2C_FIELD(arg0, u32 *, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
            fn_80073DC4(arg0, 5);
            return;
        }
        goto block_6;
    }
block_6:
    if (((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) && (fn_80073DB8((u32) M2C_FIELD(arg0, u32 *, 0x30)) != 0)) {
        fn_80244A14(M2C_FIELD(arg0, u32 *, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        fn_80073DC4(arg0, 5);
    }
}

}
