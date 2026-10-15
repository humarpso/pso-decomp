#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 spawn_particle_effect(s32 *, s32);
s32 draw_icon__10TObjPlayerFll(s32, s32, s32 *);

void TObjPlayer::draw_icon_selected(s32 arg0) {
    s32 sp8[6];

    draw_icon__10TObjPlayerFll(arg0, 1, sp8);
    spawn_particle_effect(sp8, 0xC1);
}

}
