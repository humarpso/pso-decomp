#include "types.h"

extern "C" {

void *setup_action__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern s32 s_rank_psychogun_weapon_vtable[];
extern s32 create_gun_shot[];
extern s32 spawn_weapon_impact_effect[];

void *setup_action__10TObjPlayerFPv(void *arg0) {
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = s_rank_psychogun_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(arg0, 547);
    *(s32 **)((s8 *)arg0 + 0x1F0) = create_gun_shot;
    *(s32 **)((s8 *)arg0 + 0x1EC) = spawn_weapon_impact_effect;
    return arg0;
}

}
