#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6PlotFalz__sub_802ABFD4(void);

extern f32 TBoss6PlotFalz__data_805D3E54;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern f32 TBoss6PlotFalz__data_805DE098;
extern f32 TBoss6PlotFalz__data_805DE0BC;

void TBoss6PlotFalz__sub_802ABFD4(void) {
    if (TBoss6PlotFalz__data_805D3E54 > TBoss6PlotFalz__data_805DE098) {
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        some_id_805c6f74 = lbl_805D5660;
    }
    TBoss6PlotFalz__data_805D3E54 = TBoss6PlotFalz__data_805DE0BC;
}

}
