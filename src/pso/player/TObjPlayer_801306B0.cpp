#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A69DC[];
extern s32 create_shoot_model__10TObjPlayerFiiif[];

void *TObjPlayer::init_state_35() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A69DC;
    set_status_flags__10TObjPlayerFPvUi(this, 35);
    *(s32 **)((s8 *)this + 0x1F0) = create_shoot_model__10TObjPlayerFiiif;
    *(u32 *)((s8 *)this + 0x1F8) = 0;
    *(u32 *)&this->m_1fc = 3276;
    *(u32 *)((s8 *)this + 0x200) = 0;
    *(u32 *)&this->m_204 = 1;
    return this;
}

}
