#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void set_effect_target_position__8TObjFishFPvPvPv(void *, void *, void *);
void TObjFish__sub_802ECB38(u8 *arg0);
}

extern "C" {

void TObjFish__sub_802ECB38(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x88);
    set_effect_target_position__8TObjFishFPvPvPv(arg0, (void *)0x3A312, arg0 + 0x38);
}

}
