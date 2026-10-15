#include "types.h"
#include "pso/misc/TShopEquipmentSellWindow.h"

extern "C" {
s32 calc_price__9TItemDataFv(s32 *);
s32 is_valid_drop_floor(s32 arg0);
s32 TObjPlayer__sub_80104840(s32 arg0);
}

extern "C" {

s32 copy_to_item_data__5TItemFPv(u32, s32 *);

s32 TShopEquipmentSellWindow::get_item_data_value(u32 arg0) {
    s32 sp8[4];

    if (arg0 != 0U) {
        copy_to_item_data__5TItemFPv(arg0, sp8);
        return calc_price__9TItemDataFv((s32 *)(sp8));
    }
    return 0;
}
s32 TShopEquipmentSellWindow::get_item_price_if_valid() {
    u32 arg0 = (u32)this;
    if (arg0 != 0U) {
        return calc_price__9TItemDataFv((s32 *)(arg0));
    }
    return 0;
}
s32 is_valid_drop_floor(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 0x12)) {
        return 1;
    }
    return 0;
}
s32 TObjPlayer__sub_80104840(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 0x24)) {
        return 1;
    }
    return 0;
}

}
