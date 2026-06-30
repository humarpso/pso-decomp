#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneDD__sub_800B9F24();
M2C_UNK fn_803D8960(M2C_UNK, s32, s32, M2C_UNK);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
extern s32 lbl_805D5178;
extern s32 lbl_805D517C;
extern s32 lbl_805D5180;

void fn_800C25A0(void) {
    switch ((s32) lbl_805D5178) {
    case 1:
        fn_803D9214(0, lbl_805D517C);
        break;
    case 14:
        fn_803D9B2C();
        TObjEneDD__sub_800B9F24();
        fn_803D8960(0, lbl_805D5180, lbl_805D5180, 2);
        fn_803D9B78();
        break;
    }
    lbl_805D5178 += 1;
}

}
