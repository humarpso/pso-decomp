#include "types.h"
#include "pso/item/TUnk_804A1F20.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A1F20[];

void *TUnk_804A1F20::init_vtable_804A1F20() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1F20;
    return this;
}

}
