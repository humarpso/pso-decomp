#include "types.h"

extern "C" {

int fn_80266CF8(void*);
int TShopArmorListWindow__sub_80266D78(void*);
int fn_80266DB0(void*);
int TObjPlayer__sub_80279178(void*);
void fn_80279044(void* p);

void update_window__15TWindowSubEquipFPv(void* p) { TShopArmorListWindow__sub_80266D78(p); fn_80266DB0(p); TObjPlayer__sub_80279178(p); fn_80266CF8(p); }

}
