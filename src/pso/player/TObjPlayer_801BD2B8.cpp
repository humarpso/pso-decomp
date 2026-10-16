#include "types.h"

extern "C" {

s32 set_action_provider_variant__10TObjPlayerFPvs(void *, int);
void TObjPlayer__sub_801BD314(void);
s16 TObjPlayer__sub_801C2114();
s32 draw__10TObjPlayerFPv(void *);
s32 reset_key_machine_state__10TObjPlayerFv();

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::update_input_and_draw() {
    s32 arg0 = (s32)this;
    if (reset_key_machine_state__10TObjPlayerFv() == 0) {
        set_action_provider_variant__10TObjPlayerFPvs((void *) (arg0), (int) (TObjPlayer__sub_801C2114()));
    }
    ((TObjPlayer *)arg0)->init_idle_animation();
    draw__10TObjPlayerFPv((void *) (arg0));
    ((TObjPlayer *)arg0)->update_action_animation();
}

}

}
