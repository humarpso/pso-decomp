#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

s32 update_camera_sequence__9TObjEneDDFv();
s32 begin_effect_render__13TParticleCtrlFv();
s32 matrix_mult_vec(s32, s32, s32);
s32 push_matrix();
s32 pop_matrix();

extern s32 recon_intro_stage;
extern s32 recon_model_matrix_ptr;

void TObjEneRecon::advance_intro_stage() {
    switch ((s32) recon_intro_stage) {
    case 0:
        push_matrix();
        update_camera_sequence__9TObjEneDDFv();
        matrix_mult_vec(0, recon_model_matrix_ptr, recon_model_matrix_ptr);
        pop_matrix();
        break;
    case 10:
        begin_effect_render__13TParticleCtrlFv();
        break;
    }
    recon_intro_stage += 1;
}

}
