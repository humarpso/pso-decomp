#include "types.h"

extern "C" {

int TShopArmorListWindow__sub_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int TObjPlayer__sub_80279178(void*);
void TWindowSubEquip__sub_80279044(void* p);

void update_window__15TWindowSubEquipFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); TObjPlayer__sub_80279178(p); TShopArmorListWindow__sub_80266CF8(p); }

}
