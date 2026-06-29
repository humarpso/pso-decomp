#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801315D4();
extern s32 lbl_805D552C;
extern s32 lbl_805D5530;
extern s32 lbl_805D5534;

s32 fn_80131648(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        return 0;
    }
    lbl_805D5530 = arg1;
    lbl_805D552C = 0;
    lbl_805D5534 = 0;
    fn_801315D4();
    return lbl_805D5534;
}

}
