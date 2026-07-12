#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802ABADC();
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
int TBoss6PlotFalz__sub_802AACEC(void*);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);
void TBoss6PlotFalz__sub_802B0770(void* p);
void TBoss6PlotFalz__sub_802B08F0(void* p);
int TBoss6PlotFalz__sub_802ABCDC(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
void TBoss6PlotFalz__sub_802B085C(void* p);
void TBoss6PlotFalz__sub_802B0808(void);

int TBoss6PlotFalz__sub_802B07B0(void) { return 0; }

}
