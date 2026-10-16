#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_weapon_trail_joints(void *, int, int, int);

extern s32 lbl_804A2358[];

void *TObjPlayer::init_and_configure() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A2358;
    set_weapon_trail_joints(this, 2, 6, 5);
    set_status_flags__10TObjPlayerFPvUi(this, 35);
    set_effect_state(13);
    return this;
}

}
