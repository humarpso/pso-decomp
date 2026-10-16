#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A0BC0[];

void *TObjPlayer::enter_state_804A0BC0() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A0BC0;
    set_status_flags__10TObjPlayerFPvUi(this, 34);
    *(u32 *)((s8 *)this + 0x1F8) = 0;
    *(u32 *)&this->m_1fc = 0;
    set_effect_state(10);
    return this;
}

}
