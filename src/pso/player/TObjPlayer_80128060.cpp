#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct_state_variant__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_weapon_trail_joints(void *, int, int, int);

extern M2C_UNK lbl_804A3830[];

void *construct_state_variant__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3830;
    set_weapon_trail_joints(arg0, 2, 1, 2);
    set_weapon_trail_joints(arg0, 3, 3, 4);
    set_status_flags__10TObjPlayerFPvUi(arg0, 513);
    return arg0;
}

}
