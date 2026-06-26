#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
u32 fn_80154CB4(u16);
M2C_UNK fn_802A445C(void *, M2C_UNK);
M2C_UNK TObjEneMe1GiGueMissile__sub_802A4628(void *);
M2C_UNK fn_802A4668(void *);
M2C_UNK fn_802A4694(void *);

void fn_802A4C44(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = fn_80154CB4(M2C_FIELD(arg0, u16 *, 0x34));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) == 1) {
        fn_802A4694(arg0);
        TObjEneMe1GiGueMissile__sub_802A4628(arg0);
        fn_802A445C(arg0, 1);
        return;
    }
    fn_802A4668(arg0);
}

}
