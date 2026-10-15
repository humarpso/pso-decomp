#include "types.h"

extern "C" {

void *init_state_2__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A5E20[];
extern s32 spawn_target_needle[];
extern s32 spawn_needle_wall_impact[];
extern s32 create_shoot_model__10TObjPlayerFUiiif[];

void *init_state_2__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5E20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    *(s32 **)((s8 *)arg0 + 0x1F4) = spawn_target_needle;
    *(s32 **)((s8 *)arg0 + 0x1EC) = spawn_needle_wall_impact;
    *(s32 **)((s8 *)arg0 + 0x1F0) = create_shoot_model__10TObjPlayerFUiiif;
    return arg0;
}

}
