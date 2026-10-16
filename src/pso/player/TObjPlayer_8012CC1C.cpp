#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TItemWeapon__ct();

extern s32 lbl_804A5550[];

void *TObjPlayer::init_state(s32 arg1, void *arg2) {
    TItemWeapon__ct();
    *(s32 **)((s8 *)this + 0x18) = lbl_804A5550;
    if ((u8) *(u8 *)((s8 *)arg2 + 2) >= 5U) {
        set_atp(-1);
    }
    return this;
}

}
