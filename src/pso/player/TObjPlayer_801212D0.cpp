#include "types.h"
#include "pso/item/TUnk_804A07C0.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A07C0[];
extern s32 spawn_weapon_impact_effect[];

void *TUnk_804A07C0::init_vtable() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A07C0;
    (*(s32 * *)((u8 *)this + 0x1EC)) = spawn_weapon_impact_effect;
    return this;
}

}
