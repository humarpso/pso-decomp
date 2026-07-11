#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_feed_delta__8TItemMagFPv(u8 *arg0);
M2C_UNK fn_80113F38(void *, M2C_UNK);
u32 fn_80113F58(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801C5D14(s32, s32);

void apply_feed_delta__8TItemMagFPv(u8 *arg0) {
    s32 temp_r4;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (fn_80113F58(arg0 + 0x1D4, 0x100) != 0U)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x1D0) - M2C_FIELD(arg0, s32 *, 0x1CC);
        if (temp_r4 > 0) {
            TObjPlayer__sub_801C5D14(M2C_FIELD(arg0, u32 *, 0xF0) + 0x644, temp_r4);
        }
        fn_80113F38(arg0 + 0x1D4, 0x100);
    }
}

}
