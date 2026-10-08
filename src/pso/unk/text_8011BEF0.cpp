#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK spawn_slot_emitter__18TItemShootParticleFPvii(s32, M2C_UNK, M2C_UNK);
s32 spawn_shoot_particle__10TObjPlayerFUiiif();
M2C_UNK set_particle_flags__10TItemShootFPvs(s32, M2C_UNK);

s32 spawn_shoot_particle_9f(void) {
    s32 temp_r3;

    temp_r3 = spawn_shoot_particle__10TObjPlayerFUiiif();
    if (temp_r3 != 0) {
        set_particle_flags__10TItemShootFPvs(temp_r3, 4);
        spawn_slot_emitter__18TItemShootParticleFPvii(temp_r3, 0x9F, 0);
    }
    return temp_r3;
}

}
