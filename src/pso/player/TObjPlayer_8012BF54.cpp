#include "types.h"
#include "pso/player/TUnk_804A5150.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
void TItemWeapon__ct(void *);

void TObjPlayer::init_positions() { TObjPlayer::add_angle_clamped((s32 *)((char*)this + 0x1f8), (s32)((void*)-910), (s32)((void*)-7281)); TObjPlayer::add_angle_clamped((s32 *)((char*)this + 0x1fc), (s32)((void*)-910), (s32)((void*)-9102)); }

void TUnk_804A5150::update_attack() { TObjPlayer::add_angle_clamped((s32 *)((char*)this + 0x1f8), (s32)((void*)1820), (s32)((void*)0)); TObjPlayer::add_angle_clamped((s32 *)((char*)this + 0x1fc), (s32)((void*)1820), (s32)((void*)0)); }

void TObjPlayer::apply_conveyor_move() {
    s32 temp_r3;

    temp_r3 = TObjPlayer::get_player_list();
    switch (temp_r3) {
    case 1:
        rotate_matrix_z(0, -this->m_1fc);
        return;
    case 2:
        rotate_matrix_z(0, this->m_1fc);
        return;
    case 3:
        rotate_matrix_x(0, *(s32 *)((s8 *)this + 0x1F8));
        return;
    }
}

extern s32 holy_ray_weapon_vtable[];
extern s32 spawn_shoot_particle_attached__10TItemShootFlllf[];
extern s32 spawn_target_needle[];
extern s32 spawn_needle_wall_impact[];

void *TUnk_804A5150::init_vtable_and_handlers() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = holy_ray_weapon_vtable;
    *(s32 **)((s8 *)this + 0x1F0) = spawn_shoot_particle_attached__10TItemShootFlllf;
    (*(s32 * *)((u8 *)this + 0x1F4)) = spawn_target_needle;
    (*(s32 * *)((u8 *)this + 0x1EC)) = spawn_needle_wall_impact;
    *(u32 *)&(*(s32 *)((u8 *)this + 0x1FC)) = 0;
    *(u32 *)((s8 *)this + 0x1F8) = 0;
    return this;
}

}
