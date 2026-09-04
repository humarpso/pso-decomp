#include "types.h"

extern "C" {

void TWindowSubEquip__sub_80279044(void* p);
int fn_80279098(void);
void update_window__15TWindowSubEquipFPv(void* p);
int TObjPlayer__sub_80279178(void*);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void TWindowSubEquip__sub_80279044(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }

void update_window__15TWindowSubEquipFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); TObjPlayer__sub_80279178(p); TShopArmorListWindow__sub_80266CF8(p); }

int fn_80279098(void) { return 0; }

}
