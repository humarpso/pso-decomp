#include "types.h"
#include "pso/player/TUnk_804A1858.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 submit_computer_command__10TObjPlayerFv(s32, s16, s32, s32);
void TItemWeapon__ct(void *);

void TObjPlayer::update_linked_object() {
    void *temp_r3;

    temp_r3 = this->m_f4;
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFv(*(s32 *)((s8 *)temp_r3 + 0x2C), *(s16 *)&this->unk_1F8, 0, 0);
    }
}

extern s32 lbl_804A1858[];

void *TUnk_804A1858::set_state_35() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A1858;
    *(u16 *)((s8 *)this + 0x1F8) = 35;
    return this;
}

}
