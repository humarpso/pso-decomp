#include "types.h"

extern "C" {

void render_body_effects__11TBoss6Type2FPv(u8 *arg0);
s32 TBoss6PlotFalz__sub_802AC008(f32, f32);
s32 restore_effect_values__11TBoss6Type2Fv(void *);
s32 sum_offsets__11TBoss6Type2Fv();
s32 draw_body_models__11TBoss6Type2Fv(void *);
s32 post_translate_matrix(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 end_effect_render__13TParticleCtrlFv();
s32 toggle_particle_effect__10TObjPlayerFv();
s32 update_camera_target__14TBoss6PlotFalzFv();

extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;

void render_body_effects__11TBoss6Type2FPv(u8 *arg0) {
    s32 var_r31;

    sum_offsets__11TBoss6Type2Fv();
    toggle_particle_effect__10TObjPlayerFv();
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
    var_r31 = 0;
    if ((TBoss6Type2__data_805DE410 == *(f32 *)((s8 *)arg0 + 0x41C)) || (TBoss6Type2__data_805DE40C == *(f32 *)((s8 *)arg0 + 0x41C))) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        TBoss6PlotFalz__sub_802AC008((f32) (*(f32 *)((s8 *)arg0 + 0x4FC)), (f32) (*(f32 *)((s8 *)arg0 + 0x500)));
    }
    draw_body_models__11TBoss6Type2Fv((void *) (arg0));
    if (var_r31 != 0) {
        update_camera_target__14TBoss6PlotFalzFv();
    }
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    restore_effect_values__11TBoss6Type2Fv((void *) (arg0));
}

}
