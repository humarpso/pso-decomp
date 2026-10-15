#include "types.h"

extern "C" {

void *TObjPlayer__sub_80125F24(void *arg0);
void TItemWeapon__ct(void *);

extern s32 lbl_804A2770[];

void *TObjPlayer__sub_80125F24(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A2770;
    return arg0;
}

}
