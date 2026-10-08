#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_state_2__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A5E20[];
extern M2C_UNK spawn_target_needle[];
extern M2C_UNK spawn_needle_wall_impact[];
extern M2C_UNK create_shoot_model__10TObjPlayerFUiiif[];

void *init_state_2__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5E20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = spawn_target_needle;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = spawn_needle_wall_impact;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create_shoot_model__10TObjPlayerFUiiif;
    return arg0;
}

}
