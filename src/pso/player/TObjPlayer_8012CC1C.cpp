#include "types.h"

extern "C" {

void *init_state__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
s32 TItemWeapon__ct();
s32 set_atp__10TObjPlayerFPvs(void *, s32);

extern s32 lbl_804A5550[];

void *init_state__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2) {
    TItemWeapon__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5550;
    if ((u8) *(u8 *)((s8 *)arg2 + 2) >= 5U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

}
