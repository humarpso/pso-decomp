#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80142384(s32, s32);
s32 fn_80142B08(void *);
M2C_UNK fn_801CE218(void *);
M2C_UNK fn_801CECE4(void *);
M2C_UNK fn_801CED64(void *);
M2C_UNK fn_801CEE40(void *);
M2C_UNK fn_801D2620(void *);
M2C_UNK fn_801D2630(void *);
M2C_UNK TObjPlayer__sub_801D2DA4(void *, s32);
s32 TObjPlayer__sub_801D2DAC(void *);

void fn_801CEF38(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r31;

    M2C_FIELD(arg0, s32 *, 0x60) = fn_80142384(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3F0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        fn_801CE218(arg0);
    case 1:
        if (fn_80142B08(arg0) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            fn_801D2620(arg0);
        }
    case 4:
        return;
    case 2:
        temp_r31 = TObjPlayer__sub_801D2DAC(arg0 + 0x7CC) - 1;
        if (temp_r31 < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            fn_801D2630(arg0);
        }
        TObjPlayer__sub_801D2DA4(arg0 + 0x7CC, temp_r31);
        return;
    case 3:
        fn_801CEE40(arg0);
        fn_801CED64(arg0);
        fn_801CECE4(arg0);
        break;
    }
}

}
