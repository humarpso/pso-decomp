#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 fn_801AFCCC();
M2C_UNK TObjPlayer__sub_801D2D6C(void *);
M2C_UNK fn_801D30C0(void *);
M2C_UNK fn_801D310C(void *);

void TObjPlayer__sub_801CECE4(u8 *arg0) {
    s16 temp_r3;

    temp_r3 = fn_801AFCCC();
    switch (temp_r3) {
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            TObjPlayer__sub_801D2D6C(arg0 + 0x7CC);
        }
        return;
    case 8:
        fn_801D30C0(arg0 + 0x7CC);
        return;
    default:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            fn_801D310C(arg0 + 0x7CC);
        }
        break;
    }
}

}
