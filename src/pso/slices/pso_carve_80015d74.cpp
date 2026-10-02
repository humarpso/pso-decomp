#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80015D74 { u8 pad[0x110]; s16 arr[3]; };

extern "C" {
void copy_entry_bytes__10TObjPlayerFPvPv(void* p, void* q);
void TObjPlayer__sub_80015D74(O_80015D74 *self, s32 i, void *q);
}

extern "C" {

s32 spawn_particle_effect_with_flags(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_testFlags30(void * a0 = 0, s32 a1 = 0);
void copy_entry_bytes__10TObjPlayerFPvPv(void* p, void* q);

void TObjPlayer__sub_80015D74(O_80015D74 *self, s32 i, void *q) {
    if (i < 3) {
        copy_entry_bytes__10TObjPlayerFPvPv((void*)(&self->arr[i]), (void*)(q));
    }
}

}
