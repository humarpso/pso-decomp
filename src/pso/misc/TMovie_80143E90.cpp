#include "types.h"
#include "pso/misc/TMovie.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

extern f32 lbl_805DB178;

s32 TMovie::stop_if_advanced() {
    if ((s32) *(s32 *)((s8 *)this + 0x58) >= 2) {
        TObjPlayer::draw_screen_quad(-1, 0, lbl_805DB178);
    }
    return 1;
}

}
