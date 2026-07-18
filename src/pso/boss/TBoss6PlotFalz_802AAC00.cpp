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
int is_ready__14TBoss6PlotFalzFv(void);

s32 get_next_point__14TBoss6PlotFalzFPvPvPv(void *arg0, s16 *arg1, s16 *arg2) {
    if (TBoss6PlotFalz__sub_802AAC74() < 1) {
        return 0;
    }
    *arg1 = M2C_FIELD(arg0, s16 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x3C8);
    *arg2 = M2C_FIELD(arg0, u16 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x3C8);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) + 1);
    return 1;
}

}
