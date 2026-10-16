#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 rotate_matrix_z(s32, s32);
s32 advance_angle_wrap(void *, s32);
s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 launch_rare_weapon_special__10TObjPlayerFv(s32, s32, s32, f32);
int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

extern f32 lbl_805DAE68;
extern f32 lbl_805DAE6C;

void TObjPlayer::update_motion_state(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        ((TObjPlayer *)arg0)->drain_owner_hp_fraction(lbl_805DAE68);
        launch_rare_weapon_special__10TObjPlayerFv(arg0, 0, 1, lbl_805DAE6C);
        return;
    }
    ((TObjPlayer *)arg0)->update_active_game_effect();
}

void TObjPlayer::update_photon_chair_sit() {
    u8 *arg0 = (u8 *)this;
    if (TObjPlayer::get_player_list() == 2) {
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x1F8));
        advance_angle_wrap(arg0 + 0x1F8, 0x1999);
    }
}

    extern unsigned char create_lavis_shot[];
    extern unsigned char lavis_cannon_weapon_vtable[];
    extern const float lbl_805DAE70;
void*TObjPlayer::init_state_object() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lavis_cannon_weapon_vtable; set_status_flags__10TObjPlayerFPvUi(this, (void*)34); *(int*)((char*)this + 0x1f0) = (int)create_lavis_shot; this->m_1e4 = lbl_805DAE70; *(int*)((char*)this + 0x1f8) = 0; return this; }

}
