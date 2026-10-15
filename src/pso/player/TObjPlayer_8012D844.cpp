#include "types.h"

extern "C" {

void *init_variant_2_5a28__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A5A28[];

void *init_variant_2_5a28__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5A28;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

}
