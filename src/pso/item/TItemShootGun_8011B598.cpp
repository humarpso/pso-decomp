#include "pso/TItemShootGun.h"
#include "pso/TItemShoot.h"
#include "pso/TParticleCtrl.h"
#include "pso/unk/text_80087278.h"

extern "C" {

void *__ct__13TItemShootGunFPvPC3VecPC3Vecf(void *, void *, const Vec *, const Vec *, f32);
u32 __nw__7TObjectFUl(s32);

u32 TItemShootGun::create(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 var_r31;

    spawn_particle_effect((void *)arg1, 0x1BF);
    var_r31 = __nw__7TObjectFUl(0x74);
    if (var_r31 != 0U) {
        var_r31 = (u32) __ct__13TItemShootGunFPvPC3VecPC3Vecf((void *) var_r31, (void *) arg0, (const Vec *) arg1, (const Vec *) arg2, farg0);
    }
    if (var_r31 != 0U) {
        ((TItemShoot *)var_r31)->set_texture_id(4);
    }
    return var_r31;
}

}
