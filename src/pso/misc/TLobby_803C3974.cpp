#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803C3974(u8 *arg0);
s32 TLobby__sub_803C397C(u8 *arg0);
void TLobby__sub_803C3984(u8 *arg0);
void TLobby__sub_803C39CC(u8 *arg0);
void TLobby__sub_803C3A04(u8 *arg0);
M2C_UNK reset_field_0C__6TLobbyFPv(int);
M2C_UNK reset_client_state__6TLobbyFPv(int);

s32 TLobby__sub_803C3974(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA0);
}

s32 TLobby__sub_803C397C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void TLobby__sub_803C3984(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 3) {
        reset_field_0C__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

void TLobby__sub_803C39CC(u8 *arg0) {
    reset_client_state__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void TLobby__sub_803C3A04(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 1;
    }
}

}
