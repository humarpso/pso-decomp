#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
int add_angle_clamped__10TObjPlayerFPlll(void*, void*, void*);
void TItemWeapon__ct(void *);
s32 get_player_list__10TObjPlayerFv();

void TObjPlayer::init_positions() { add_angle_clamped__10TObjPlayerFPlll((char*)this + 0x1f8, (void*)-910, (void*)-7281); add_angle_clamped__10TObjPlayerFPlll((char*)this + 0x1fc, (void*)-910, (void*)-9102); }

void TObjPlayer::init_pair_1f8() { add_angle_clamped__10TObjPlayerFPlll((char*)this + 0x1f8, (void*)1820, (void*)0); add_angle_clamped__10TObjPlayerFPlll((char*)this + 0x1fc, (void*)1820, (void*)0); }

void TObjPlayer::apply_conveyor_move() {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        rotate_matrix_z(0, -*(s32 *)((s8 *)this + 0x1FC));
        return;
    case 2:
        rotate_matrix_z(0, *(s32 *)((s8 *)this + 0x1FC));
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

void *TObjPlayer::init_vtable_and_handlers() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = holy_ray_weapon_vtable;
    *(s32 **)((s8 *)this + 0x1F0) = spawn_shoot_particle_attached__10TItemShootFlllf;
    *(s32 **)((s8 *)this + 0x1F4) = spawn_target_needle;
    *(s32 **)((s8 *)this + 0x1EC) = spawn_needle_wall_impact;
    *(u32 *)((s8 *)this + 0x1FC) = 0;
    *(u32 *)((s8 *)this + 0x1F8) = 0;
    return this;
}

}
