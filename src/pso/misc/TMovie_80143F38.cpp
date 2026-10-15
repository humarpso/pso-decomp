#include "types.h"

extern "C" {

void update_stop__6TMovieFPv(void *arg0);

s32 stop_if_advanced__6TMovieFPv();
s32 check_finished__6TMovieFPv();

void update_stop__6TMovieFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0xCC) != 0) {
        check_finished__6TMovieFPv();
        return;
    }
    stop_if_advanced__6TMovieFPv();
}

}
