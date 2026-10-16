#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A07C0[];
extern s32 spawn_weapon_impact_effect[];

void *TObjPlayer::init_vtable() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A07C0;
    this->m_1ec = spawn_weapon_impact_effect;
    return this;
}

}
