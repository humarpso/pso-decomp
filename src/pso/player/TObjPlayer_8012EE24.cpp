#include "types.h"
#include "pso/item/TUnk_804A6010.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A6010[];

void *TUnk_804A6010::set_state_0() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A6010;
    *(u32 *)((s8 *)this + 0x1F8) = 0;
    return this;
}

}
