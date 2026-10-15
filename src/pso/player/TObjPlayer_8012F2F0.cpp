#include "types.h"

extern "C" {

void update_boss2tunnel__10TObjPlayerFPv(void *arg0);
void apply_on_shield_state5__10TObjPlayerFi(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
s32 refresh_owner_stats__5TItemFPv(s32);
s32 load_projection_tex__10TObjPlayerFii(void *, s32);
s32 setup_particle_once__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();

void update_boss2tunnel__10TObjPlayerFPv(void *arg0) {
    if (((s32) *(s32 *)((s8 *)arg0 + 0x1F8) != 0) && (get_player_list__10TObjPlayerFv() == 1)) {
        setup_particle_once__10TObjPlayerFPv(arg0);
        load_projection_tex__10TObjPlayerFii(arg0, 0);
    }
}

void apply_on_shield_state5__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        refresh_owner_stats__5TItemFPv(arg0);
    }
}

}
