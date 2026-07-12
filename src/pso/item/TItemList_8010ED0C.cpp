#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TItemList__sub_8010ED0C(void *arg0);
s32 lookup_item_def__9TItemDataFPv();

u8 TItemList__sub_8010ED0C(void *arg0) {
    u8 temp_r3;

    if (lookup_item_def__9TItemDataFPv() != 0) {
        temp_r3 = M2C_FIELD(arg0, u8 *, 5);
        if (temp_r3 != 0) {
            return temp_r3;
        }
    }
    return 1U;
}

}
