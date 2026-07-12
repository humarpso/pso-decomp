#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_stack_count__24TShopEquipmentListWindowFPvc(void *arg0, s8 arg1);
s32 lookup_item_def__9TItemDataFPv();

void set_stack_count__24TShopEquipmentListWindowFPvc(void *arg0, s8 arg1) {
    if (lookup_item_def__9TItemDataFPv() != 0) {
        M2C_FIELD(arg0, s8 *, 5) = arg1;
        return;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 3) {
        M2C_FIELD(arg0, s8 *, 5) = 0;
    }
}

}
