#include "types.h"

extern "C" {

void *setup_shoot_model_callback__10TObjPlayerFPv(void *arg0);
void construct_srank_weapon(void *);

extern s32 lbl_804A3D20[];
extern s32 spawn_weapon_impact_effect[];

void *setup_shoot_model_callback__10TObjPlayerFPv(void *arg0) {
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3D20;
    *(s32 **)((s8 *)arg0 + 0x1EC) = spawn_weapon_impact_effect;
    return arg0;
}

}
