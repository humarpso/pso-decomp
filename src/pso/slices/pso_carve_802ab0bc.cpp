#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_state_1f__14TBoss6PlotFalzFUi();

s32 is_active__14TBoss6PlotFalzFPv(void *arg0) {
    if ((is_state_1f__14TBoss6PlotFalzFUi() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000800)) {
        return 1;
    }
    return 0;
}

}
