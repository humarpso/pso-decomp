#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 rabbit_wand_weapon_vtable[];

void *TObjPlayer::ct_variant() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = rabbit_wand_weapon_vtable;
    return this;
}

}
