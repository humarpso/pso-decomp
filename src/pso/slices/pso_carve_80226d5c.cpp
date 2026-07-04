#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802260F0();
M2C_UNK fn_803C9CBC(s32);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D6330;

void fn_80226D5C(void) {
    if ((s32) lbl_805D6330 != 0) {
        fn_803C9CBC(M2C_FIELD(lbl_804CB850, s32 *, 4));
        lbl_805D6330 = 0;
        fn_802260F0();
    }
}

}
