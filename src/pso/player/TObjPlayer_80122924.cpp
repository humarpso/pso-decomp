#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 spawn_particle_effect(s32 *, s32);

void TObjPlayer::draw_icon_selected(s32 arg0) {
    s32 sp8[6];

    ((TObjPlayer *)arg0)->draw_icon((s32)1, (s32)sp8);
    spawn_particle_effect(sp8, 0xC1);
}

}
