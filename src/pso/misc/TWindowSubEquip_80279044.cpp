#include "types.h"

extern "C" {

void TWindowSubEquip__sub_80279044(void* p);
int TObjPlayer__sub_80279178(void*);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void TWindowSubEquip__sub_80279044(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }

}
