#include "types.h"
#include "pso/misc/TMovie.h"

extern "C" {

s32 draw_screen_quad__10TObjPlayerFUllf(s32, s32, f32);

extern f32 lbl_805DB178;

s32 TMovie::stop_if_advanced() {
    if ((s32) *(s32 *)((s8 *)this + 0x58) >= 2) {
        draw_screen_quad__10TObjPlayerFUllf(-1, 0, lbl_805DB178);
    }
    return 1;
}

}
