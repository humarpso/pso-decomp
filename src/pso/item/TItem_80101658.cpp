#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItem__sub_80101658(void *arg0);
M2C_UNK TItemData__sub_8010E59C(M2C_UNK *, s32);
M2C_UNK TItem__sub_80101CFC(void *, M2C_UNK *);
s32 fn_80103548(M2C_UNK);

s32 TItem__sub_80101658(void *arg0) {
    M2C_UNK sp8[8];
    s32 temp_r3;

    TItem__sub_80101CFC(arg0, sp8);
    temp_r3 = fn_80103548(0);
    TItemData__sub_8010E59C(sp8, temp_r3);
    return temp_r3;
}

}
