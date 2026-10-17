#include "types.h"
#include "pso/player/TObjPlayer_8012B0F8.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 p_arms_blade_weapon_vtable[];

void *TObjPlayer__sub_8012B0F8(void *player) {
    TItemWeapon__ct(player);
    *(s32 **)((s8 *)player + 0x18) = p_arms_blade_weapon_vtable;
    ((TObjPlayer *)player)->set_status_flags(513);
    return player;
}

}
