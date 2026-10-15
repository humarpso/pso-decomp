#include "types.h"

extern "C" {

u8 get_item_type_or_default__9TItemListFPv(void *arg0);
s32 lookup_item_def__9TItemDataFPv();

u8 get_item_type_or_default__9TItemListFPv(void *arg0) {
    u8 temp_r3;

    if (lookup_item_def__9TItemDataFPv() != 0) {
        temp_r3 = *(u8 *)((s8 *)arg0 + 5);
        if (temp_r3 != 0) {
            return temp_r3;
        }
    }
    return 1U;
}

}
