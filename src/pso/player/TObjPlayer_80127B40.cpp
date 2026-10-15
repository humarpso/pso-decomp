#include "types.h"

extern "C" {

void *init_vtable_804A3548__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A3548[];

void *init_vtable_804A3548__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3548;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
