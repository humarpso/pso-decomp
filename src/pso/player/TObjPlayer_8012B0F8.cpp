#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012B0F8(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK p_arms_blade_weapon_vtable[];

void *TObjPlayer__sub_8012B0F8(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = p_arms_blade_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(arg0, 513);
    return arg0;
}

}
