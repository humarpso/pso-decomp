#include "types.h"
#include "pso/player/TUnk_804A1668.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 submit_computer_command__10TObjPlayerFv(s32, s16, s32, s32);
void TItemWeapon__ct(void *);

void TObjPlayer::update_from_owner() {
    void *temp_r3;

    temp_r3 = this->m_f4;
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFv(*(s32 *)((s8 *)temp_r3 + 0x2C), *(s16 *)((s8 *)this + 0x1F8), 0, 1);
    }
}

extern s32 lbl_804A1668[];
extern s32 create__15TItemEffBringerFUlllf[];

void *TUnk_804A1668::init_bringer_effect() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1668;
    *(u16 *)((s8 *)this + 0x1F8) = 2;
    *(s32 **)((s8 *)this + 0x1F0) = create__15TItemEffBringerFUlllf;
    return this;
}

}
