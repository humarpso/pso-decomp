#include "types.h"
#include "pso/item/TUnk_804A3548.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);

extern s32 lbl_804A3548[];

void *TUnk_804A3548::init_vtable_804A3548() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A3548;
    set_status_flags__10TObjPlayerFUl(this, 34);
    return this;
}

}
