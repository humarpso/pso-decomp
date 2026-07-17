#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state__15TBoss3VoloptP01FPv(void *arg0);

extern const f32 lbl_805D8770;

void reset_state__15TBoss3VoloptP01FPv(void *arg0) {
    void *temp_r3;

    M2C_FIELD(arg0, s8 *, 0x390) = 0;
    M2C_FIELD(arg0, f32 *, 0x38C) = (f32) lbl_805D8770;
    temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
}

}
