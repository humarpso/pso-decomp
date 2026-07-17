#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TBoss1Dragon__sub_800291B4(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x67C) >= 0x32);
}

s32 is_hp_low__12TBoss1DragonFPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x67C) < 0x32;
}

void set_hp_phase_value__12TBoss1DragonFPvi(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x67C) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x67C) = 0x32;
}

}
