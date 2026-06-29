#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_804219D0(M2C_UNK, M2C_UNK, s32);
extern s32 lbl_805D56F8;
extern s32 lbl_805D56FC;

void fn_80146294(void) {
    if (lbl_805D56F8 & 2) {
        fn_804219D0(0, 0, lbl_805D56FC);
        lbl_805D56F8 &= 0xFFFFFFFD;
    }
}

}
