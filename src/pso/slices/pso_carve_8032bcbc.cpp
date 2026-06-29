#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8032BC94(u32, s32);
s32 fn_8032BE48(u32);
extern u32 lbl_805D6CB8;

s32 fn_8032BCBC(s32 arg0) {
    if ((u32) lbl_805D6CB8 != 0U) {
        if (fn_8032BE48(lbl_805D6CB8) != 0) {
            return 0;
        }
        fn_8032BC94(lbl_805D6CB8, arg0);
        return 1;
    }
    return 0;
}

}
