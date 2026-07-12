#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8030A6A8(void);
s32 TLobby__sub_8030A6FC(void);
s32 is_ready__6TLobbyFv(void);
s32 TLobby__sub_8030A770(void);
s32 TCameraCtrl__sub_8006B330();
s32 TCameraCtrl__sub_8006B368();
s32 TLobby__sub_8001E5C8();
s32 TLobby__sub_8030A7B0();
s32 TLobby__sub_8030A834();
s32 is_not_split_screen__13TRaderMapCoreFv();

extern s32 lbl_805D5550;

s32 TLobby__sub_8030A6A8(void) {
    if (((s32) lbl_805D5550 == 3) && (TLobby__sub_8001E5C8() == 0)) {
        return 1;
    }
    if (TLobby__sub_8030A834() != 0) {
        return 1;
    }
    return 0;
}

s32 TLobby__sub_8030A6FC(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return TCameraCtrl__sub_8006B330();
    }
    return 1;
}

s32 is_ready__6TLobbyFv(void) {
    if ((TLobby__sub_8030A7B0() == 2) && (TCameraCtrl__sub_8006B368() == 1)) {
        return 1;
    }
    return 0;
}

s32 TLobby__sub_8030A770(void) {
    if ((TLobby__sub_8030A7B0() == 1) && (TCameraCtrl__sub_8006B368() == 1)) {
        return 1;
    }
    return 0;
}

}
