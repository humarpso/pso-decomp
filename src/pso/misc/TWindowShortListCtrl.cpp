#include "types.h"
#include "pso/misc/TWindowShortListCtrl.h"

extern "C" {

int clamp_selection_to_valid_entry__20TShopArmorListWindowFv(void*);
int save_cursor_selection__20TShopArmorListWindowFv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int refresh_battle_stat_list(void*);
int fn_802789E0(void*);
int build_shop_item_list__10TObjPlayerFPv(void*);

void TWindowShortListCtrl::update_variant_a() { save_cursor_selection__20TShopArmorListWindowFv(this); reset_list__20TShopArmorListWindowFPv(this); refresh_battle_stat_list(this); clamp_selection_to_valid_entry__20TShopArmorListWindowFv(this); }

void TWindowShortListCtrl::update_variant_b() { save_cursor_selection__20TShopArmorListWindowFv(this); reset_list__20TShopArmorListWindowFPv(this); fn_802789E0(this); clamp_selection_to_valid_entry__20TShopArmorListWindowFv(this); }

void TWindowShortListCtrl::update_variant_c() { save_cursor_selection__20TShopArmorListWindowFv(this); reset_list__20TShopArmorListWindowFPv(this); build_shop_item_list__10TObjPlayerFPv(this); clamp_selection_to_valid_entry__20TShopArmorListWindowFv(this); }

}
