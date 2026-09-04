#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_static_instance__14TBoss6PlotFalzFv(void);
void queue_instance_destruction__14TBoss6PlotFalzFv(void);
void queue_destruction__7TObjectFv(void*);

extern u32 TBoss6PlotFalz__data_805D66F4;

void destroy_static_instance__14TBoss6PlotFalzFv(void) {
    if ((u32) TBoss6PlotFalz__data_805D66F4 != 0U) {
        queue_destruction__7TObjectFv((void*)TBoss6PlotFalz__data_805D66F4);
        TBoss6PlotFalz__data_805D66F4 = 0U;
    }
}

extern u32 TBoss6PlotFalz__data_805D66F0;

void queue_instance_destruction__14TBoss6PlotFalzFv(void) {
    if ((u32) TBoss6PlotFalz__data_805D66F0 != 0U) {
        queue_destruction__7TObjectFv((void*)TBoss6PlotFalz__data_805D66F0);
        TBoss6PlotFalz__data_805D66F0 = 0U;
    }
}

}
