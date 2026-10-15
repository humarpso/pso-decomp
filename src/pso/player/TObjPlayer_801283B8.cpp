#include "types.h"

extern "C" {

void srank_marker_noop(void);
void spawn_cane_effects_if_ready__10TObjPlayerFi(s32 arg0);
void *init_state_vtable__10TObjPlayerFPv(void *arg0);
s32 spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, s32, s32);
s32 get_attack_stage__11TItemWeaponFPv();
void construct_srank_weapon(void *);

void srank_marker_noop(void) {  }

extern s32 tl_05;

void spawn_cane_effects_if_ready__10TObjPlayerFi(s32 arg0) {
    if (get_attack_stage__11TItemWeaponFPv() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 1, 2);
    }
}

extern s32 lbl_804A3B20[];

void *init_state_vtable__10TObjPlayerFPv(void *arg0) {
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3B20;
    return arg0;
}

}
