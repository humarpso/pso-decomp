#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801FDE94(u32, s32, u32, s32);
M2C_UNK fn_801FE380(u32, s32, u32, s32);
M2C_UNK fn_801FF298();
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F5C;

s32 fn_801FDC64(s32 arg0, s32 arg1) {
    s32 result;
    if ((arg0 >= 7) || (arg1 >= 7)) {
        return 0;
    }
    if ((u32) lbl_805D5F58 == 0U) {
        goto return_zero;
    }
    if ((u32) lbl_805D5F5C == 0U) {
        goto return_zero;
    }
    if (fn_801FDE94(lbl_805D5F5C, arg0, lbl_805D5F58, arg1) == 0) {
        goto return_zero;
    }
    fn_801FF298();
    fn_801FE380(lbl_805D5F5C, arg0, lbl_805D5F58, arg1);
    return 1;
return_zero:
    return 0;
}

}
