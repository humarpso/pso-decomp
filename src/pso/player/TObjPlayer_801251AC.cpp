#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecFoie.h"

extern "C" {

void TObjPlayer__sub_801251B4(void *arg0);
s32 is_mode_two_and_ready__10TObjPlayerFv();
int roll_technique__11TItemWeaponFv(void*);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);

s16 TObjPlayer::get_stage_strike_count() { return *(s16*)((char*)this + 0x12); }
void TObjPlayer__sub_801251B4(void *arg0) {
    s32 sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (((TObjPlayer *)arg0)->draw_icon((s32)0, (s32)(&sp8)) != 0) {
            temp_r31 = *(void **)((s8 *)arg0 + 0xF0);
            TTecFoie::create((void *)temp_r31, (void *)(&sp8), (void *)(*(s32 *)((s8 *)temp_r31 + 0x60)), (void *)(((TObjPlayer *)arg0)->get_tp() + 2));
            roll_technique__11TItemWeaponFv(arg0);
        }
    } else {
        ((TObjPlayer *)arg0)->update_active_game_effect();
    }
}
void TObjPlayer::draw_dragons_claw() { draw_weapon_at_joint(this, (void*)49); update_trail_slot__11TItemWeaponFPvi(this, (void*)0); update_trail_slot__11TItemWeaponFPvi(this, (void*)1); update_trail_slot__11TItemWeaponFPvi(this, (void*)2); }
void TObjPlayer::apply_11e618_twice() { roll_technique__11TItemWeaponFv(this); roll_technique__11TItemWeaponFv(this); }

}
