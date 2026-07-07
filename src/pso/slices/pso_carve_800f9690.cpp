#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007C378(M2C_UNK *, void *, s32);
M2C_UNK fn_8007C48C(M2C_UNK *, s32);
M2C_UNK fn_8007C550(M2C_UNK *);
M2C_UNK fn_800F7DAC(void *, s32);

struct Sp8 { M2C_UNK8 data[240]; };
u32 fn_800F9690(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    struct Sp8 sp8;
    u32 v0 = (u32)M2C_FIELD(arg0, s32 *, 0);
    s32 v4 = M2C_FIELD(arg0, s32 *, 4);

    if (v0 > arg3) {
        return 0U;
    }
    fn_8007C550((M2C_UNK *)&sp8);
    fn_8007C48C((M2C_UNK *)&sp8, v4);
    fn_8007C378((M2C_UNK *)&sp8, arg0 + 8, arg1 - 8);
    fn_800F7DAC(arg0 + 8, arg2);
    return v0;
}

}
