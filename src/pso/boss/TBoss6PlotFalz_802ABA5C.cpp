#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_state__11TBoss6Type2FPv(void *);
extern u8 *TBoss6PlotFalz__data_805D66F4;
s32 TBoss6PlotFalz__sub_802ABA9C(void);
s32 get_state__14TBoss6GravBallFPv(void *);
extern void *TBoss6PlotFalz__data_805D66F0;
s32 TBoss6PlotFalz__sub_802ABADC(void);
}

extern "C" {

f32 get_value__14TBoss6PlotFalzFv(void);

extern void *TBoss6PlotFalz__data_805D66F0;
extern f32 TBoss6PlotFalz__data_805DE098;

f32 get_value__14TBoss6PlotFalzFv(void) {
    if ((TBoss6PlotFalz__sub_802ABADC() == 0) || ((void *) TBoss6PlotFalz__data_805D66F0 == NULL)) {
        return TBoss6PlotFalz__data_805DE098;
    }
    return M2C_FIELD(TBoss6PlotFalz__data_805D66F0, f32 *, 0x3C);
}
s32 TBoss6PlotFalz__sub_802ABA9C(void) {
    if (((void *) TBoss6PlotFalz__data_805D66F4 == NULL) || (get_state__11TBoss6Type2FPv(TBoss6PlotFalz__data_805D66F4) == 0x23)) {
        return 0;
    }
    return 1;
}
s32 TBoss6PlotFalz__sub_802ABADC(void) {
    if (((void *) (*(u8 * *)&TBoss6PlotFalz__data_805D66F0) == NULL) || (get_state__14TBoss6GravBallFPv((*(u8 * *)&TBoss6PlotFalz__data_805D66F0)) == 0x28)) {
        return 0;
    }
    return 1;
}

}
