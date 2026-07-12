#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BB7C0(void *);
u16 TBoss6Type2__sub_802BB694();
s32 update_action_state__11TBoss6Type2FPv(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
void TBoss6Type2__sub_802BF904(void* p);

int TBoss6Type2__sub_802BF558(void) { return 0; }

}
