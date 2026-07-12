#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void call_preserve_flag__8TItemMagFPvi(void *arg0, s32 arg1);
void TItemMag__sub_80110B50(s32 arg0, s32 arg1);
s32 TItemMag__sub_801117C0();
int fn_80100D9C(s32, s32);
M2C_UNK TItem__sub_80101CFC(s32, void *);

void call_preserve_flag__8TItemMagFPvi(void *arg0, s32 arg1) {
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 1);
    TItem__sub_80101CFC(arg1, arg0);
    M2C_FIELD(arg0, u8 *, 1) = temp_r31;
}

void TItemMag__sub_80110B50(s32 arg0, s32 arg1) {
    if (TItemMag__sub_801117C0() < 4) {
        fn_80100D9C(arg0, arg1);
    }
}

}
