#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803D898C(s32);
extern s32 lbl_805D6F30;
extern s32 lbl_805D6F34;
extern s32 lbl_805D6F38;
extern M2C_UNK (*lbl_805D6F3C)(s32);

void fn_8035A630(s32 arg0) {
    if ((s32) lbl_805D6F30 < (s32) lbl_805D6F34) {
        fn_803D898C(lbl_805D6F38 + (lbl_805D6F30 * 0x30));
    }
    if (((M2C_UNK (*)(s32)) lbl_805D6F3C) != NULL) {
        lbl_805D6F3C(arg0);
    }
    lbl_805D6F30 += 1;
}

}
