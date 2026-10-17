#include "types.h"
#include "pso/player/TObjPlayer_8012FCB0.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A66D8[];

void *twin_psychogun_ct(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A66D8;
    ((TObjPlayer *)arg0)->set_status_flags(547);
    return arg0;
}

}
