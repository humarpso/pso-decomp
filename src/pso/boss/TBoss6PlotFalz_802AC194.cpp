#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_active_flag__14TBoss6PlotFalzFv(void);
s32 get_main_phase();
s32 is_split_screen();

extern s32 lbl_805D66F8;

void update_active_flag__14TBoss6PlotFalzFv(void) {
    lbl_805D66F8 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        lbl_805D66F8 = 1;
    }
}

}
