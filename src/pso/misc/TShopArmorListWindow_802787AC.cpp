#include "types.h"

extern "C" {

void save_and_close__20TShopArmorListWindowFPv(void* p);
int clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int populate_judgment_item_list(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void save_and_close__20TShopArmorListWindowFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); populate_judgment_item_list(p); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); }

}
