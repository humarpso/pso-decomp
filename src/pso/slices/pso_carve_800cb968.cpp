#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 copy_target_state__14TObjEnePanarmsFPvPv();
s32 TOKeyMachine01__sub_802034A8();
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
void TObjEneMe1Gee__vt105(void);
int TObjEneMe1Gee__vt102(void* p);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

int TObjEneMe1Gee__sub_800CB968(void) { return 0; }

}
