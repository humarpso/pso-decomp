#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A2678[];

void *TObjPlayer::init_state_vt2678() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A2678;
    set_status_flags(34);
    set_effect_state(10);
    *(u32 *)((s8 *)this + 0x1F8) = -1;
    return this;
}

}
