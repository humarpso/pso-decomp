#include "types.h"

extern "C" {

void *init_vtable_804A1F20__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);

extern s32 lbl_804A1F20[];

void *init_vtable_804A1F20__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1F20;
    return arg0;
}

}
