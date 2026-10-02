#include "pso/TItemShootGun.h"

extern "C" {
s32   is_owner_alive__10TObjPlayerFPv(TItemShootGun*);
void  free_children__12TObjDoorJungFPvPv(s32, s32);
void  notify_fish_if_valid__10TObjPlayerFUi(void*);
void  begin_effect_render__13TParticleCtrlFv(void);
void  TObjPlayer__sub_803D9B2C(void);
void  TOHangerMachine01__sub_803D9C00(Vec*);
void  TObjPlayer__sub_803D99F8(void*, s32);
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
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(&this->m_pos);
            TObjPlayer__sub_803D99F8(&this->m_28, 1);
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
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 create__13TItemShootGunFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TItemShoot__sub_8011BF94(u32, M2C_UNK);
M2C_UNK spawn_particle_effect(s32, M2C_UNK);
u32 __ct__13TItemShootGunFPvPC3VecPC3Vecf(void *, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(M2C_UNK);

u32 create__13TItemShootGunFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 var_r31;

    spawn_particle_effect(arg1, 0x1BF);
    var_r31 = __nw__7TObjectFUl(0x74);
    if (var_r31 != 0U) {
        var_r31 = (u32) __ct__13TItemShootGunFPvPC3VecPC3Vecf((void *) var_r31, arg0, arg1, arg2, farg0);
    }
    if (var_r31 != 0U) {
        TItemShoot__sub_8011BF94(var_r31, 4);
    }
    return var_r31;
}

}
