#include "types.h"
#include "pso/player/TObjPlayer_8012FCB0.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A66D8[];

void *twin_psychogun_ct(void *player) {
    TItemWeapon__ct(player);
    *(s32 **)((s8 *)player + 0x18) = lbl_804A66D8;
    ((TObjPlayer *)player)->set_status_flags(547);
    return player;
}

}
