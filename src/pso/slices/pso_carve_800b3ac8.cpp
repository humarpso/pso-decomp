#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_v2_mode__9TObjEneDDFv();
s32 TBoss8Dragon__sub_800BB780(void *);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int VecCopy__FP3VecPC3Vec(void*, void*);
int TObjEneDD__sub_800BAAE4(void*, void*, void*);
void TObjEneBm3FlyNest__sub_800B3BE8(void);
void TObjEneBm3FlyNest__sub_800B3CBC(void);

int TObjEneBm3FlyNest__sub_800B3AC8(void) { return 0; }
int TObjEneBm3FlyNest__sub_800B3ADC(void) { return 0; }

}
