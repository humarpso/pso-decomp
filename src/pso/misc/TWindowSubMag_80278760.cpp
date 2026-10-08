#include "types.h"

extern "C" {

void init_and_setup__13TWindowSubMagFPvPv(void* p, void* a1);
int clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int build_mag_item_candidates(void*, void*);

void init_and_setup__13TWindowSubMagFPvPv(void* p, void* a1) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); build_mag_item_candidates(p, a1); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); }

}
