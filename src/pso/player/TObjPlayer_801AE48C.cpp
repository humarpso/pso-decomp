#include "types.h"

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * alloc_tables__6TLobbyFPvii(void *, s32, s32);
extern u8 *photon_blast_shared_resource;
extern u32 pilla_photon_buffer_pair;
void create_pilla_photon_blast_model(void);
}

extern "C" {

void free_buffer_pair__10TObjPlayerFv(void);
s32 destroy_buffer_pair(void*, s32);

extern u32 pilla_photon_buffer_pair;

void free_buffer_pair__10TObjPlayerFv(void) {
    if ((u32) pilla_photon_buffer_pair != 0U) {
        destroy_buffer_pair((void*)pilla_photon_buffer_pair, 1);
    }
    pilla_photon_buffer_pair = 0U;
}
void create_pilla_photon_blast_model(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x14);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (alloc_tables__6TLobbyFPvii((void *) temp_r3, *(s32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 8)) + 0x2C), 0));
    }
    (*(s32 *)&pilla_photon_buffer_pair) = var_r0;
}

}
