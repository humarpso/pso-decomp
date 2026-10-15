#include "types.h"

extern "C" {

void *init_event_callbacks__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void init_forward__10TObjPlayerFPv(void *);
void clear_id__10TObjPlayerFPv(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern s32 lbl_804A403C[];
extern s32 notify_hit_target__10TObjPlayerFUiUiUiUi[];
extern s32 TObjPlayer__sub_80128A74[];
extern s32 spawn_shot_effect__10TObjPlayerFiiif[];
extern const f32 lbl_805DADF8;
struct VOff_80128F60_arg0_80128f60 { char pad_0[0x1FC]; char f_1FC[1]; };

void *init_event_callbacks__10TObjPlayerFPv(void *arg0) {
    struct VOff_80128F60_arg0_80128f60 *self = (struct VOff_80128F60_arg0_80128f60 *)arg0;
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A403C;
    init_forward__10TObjPlayerFPv(self->f_1FC);
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 515);
    *(s32 **)((s8 *)arg0 + 0x1EC) = notify_hit_target__10TObjPlayerFUiUiUiUi;
    *(s32 **)((s8 *)arg0 + 0x1F4) = TObjPlayer__sub_80128A74;
    *(s32 **)((s8 *)arg0 + 0x1F0) = spawn_shot_effect__10TObjPlayerFiiif;
    *(f32 *)((s8 *)arg0 + 0x1E4) = lbl_805DADF8;
    clear_id__10TObjPlayerFPv(self->f_1FC);
    return arg0;
}

}
