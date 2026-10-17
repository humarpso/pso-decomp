#include "types.h"
#include "pso/unk/text_80087278.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::draw_icon_selected(s32 arg0) {
    s32 sp8[6];

    ((TObjPlayer *)arg0)->draw_icon((s32)1, (s32)sp8);
    spawn_particle_effect(sp8, 0xC1);
}

}
