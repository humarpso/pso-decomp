#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *TObjPlayer__sub_8012B0F8(void *arg0);
void TItemWeapon__ct(void *);

extern s32 p_arms_blade_weapon_vtable[];

void *TObjPlayer__sub_8012B0F8(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = p_arms_blade_weapon_vtable;
    ((TObjPlayer *)arg0)->set_status_flags(513);
    return arg0;
}

}
