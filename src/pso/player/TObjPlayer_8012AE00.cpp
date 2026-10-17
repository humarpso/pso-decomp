#include "types.h"
#include "pso/player/TObjPlayer_8012AE00.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void TObjPlayer__sub_8012AF00(void *);

extern s32 heaven_punisher_weapon_vtable[];

void *heaven_punisher_ct(void *player) {
    TItemWeapon__ct(player);
    *(s32 **)((s8 *)player + 0x18) = heaven_punisher_weapon_vtable;
    TObjPlayer__sub_8012AF00((void *)((char *)player + 504));
    ((TObjPlayer *)player)->set_status_flags(34);
    return player;
}

}
