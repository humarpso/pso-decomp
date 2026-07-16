#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C96A0(u8 *arg0, s8 arg1);
void TLobby__sub_803C96A8(u8 *arg0, s32 arg1);
s16 TLobby__sub_803C96B0(u8 *arg0);
void TLobby__sub_803C96B8(u8 *arg0, s16 arg1);
M2C_UNK TLobby__sub_803CBF70(int);

void TLobby__sub_803C96A0(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x6D) = arg1;
}

void TLobby__sub_803C96A8(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

s16 TLobby__sub_803C96B0(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x40);
}

void TLobby__sub_803C96B8(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x40) = arg1;
    TLobby__sub_803CBF70((int) (M2C_FIELD(arg0, s32 *, 0xC)));
}

}
