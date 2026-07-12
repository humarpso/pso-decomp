#include "types.h"

extern "C" {

void refresh_item_list__19TWindowSubTradeMainFPvPv(void* p, void* a1);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int fn_80266CF8(void*);
int fn_80266DB0(void*);
int fn_802787F0(void*, void*);

void refresh_item_list__19TWindowSubTradeMainFPvPv(void* p, void* a1) { save_cursor_selection__20TShopArmorListWindowFPv(p); fn_80266DB0(p); fn_802787F0(p, a1); fn_80266CF8(p); }

}
