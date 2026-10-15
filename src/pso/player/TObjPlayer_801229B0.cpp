#include "types.h"

extern "C" {

void *destruct_and_set_vtable__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);

extern s32 lbl_804A1190[];

void *destruct_and_set_vtable__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1190;
    return arg0;
}

}
