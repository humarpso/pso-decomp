#include "types.h"
#include "pso/misc/TMovie.h"

extern "C" {

s32 stop_if_advanced__6TMovieFv();
s32 check_finished__6TMovieFv();

void TMovie::update_stop() {
    if ((s32) *(s32 *)((s8 *)this + 0xCC) != 0) {
        check_finished__6TMovieFv();
        return;
    }
    stop_if_advanced__6TMovieFv();
}

}
