#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A3358[];

void *TObjPlayer::init_variant_34() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A3358;
    set_status_flags__10TObjPlayerFPvUi(this, 34);
    return this;
}

}
