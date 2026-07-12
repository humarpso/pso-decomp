#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8029F694(u8 *arg0);
void TObjPlayer__sub_8029F6C0(u8 *arg0);
M2C_UNK TLobby__sub_803DA16C(void *);
M2C_UNK TObjPlayer__sub_803DA204(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803DA218(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_803DDC50(void *);

void TObjPlayer__sub_8029F694(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    TLobby__sub_803DA16C(arg0 + 0x1C);
}

void TObjPlayer__sub_8029F6C0(u8 *arg0) {
    M2C_UNK sp8[12];

    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    TObjPlayer__sub_803DA204(sp8, 0, 4, 0x280, 0x1E0);
    TObjPlayer__sub_803DA218(M2C_FIELD(arg0, s32 *, 0x1C), sp8, 0x901, 0x08800000);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjPlayer__sub_803DDC50(arg0 + 0x1C);
}

}
