#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BB768();
s32 TBoss6Type2__sub_802B9930(void *);
s16 TBoss6Type2__sub_802BA394(void *);
s32 is_ready_to_attack__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4();
s32 TBoss6Type2__sub_802BD76C(void *);
s32 TBoss6Type2__sub_802BD7EC(void *);
s32 TBoss6Type2__sub_802BDDF8(void *, s32);
void fn_802BFBE4(void* p);

int TBoss6Type2__sub_802BFA1C(void) { return 0; }

}
