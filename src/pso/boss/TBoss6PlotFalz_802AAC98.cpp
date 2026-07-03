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

void TBoss6PlotFalz__sub_802AAC98(void* p) { *(s32*)((char*)p + 0x3c8) = 1; }
u8 TBoss6PlotFalz__sub_802AACA4(void) {
    s32 var_r31;

    var_r31 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}
int TBoss6PlotFalz__sub_802AACEC(void) { return 0; }

}
