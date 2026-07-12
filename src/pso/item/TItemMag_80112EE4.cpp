#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void transfer_energy__8TItemMagFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8002AEB8(s32, s32);
s32 TItemMag__sub_80113F00(s32);

void transfer_energy__8TItemMagFPv(void *arg0) {
    u32 temp_r3;
    s32 temp_r4;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0xF0);
    if ((temp_r3 != 0U) && (TItemMag__sub_80113F00(temp_r3 + 0x644) == 0)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x1D0) - M2C_FIELD(arg0, s32 *, 0x1CC);
        if (temp_r4 > 0) {
            TObjPlayer__sub_8002AEB8(M2C_FIELD(arg0, u32 *, 0xF0) + 0x644, temp_r4);
        }
    }
}

}
