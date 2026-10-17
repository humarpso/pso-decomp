#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecFoie.h"

extern "C" {

s32 is_mode_two_and_ready__10TObjPlayerFv();

void TObjPlayer::create_foie_effect() {
    s32 sp8;
    void *temp_r3;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (draw_icon(1, (s32)&sp8) != 0) {
            temp_r3 = *(void * *)&this->unk_F0;
            TTecFoie::create((void *)temp_r3, &sp8, (void *)(*(s32 *)((s8 *)temp_r3 + 0x60)), (void *)5);
        }
    } else {
        update_active_game_effect();
    }
}

}
