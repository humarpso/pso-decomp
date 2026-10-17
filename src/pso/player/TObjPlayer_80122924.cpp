#include "types.h"
#include "pso/item/TUnk_804A1190.h"
#include "pso/unk/text_80087278.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TUnk_804A1190::emit_marker_effects() {
    s32 sp8[6];
    s32 arg0 = (s32)this;

    ((TObjPlayer *)arg0)->draw_icon(1, (s32)sp8);
    spawn_particle_effect(sp8, 0xC1);
}

}
