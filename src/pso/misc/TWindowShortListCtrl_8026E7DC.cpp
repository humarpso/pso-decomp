#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowShortListCtrl__sub_8026E7DC(void *arg0, s32 arg1);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);

void TWindowShortListCtrl__sub_8026E7DC(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x38))) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, u32 *, 0x34));
    }
}

}
