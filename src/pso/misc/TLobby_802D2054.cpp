#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802D2054(u8 *arg0);
u32 TLobby__sub_80101AB0();

void TLobby__sub_802D2054(u8 *arg0) {
    u8 *var_r29;
    s32 var_r28;

    var_r29 = arg0;
    var_r28 = 0;
    do {
        if (((u32) (M2C_FIELD(var_r29, s32 *, 0) + 0x10000) != 0xFFFFU) && ((TLobby__sub_80101AB0() == 0U) || ((s32) M2C_FIELD(var_r29, s32 *, 4) <= 0))) {
            M2C_FIELD(var_r29, s32 *, 0) = -1;
            M2C_FIELD(var_r29, s32 *, 4) = 0;
        }
        var_r28 += 1;
        var_r29 += 8;
    } while (var_r28 < 0x1E);
}

}
