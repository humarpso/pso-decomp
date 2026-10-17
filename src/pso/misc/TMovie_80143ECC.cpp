#include "types.h"
#include "pso/misc/TMovie.h"

s32 TMovie::check_finished() {
    if ((s32) *(s32 *)((s8 *)this + 0x58) >= 2) {
        TMovie::flip_frame_buffer();
    }
    return 1;
}
