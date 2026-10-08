#include "types.h"

extern "C" {

void close_list__20TShopArmorListWindowFPv(void* p);
int clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int fn_802788A8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void close_list__20TShopArmorListWindowFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); fn_802788A8(p); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); }

}
