#include "types.h"
#include "pso/misc/TShopArmorListWindow.h"

extern "C" {

int clamp_selection_to_valid_entry__20TShopArmorListWindowFv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int add_armor_equip_candidates(void*, void*, void*);
int save_cursor_selection__20TShopArmorListWindowFv(void*);

void TShopArmorListWindow::save_and_refresh_cursor(void* a1, void* a2) { save_cursor_selection__20TShopArmorListWindowFv(this); reset_list__20TShopArmorListWindowFPv(this); add_armor_equip_candidates(this, a1, a2); clamp_selection_to_valid_entry__20TShopArmorListWindowFv(this); }

}
