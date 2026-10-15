#include "types.h"
#include "pso/TItemList.h"

extern "C" {

s32 lookup_item_def__9TItemDataFPv();

u8 TItemList::get_item_type_or_default() {
    u8 temp_r3;

    if (lookup_item_def__9TItemDataFPv() != 0) {
        temp_r3 = *(u8 *)((s8 *)this + 5);
        if (temp_r3 != 0) {
            return temp_r3;
        }
    }
    return 1U;
}

}
