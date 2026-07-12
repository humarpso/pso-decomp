#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemObject__vt42(void *arg0);

M2C_UNK update_pickup_flag__5TItemFi();

void TItemObject__vt42(void *arg0) {
    update_pickup_flag__5TItemFi();
    M2C_FIELD(arg0, s8 *, 0x101) = 1;
}

}
