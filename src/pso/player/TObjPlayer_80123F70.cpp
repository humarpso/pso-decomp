#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    temp_r3 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFPv(M2C_FIELD(temp_r3, s32 *, 0x2C), 2, 0, 1);
    }
}

}
