#include "types.h"

extern "C" {

s32 TShopEquipmentSellWindow__sub_801047F0(u32 arg0);
s32 TItemData__sub_8010DF9C();

s32 TShopEquipmentSellWindow__sub_801047F0(u32 arg0) {
    if (arg0 != 0U) {
        return TItemData__sub_8010DF9C();
    }
    return 0;
}

}
