#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u16 obj_getField1c(void *);
s32 TObjPlayer__sub_801AF454(void *, u16);
s32 draw__10TObjPlayerFPv(void *);
s32 select_class_action_provider__10TObjPlayerFPv(void *, int);
extern s32 TObjPlayer__shared_model_buffer;
void sub_801BD318__10TObjPlayerFv(u8 *arg0);
}

extern "C" {

void TObjPlayer::sub_801BD318() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r4;
    temp_r4 = obj_getField1c((void *) (arg0)) * 0xC00;
    *(s32 *)((s8 *)arg0 + 0xE0) = (s32) (TObjPlayer__shared_model_buffer + temp_r4);
    select_class_action_provider__10TObjPlayerFPv((void *) (arg0), (int) (temp_r4));
    TObjPlayer__sub_801AF454((void *) (arg0), obj_getField1c((void *) (arg0)));
    ((TObjPlayer *)arg0)->init_idle_animation();
    draw__10TObjPlayerFPv((void *) (arg0));
}

}
