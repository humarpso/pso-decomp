#include "types.h"

extern "C" {
u8 * find_item_by_id(s32);
s32 copy_to_item_data__5TItemFPvPv(void *, void *);
void refresh_copied_items__15TWindowHelpItemFPv(u8 *arg0);
}

extern "C" {

void refresh_copied_items__15TWindowHelpItemFPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_3;
    u8 *temp_r3_2;
    u8 *temp_r3_4;
    temp_r3 = *(s32 *)((s8 *)arg0 + 0xA0);
    if (temp_r3 != -1) {
        temp_r3_2 = (u8 *)(find_item_by_id(temp_r3));
        if (temp_r3_2 != NULL) {
            copy_to_item_data__5TItemFPvPv(temp_r3_2, arg0 + 0x74);
        }
    }
    temp_r3_3 = *(s32 *)((s8 *)arg0 + 0xA4);
    if (temp_r3_3 != -1) {
        temp_r3_4 = (u8 *)(find_item_by_id(temp_r3_3));
        if (temp_r3_4 != NULL) {
            copy_to_item_data__5TItemFPvPv(temp_r3_4, arg0 + 0x88);
        }
    }
}

}
