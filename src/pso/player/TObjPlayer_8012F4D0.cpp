#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 get_attack_stage__11TItemWeaponFv();
s32 create_ex__9TTecBartaFPvPvPv(int, void *, int, int);
s32 draw_icon__10TObjPlayerFll(void *, int, void *);
s32 is_mode_two_and_ready__10TObjPlayerFv(void *);
s32 spawn_cane_effects__10TObjPlayerFiUiii(void *, void *, int, int);
s32 update_active_game_effect__10TObjPlayerFv(void *);

extern s32 tl_05;

void TObjPlayer::update_cane_effect() {
    u8 *arg0 = (u8 *)this;
    s32 sp8;
    u8 *temp_r3;

    if (get_attack_stage__11TItemWeaponFv() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii((void *) (tl_05), (void *) (arg0), (int) (3), (int) (2));
    }
    draw_icon__10TObjPlayerFll((void *) (arg0), (int) (0), (void *) (&sp8));
    if (is_mode_two_and_ready__10TObjPlayerFv((void *) (arg0)) != 0) {
        temp_r3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xF0));
        create_ex__9TTecBartaFPvPvPv((int) (temp_r3), (void *) (temp_r3 + 0x38), (int) (*(s32 *)((s8 *)temp_r3 + 0x60)), (int) (3));
        return;
    }
    update_active_game_effect__10TObjPlayerFv((void *) (arg0));
}

}
