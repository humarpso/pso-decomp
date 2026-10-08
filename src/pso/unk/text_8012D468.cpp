#include "pso/item/TItemData.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
extern "C" {
u16 TObjPlayer__sub_80100474(void *);
s32 replace_item_with_new_code(void *, void *);
void replace_item_if_value_exceeds__10TObjPlayerFi(s32 arg0);
}

extern "C" {

void replace_item_if_value_exceeds__10TObjPlayerFi(s32 arg0) {
    TItemData item_data;
    if (TObjPlayer__sub_80100474((void *) (arg0)) >= 0x59D8U) {
        item_data.data1.data_u8[0] = 0;
        item_data.data1.data_u8[1] = 0x32;
        item_data.data1.data_u8[2] = 0;
        replace_item_with_new_code((void *) (&item_data.data1.data_u8[0]), (void *) (arg0));
    }
}

}
