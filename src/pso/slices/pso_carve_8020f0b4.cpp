#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80073DC4(M2C_UNK, M2C_UNK);
extern s32 lbl_805D6164;
extern s32 lbl_805D6168;

void fn_8020F0B4(u32 arg0) {
    lbl_805D6164 = 0x46;
    lbl_805D6168 = 2;
    if (arg0 != 0U) {
        fn_80073DC4(arg0, 0x10);
    }
}

}
