#include "types.h"

extern "C" {

void update_input_and_draw__10TObjPlayerFi(s32 arg0);
s32 set_action_provider_variant__10TObjPlayerFPvs(void *, int);
s32 init_idle_animation__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BD314(void);
s16 TObjPlayer__sub_801C2114();
s32 draw__10TObjPlayerFPv(void *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 update_action_animation__10TObjPlayerFPv(void *);

#include "types.h"

extern "C" {

void update_input_and_draw__10TObjPlayerFi(s32 arg0) {
    if (reset_key_machine_state__10TObjPlayerFv() == 0) {
        set_action_provider_variant__10TObjPlayerFPvs((void *) (arg0), (int) (TObjPlayer__sub_801C2114()));
    }
    init_idle_animation__10TObjPlayerFPv((void *) (arg0));
    draw__10TObjPlayerFPv((void *) (arg0));
    update_action_animation__10TObjPlayerFPv((void *) (arg0));
}

}

}
