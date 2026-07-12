#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TItemData__sub_801146A4(void *arg0);
s16 TItemData__sub_801146C0(void *arg0);
s16 TItemData__sub_801146DC(void *arg0);
s16 TItemData__sub_801146F8(void *arg0);

s16 TItemData__sub_801146A4(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0xA) % 100);
}

s16 TItemData__sub_801146C0(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 8) % 100);
}

s16 TItemData__sub_801146DC(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 6) % 100);
}

s16 TItemData__sub_801146F8(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 4) % 100);
}

}
