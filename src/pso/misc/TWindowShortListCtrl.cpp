#include "types.h"

extern "C" {

void update_variant_a__20TWindowShortListCtrlFPv(void* p);
void update_variant_b__20TWindowShortListCtrlFPv(void* p);
void update_variant_c__20TWindowShortListCtrlFPv(void* p);
int fn_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int fn_80266DB0(void*);
int fn_80278964(void*);
int fn_802789E0(void*);
int build_shop_item_list__10TObjPlayerFPv(void*);

void update_variant_a__20TWindowShortListCtrlFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); fn_80266DB0(p); fn_80278964(p); fn_80266CF8(p); }

void update_variant_b__20TWindowShortListCtrlFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); fn_80266DB0(p); fn_802789E0(p); fn_80266CF8(p); }

void update_variant_c__20TWindowShortListCtrlFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); fn_80266DB0(p); build_shop_item_list__10TObjPlayerFPv(p); fn_80266CF8(p); }

}
