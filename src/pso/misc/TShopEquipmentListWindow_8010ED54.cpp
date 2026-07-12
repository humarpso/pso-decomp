#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TShopEquipmentListWindow__sub_8010ED54(void *arg0, s8 arg1);
s32 TItemData__sub_8010CD6C();

void TShopEquipmentListWindow__sub_8010ED54(void *arg0, s8 arg1) {
    if (TItemData__sub_8010CD6C() != 0) {
        M2C_FIELD(arg0, s8 *, 5) = arg1;
        return;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 3) {
        M2C_FIELD(arg0, s8 *, 5) = 0;
    }
}

}
