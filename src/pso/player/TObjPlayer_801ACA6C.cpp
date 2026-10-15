#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
u8 * alloc_tables__6TLobbyFll(void *, s32, s32);
extern u8 *photon_blast_shared_resource;
extern u32 leilla_photon_buffer_pair;
void create_leilla_photon_blast_model(void);
}

extern "C" {

s32 destroy_buffer_pair(void*, s32);

extern u32 leilla_photon_buffer_pair;

void TObjPlayer::destroy_buffer_pair_instance() {
    if ((u32) leilla_photon_buffer_pair != 0U) {
        destroy_buffer_pair((void*)leilla_photon_buffer_pair, 1);
    }
    leilla_photon_buffer_pair = 0U;
}
void create_leilla_photon_blast_model(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)0x14);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (alloc_tables__6TLobbyFll((void *) temp_r3, *(s32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 8)) + 0x2C), 0));
    }
    (*(s32 *)&leilla_photon_buffer_pair) = var_r0;
}

}
