#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void set_flags__10TObjPlayerFUl(void *, int);
void init_forward__10TObjPlayerFv(void *);
void clear_id__10TObjPlayerFv(void *);
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
    init_forward__10TObjPlayerFv(self->f_1FC);
    set_flags__10TObjPlayerFUl((void *)((char *)this + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(this, 515);
    *(s32 **)((s8 *)this + 0x1EC) = notify_hit_target__10TObjPlayerFUlUlUlUl;
    *(s32 **)((s8 *)this + 0x1F4) = TObjPlayer__sub_80128A74;
    *(s32 **)((s8 *)this + 0x1F0) = spawn_shot_effect__10TObjPlayerFiiif;
    *(f32 *)((s8 *)this + 0x1E4) = lbl_805DADF8;
    clear_id__10TObjPlayerFv(self->f_1FC);
    return this;
}

}
