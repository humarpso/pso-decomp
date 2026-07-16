#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803C3A8C(u8 *arg0);
s32 TLobby__sub_803C3A94(u8 *arg0);
s32 TLobby__sub_803C3A9C(u8 *arg0);
s32 TLobby__sub_803C3AA4(u8 *arg0);
s32 TLobby__sub_803C3AAC(u8 *arg0);
s16 TLobby__sub_803C3AB4(u8 *arg0);
s32 TLobby__sub_803C3ABC(u8 *arg0);
s32 TLobby__sub_803C3AC4(u8 *arg0);

s32 TLobby__sub_803C3A8C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 TLobby__sub_803C3A94(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 TLobby__sub_803C3A9C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 TLobby__sub_803C3AA4(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 TLobby__sub_803C3AAC(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s16 TLobby__sub_803C3AB4(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x24);
}

s32 TLobby__sub_803C3ABC(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 TLobby__sub_803C3AC4(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

}
