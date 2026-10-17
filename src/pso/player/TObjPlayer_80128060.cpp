#include "types.h"
#include "pso/player/TObjPlayer_8012105C.h"
#include "pso/item/TUnk_804A3830.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);

extern s32 lbl_804A3830[];

void *TUnk_804A3830::construct_state_variant() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A3830;
    set_weapon_trail_joints((s32)this, 2, 1, 2);
    set_weapon_trail_joints((s32)this, 3, 3, 4);
    set_status_flags__10TObjPlayerFUl(this, 513);
    return this;
}

}
