#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80101CFC(s32, M2C_UNK *);
M2C_UNK can_pickup_item__10TObjPlayerFPvPv(s32, M2C_UNK *);

void can_pickup_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1) {
    M2C_UNK sp8[5];

    fn_80101CFC(arg1, sp8);
    can_pickup_item__10TObjPlayerFPvPv(arg0, sp8);
}

}
