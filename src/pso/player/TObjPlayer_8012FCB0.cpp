#include "types.h"

extern "C" {

void *twin_psychogun_ct(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);

extern s32 lbl_804A66D8[];

void *twin_psychogun_ct(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A66D8;
    set_status_flags__10TObjPlayerFUl(arg0, 547);
    return arg0;
}

}
