#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p);
void TObjEneMe1Canadin__sub_8009E6B0(void);
void TObjEneMe1Canadin__vt105(void);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

int TObjEneMe1Canadin__vt106(void) { return 0; }

}
