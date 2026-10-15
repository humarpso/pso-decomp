#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void set_flags__10TObjPlayerFUl(void *, int);
void init_forward__10TObjPlayerFv(void *);
void clear_id__10TObjPlayerFv(void *);
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
    init_forward__10TObjPlayerFv(self->f_1F8);
    set_flags__10TObjPlayerFUl((void *)((char *)this + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(this, 515);
    *(s32 **)((s8 *)this + 0x1EC) = rocket_punch_wall_impact;
    *(s32 **)((s8 *)this + 0x1F4) = rocket_punch_target_impact;
    *(s32 **)((s8 *)this + 0x1F0) = rocket_punch_create_shot;
    *(f32 *)((s8 *)this + 0x1E4) = lbl_805DAEF0;
    clear_id__10TObjPlayerFv(self->f_1F8);
    return this;
}

}
