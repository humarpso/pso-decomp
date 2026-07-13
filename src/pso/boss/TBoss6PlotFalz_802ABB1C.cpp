#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6PlotFalz__sub_802ABB1C(void);
void TBoss6PlotFalz__sub_802ABB50(void);
void queue_destruction__7TObjectFv(void*);

extern u32 TBoss6PlotFalz__data_805D66F4;

void TBoss6PlotFalz__sub_802ABB1C(void) {
    if ((u32) TBoss6PlotFalz__data_805D66F4 != 0U) {
        queue_destruction__7TObjectFv((void*)TBoss6PlotFalz__data_805D66F4);
        TBoss6PlotFalz__data_805D66F4 = 0U;
    }
}

extern u32 TBoss6PlotFalz__data_805D66F0;

void TBoss6PlotFalz__sub_802ABB50(void) {
    if ((u32) TBoss6PlotFalz__data_805D66F0 != 0U) {
        queue_destruction__7TObjectFv((void*)TBoss6PlotFalz__data_805D66F0);
        TBoss6PlotFalz__data_805D66F0 = 0U;
    }
}

}
