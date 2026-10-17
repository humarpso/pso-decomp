#include "types.h"
#include "pso/player/TObjPlayer_801231DC.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);

extern s32 lbl_804A1760[];

void *construct_twin_chakram(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1760;
    ((TObjPlayer *)arg0)->set_status_flags(1536);
    return arg0;
}

}
