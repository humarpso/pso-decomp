#include "types.h"

extern "C" {

s16 get_stage_strike_count__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801251B4(void *arg0);
void draw_dragons_claw__10TObjPlayerFPv(void* p);
void apply_11e618_twice__10TObjPlayerFPv(void* p);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
int roll_technique__11TItemWeaponFv(void*);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32 *);
int draw_weapon_at_joint(void*, void*);
s32 get_tp__10TObjPlayerFPv(void *);
s32 create__8TTecFoieFPvPvPvPv(void *, s32 *, s32, s32);

s16 get_stage_strike_count__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x12); }
void TObjPlayer__sub_801251B4(void *arg0) {
    s32 sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0) {
            temp_r31 = *(void **)((s8 *)arg0 + 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r31, &sp8, *(s32 *)((s8 *)temp_r31 + 0x60), get_tp__10TObjPlayerFPv(arg0) + 2);
            roll_technique__11TItemWeaponFv(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}
void draw_dragons_claw__10TObjPlayerFPv(void* p) { draw_weapon_at_joint(p, (void*)49); update_trail_slot__11TItemWeaponFPvi(p, (void*)0); update_trail_slot__11TItemWeaponFPvi(p, (void*)1); update_trail_slot__11TItemWeaponFPvi(p, (void*)2); }
void apply_11e618_twice__10TObjPlayerFPv(void* p) { roll_technique__11TItemWeaponFv(p); roll_technique__11TItemWeaponFv(p); }

}
