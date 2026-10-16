#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A5E20[];
extern s32 spawn_target_needle[];
extern s32 spawn_needle_wall_impact[];
extern s32 create_shoot_model__10TObjPlayerFUiiif[];

void *TObjPlayer::init_state_2() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A5E20;
    set_status_flags__10TObjPlayerFPvUi(this, 2);
    this->m_1f4 = spawn_target_needle;
    this->m_1ec = spawn_needle_wall_impact;
    *(s32 **)((s8 *)this + 0x1F0) = create_shoot_model__10TObjPlayerFUiiif;
    return this;
}

}
