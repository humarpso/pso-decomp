#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u16 obj_getField1c(void *);
s32 sub_801AF454__10TObjPlayerFl(void *, u16);
s32 select_class_action_provider__10TObjPlayerFv(void *, int);
extern s32 TObjPlayer__shared_model_buffer;
}

extern "C" {

void TObjPlayer::sub_801BD318() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r4;
    temp_r4 = obj_getField1c((void *) (arg0)) * 0xC00;
    this->m_e0 = (s32) (TObjPlayer__shared_model_buffer + temp_r4);
    select_class_action_provider__10TObjPlayerFv((void *) (arg0), (int) (temp_r4));
    sub_801AF454__10TObjPlayerFl((void *) (arg0), obj_getField1c((void *) (arg0)));
    ((TObjPlayer *)arg0)->init_idle_animation();
    ((TObjPlayer *)arg0)->draw();
}

}
