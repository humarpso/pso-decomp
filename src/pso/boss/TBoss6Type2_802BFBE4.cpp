#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BFBE4(void* p);
s32 get_phase__11TBoss6Type2FPv(void *);
s16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4();
s32 TBoss6Type2__sub_802BB768();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BD76C(void *);
s32 TBoss6Type2__sub_802BD7EC(void *);
s32 TBoss6Type2__sub_802BDDF8(void *, s32);
s32 is_ready_to_attack__11TBoss6Type2FPv(void *);

void TBoss6Type2__sub_802BFBE4(void* p) { *(s32*)((char*)p + 0x45c) = 90; *(s32*)((char*)p + 0x460) = 90; }

}
