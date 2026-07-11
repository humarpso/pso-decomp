#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_effect_if_flagged__14TObjEnePanarmsFPv(void *arg0);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, s32);

void apply_effect_if_flagged__14TObjEnePanarmsFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98(arg0, M2C_FIELD(arg0, s32 *, 0x374));
    }
}

}
