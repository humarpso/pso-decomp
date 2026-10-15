#include "types.h"

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int alloc_buffer__11TOBoss4RockFPv(void *);
s32 fn_801C2360(s32);
extern u32 TObjPlayer__shared_photon_blast_state;
extern u32 TObjPlayer__shared_model_buffer;
extern u32 player_shared_buffer_base;
void alloc_shared_buffers__10TObjPlayerFv(void);
}

extern "C" {

void alloc_shared_buffers__10TObjPlayerFv(void) {
    s32 temp_r3;
    s32 var_r0;
    if ((u32) TObjPlayer__shared_model_buffer == 0U) {
        TObjPlayer__shared_model_buffer = alloc_buffer__11TOBoss4RockFPv((void *)0x9000);
    }
    if ((u32) player_shared_buffer_base == 0U) {
        player_shared_buffer_base = alloc_buffer__11TOBoss4RockFPv((void *)0x4800);
    }
    if ((u32) TObjPlayer__shared_photon_blast_state == 0U) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x60);
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = fn_801C2360(temp_r3);
        }
        TObjPlayer__shared_photon_blast_state = (u32) var_r0;
    }
}

}
