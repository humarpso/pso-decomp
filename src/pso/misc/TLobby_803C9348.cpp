#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C9348(u8 *arg0, s8 arg1);
void TLobby__sub_803C9350(u8 *arg0, s32 arg1);

void TLobby__sub_803C9348(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x98) = arg1;
}

void TLobby__sub_803C9350(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

}
