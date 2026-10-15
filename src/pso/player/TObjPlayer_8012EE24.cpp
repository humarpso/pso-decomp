#include "types.h"

extern "C" {

void *set_state_0__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);

extern s32 lbl_804A6010[];

void *set_state_0__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A6010;
    *(u32 *)((s8 *)arg0 + 0x1F8) = 0;
    return arg0;
}

}
