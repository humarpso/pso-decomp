#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *setup_shoot_model_callback__10TObjPlayerFPv(void *arg0);
void construct_srank_weapon(void *);

extern M2C_UNK lbl_804A3D20[];
extern M2C_UNK spawn_weapon_impact_effect[];

void *setup_shoot_model_callback__10TObjPlayerFPv(void *arg0) {
    construct_srank_weapon(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3D20;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = spawn_weapon_impact_effect;
    return arg0;
}

}
