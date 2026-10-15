#include "types.h"

extern "C" {

void *enter_state_2__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern s32 s_rank_needle_weapon_vtable[];
extern s32 spawn_target_needle[];
extern s32 spawn_needle_wall_impact[];
extern s32 create_shoot_model__10TObjPlayerFUiiif[];

void *enter_state_2__10TObjPlayerFPv(void *arg0) {
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = s_rank_needle_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    *(s32 **)((s8 *)arg0 + 0x1F4) = spawn_target_needle;
    *(s32 **)((s8 *)arg0 + 0x1EC) = spawn_needle_wall_impact;
    *(s32 **)((s8 *)arg0 + 0x1F0) = create_shoot_model__10TObjPlayerFUiiif;
    return arg0;
}

}
