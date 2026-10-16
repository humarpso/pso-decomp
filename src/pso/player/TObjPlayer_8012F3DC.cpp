#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TItemWeapon__ct();

extern s32 lbl_804A62F8[];

void *TObjPlayer::init_from_item(void *arg1, void *arg2) {
    TItemWeapon__ct();
    *(s32 **)((s8 *)this + 0x18) = lbl_804A62F8;
    if (((u8) *(u8 *)((s8 *)arg2 + 2) == 5) || ((u8) *(u8 *)((s8 *)arg2 + 1) == 0x8F)) {
        *(s32 *)&this->unk_1F8 = 1;
    } else {
        *(s32 *)&this->unk_1F8 = 0;
    }
    if ((s32) *(s32 *)&this->unk_1F8 != 0) {
        set_status_flags(0x800);
    }
    if ((u8) *(u8 *)((s8 *)arg2 + 2) > 5U) {
        set_atp(-1);
    }
    return this;
}

}
