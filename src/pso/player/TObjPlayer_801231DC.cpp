#include "types.h"

extern "C" {

void *construct_twin_chakram(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A1760[];

void *construct_twin_chakram(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1760;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1536);
    return arg0;
}

}
