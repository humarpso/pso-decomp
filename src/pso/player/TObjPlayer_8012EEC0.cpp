#include "types.h"

extern "C" {

void update_boss2tunnel_move__10TObjPlayerFPv(void *arg0);
int TObjPlayer__sub_8012EF40(void* p);
void *init_effect_state__10TObjPlayerFPv(void *arg0);
s32 rotate_matrix_z(s32, s32);
s32 play_particle_effect_once__10TObjPlayerFv();
int advance_angle_wrap(void*, int);
void TItemWeapon__ct(void *);
s32 get_player_list__10TObjPlayerFv();

void update_boss2tunnel_move__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x1F8));
        return;
    case 2:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_z(0, -*(s32 *)((s8 *)arg0 + 0x1F8));
        return;
    case 3:
        play_particle_effect_once__10TObjPlayerFv();
        return;
    }
}
int TObjPlayer__sub_8012EF40(void* p) { return advance_angle_wrap((char*)p + 0x1f8, 3276); }

extern s32 lbl_804A6108[];

void *init_effect_state__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A6108;
    *(u32 *)((s8 *)arg0 + 0x1F8) = 0;
    return arg0;
}

}
