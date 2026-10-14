#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_trade_action__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void init_forward__10TObjPlayerFPv(void *);
void clear_id__10TObjPlayerFPv(void *);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A535C[];
extern M2C_UNK rocket_punch_wall_impact[];
extern M2C_UNK rocket_punch_target_impact[];
extern M2C_UNK rocket_punch_create_shot[];
extern const f32 lbl_805DAEF0;
struct VOff_8012C868_arg0_8012c868 { char pad_0[0x1F8]; char f_1F8[1]; };

void *init_trade_action__10TObjPlayerFPv(void *arg0) {
    struct VOff_8012C868_arg0_8012c868 *self = (struct VOff_8012C868_arg0_8012c868 *)arg0;
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A535C;
    init_forward__10TObjPlayerFPv(self->f_1F8);
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = rocket_punch_wall_impact;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = rocket_punch_target_impact;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = rocket_punch_create_shot;
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DAEF0;
    clear_id__10TObjPlayerFPv(self->f_1F8);
    return arg0;
}

}
