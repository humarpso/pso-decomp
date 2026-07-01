#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80351E38();
extern s32 lbl_805D65EC;

u8 fn_8029D504(void *arg0) {
    s16 temp_r0;

    if ((s32) lbl_805D65EC == 0) {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x90);
        switch (temp_r0) {
        case 0:
            if (fn_80351E38() == 0) {
                M2C_FIELD(arg0, s16 *, 0x90) = 2;
                M2C_FIELD(arg0, s16 *, 0x92) = 0x28;
            }
            goto Lend;
        case 2:
            M2C_FIELD(arg0, s16 *, 0x92) = (s16) (M2C_FIELD(arg0, s16 *, 0x92) - 1);
            if (M2C_FIELD(arg0, s16 *, 0x92) <= 0) {
                M2C_FIELD(arg0, s16 *, 0x90) = 3;
            }
            goto Lend;
        case 3:
        default:
            if (fn_80351E38() != 0) {
                M2C_FIELD(arg0, s16 *, 0x90) = 0;
            }
        }
Lend:
        return (u8) (M2C_FIELD(arg0, s16 *, 0x90) == 3);
    }
    return 1U;
}

}
