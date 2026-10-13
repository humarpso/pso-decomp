#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *enter_state_2__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern M2C_UNK s_rank_needle_weapon_vtable[];
extern M2C_UNK spawn_target_needle[];
extern M2C_UNK spawn_needle_wall_impact[];
extern M2C_UNK create_shoot_model__10TObjPlayerFUiiif[];

void *enter_state_2__10TObjPlayerFPv(void *arg0) {
    construct_srank_weapon(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = s_rank_needle_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = spawn_target_needle;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = spawn_needle_wall_impact;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create_shoot_model__10TObjPlayerFUiiif;
    return arg0;
}

}
