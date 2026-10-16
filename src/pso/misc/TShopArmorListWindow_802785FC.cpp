#include "types.h"
#include "pso/misc/TShopArmorListWindow.h"

extern "C" {

int reset_list__20TShopArmorListWindowFv(void*);
int build_usable_item_list(void*);

void TShopArmorListWindow::close_list() { save_cursor_selection(); reset_list__20TShopArmorListWindowFv(this); build_usable_item_list(this); clamp_selection_to_valid_entry(); }

}
