#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void sorcerers_cane_equip(void* p);
void sorcerers_cane_unequip(void* p);
s32 submit_computer_command__10TObjPlayerFv(s32, s32, s32, s32);
s32 refresh_owner_stats__5TItemFv();

void sorcerers_cane_equip(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
void sorcerers_cane_unequip(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
void TObjPlayer::refresh_inventory_slot() {
    void *temp_r3;

    refresh_owner_stats__5TItemFv();
    temp_r3 = this->m_f4;
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFv(*(s32 *)((s8 *)temp_r3 + 0x2C), 2, 0, 1);
    }
}

}
