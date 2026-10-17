#include "types.h"

extern "C" {

void clear_all_shop_stock(void);
void clear_shop_armor_flags(void);
void clear_shop_weapon_flags(void);
void clear_shop_tool_flags(void);

    extern int lbl_805D6244;
void clear_all_shop_stock(void) { clear_shop_weapon_flags(); clear_shop_armor_flags(); clear_shop_tool_flags(); lbl_805D6244 = 0; }

}
