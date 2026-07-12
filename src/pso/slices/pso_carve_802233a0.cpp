#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
M2C_UNK fn_802115C0(void *);

void fn_802233A0(M2C_UNK *arg0, M2C_UNK *arg1) {
    struct { u8 _pad[0x20]; } sp8;

    fn_802115C0(&sp8);
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(&sp8, arg0);
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(arg0, arg1);
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(arg1, &sp8);
}

}
