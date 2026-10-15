#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer__sub_801251B4(void *arg0);
s32 is_mode_two_and_ready__10TObjPlayerFv();
int roll_technique__11TItemWeaponFv(void*);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
s32 update_active_game_effect__10TObjPlayerFv(void *);
s32 draw_icon__10TObjPlayerFll(void *, s32, s32 *);
int draw_weapon_at_joint(void*, void*);
s32 get_tp__10TObjPlayerFv(void *);
s32 create__8TTecFoieFPvPvPvPv(void *, s32 *, s32, s32);

s16 TObjPlayer::get_stage_strike_count() { return *(s16*)((char*)this + 0x12); }
void TObjPlayer__sub_801251B4(void *arg0) {
    s32 sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (draw_icon__10TObjPlayerFll(arg0, 0, &sp8) != 0) {
            temp_r31 = *(void **)((s8 *)arg0 + 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r31, &sp8, *(s32 *)((s8 *)temp_r31 + 0x60), get_tp__10TObjPlayerFv(arg0) + 2);
            roll_technique__11TItemWeaponFv(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFv(arg0);
    }
}
void TObjPlayer::draw_dragons_claw() { draw_weapon_at_joint(this, (void*)49); update_trail_slot__11TItemWeaponFPvi(this, (void*)0); update_trail_slot__11TItemWeaponFPvi(this, (void*)1); update_trail_slot__11TItemWeaponFPvi(this, (void*)2); }
void TObjPlayer::apply_11e618_twice() { roll_technique__11TItemWeaponFv(this); roll_technique__11TItemWeaponFv(this); }

}
