#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_item_data__5TItemFPv(void *arg0);
void TItem__sub_801013E8(void *arg0);
void TItemData__sub_8010CC68(void *);
void TItemData__sub_8010DF68(void *);
void copy_to_item_data__5TItemFPvPv(void *, void *);

void update_item_data__5TItemFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    TItemData__sub_8010CC68(&sp8);
}

void TItem__sub_801013E8(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    TItemData__sub_8010DF68(&sp8);
}

}
