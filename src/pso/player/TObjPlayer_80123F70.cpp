#include "types.h"

extern "C" {

void sorcerers_cane_equip(void* p);
void sorcerers_cane_unequip(void* p);
void refresh_inventory_slot__10TObjPlayerFPv(void *arg0);
s32 submit_computer_command__10TObjPlayerFPv(s32, s32, s32, s32);
s32 refresh_owner_stats__5TItemFPv();

void sorcerers_cane_equip(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
void sorcerers_cane_unequip(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
void refresh_inventory_slot__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    refresh_owner_stats__5TItemFPv();
    temp_r3 = *(void **)((s8 *)arg0 + 0xF4);
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFPv(*(s32 *)((s8 *)temp_r3 + 0x2C), 2, 0, 1);
    }
}

}
