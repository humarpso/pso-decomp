#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *setup_action__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern M2C_UNK s_rank_psychogun_weapon_vtable[];
extern M2C_UNK create_gun_shot[];
extern M2C_UNK spawn_weapon_impact_effect[];

void *setup_action__10TObjPlayerFPv(void *arg0) {
    construct_srank_weapon(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = s_rank_psychogun_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(arg0, 547);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create_gun_shot;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = spawn_weapon_impact_effect;
    return arg0;
}

}
