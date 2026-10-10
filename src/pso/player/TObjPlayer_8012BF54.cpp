#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_positions__10TObjPlayerFPv(void* p);
void init_pair_1f8__10TObjPlayerFPv(void* p);
void apply_conveyor_move__10TObjPlayerFPv(void *arg0);
void *init_vtable_and_handlers__10TObjPlayerFPv(void *arg0);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
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
        rotate_matrix_z(0, -M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    case 2:
        rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    case 3:
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    }
}

extern M2C_UNK holy_ray_weapon_vtable[];
extern M2C_UNK spawn_shoot_particle_attached__10TItemShootFiiif[];
extern M2C_UNK spawn_target_needle[];
extern M2C_UNK spawn_needle_wall_impact[];

void *init_vtable_and_handlers__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = holy_ray_weapon_vtable;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = spawn_shoot_particle_attached__10TItemShootFiiif;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = spawn_target_needle;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = spawn_needle_wall_impact;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
