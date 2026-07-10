#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801B1390(s32 arg0);
s32 TObjPlayer__sub_801B102C(s32);
s32 TObjPlayer__sub_801B12A8();
M2C_UNK send_field_state_if_active__10TObjPlayerFii(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BF228(s32);

void TObjPlayer__sub_801B1390(s32 arg0) {
    if ((TObjPlayer__sub_801B12A8() == 0) && (TObjPlayer__sub_801B102C(arg0) == 0)) {
        TObjPlayer__sub_801BF228(arg0 + 0x384);
    }
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x42D08);
}

}
