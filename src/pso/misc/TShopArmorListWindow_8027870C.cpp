#include "types.h"

extern "C" {

void save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv(void* p, void* a1, void* a2);
int clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int add_armor_equip_candidates(void*, void*, void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv(void* p, void* a1, void* a2) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); add_armor_equip_candidates(p, a1, a2); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); }

}
