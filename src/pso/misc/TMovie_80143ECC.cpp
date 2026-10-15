#include "types.h"
#include "pso/misc/TMovie.h"

extern "C" {

s32 flip_frame_buffer__6TMovieFv();

s32 TMovie::check_finished() {
    if ((s32) *(s32 *)((s8 *)this + 0x58) >= 2) {
        flip_frame_buffer__6TMovieFv();
    }
    return 1;
}

}
