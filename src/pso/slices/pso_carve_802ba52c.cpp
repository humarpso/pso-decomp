#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001EDB0(s32, M2C_UNK);
s32 fn_8001EDC4(s32, M2C_UNK);
M2C_UNK fn_802BA158();

void TBoss6Type2__sub_802BA52C(void *arg0) {
    fn_802BA158();
    M2C_FIELD(arg0, s32 *, 0x560) = fn_8001EDB0(M2C_FIELD(arg0, s32 *, 0x3FC), 0xB);
    M2C_FIELD(arg0, s32 *, 0x564) = fn_8001EDB0(M2C_FIELD(arg0, s32 *, 0x3FC), 0xA);
    M2C_FIELD(arg0, s32 *, 0x568) = fn_8001EDC4(M2C_FIELD(arg0, s32 *, 0x3FC), 0xB);
    M2C_FIELD(arg0, s32 *, 0x56C) = fn_8001EDC4(M2C_FIELD(arg0, s32 *, 0x3FC), 0xA);
}

}
