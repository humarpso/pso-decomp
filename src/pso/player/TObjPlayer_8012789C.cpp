#include "types.h"

extern "C" {

void TObjPlayer__sub_8012789C(void* p);
void cast_jellen_zalure__10TObjPlayerFPv(void *arg0);
s32 spawn_cane_effects__10TObjPlayerFiUiii(s32, void *, s32, s32);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
int roll_technique__11TItemWeaponFv(void*);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 get_attack_stage__11TItemWeaponFPv();
s32 get_tp__10TObjPlayerFPv(void *);
s32 create__9TTecJelinFiiii(s32, s32, s32, s32);
s32 create_instance__9TTecZaruaFiiii(s32, s32, s32, s32);

void TObjPlayer__sub_8012789C(void* p) { roll_technique__11TItemWeaponFv((void*)(p)); roll_technique__11TItemWeaponFv((void*)(p)); }

extern s32 tl_05;

void cast_jellen_zalure__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;

    if (get_attack_stage__11TItemWeaponFPv() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 2, 1);
    }
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        if (get_tp__10TObjPlayerFPv(arg0) == 0) {
            temp_r3 = *(s32 *)((s8 *)arg0 + 0xF0);
            temp_r4 = temp_r3 + 0x38;
            create__9TTecJelinFiiii(temp_r3, temp_r4, temp_r4, 4);
        } else {
            temp_r3_2 = *(s32 *)((s8 *)arg0 + 0xF0);
            temp_r4_2 = temp_r3_2 + 0x38;
            create_instance__9TTecZaruaFiiii(temp_r3_2, temp_r4_2, temp_r4_2, 4);
        }
        roll_technique__11TItemWeaponFv((void*)(arg0));
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
