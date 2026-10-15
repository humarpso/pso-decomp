#include "types.h"

extern "C" {
u16 obj_getField1c(void *);
s32 TObjPlayer__sub_801AF454(void *, u16);
s32 draw__10TObjPlayerFPv(void *);
s32 select_class_action_provider__10TObjPlayerFPv(void *, int);
s32 init_idle_animation__10TObjPlayerFPv(void *);
extern s32 TObjPlayer__shared_model_buffer;
void TObjPlayer__sub_801BD318(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801BD318(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = obj_getField1c((void *) (arg0)) * 0xC00;
    *(s32 *)((s8 *)arg0 + 0xE0) = (s32) (TObjPlayer__shared_model_buffer + temp_r4);
    select_class_action_provider__10TObjPlayerFPv((void *) (arg0), (int) (temp_r4));
    TObjPlayer__sub_801AF454((void *) (arg0), obj_getField1c((void *) (arg0)));
    init_idle_animation__10TObjPlayerFPv((void *) (arg0));
    draw__10TObjPlayerFPv((void *) (arg0));
}

}
