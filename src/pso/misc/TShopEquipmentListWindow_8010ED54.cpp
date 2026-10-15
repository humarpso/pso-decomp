#include "types.h"

extern "C" {

void set_stack_count__24TShopEquipmentListWindowFPvc(void *arg0, s8 arg1);
s32 lookup_item_def__9TItemDataFPv();

void set_stack_count__24TShopEquipmentListWindowFPvc(void *arg0, s8 arg1) {
    if (lookup_item_def__9TItemDataFPv() != 0) {
        *(s8 *)((s8 *)arg0 + 5) = arg1;
        return;
    }
    if ((u8) *(u8 *)((s8 *)arg0 + 0) == 3) {
        *(s8 *)((s8 *)arg0 + 5) = 0;
    }
}

}
