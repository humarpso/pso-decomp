#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_motion_state__10TObjPlayerFi(s32 arg0);
void update_photon_chair_sit__10TObjPlayerFPv(u8 *arg0);
void* init_state_object__10TObjPlayerFPv(void* a0);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK advance_angle_wrap(void *, M2C_UNK);
M2C_UNK drain_owner_hp_fraction__10TObjPlayerFPvf(s32, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK launch_rare_weapon_special__10TObjPlayerFv(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(s32);
int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);
s32 get_player_list__10TObjPlayerFv();

extern f32 lbl_805DAE68;
extern f32 lbl_805DAE6C;

void update_motion_state__10TObjPlayerFi(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        drain_owner_hp_fraction__10TObjPlayerFPvf(arg0, lbl_805DAE68);
        launch_rare_weapon_special__10TObjPlayerFv(arg0, 0, 1, lbl_805DAE6C);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

void update_photon_chair_sit__10TObjPlayerFPv(u8 *arg0) {
    if (get_player_list__10TObjPlayerFv() == 2) {
        rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        advance_angle_wrap(arg0 + 0x1F8, 0x1999);
    }
}

    extern unsigned char create_lavis_shot[];
    extern unsigned char lavis_cannon_weapon_vtable[];
    extern const float lbl_805DAE70;
void* init_state_object__10TObjPlayerFPv(void* a0) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lavis_cannon_weapon_vtable; set_status_flags__10TObjPlayerFPvUi(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)create_lavis_shot; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE70; *(int*)((char*)a0 + 0x1f8) = 0; return a0; }

}
