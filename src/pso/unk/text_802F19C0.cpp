#include "types.h"
#include "pso/unk/text_802F19C0.h"
#include "pso/render/depth_buffer.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int draw_ginja_model_with_motion(void*, void*, float);
void *__ct__7TObjectFP7TObject(void *, void *);
void *__nw__7TObjectFUl(int);
int func_80141618__Fv(void);

extern void *tl_07;
extern void *lbl_805D6960;

void fn_802F19C0(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__7TObjectFP7TObject(o, tl_07);
    }
    lbl_805D6960 = o;
}

extern int boss7_common_texture_list;

void draw_particle_effect(void* a0) {
    set_depth_buffer_settings_id((u32)((void*)3));

    TParticleCtrl::begin_effect_render();
    TObjFish::set_global_param(boss7_common_texture_list);
    TObjPlayer::set_global_flag();

    draw_ginja_model_with_motion((void*)(*(int*)((char*)a0 + 0x1c)), (void*)(*(int*)((char*)a0 + 0x20)), *(float*)((char*)a0 + 0x28));

    TObjPlayer::clear_global_state();
    TParticleCtrl::end_effect_render();
    func_80141618__Fv();
}

} // extern "C"
