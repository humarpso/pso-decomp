#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
int mem_alloc(void *);
s32 fn_801C2360(s32);
extern u32 TObjPlayer__shared_photon_blast_state;
extern u32 TObjPlayer__shared_model_buffer;
extern u32 player_shared_buffer_base;
}

extern "C" {

void TObjPlayer::alloc_shared_buffers() {
    s32 temp_r3;
    s32 var_r0;
    if ((u32) TObjPlayer__shared_model_buffer == 0U) {
        TObjPlayer__shared_model_buffer = mem_alloc((void *)0x9000);
    }
    if ((u32) player_shared_buffer_base == 0U) {
        player_shared_buffer_base = mem_alloc((void *)0x4800);
    }
    if ((u32) TObjPlayer__shared_photon_blast_state == 0U) {
        temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x60))->alloc();
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = fn_801C2360(temp_r3);
        }
        TObjPlayer__shared_photon_blast_state = (u32) var_r0;
    }
}

}
