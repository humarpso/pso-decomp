#include "types.h"

extern "C" {

void cleanup__8TItemMagFv(void);
int fn_800F953C(void*);
int fn_8010FE20(void*, void*);

    extern int TItemMag__data_805D54A8;
    extern int lbl_805D54AC;
    extern int lbl_805D54B0;
void cleanup__8TItemMagFv(void) { fn_8010FE20((void*)(TItemMag__data_805D54A8), (void*)1); fn_800F953C((void*)(lbl_805D54B0)); TItemMag__data_805D54A8 = 0; lbl_805D54AC = 0; lbl_805D54B0 = 0; }

}
