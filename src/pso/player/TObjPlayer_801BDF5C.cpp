#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
