#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Bit__sub_800ECFE4(void *arg0, s32 arg1);

M2C_UNK fn_800BBA04(void *, M2C_UNK);
M2C_UNK fn_800BBA18(void *, M2C_UNK);
M2C_UNK fn_800ED4BC();
M2C_UNK fn_800ED578(void *);

void TObjEneRe4Bit__sub_800ECFE4(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        fn_800BBA04(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFEFFF);
        break;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        if (temp_r4 & 1) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFE);
            fn_800BBA18(arg0, 2);
            break;
        }
        if (temp_r4 & 2) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFD);
            fn_800BBA18(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        fn_800ED4BC();
        fn_800ED578(arg0);
        break;
    }
}

}
