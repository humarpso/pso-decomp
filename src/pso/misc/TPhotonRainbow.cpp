#include "types.h"
#include "pso/misc/TPhotonRainbow.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"

extern "C" {

void *__dt__14TPhotonRainbowFv(void *arg0, s16 arg1);
s32 post_translate_matrix(void *);
s32 draw_chunk_object(s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);

extern u8 *camera_ctrl_instance;

void TPhotonRainbow::render() {
    u8 *arg0 = (u8 *)this;
    if ((void *) camera_ctrl_instance != NULL) {
        *(f32 *)((s8 *)arg0 + 0x38) = (f32) *(f32 *)((s8 *)camera_ctrl_instance + 0x178);
        *(f32 *)((s8 *)arg0 + 0x40) = (f32) *(f32 *)((s8 *)camera_ctrl_instance + 0x180);
    }
    TParticleCtrl::begin_effect_render();
    push_matrix();
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)arg0 + 0x90);
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, (s32) *(s32 *)((s8 *)arg0 + 0x60) / 2);
    TObjFish::set_global_param(*(s32 *)((s8 *)arg0 + 0x24));
    draw_chunk_object(*(s32 *)((s8 *)arg0 + 0x98));
    pop_matrix();
    push_matrix();
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)arg0 + 0x94);
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, 0x10000 - *(s32 *)((s8 *)arg0 + 0x60));
    TObjFish::set_global_param(*(s32 *)((s8 *)arg0 + 0x24));
    draw_chunk_object(*(s32 *)((s8 *)arg0 + 0x9C));
    pop_matrix();
    TParticleCtrl::end_effect_render();
}

void TPhotonRainbow::run_task() {
    *(s32 *)((s8 *)this + 0x60) = (s32) (*(s32 *)((s8 *)this + 0x60) + 0xB6);
}

extern s32 __vt__14TPhotonRainbow[];

void *__dt__14TPhotonRainbowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TPhotonRainbow;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
