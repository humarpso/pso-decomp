#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_by_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK set_flag_1_at_c__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_801AFCCC();
M2C_UNK update_if_flag8_set__10TObjPlayerFi(void *);
M2C_UNK tick_countdown_timer__10TObjPlayerFPv(void *);

void update_by_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r3;

    temp_r3 = TObjPlayer__sub_801AFCCC();
    switch (temp_r3) {
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            set_flag_1_at_c__10TObjPlayerFPv(arg0 + 0x7CC);
        }
        return;
    case 8:
        update_if_flag8_set__10TObjPlayerFi(arg0 + 0x7CC);
        return;
    default:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            tick_countdown_timer__10TObjPlayerFPv(arg0 + 0x7CC);
        }
        break;
    }
}

}
