#include "types.h"

extern "C" {
s32 spawn_particle_effect(void *, int);
s32 __ct__13TItemShootGunFPvPC3VecPC3Vecf(int, void *, void *, void *, f32);
s32 __nw__7TObjectFUl(int);
s32 create_gun_shot(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
}

extern "C" {

s32 create_gun_shot(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 temp_r3;
    s32 var_r0;
    spawn_particle_effect((void *) (arg1), (int) (9));
    temp_r3 = __nw__7TObjectFUl((int) (0x74));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = __ct__13TItemShootGunFPvPC3VecPC3Vecf((int) (temp_r3), (void *) (arg0), (void *) (arg1), (void *) (arg2), (f32) (farg0));
    }
    return var_r0;
}

}
