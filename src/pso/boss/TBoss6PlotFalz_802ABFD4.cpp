#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TBoss6PlotFalz__sub_802AC040(f32, f32, f32, f32);
extern const f32 TBoss6PlotFalz__data_805DE09C;
extern const f32 lbl_805DE0C0;
extern const f32 lbl_805DE0C4;
void TBoss6PlotFalz__sub_802AC008(f32 farg0, f32 farg1);
}

extern "C" {

void update_camera_target__14TBoss6PlotFalzFv(void);

extern f32 TBoss6PlotFalz__data_805D3E54;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern f32 TBoss6PlotFalz__data_805DE098;
extern f32 TBoss6PlotFalz__data_805DE0BC;

void update_camera_target__14TBoss6PlotFalzFv(void) {
    if (TBoss6PlotFalz__data_805D3E54 > TBoss6PlotFalz__data_805DE098) {
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        some_id_805c6f74 = lbl_805D5660;
    }
    TBoss6PlotFalz__data_805D3E54 = TBoss6PlotFalz__data_805DE0BC;
}
#pragma push
#pragma fp_contract on
void TBoss6PlotFalz__sub_802AC008(f32 farg0, f32 farg1) {
    f32 temp_f3;
    temp_f3 = lbl_805DE0C0 * farg1;
    TBoss6PlotFalz__sub_802AC040(farg0, (lbl_805DE0C4 * farg1) + TBoss6PlotFalz__data_805DE09C, temp_f3, temp_f3);
}
#pragma pop

}
