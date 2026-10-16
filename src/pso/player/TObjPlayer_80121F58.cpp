#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *belra_cannon_ct(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);

extern s32 lbl_804A0CB8[];
extern const f32 lbl_805DACD4;

void *belra_cannon_ct(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0CB8;
    ((TObjPlayer *)((char *)arg0 + 376))->set_flags(32);
    *(f32 *)((s8 *)arg0 + 0x1E4) = lbl_805DACD4;
    set_status_flags__10TObjPlayerFUl(arg0, 2);
    *(u32 *)((s8 *)arg0 + 0x1F8) = 1;
    return arg0;
}

}
