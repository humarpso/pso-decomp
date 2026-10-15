#include "types.h"

extern "C" {

void advance_intro_stage__12TObjEneReconFv(void);
s32 update_camera_sequence__9TObjEneDDFPv();
s32 begin_effect_render__13TParticleCtrlFv();
s32 matrix_mult_vec(s32, s32, s32);
s32 push_matrix();
s32 pop_matrix();

extern s32 recon_intro_stage;
extern s32 recon_model_matrix_ptr;

void advance_intro_stage__12TObjEneReconFv(void) {
    switch ((s32) recon_intro_stage) {
    case 0:
        push_matrix();
        update_camera_sequence__9TObjEneDDFPv();
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
