#include "types.h"

extern "C" {

s32 spawn_slot_emitter__18TItemShootParticleFPvii(s32, s32, s32);
s32 spawn_shoot_particle__10TObjPlayerFUiiif();
s32 set_particle_flags__10TItemShootFPvs(s32, s32);

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
