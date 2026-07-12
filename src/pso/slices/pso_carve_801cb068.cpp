#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_8001053C(s32);
M2C_UNK apply_velocity__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801B5DDC(s32);
u32 TObjPlayer__sub_801B5EA4(s32);
M2C_UNK TObjPlayer__sub_801B5FB0();

void update_move_state__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801B5FB0();
    if (TObjPlayer__sub_801B5DDC(arg0) != 0) {
        TObjPlayer__sub_8001053C(arg0);
    }
    if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

}
