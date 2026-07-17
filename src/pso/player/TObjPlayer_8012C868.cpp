#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_trade_action__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void init_forward__10TObjPlayerFPv(void *);
void clear_id__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A535C[];
extern M2C_UNK send_trade_action__10TObjPlayerFUiUiUiUi[];
extern M2C_UNK TObjPlayer__sub_8012C384[];
extern M2C_UNK create_shot_effect__10TObjPlayerFiiif[];
extern const f32 lbl_805DAEF0;
struct VOff_8012C868_arg0_8012c868 { char pad_0[0x1F8]; char f_1F8[1]; };

void *init_trade_action__10TObjPlayerFPv(void *arg0) {
    struct VOff_8012C868_arg0_8012c868 *self = (struct VOff_8012C868_arg0_8012c868 *)arg0;
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A535C;
    init_forward__10TObjPlayerFPv(self->f_1F8);
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = send_trade_action__10TObjPlayerFUiUiUiUi;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = TObjPlayer__sub_8012C384;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create_shot_effect__10TObjPlayerFiiif;
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DAEF0;
    clear_id__10TObjPlayerFPv(self->f_1F8);
    return arg0;
}

}
