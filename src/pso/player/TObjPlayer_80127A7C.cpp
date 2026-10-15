#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 update_active_game_effect__10TObjPlayerFv(void *);
s32 draw_icon__10TObjPlayerFll(void *, s32, s32 *);
s32 create__8TTecFoieFPvPvPvPv(void *, s32 *, s32, s32);

void TObjPlayer::create_foie_effect() {
    s32 sp8;
    void *temp_r3;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (draw_icon__10TObjPlayerFll(this, 1, &sp8) != 0) {
            temp_r3 = *(void **)((s8 *)this + 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r3, &sp8, *(s32 *)((s8 *)temp_r3 + 0x60), 5);
        }
    } else {
        update_active_game_effect__10TObjPlayerFv(this);
    }
}

}
