#include "types.h"

extern "C" {

int count_matching_items__10TObjPlayerFPvi(void* a0, int a1);
int collect_item_owners_recursive__10TObjPlayerFPv(void*);

    extern int lbl_805D5DF4;
    extern int lbl_805D5DF8;
int count_matching_items__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5DF8 = a1; lbl_805D5DF4 = 0; collect_item_owners_recursive__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

}
