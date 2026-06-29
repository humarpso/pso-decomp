#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8024EA50(u32, s32, s32, s32, s32);
extern u32 lbl_805D6420;

u32 fn_8024EDA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((u32) lbl_805D6420 == 0U) {
        return 0U;
    }
    fn_8024EA50(lbl_805D6420, arg0, arg1, arg2, arg3);
    return lbl_805D6420;
}

}
