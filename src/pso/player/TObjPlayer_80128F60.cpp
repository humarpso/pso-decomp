#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern s32 lbl_804A403C[];
extern s32 notify_hit_target__10TObjPlayerFUlUlUlUl[];
extern s32 TObjPlayer__sub_80128A74[];
extern s32 spawn_shot_effect__10TObjPlayerFiiif[];
extern const f32 lbl_805DADF8;
struct VOff_80128F60_arg0_80128f60 { char pad_0[0x1FC]; char f_1FC[1]; };

void *TObjPlayer::init_event_callbacks() {
    struct VOff_80128F60_arg0_80128f60 *self = (struct VOff_80128F60_arg0_80128f60 *)this;
    construct_srank_weapon(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A403C;
    ((TObjPlayer *)(self->f_1FC))->init_forward();
    ((TObjPlayer *)((char *)this + 376))->set_flags(32);
    set_status_flags__10TObjPlayerFPvUi(this, 515);
    this->m_1ec = notify_hit_target__10TObjPlayerFUlUlUlUl;
    this->m_1f4 = TObjPlayer__sub_80128A74;
    *(s32 **)((s8 *)this + 0x1F0) = spawn_shot_effect__10TObjPlayerFiiif;
    *(f32 *)&this->m_1e4 = lbl_805DADF8;
    ((TObjPlayer *)(self->f_1FC))->clear_id();
    return this;
}

}
