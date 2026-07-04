#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8007CFCC(M2C_UNK, M2C_UNK);
s32 fn_802432CC(M2C_UNK, M2C_UNK *, s32);
extern M2C_UNK lbl_80438A08[];
extern s16 lbl_805D4E8A;
extern s32 lbl_805D4E90;

s32 fn_8007CC68(void) {
    if (fn_8007CFCC(1, 0) == 0) {
        return 0;
    }
    if (fn_802432CC(1, lbl_80438A08, lbl_805D4E90) != 0) {
        return 0;
    }
    lbl_805D4E8A = 2;
    return 1;
}

}
