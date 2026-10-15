#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern s32 lbl_804A3A20[];

void *TObjPlayer::init_mode() {
    construct_srank_weapon(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A3A20;
    set_status_flags__10TObjPlayerFPvUi(this, 1536);
    return this;
}

}
