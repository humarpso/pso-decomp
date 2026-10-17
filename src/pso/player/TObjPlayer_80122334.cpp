#include "types.h"
#include "pso/player/TObjPlayer_80122334.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A0EA8[];
extern s32 spawn_weapon_impact_effect[];

void *guld_milla_ct(void *player) {
    TItemWeapon__ct(player);
    *(s32 **)((s8 *)player + 0x18) = lbl_804A0EA8;
    ((TObjPlayer *)player)->set_status_flags(515);
    *(s32 **)((s8 *)player + 0x1EC) = spawn_weapon_impact_effect;
    return player;
}

}
