#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BA4D8(void *arg0);
M2C_UNK TBoss6Type2__sub_802BA158(void *);
M2C_UNK TBoss6Type2__sub_802BA180();

void TBoss6Type2__sub_802BA4D8(void *arg0) {
    if ((u16) M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF) {
        TBoss6Type2__sub_802BA180();
    }
    TBoss6Type2__sub_802BA158(arg0);
    M2C_FIELD(arg0, s32 *, 0x560) = 0;
    M2C_FIELD(arg0, s32 *, 0x564) = 0;
    M2C_FIELD(arg0, s32 *, 0x568) = 0;
    M2C_FIELD(arg0, s32 *, 0x56C) = 0;
}

}
