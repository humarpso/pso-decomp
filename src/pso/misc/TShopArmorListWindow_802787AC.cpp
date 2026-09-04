#include "types.h"

extern "C" {

void save_and_close__20TShopArmorListWindowFPv(void* p);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int fn_80278DA4(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void save_and_close__20TShopArmorListWindowFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_80278DA4(p); TShopArmorListWindow__sub_80266CF8(p); }

}
