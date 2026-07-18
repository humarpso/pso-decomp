#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void flush_dropped_meseta__10TObjPlayerFPv(u8 *arg0);
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803DF578(void *, s32, M2C_UNK);
s32 toggle_flag_9__10TObjPlayerFPv();

void flush_dropped_meseta__10TObjPlayerFPv(u8 *arg0) {
    if ((toggle_flag_9__10TObjPlayerFPv() == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 1)) {
        init_xyz_limits__10TObjPlayerFv();
        TObjPlayer__sub_803DF578(arg0 + 0x20, M2C_FIELD(arg0, s32 *, 0x1C) * 2, 1);
    }
}

}
