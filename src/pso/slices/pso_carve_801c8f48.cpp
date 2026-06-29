#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001053C(void *);
M2C_UNK fn_80154764(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801B1CE8(void *, M2C_UNK);
M2C_UNK fn_801BA650(void *, M2C_UNK, s32);
s32 fn_801D0458(void *);
M2C_UNK fn_801D0BC0(void *, s16, M2C_UNK);

void fn_801C8F48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x14;
    fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    fn_8001053C(arg0);
    fn_80154764(arg0, 0, 1);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    TObjPlayer__sub_801B1CE8(arg0, 0x40003205);
    fn_801BA650(arg0, 0x14, fn_801D0458(arg0));
}

}
