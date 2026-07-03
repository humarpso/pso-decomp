#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
s32 is_split_screen();
s32 TBoss6PlotFalz__sub_802AAC74(void);
void TBoss6PlotFalz__sub_802AAC98(void* p);
int TBoss6PlotFalz__sub_802AACEC(void);

s32 TBoss6PlotFalz__sub_802AAC74(void) { return 0; }

}
