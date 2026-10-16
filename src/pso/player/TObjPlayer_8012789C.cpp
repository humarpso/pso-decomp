#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecJelin.h"
#include "pso/misc/TTecZarua.h"

extern "C" {

void TObjPlayer__sub_8012789C(void* p);
int roll_technique__11TItemWeaponFv(void*);
s32 get_attack_stage__11TItemWeaponFv();

void TObjPlayer__sub_8012789C(void* p) { roll_technique__11TItemWeaponFv((void*)(p)); roll_technique__11TItemWeaponFv((void*)(p)); }

extern s32 tl_05;

void TObjPlayer::cast_jellen_zalure() {
    s32 owner;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;

    if (get_attack_stage__11TItemWeaponFv() == 0) {
        ((TObjPlayer *)tl_05)->spawn_cane_effects((TItem*)this, (s32)2, (s32)1);
    }
    if (is_mode_two_and_ready() != 0) {
        if (get_tp() == 0) {
            owner = *(s32 *)&this->unk_F0;
            temp_r4 = owner + 0x38;
            TTecJelin::create(owner, temp_r4, temp_r4, 4);
        } else {
            temp_r3_2 = *(s32 *)&this->unk_F0;
            temp_r4_2 = temp_r3_2 + 0x38;
            TTecZarua::create_instance(temp_r3_2, temp_r4_2, temp_r4_2, 4);
        }
        roll_technique__11TItemWeaponFv((void*)(this));
        return;
    }
    update_active_game_effect();
}

}
