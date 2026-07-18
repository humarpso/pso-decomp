#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_0x3c__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803C3B5C(u8 *arg0, s32 arg1, s32 arg2);

s32 get_field_0x3c__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

void TLobby__sub_803C3B5C(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    M2C_FIELD(arg0, s32 *, 0x8C) = arg2;
}

}
