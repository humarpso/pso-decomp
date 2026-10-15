#include "types.h"

extern "C" {

void *TObjPlayer__sub_8012D620(void *arg0);
void TItemWeapon__ct(void *);

extern s32 lbl_804A5930[];

void *TObjPlayer__sub_8012D620(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5930;
    return arg0;
}

}
