#include "types.h"
#include "pso/TItemShoot.h"

extern "C" {

s32 spawn_slot_emitter__18TItemShootParticleFPvii(u32, s32, s32);
u32 create_shoot_model__10TObjPlayerFUiiif();
s32 set_parent__7TObjectFP7TObject(u32, u32);
u32 spawn_shoot_particle__10TObjPlayerFUlllf(s32, s32, s32, f32);

u32 TItemShoot::spawn_shoot_particle_attached(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 temp_r31;
    u32 temp_r30;

    temp_r31 = create_shoot_model__10TObjPlayerFUiiif();
    temp_r30 = spawn_shoot_particle__10TObjPlayerFUlllf(arg0, arg1, arg2, farg0);
    if ((temp_r31 != 0U) && (temp_r30 != 0U)) {
        spawn_slot_emitter__18TItemShootParticleFPvii(temp_r30, 0x1BD, 0);
        set_parent__7TObjectFP7TObject(temp_r30, temp_r31);
    }
    return temp_r31;
}

}
