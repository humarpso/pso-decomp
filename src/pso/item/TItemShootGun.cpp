#include "pso/TItemShootGun.h"
#include "pso/TItemShootModel.h"
#include "pso/TParticleCtrl.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void  free_children__12TObjDoorJungFPv(s32, s32);
void  push_matrix(void);
void  post_translate_matrix(Vec*);
void  rotate_matrix_by_node_angles(void*, s32);
void  draw_ginja_object(void*);
void  pop_matrix(void);
}

void TItemShootGun::render() {
    if (is_owner_alive()) {
        if (this->m_58 != NULL) {
            free_children__12TObjDoorJungFPv(*(s32*)((u8*)this->m_58 + 4), this->m_70 & 0xFFFF);
            TObjPlayer::notify_fish_if_valid((u32)(this->m_5C));
            TParticleCtrl::begin_effect_render();
            push_matrix();
            post_translate_matrix(&this->m_pos);
            rotate_matrix_by_node_angles(&this->m_28, 1);
            draw_ginja_object(this->m_58);
            pop_matrix();
            TParticleCtrl::end_effect_render();
        }
    }
}

void TItemShootGun::hook() {
    this->m_6C += 0x1999;
}

#include "types.h"
#include "pso/TItemShoot.h"

extern "C" {

s32 spawn_particle_effect(s32, s32);
u32 __ct__13TItemShootGunFPvPC3VecPC3Vecf(void *, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(s32);

u32 TItemShootGun::create(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 var_r31;

    spawn_particle_effect(arg1, 0x1BF);
    var_r31 = __nw__7TObjectFUl(0x74);
    if (var_r31 != 0U) {
        var_r31 = (u32) __ct__13TItemShootGunFPvPC3VecPC3Vecf((void *) var_r31, arg0, arg1, arg2, farg0);
    }
    if (var_r31 != 0U) {
        ((TItemShoot *)var_r31)->set_texture_id(4);
    }
    return var_r31;
}

}
