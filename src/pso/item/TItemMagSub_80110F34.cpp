#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 has_feed_flag__11TItemMagSubFPv(void *arg0);
s32 TLobby__sub_800822E8(s32, M2C_UNK);

u8 has_feed_flag__11TItemMagSubFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((TLobby__sub_800822E8(M2C_FIELD(arg0, s32 *, 0xF0), 4) != 0) || (TLobby__sub_800822E8(M2C_FIELD(arg0, s32 *, 0xF0), 0x10) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
