#include "types.h"

extern "C" {

void free_shared_data__10TObjPlayerFv(void);
void free__11TOBoss4RockFUi(void*);
void fn_801C2308(void*, int);

extern u32 TObjPlayer__shared_photon_blast_state;
extern u32 TObjPlayer__shared_model_buffer;
extern u32 player_shared_buffer_base;

void free_shared_data__10TObjPlayerFv(void) {
    if ((u32) TObjPlayer__shared_photon_blast_state != 0U) {
        fn_801C2308((void*)TObjPlayer__shared_photon_blast_state, 1);
        TObjPlayer__shared_photon_blast_state = 0U;
    }
    if ((u32) player_shared_buffer_base != 0U) {
        free__11TOBoss4RockFUi((void*)player_shared_buffer_base);
        player_shared_buffer_base = 0U;
    }
    if ((u32) TObjPlayer__shared_model_buffer != 0U) {
        free__11TOBoss4RockFUi((void*)TObjPlayer__shared_model_buffer);
        TObjPlayer__shared_model_buffer = 0U;
    }
}

}
