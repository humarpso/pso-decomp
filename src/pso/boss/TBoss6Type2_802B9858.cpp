#include "types.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/boss/TBoss6Type2.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TBoss6PlotFalz__sub_802AC008(f32 farg0, f32 farg1);
s32 sum_offsets__11TBoss6Type2Fv();
s32 post_translate_matrix(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();

extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;

void TBoss6Type2::render_body_effects() {
    s32 var_r31;

    sum_offsets__11TBoss6Type2Fv();
    TObjPlayer::toggle_particle_effect();
    push_matrix();
    post_translate_matrix((void *) (((u8 *)this) + 0x38));
    rotate_matrix_y((int) (0), (int) (*(s32 *)&this->m_60));
    var_r31 = 0;
    if ((TBoss6Type2__data_805DE410 == *(f32 *)&this->_pad41C) || (TBoss6Type2__data_805DE40C == *(f32 *)&this->_pad41C)) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        TBoss6PlotFalz__sub_802AC008((f32) (*(f32 *)&this->unk_4FC), (f32) (this->m_500));
    }
    ((TBoss6Type2 *)((u8 *)this))->draw_body_models();
    if (var_r31 != 0) {
        TBoss6PlotFalz::update_camera_target();
    }
    pop_matrix();
    TParticleCtrl::end_effect_render();
    ((TBoss6Type2 *)((u8 *)this))->restore_effect_values();
}

}
