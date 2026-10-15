#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFl(void *, int);

extern s32 lbl_804A1098[];

void *TObjPlayer::init_substate_a() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1098;
    set_status_flags__10TObjPlayerFPvUi(this, 34);
    *(u32 *)((s8 *)this + 0x1F8) = 0;
    *(u32 *)((s8 *)this + 0x1FC) = 0;
    set_effect_state__10TObjPlayerFl(this, 10);
    return this;
}

}
