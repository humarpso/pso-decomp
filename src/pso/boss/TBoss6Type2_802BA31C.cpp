#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TBoss6Type2__sub_802BA180(void);
int TBoss6Type2__sub_802BA220(void* a0 = 0, void* a1 = 0);

void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
int TBoss6Type2__sub_802BA394(void* p);
int TBoss6PlotFalz__sub_802AAFCC(void*);

s32 check_target__11TBoss6Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x464) == 0xFFFF) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF) {
        TBoss6Type2__sub_802BA180();
    }
    if (TBoss6Type2__sub_802BA220((void*)(arg0), (void*)(M2C_FIELD(arg0, u16 *, 0x464))) == 0) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
        return 0;
    }
    return 1;
}
int TBoss6Type2__sub_802BA394(void* p) { return TBoss6PlotFalz__sub_802AAFCC(p); }

}
