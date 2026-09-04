#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_item_data_value__24TShopEquipmentSellWindowFUi(u32 arg0);
s32 TItemData__sub_8010DF9C(M2C_UNK *);
M2C_UNK copy_to_item_data__5TItemFPvPv(u32, M2C_UNK *);

s32 get_item_data_value__24TShopEquipmentSellWindowFUi(u32 arg0) {
    M2C_UNK sp8[4];

    if (arg0 != 0U) {
        copy_to_item_data__5TItemFPvPv(arg0, sp8);
        return TItemData__sub_8010DF9C(sp8);
    }
    return 0;
}

}
