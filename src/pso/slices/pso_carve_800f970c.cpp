#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007C378(M2C_UNK *, void *, s32);
M2C_UNK fn_8007C48C(M2C_UNK *, s32);
M2C_UNK fn_8007C550(M2C_UNK *);
s32 fn_8007EBFC(s32);
M2C_UNK fn_800F7DAC(void *, s32);

struct Sp8 { M2C_UNK8 data[240]; };
s32 fn_800F970C(u8 *arg0, s32 arg1, s32 *arg2) {
    struct Sp8 sp8;
    s32 v0 = M2C_FIELD(arg0, s32 *, 0);
    s32 v4 = M2C_FIELD(arg0, s32 *, 4);
    s32 ret;

    ret = fn_8007EBFC(v0);
    if (ret == 0) {
        return 0;
    }
    fn_8007C550((M2C_UNK *)&sp8);
    fn_8007C48C((M2C_UNK *)&sp8, v4);
    fn_8007C378((M2C_UNK *)&sp8, arg0 + 8, arg1 - 8);
    fn_800F7DAC(arg0 + 8, ret);
    if (arg2 != NULL) {
        *arg2 = v0;
    }
    return ret;
}

}
