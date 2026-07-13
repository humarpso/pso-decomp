#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802B9858(u8 *arg0);
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
M2C_UNK TBoss6Type2__sub_802B9EE4(void *);
M2C_UNK TBoss6Type2__sub_802B9F0C();
M2C_UNK TBoss6Type2__sub_802BCAB8(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TParticleCtrl__sub_801E2F20();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();

extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;

void TBoss6Type2__sub_802B9858(u8 *arg0) {
    s32 var_r31;

    TBoss6Type2__sub_802B9F0C();
    toggle_particle_effect__10TObjPlayerFv();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    var_r31 = 0;
    if ((TBoss6Type2__data_805DE410 == M2C_FIELD(arg0, f32 *, 0x41C)) || (TBoss6Type2__data_805DE40C == M2C_FIELD(arg0, f32 *, 0x41C))) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        TBoss6PlotFalz__sub_802AC008((f32) (M2C_FIELD(arg0, f32 *, 0x4FC)), (f32) (M2C_FIELD(arg0, f32 *, 0x500)));
    }
    TBoss6Type2__sub_802BCAB8((void *) (arg0));
    if (var_r31 != 0) {
        update_camera_target__14TBoss6PlotFalzFv();
    }
    TObjPlayer__sub_803D9B78();
    TParticleCtrl__sub_801E2F20();
    TBoss6Type2__sub_802B9EE4((void *) (arg0));
}

}
