#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecJelin.h"
#include "pso/misc/TTecZarua.h"

extern "C" {

void TObjPlayer__sub_8012789C(void* p);
s32 spawn_cane_effects__10TObjPlayerFP5TItemll(s32, void *, s32, s32);
int roll_technique__11TItemWeaponFv(void*);
s32 get_attack_stage__11TItemWeaponFv();

void TObjPlayer__sub_8012789C(void* p) { roll_technique__11TItemWeaponFv((void*)(p)); roll_technique__11TItemWeaponFv((void*)(p)); }

extern s32 tl_05;

void TObjPlayer::cast_jellen_zalure() {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;

    if (get_attack_stage__11TItemWeaponFv() == 0) {
        spawn_cane_effects__10TObjPlayerFP5TItemll(tl_05, this, 2, 1);
    }
    if (is_mode_two_and_ready() != 0) {
        if (get_tp() == 0) {
            temp_r3 = *(s32 *)((s8 *)this + 0xF0);
            temp_r4 = temp_r3 + 0x38;
            TTecJelin::create(temp_r3, temp_r4, temp_r4, 4);
        } else {
            temp_r3_2 = *(s32 *)((s8 *)this + 0xF0);
            temp_r4_2 = temp_r3_2 + 0x38;
            TTecZarua::create_instance(temp_r3_2, temp_r4_2, temp_r4_2, 4);
        }
        roll_technique__11TItemWeaponFv((void*)(this));
        return;
    }
    update_active_game_effect();
}

}
