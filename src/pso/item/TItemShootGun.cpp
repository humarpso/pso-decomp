#include "pso/TItemShootGun.h"

extern "C" {
s32   is_owner_alive__10TObjPlayerFPv(TItemShootGun*);
void  free_children__12TObjDoorJungFPvPv(s32, s32);
void  notify_fish_if_valid__10TObjPlayerFUi(void*);
void  begin_effect_render__13TParticleCtrlFv(void);
void  push_matrix(void);
void  post_translate_matrix(Vec*);
void  rotate_matrix_by_node_angles(void*, s32);
void  draw_ginja_object(void*);
void  pop_matrix(void);
void  end_effect_render__13TParticleCtrlFv(void);
}

void TItemShootGun::render() {
    if (is_owner_alive__10TObjPlayerFPv(this)) {
        if (this->m_58 != NULL) {
            free_children__12TObjDoorJungFPvPv(*(s32*)((u8*)this->m_58 + 4), this->m_70 & 0xFFFF);
            notify_fish_if_valid__10TObjPlayerFUi(this->m_5C);
            begin_effect_render__13TParticleCtrlFv();
            push_matrix();
            post_translate_matrix(&this->m_pos);
            rotate_matrix_by_node_angles(&this->m_28, 1);
            draw_ginja_object(this->m_58);
            pop_matrix();
            end_effect_render__13TParticleCtrlFv();
        }
    }
}

void TItemShootGun::hook() {
    this->m_6C += 0x1999;
}

#include "types.h"

extern "C" {

u32 create__13TItemShootGunFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
s32 set_texture_id__10TItemShootFPvi(u32, s32);
s32 spawn_particle_effect(s32, s32);
u32 __ct__13TItemShootGunFPvPC3VecPC3Vecf(void *, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(s32);

u32 create__13TItemShootGunFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 var_r31;

    spawn_particle_effect(arg1, 0x1BF);
    var_r31 = __nw__7TObjectFUl(0x74);
    if (var_r31 != 0U) {
        var_r31 = (u32) __ct__13TItemShootGunFPvPC3VecPC3Vecf((void *) var_r31, arg0, arg1, arg2, farg0);
    }
    if (var_r31 != 0U) {
        set_texture_id__10TItemShootFPvi(var_r31, 4);
    }
    return var_r31;
}

}
