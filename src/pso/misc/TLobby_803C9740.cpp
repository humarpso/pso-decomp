#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803C9740(u8 *arg0);
s32 apply_if_v2__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803C97B8(u8 *arg0);
s32 TLobby__sub_803BFF0C(int);
s32 TLobby__sub_803BFF78(int);
s32 TLobby__sub_803BFF9C(int);

s32 TLobby__sub_803C9740(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return TLobby__sub_803BFF78((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

s32 apply_if_v2__6TLobbyFPv(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return TLobby__sub_803BFF9C((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

s32 TLobby__sub_803C97B8(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return TLobby__sub_803BFF0C((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

}
