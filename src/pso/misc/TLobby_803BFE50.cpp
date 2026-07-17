#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803BFE50(s32 arg0);
void TLobby__sub_803BFE58(u8 *arg0);
void TLobby__sub_803BFE7C(u8 *arg0);
void TLobby__sub_803BFEA0(u8 *arg0);
void notify_client__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803BFEE8(u8 *arg0);
void TLobby__sub_803BFF0C(u8 *arg0);
void TLobby__sub_803BFF30(u8 *arg0);
void TLobby__sub_803BFF54(u8 *arg0);
void TLobby__sub_803BFF78(u8 *arg0);
void TLobby__sub_803BFF9C(u8 *arg0);
void TLobby__sub_803BFFC0(u8 *arg0);
void set_field_44__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_40__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_3c__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803BFFFC(u8 *arg0, s32 arg1, s32 arg2);
void TLobby__sub_803C0008(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C0010(u8 *arg0);
M2C_UNK TLobby__sub_803C3A94(int);
M2C_UNK TLobby__sub_803C3A9C(int);
M2C_UNK TLobby__sub_803C3AA4(int);
M2C_UNK TLobby__sub_803C3AAC(int);
M2C_UNK TLobby__sub_803C3AB4(int);
M2C_UNK TLobby__sub_803C3ABC(int);
M2C_UNK TLobby__sub_803C3AC4(int);
M2C_UNK TLobby__sub_803C3ACC(int);
M2C_UNK TLobby__sub_803C3B38(int);
M2C_UNK TLobby__sub_803C3B44(int);
M2C_UNK get_field_a8__6TLobbyFPv(int);

s32 TLobby__sub_803BFE50(s32 arg0) {
    return arg0 + 0x58;
}

void TLobby__sub_803BFE58(u8 *arg0) {
    TLobby__sub_803C3A94((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFE7C(u8 *arg0) {
    TLobby__sub_803C3A9C((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFEA0(u8 *arg0) {
    TLobby__sub_803C3AA4((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void notify_client__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3AAC((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFEE8(u8 *arg0) {
    TLobby__sub_803C3AB4((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFF0C(u8 *arg0) {
    TLobby__sub_803C3ABC((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFF30(u8 *arg0) {
    TLobby__sub_803C3AC4((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFF54(u8 *arg0) {
    TLobby__sub_803C3ACC((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFF78(u8 *arg0) {
    TLobby__sub_803C3B38((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFF9C(u8 *arg0) {
    TLobby__sub_803C3B44((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFFC0(u8 *arg0) {
    get_field_a8__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void set_field_44__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

void set_field_40__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void set_field_3c__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

void TLobby__sub_803BFFFC(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
}

void TLobby__sub_803C0008(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
}

s32 TLobby__sub_803C0010(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

}
