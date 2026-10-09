#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_intro_stage__12TObjEneReconFv(void);
M2C_UNK update_camera_sequence__9TObjEneDDFPv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK matrix_mult_vec(M2C_UNK, s32, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();

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
