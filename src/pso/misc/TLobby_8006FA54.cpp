#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 decode_slot__6TLobbyFUi(u32 arg0);
s32 TLobby__sub_80071670(u32);

s32 decode_slot__6TLobbyFUi(u32 arg0) {
    s32 temp_r3;
    u32 temp_r31;

    temp_r31 = arg0 >> 0x10U;
    temp_r3 = TLobby__sub_80071670(temp_r31);
    if ((temp_r3 < 4) || (temp_r3 > 0xC)) {
        return -1;
    }
    return (u16) (temp_r31 ^ arg0);
}

}
