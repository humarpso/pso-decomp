#include "types.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/item/TItem.h"

extern "C" {
u8 * find_item_by_id(s32);
}

extern "C" {

void TWindowHelpItem::refresh_copied_items() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    s32 temp_r3_3;
    u8 *temp_r3_2;
    u8 *temp_r3_4;
    temp_r3 = *(s32 *)&this->m_a0;
    if (temp_r3 != -1) {
        temp_r3_2 = (u8 *)(find_item_by_id(temp_r3));
        if (temp_r3_2 != NULL) {
            ((TItem *)temp_r3_2)->copy_to_item_data(arg0 + 0x74);
        }
    }
    temp_r3_3 = *(s32 *)&this->m_a4;
    if (temp_r3_3 != -1) {
        temp_r3_4 = (u8 *)(find_item_by_id(temp_r3_3));
        if (temp_r3_4 != NULL) {
            ((TItem *)temp_r3_4)->copy_to_item_data(arg0 + 0x88);
        }
    }
}

}
