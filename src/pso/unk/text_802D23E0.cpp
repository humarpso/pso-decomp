#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_F8 { u8 bytes[0xf8]; };

extern "C" {
u8 * TLobby__sub_802D27E0(s32 arg0, s32 arg1);
}

extern "C" {

u8 * TLobby__sub_802D27E0(s32 arg0, s32 arg1) {
    *(M2CCopy_F8 *)(arg0) = *(const M2CCopy_F8 *)(arg1);
    return (u8 *)arg0;
}

}
