#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BA20C(void* p, void* q);
int TBoss6Type2__sub_802BA394(void* p);
int TBoss6PlotFalz__sub_802AAFCC(void*);

int TBoss6Type2__sub_802BA158(void) { return 0; }
int TBoss6Type2__sub_802BA180(void) { return 0; }

}
