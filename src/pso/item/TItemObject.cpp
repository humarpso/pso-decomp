#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemObject__sub_80101A1C(void *arg0);

void copy_to_item_data__5TItemFPvPv(void *, void *);
void TItemData__sub_8010CD0C(void *);

void TItemObject__sub_80101A1C(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    TItemData__sub_8010CD0C(&sp8);
}

}
