#include "types.h"

extern "C" {

void *enter_state_804A0BC0__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern s32 lbl_804A0BC0[];

void *enter_state_804A0BC0__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0BC0;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    *(u32 *)((s8 *)arg0 + 0x1F8) = 0;
    *(u32 *)((s8 *)arg0 + 0x1FC) = 0;
    set_effect_state__10TObjPlayerFPvi(arg0, 10);
    return arg0;
}

}
