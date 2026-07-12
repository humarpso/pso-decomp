#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0);
void TFontSmallLobby__sub_801D6158(s32 arg0);
s32 TFontSmallLobby__sub_801D66D4(void *);
s32 TFontSmallLobby__sub_801D66DC(void *);
M2C_UNK check_flag_at_40__15TFontSmallLobbyFPv(s32);
M2C_UNK TFontSmallLobby__sub_801D670C(s32, M2C_UNK);
M2C_UNK TFontSmallLobby__sub_801D6714(s32, M2C_UNK);

extern const f32 lbl_805DC3D8;

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0) {
    if ((TFontSmallLobby__sub_801D66DC(arg0 + 0x4C) < 3) && (M2C_FIELD(arg0, f32 *, 0x3C) > lbl_805DC3D8) && (TFontSmallLobby__sub_801D66D4(arg0 + 0x4C) < 0)) {
        return 1;
    }
    return 0;
}

void TFontSmallLobby__sub_801D6158(s32 arg0) {
    TFontSmallLobby__sub_801D6714(arg0 + 0x4C, 0);
    TFontSmallLobby__sub_801D670C(arg0 + 0x4C, 0);
    check_flag_at_40__15TFontSmallLobbyFPv(arg0);
}

}
