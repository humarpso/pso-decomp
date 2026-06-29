#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019690();
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E1D90(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern u32 lbl_805D4EE8;

void fn_80083058(void) {
    if ((fn_80019690() == 0) && ((u32) lbl_805D4EE8 != 0U)) {
        fn_803DA798(lbl_805D4EE8 + 0x1C);
        fn_803E1D90(0, 0, 0, 0);
    }
}

}
