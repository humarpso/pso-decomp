#include "types.h"

extern "C" {

s32 spawn_shoot_particle__10TItemShootFv(void);
s32 spawn_slot_emitter__18TItemShootParticleFPvii(s32, s32, s32);
s32 spawn_shoot_particle__10TObjPlayerFUiiif();

s32 spawn_shoot_particle__10TItemShootFv(void) {
    s32 temp_r3;

    temp_r3 = spawn_shoot_particle__10TObjPlayerFUiiif();
    if (temp_r3 != 0) {
        spawn_slot_emitter__18TItemShootParticleFPvii(temp_r3, 0x12, 0);
    }
    return temp_r3;
}

}
