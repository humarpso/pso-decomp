#include "types.h"

struct Item_80279098 { u8 pad[0x34]; u32 flags; };

extern "C" {
s32 get_class_weapon_icon_index(void *self, u8 *p);
}

extern "C" {

void TWindowSubEquip__sub_80279044(void* p);
void update_window__15TWindowSubEquipFPv(void* p);
int build_equipment_list__15TWindowSubEquipFv(void*);
int clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void TWindowSubEquip__sub_80279044(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }

void update_window__15TWindowSubEquipFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); build_equipment_list__15TWindowSubEquipFv(p); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); }
s32 get_class_weapon_icon_index(void *self, u8 *p) {
    Item_80279098 *it = (Item_80279098 *)(p + 0x85c);
    if (it == 0) return 0x33;
    if (it->flags & 0x20) return 0;
    if (it->flags & 0x40) return 1;
    return 2;
}

}
