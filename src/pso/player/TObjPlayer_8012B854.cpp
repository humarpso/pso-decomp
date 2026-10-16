#include "types.h"
#include "pso/item/TUnk_804A4E68.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 imperial_pick_weapon_vtable[];

void *TUnk_804A4E68::init_vtable_and_clear_field1f8() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = imperial_pick_weapon_vtable;
    *(u32 *)((s8 *)this + 0x1F8) = 0;
    return this;
}

}
