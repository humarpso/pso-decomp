#include "types.h"

extern "C" {

void *init_state_1__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A1A48[];

void *init_state_1__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1A48;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    *(u32 *)((s8 *)arg0 + 0x1F8) = 0;
    *(u32 *)((s8 *)arg0 + 0x1FC) = 1;
    return arg0;
}

}
