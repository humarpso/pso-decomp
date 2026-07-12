#include "types.h"

extern "C" {

int TShopArmorListWindow__sub_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int fn_80278BD8(void*, void*, void*);
void fn_8027870C(void* p, void* a1, void* a2);

void fn_8027870C(void* p, void* a1, void* a2) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_80278BD8(p, a1, a2); TShopArmorListWindow__sub_80266CF8(p); }

}
