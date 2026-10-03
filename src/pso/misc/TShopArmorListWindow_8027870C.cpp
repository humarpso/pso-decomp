#include "types.h"

extern "C" {

void save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv(void* p, void* a1, void* a2);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int add_armor_equip_candidates(void*, void*, void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv(void* p, void* a1, void* a2) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); add_armor_equip_candidates(p, a1, a2); TShopArmorListWindow__sub_80266CF8(p); }

}
