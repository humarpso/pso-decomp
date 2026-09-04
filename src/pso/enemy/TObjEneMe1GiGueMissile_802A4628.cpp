#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_lifetime__22TObjEneMe1GiGueMissileFPv(void *arg0);

M2C_UNK queue_destruction__7TObjectFv();

void update_lifetime__22TObjEneMe1GiGueMissileFPv(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
    if (temp_f1 > M2C_FIELD(arg0, f32 *, 0x20)) {
        queue_destruction__7TObjectFv();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0xAC));
}

}
