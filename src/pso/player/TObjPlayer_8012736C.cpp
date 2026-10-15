#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 get_player_list__10TObjPlayerFv();
s32 rotate_matrix_y(s32, s32);

void TObjPlayer::notify_container_change() {
    if ((s32) *(s32 *)((s8 *)this + 0x210) == get_player_list__10TObjPlayerFv()) {
        rotate_matrix_y(0, *(s32 *)((s8 *)this + 0x214));
    }
}

}
