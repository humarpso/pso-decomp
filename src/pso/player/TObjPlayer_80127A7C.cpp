#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecFoie.h"

extern "C" {

s32 is_mode_two_and_ready__10TObjPlayerFv();

void TObjPlayer::create_foie_effect() {
    s32 sp8;
    void *owner;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (draw_icon(1, (s32)&sp8) != 0) {
            owner = *(void * *)&this->unk_F0;
            TTecFoie::create((void *)owner, &sp8, (void *)(*(s32 *)((s8 *)owner + 0x60)), (void *)5);
        }
    } else {
        update_active_game_effect();
    }
}

}
