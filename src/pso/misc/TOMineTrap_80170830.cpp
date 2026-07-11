#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 trigger_explosion__10TOMineTrapFPv(void *arg0);
M2C_UNK TObjPlayer__sub_80154954(void *, s16 *);
s32 fn_80156A80(void*, s16 *, M2C_UNK);

extern f32 lbl_805DB85C;

f32 trigger_explosion__10TOMineTrapFPv(void *arg0) {
    s16 sp8;

    if (((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x4000U) && ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (fn_80156A80(arg0, &sp8, 1) != 0)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        sp8 = M2C_FIELD(arg0, s16 *, 0x326);
        TObjPlayer__sub_80154954(arg0, &sp8);
    }
    return lbl_805DB85C;
}

}
