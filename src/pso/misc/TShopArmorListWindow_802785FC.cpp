#include "types.h"

extern "C" {

void close_list__20TShopArmorListWindowFPv(void* p);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int fn_802788A8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void close_list__20TShopArmorListWindowFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_802788A8(p); TShopArmorListWindow__sub_80266CF8(p); }

}
