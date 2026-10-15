#include "types.h"

extern "C" {

s32 check_finished__6TMovieFPv(void *arg0);

s32 flip_frame_buffer__6TMovieFv();

s32 check_finished__6TMovieFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x58) >= 2) {
        flip_frame_buffer__6TMovieFv();
    }
    return 1;
}

}
