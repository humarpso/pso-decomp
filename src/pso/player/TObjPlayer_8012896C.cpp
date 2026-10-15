#include "types.h"

extern "C" {

void *init_variant__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern s32 lbl_804A3F20[];
extern s32 spawn_weapon_impact_effect[];

void *init_variant__10TObjPlayerFPv(void *arg0) {
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3F20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 515);
    *(s32 **)((s8 *)arg0 + 0x1EC) = spawn_weapon_impact_effect;
    return arg0;
}

}
