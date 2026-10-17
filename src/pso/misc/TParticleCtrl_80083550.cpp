#include "types.h"
#include "pso/TParticleCtrl.h"

void set_ginja_post_texgen_count(s32 x);
void set_ginja_post_tev_stage_count(s32 x);
extern "C" {
s32 is_split_screen();

extern s32 model_render_flags;

void TParticleCtrl::disable_if_single_screen() {
    if (is_split_screen() == 0) {
        set_ginja_post_tev_stage_count(0);
        set_ginja_post_texgen_count(0);
        model_render_flags &= 0xFFF7FFFF;
    }
}
}
