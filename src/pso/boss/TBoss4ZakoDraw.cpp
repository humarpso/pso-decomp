#include "pso/TBoss4ZakoDraw.h"

#include "types.h"

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
extern u8 boss4_zako_draw_buffers[];
extern u32 dark_falz_controller_instance;
extern s32 TBoss4ZakoDraw__draw_buffer_index;
extern s32 TBoss4ZakoDraw__rotation_phase;
}

extern "C" {

int TCameraCtrl__sub_8030ABF4(void);
int end_effect_render__13TParticleCtrlFv(void);
int toggle_particle_effect__10TObjPlayerFv(void);

void TBoss4ZakoDraw::render() { toggle_particle_effect__10TObjPlayerFv(); TCameraCtrl__sub_8030ABF4(); end_effect_render__13TParticleCtrlFv(); }
void TBoss4ZakoDraw::run_task() {
    s32 old;
    if (dark_falz_controller_instance == 0U) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    old = TBoss4ZakoDraw__draw_buffer_index;
    *(s32 *)(boss4_zako_draw_buffers + old * 0x784) = 0;
    TBoss4ZakoDraw__draw_buffer_index = old ^ 1;
    if (++TBoss4ZakoDraw__rotation_phase >= 4) {
        TBoss4ZakoDraw__rotation_phase = 0;
    }
}
TBoss4ZakoDraw::~TBoss4ZakoDraw() {}

}
