#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TObjPlayer__sub_8012EF40(void* p);
s32 rotate_matrix_z(s32, s32);
int advance_angle_wrap(void*, int);
void TItemWeapon__ct(void *);

void TObjPlayer::update_boss2tunnel_move() {
    s32 temp_r3;

    temp_r3 = TObjPlayer::get_player_list();
    switch (temp_r3) {
    case 1:
        TObjPlayer::play_particle_effect_once();
        rotate_matrix_z(0, *(s32 *)((s8 *)this + 0x1F8));
        return;
    case 2:
        TObjPlayer::play_particle_effect_once();
        rotate_matrix_z(0, -*(s32 *)((s8 *)this + 0x1F8));
        return;
    case 3:
        TObjPlayer::play_particle_effect_once();
        return;
    }
}
int TObjPlayer__sub_8012EF40(void* p) { return advance_angle_wrap((char*)p + 0x1f8, 3276); }

extern s32 lbl_804A6108[];

void *TObjPlayer::init_effect_state() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A6108;
    *(u32 *)((s8 *)this + 0x1F8) = 0;
    return this;
}

}
