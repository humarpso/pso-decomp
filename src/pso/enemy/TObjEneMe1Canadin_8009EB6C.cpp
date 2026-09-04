#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position_with_offset__17TObjEneMe1CanadinFPv(void *arg0);
M2C_UNK TObjEneMe1Canadin__sub_8009EB98(f32);

void update_position_with_offset__17TObjEneMe1CanadinFPv(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB98(M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3E8));
}

}
