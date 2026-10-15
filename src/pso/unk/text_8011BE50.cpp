#include "types.h"

extern "C" {
s32 spawn_slot_emitter__18TItemShootParticleFPvii(void *, s32, s32);
s32 spawn_shoot_particle__10TObjPlayerFUlllf(u32, s32, s32, f32);
s32 create_shoot_model__10TObjPlayerFUiiif(u32, s32, s32, f32);
void set_parent__7TObjectFP7TObject(void *, void *);
s32 create_shoot_model_with_particles(u32 arg0, s32 arg1, s32 arg2, f32 farg0);
}

extern "C" {

s32 create_shoot_model_with_particles(u32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r3;
    temp_r31 = create_shoot_model__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
    temp_r3 = spawn_shoot_particle__10TObjPlayerFUlllf(arg0, arg1, arg2, farg0);
    temp_r30 = temp_r3;
    if (((u32) temp_r31 != 0U) && ((u32) temp_r30 != 0U)) {
        *(s32 *)((s8 *)temp_r31 + 0x60) = 0x4000;
        spawn_slot_emitter__18TItemShootParticleFPvii((void *) temp_r3, 0x1BB, 0);
        spawn_slot_emitter__18TItemShootParticleFPvii((void *) temp_r30, 0x1BC, 1);
        set_parent__7TObjectFP7TObject((void *) temp_r30, (void *) temp_r31);
    }
    return temp_r31;
}

}
