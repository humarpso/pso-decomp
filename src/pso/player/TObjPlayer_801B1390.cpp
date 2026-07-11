#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_field_state__10TObjPlayerFi(s32 arg0);
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 test_flag_2000000__10TObjPlayerFPv();
M2C_UNK send_field_state_if_active__10TObjPlayerFii(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BF228(s32);

void send_field_state__10TObjPlayerFi(s32 arg0) {
    if ((test_flag_2000000__10TObjPlayerFPv() == 0) && (check_flag_800000__10TObjPlayerFPv(arg0) == 0)) {
        TObjPlayer__sub_801BF228(arg0 + 0x384);
    }
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x42D08);
}

}
