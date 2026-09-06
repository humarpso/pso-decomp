#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TLobby__sub_802405B0(void *, s32);
s32 TLobby__sub_80240310(u8 *arg0);
}

extern "C" {

int TLobby__sub_802401C8(void);

int TLobby__sub_802401C8(void) { return 0; }
s32 TLobby__sub_80240310(u8 *arg0) {
    TLobby__sub_802405B0(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x298) = 4;
    return 0;
}

}
