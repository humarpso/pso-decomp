#include "types.h"

extern "C" {

int apply_shop_judgment__10TObjPlayerFPvi(void* a0, int a1);
void set_flag_and_update__10TObjPlayerFPvi(void* a0, int a1);
int collect_alive_owners__10TObjPlayerFPv(void*);
int unequip_invalid_items_recursive__10TObjPlayerFPv(void*);

    extern int lbl_805D5DF4;
    extern int lbl_805D5DF8;
int apply_shop_judgment__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5DF8 = a1; lbl_805D5DF4 = 0; collect_alive_owners__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

    extern int lbl_805D5DE0;
void set_flag_and_update__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5DE0 = a1; unequip_invalid_items_recursive__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); }

}
