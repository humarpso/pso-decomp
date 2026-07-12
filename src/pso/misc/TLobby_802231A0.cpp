#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void swap_item_data__6TLobbyFPvPv(M2C_UNK *arg0, M2C_UNK *arg1);
M2C_UNK copy_item_data__6TLobbyFPvPv(M2C_UNK *, M2C_UNK *);

void swap_item_data__6TLobbyFPvPv(M2C_UNK *arg0, M2C_UNK *arg1) {
    M2C_UNK sp8[8];

    copy_item_data__6TLobbyFPvPv(sp8, arg0);
    copy_item_data__6TLobbyFPvPv(arg0, arg1);
    copy_item_data__6TLobbyFPvPv(arg1, sp8);
}

}
