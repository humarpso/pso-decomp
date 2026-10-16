#include "types.h"

extern "C" {

void *heaven_punisher_ct(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);
void TObjPlayer__sub_8012AF00(void *);

extern s32 heaven_punisher_weapon_vtable[];

void *heaven_punisher_ct(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = heaven_punisher_weapon_vtable;
    TObjPlayer__sub_8012AF00((void *)((char *)arg0 + 504));
    set_status_flags__10TObjPlayerFUl(arg0, 34);
    return arg0;
}

}
