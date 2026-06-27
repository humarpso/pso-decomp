#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800ED428(u32, M2C_UNK);
u32 TPhotonMylla__sub_80154CB4(u16);

void fn_800EF648(void *arg0) {
    u32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) == 0) {
        temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            fn_800ED428(temp_r3, 0);
        }
    } else {
        temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4));
        if (temp_r3 != 0U) {
            fn_800ED428(temp_r3, 1);
        }
    }
}

}
