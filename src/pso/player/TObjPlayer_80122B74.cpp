#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecFoie.h"

extern "C" {

void *TObjPlayer__sub_80122BE4(void *arg0);
s32 spawn_particle_effect(s32 *, s32);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);

void TObjPlayer::cast_foie() {
    s32 sp8;
    void *temp_r3;

    draw_icon((s32)2, (s32)(&sp8));
    spawn_particle_effect(&sp8, 0x1BF);
    if (is_mode_two_and_ready() != 0) {
        temp_r3 = *(void **)((s8 *)this + 0xF0);
        TTecFoie::create((void *)temp_r3, (void *)(&sp8), (void *)(*(s32 *)((s8 *)temp_r3 + 0x60)), (void *)3);
        return;
    }
    update_active_game_effect();
}

extern s32 lbl_804A1380[];

void *TObjPlayer__sub_80122BE4(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1380;
    set_status_flags__10TObjPlayerFUl(arg0, 34);
    return arg0;
}

}
