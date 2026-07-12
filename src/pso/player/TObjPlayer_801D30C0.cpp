#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_if_flag8_set__10TObjPlayerFi(s32 arg0);
s32 tick_countdown_timer__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_8001BED8(void *, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(s32, M2C_UNK);

s32 update_if_flag8_set__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0xC, 8) != 0) {
        return tick_countdown_timer__10TObjPlayerFPv((u8 *)(arg0));
    }
    return 0;
}

s32 tick_countdown_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 < 0) {
        TObjPlayer__sub_8001BED8(arg0 + 0xC, 1);
        return 1;
    }
    return 0;
}

}
