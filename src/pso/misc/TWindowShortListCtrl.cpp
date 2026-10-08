#include "types.h"

extern "C" {

void update_variant_a__20TWindowShortListCtrlFPv(void* p);
void update_variant_b__20TWindowShortListCtrlFPv(void* p);
void update_variant_c__20TWindowShortListCtrlFPv(void* p);
int clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int refresh_battle_stat_list(void*);
int fn_802789E0(void*);
int build_shop_item_list__10TObjPlayerFPv(void*);

void update_variant_a__20TWindowShortListCtrlFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); refresh_battle_stat_list(p); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); }

void update_variant_b__20TWindowShortListCtrlFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); fn_802789E0(p); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); }

void update_variant_c__20TWindowShortListCtrlFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); build_shop_item_list__10TObjPlayerFPv(p); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); }

}
