#include "types.h"

extern "C" {

void init_positions__10TObjPlayerFPv(void* p);
void init_pair_1f8__10TObjPlayerFPv(void* p);
void apply_conveyor_move__10TObjPlayerFPv(void *arg0);
void *init_vtable_and_handlers__10TObjPlayerFPv(void *arg0);
s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
int add_angle_clamped__10TObjPlayerFPvii(void*, void*, void*);
void TItemWeapon__ct(void *);
s32 get_player_list__10TObjPlayerFv();

void init_positions__10TObjPlayerFPv(void* p) { add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1f8, (void*)-910, (void*)-7281); add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1fc, (void*)-910, (void*)-9102); }

void init_pair_1f8__10TObjPlayerFPv(void* p) { add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1f8, (void*)1820, (void*)0); add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1fc, (void*)1820, (void*)0); }

void apply_conveyor_move__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        rotate_matrix_z(0, -*(s32 *)((s8 *)arg0 + 0x1FC));
        return;
    case 2:
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x1FC));
        return;
    case 3:
        rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x1F8));
        return;
    }
}

extern s32 holy_ray_weapon_vtable[];
extern s32 spawn_shoot_particle_attached__10TItemShootFiiif[];
extern s32 spawn_target_needle[];
extern s32 spawn_needle_wall_impact[];

void *init_vtable_and_handlers__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = holy_ray_weapon_vtable;
    *(s32 **)((s8 *)arg0 + 0x1F0) = spawn_shoot_particle_attached__10TItemShootFiiif;
    *(s32 **)((s8 *)arg0 + 0x1F4) = spawn_target_needle;
    *(s32 **)((s8 *)arg0 + 0x1EC) = spawn_needle_wall_impact;
    *(u32 *)((s8 *)arg0 + 0x1FC) = 0;
    *(u32 *)((s8 *)arg0 + 0x1F8) = 0;
    return arg0;
}

}
