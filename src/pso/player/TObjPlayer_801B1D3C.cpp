#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjPlayer__sub_801B1D3C(void *arg0);
s32 TObjPlayer__sub_801BE690();

extern u32 tl_03;

u8 TObjPlayer__sub_801B1D3C(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((TObjPlayer__sub_801BE690() == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x10) == (u32) tl_03)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
