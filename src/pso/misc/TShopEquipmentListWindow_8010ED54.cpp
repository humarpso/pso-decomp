#include "types.h"
#include "pso/misc/TShopEquipmentListWindow.h"

extern "C" {

s32 lookup_item_def__9TItemDataFPv();

void TShopEquipmentListWindow::set_stack_count(s8 arg1) {
    if (lookup_item_def__9TItemDataFPv() != 0) {
        *(s8 *)((s8 *)this + 5) = arg1;
        return;
    }
    if ((u8) *(u8 *)((s8 *)this + 0) == 3) {
        *(s8 *)((s8 *)this + 5) = 0;
    }
}

}
