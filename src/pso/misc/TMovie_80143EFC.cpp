#include "types.h"

extern "C" {
bool is_playback_finished__6TMovieFPv(u8 *arg0);
}

extern "C" {

bool is_playback_finished__6TMovieFPv(u8 *arg0) {
    void **temp_r3;
    u8 *temp_r4;
    temp_r3 = (void **)(*(void ***)((s8 *)arg0 + 4));
    temp_r4 = (u8 *)(*temp_r3);
    return (*(s32 (**)(void **, void *))((s8 *)temp_r4 + 0x20))(temp_r3, temp_r4) == 3;
}

}
