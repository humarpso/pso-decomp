#include "types.h"
#include "pso/item/TUnk_804A1A48.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A1A48[];

void *TUnk_804A1A48::init_state_1() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1A48;
    set_status_flags__10TObjPlayerFPvUi(this, 1);
    *(u32 *)((s8 *)this + 0x1F8) = 0;
    *(u32 *)&(*(s32 *)((u8 *)this + 0x1FC)) = 1;
    return this;
}

}
