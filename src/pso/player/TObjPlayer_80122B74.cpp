#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *TObjPlayer__sub_80122BE4(void *arg0);
s32 spawn_particle_effect(s32 *, s32);
s32 is_mode_two_and_ready__10TObjPlayerFv(void *);
s32 update_active_game_effect__10TObjPlayerFv(void *);
s32 draw_icon__10TObjPlayerFll(void *, s32, s32 *);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
s32 create__8TTecFoieFPvPvPvPv(void *, s32 *, s32, s32);

void TObjPlayer::cast_foie() {
    s32 sp8;
    void *temp_r3;

    draw_icon__10TObjPlayerFll(this, 2, &sp8);
    spawn_particle_effect(&sp8, 0x1BF);
    if (is_mode_two_and_ready__10TObjPlayerFv(this) != 0) {
        temp_r3 = *(void **)((s8 *)this + 0xF0);
        create__8TTecFoieFPvPvPvPv(temp_r3, &sp8, *(s32 *)((s8 *)temp_r3 + 0x60), 3);
        return;
    }
    update_active_game_effect__10TObjPlayerFv(this);
}

extern s32 lbl_804A1380[];

void *TObjPlayer__sub_80122BE4(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1380;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
