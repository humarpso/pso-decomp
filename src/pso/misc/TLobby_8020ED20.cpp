#include "types.h"

extern "C" {

void set_shop_armor_list_flag__6TLobbyFii(int a0, int a1);
int generate_armor_shop_stock(void);

    extern int lbl_805D615C;
void set_shop_armor_list_flag__6TLobbyFii(int a0, int a1) { lbl_805D615C = a1; generate_armor_shop_stock(); }

}
