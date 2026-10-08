#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_body_effects__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
M2C_UNK TBoss6Type2__sub_802B9EE4(void *);
M2C_UNK TBoss6Type2__sub_802B9F0C();
M2C_UNK draw_body_models__11TBoss6Type2FPv(void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();

extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;

void render_body_effects__11TBoss6Type2FPv(u8 *arg0) {
    s32 var_r31;

    TBoss6Type2__sub_802B9F0C();
    toggle_particle_effect__10TObjPlayerFv();
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    var_r31 = 0;
    if ((TBoss6Type2__data_805DE410 == M2C_FIELD(arg0, f32 *, 0x41C)) || (TBoss6Type2__data_805DE40C == M2C_FIELD(arg0, f32 *, 0x41C))) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        TBoss6PlotFalz__sub_802AC008((f32) (M2C_FIELD(arg0, f32 *, 0x4FC)), (f32) (M2C_FIELD(arg0, f32 *, 0x500)));
    }
    draw_body_models__11TBoss6Type2FPv((void *) (arg0));
    if (var_r31 != 0) {
        update_camera_target__14TBoss6PlotFalzFv();
    }
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    TBoss6Type2__sub_802B9EE4((void *) (arg0));
}

}
