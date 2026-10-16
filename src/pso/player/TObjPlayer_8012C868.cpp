#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A535C[];
extern s32 rocket_punch_wall_impact[];
extern s32 rocket_punch_target_impact[];
extern s32 rocket_punch_create_shot[];
extern const f32 lbl_805DAEF0;
struct VOff_8012C868_arg0_8012c868 { char pad_0[0x1F8]; char f_1F8[1]; };

void *TObjPlayer::init_trade_action() {
    struct VOff_8012C868_arg0_8012c868 *self = (struct VOff_8012C868_arg0_8012c868 *)this;
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A535C;
    ((TObjPlayer *)(self->f_1F8))->init_forward();
    ((TObjPlayer *)((char *)this + 376))->set_flags(32);
    set_status_flags__10TObjPlayerFPvUi(this, 515);
    this->m_1ec = rocket_punch_wall_impact;
    this->m_1f4 = rocket_punch_target_impact;
    *(s32 **)((s8 *)this + 0x1F0) = rocket_punch_create_shot;
    *(f32 *)&this->m_1e4 = lbl_805DAEF0;
    ((TObjPlayer *)(self->f_1F8))->clear_id();
    return this;
}

}
