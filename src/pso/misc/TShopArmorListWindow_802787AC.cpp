#include "types.h"
#include "pso/misc/TShopArmorListWindow.h"

extern "C" {

int clamp_selection_to_valid_entry__20TShopArmorListWindowFv(void*);
int reset_list__20TShopArmorListWindowFPv(void*);
int populate_judgment_item_list(void*);
int save_cursor_selection__20TShopArmorListWindowFv(void*);

void TShopArmorListWindow::save_and_close() { save_cursor_selection__20TShopArmorListWindowFv(this); reset_list__20TShopArmorListWindowFPv(this); populate_judgment_item_list(this); clamp_selection_to_valid_entry__20TShopArmorListWindowFv(this); }

}
