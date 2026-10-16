#include "types.h"
#include "pso/item/TUnk_804A1190.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A1190[];

void *TUnk_804A1190::destruct_and_set_vtable() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1190;
    return this;
}

}
