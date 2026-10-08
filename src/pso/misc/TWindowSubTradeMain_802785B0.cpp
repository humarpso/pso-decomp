#include "types.h"

extern "C" {

void refresh_item_list__19TWindowSubTradeMainFPvPv(void* p, void* a1);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int fill_trade_item_list(void*, void*);

void refresh_item_list__19TWindowSubTradeMainFPvPv(void* p, void* a1) { save_cursor_selection__20TShopArmorListWindowFPv(p); reset_list__20TShopArmorListWindowFPv(p); fill_trade_item_list(p, a1); clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(p); }

}
