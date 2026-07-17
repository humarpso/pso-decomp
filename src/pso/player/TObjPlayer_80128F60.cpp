#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_event_callbacks__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void init_forward__10TObjPlayerFPv(void *);
void clear_id__10TObjPlayerFPv(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A403C[];
extern M2C_UNK notify_hit_target__10TObjPlayerFUiUiUiUi[];
extern M2C_UNK TObjPlayer__sub_80128A74[];
extern M2C_UNK spawn_shot_effect__10TObjPlayerFiiif[];
extern const f32 lbl_805DADF8;
struct VOff_80128F60_arg0_80128f60 { char pad_0[0x1FC]; char f_1FC[1]; };

void *init_event_callbacks__10TObjPlayerFPv(void *arg0) {
    struct VOff_80128F60_arg0_80128f60 *self = (struct VOff_80128F60_arg0_80128f60 *)arg0;
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A403C;
    init_forward__10TObjPlayerFPv(self->f_1FC);
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = notify_hit_target__10TObjPlayerFUiUiUiUi;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = TObjPlayer__sub_80128A74;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = spawn_shot_effect__10TObjPlayerFiiif;
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DADF8;
    clear_id__10TObjPlayerFPv(self->f_1FC);
    return arg0;
}

}
