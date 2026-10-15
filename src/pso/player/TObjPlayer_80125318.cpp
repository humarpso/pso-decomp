#include "types.h"

extern "C" {

void *init_and_configure__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_weapon_trail_joints(void *, int, int, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern s32 lbl_804A2358[];

void *init_and_configure__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A2358;
    set_weapon_trail_joints(arg0, 2, 6, 5);
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    set_effect_state__10TObjPlayerFPvi(arg0, 13);
    return arg0;
}

}
