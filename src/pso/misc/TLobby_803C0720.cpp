#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C0720(u8 *arg0);
void TLobby__sub_803C0758(u8 *arg0);
void TLobby__sub_803C0798(u8 *arg0, s32 arg1);
void TLobby__sub_803C07C0(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_803C39CC(int);
M2C_UNK fn_803C1A00(int);
M2C_UNK fn_803C1A24(int);

void TLobby__sub_803C0720(u8 *arg0) {
    TLobby__sub_803C39CC((int) (M2C_FIELD(arg0, s32 *, 4)));
    M2C_FIELD(arg0, s8 *, 1) = 0;
}

void TLobby__sub_803C0758(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 1;
}

void TLobby__sub_803C0798(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    fn_803C1A00((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803C07C0(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    fn_803C1A24((int) (M2C_FIELD(arg0, s32 *, 4)));
}

}
