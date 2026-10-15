#include "types.h"

extern "C" {

s32 stop_if_advanced__6TMovieFPv(void *arg0);
s32 draw_screen_quad__10TObjPlayerFUiif(s32, s32, f32);

extern f32 lbl_805DB178;

s32 stop_if_advanced__6TMovieFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x58) >= 2) {
        draw_screen_quad__10TObjPlayerFUiif(-1, 0, lbl_805DB178);
    }
    return 1;
}

}
