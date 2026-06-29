#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneDD__sub_800B9F24();
M2C_UNK fn_801E2EFC();
M2C_UNK fn_803D8934(M2C_UNK, s32, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
extern s32 lbl_805D6B08;
extern s32 lbl_805D6B0C;

void TObjEneRecon__sub_8031C124(void) {
    switch ((s32) lbl_805D6B08) {
    case 0:
        fn_803D9B2C();
        TObjEneDD__sub_800B9F24();
        fn_803D8934(0, lbl_805D6B0C, lbl_805D6B0C);
        fn_803D9B78();
        break;
    case 10:
        fn_801E2EFC();
        break;
    }
    lbl_805D6B08 += 1;
}

}
