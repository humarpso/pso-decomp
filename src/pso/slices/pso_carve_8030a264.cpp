#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80087278(s32, s32, M2C_UNK);
M2C_UNK fn_80087638(s32, s32);
u32 TPhotonMylla__sub_80154CB4(s32);

s32 fn_8030A264(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    u32 temp_r3_2;

    temp_r3_2 = TPhotonMylla__sub_80154CB4(arg1);
    if (temp_r3_2 == 0U) {
        return 0;
    }
    temp_r3 = fn_80087278(temp_r3_2 + 0x74, arg2, 0x50);
    if (temp_r3 != 0) {
        fn_80087638(temp_r3, arg1);
    }
    return temp_r3;
}

}
