#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 technical_crozier_weapon_vtable[];

void *TObjPlayer::init_vtable_804A63F0() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = technical_crozier_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(this, 34);
    return this;
}

}
