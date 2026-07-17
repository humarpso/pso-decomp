#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_party_label__15TFontSmallLobbyFiUis(s32 arg0, u32 arg1, s16 arg2);
M2C_UNK TFontSmallLobby__sub_801D62D0(s32, f32);
M2C_UNK set_target_index__15TFontSmallLobbyFPvi(s32, M2C_UNK);
M2C_UNK TFontSmallLobby__sub_801D671C(s32, M2C_UNK);
M2C_UNK set_flag_40_bit5__15TFontSmallLobbyFPv();
M2C_UNK TFontSmallLobby__sub_801D698C(M2C_UNK *);
M2C_UNK send_state__15TFontSmallLobbyFPv(M2C_UNK *);
M2C_UNK create_party_effect__11TWindowCtrlFPvPv(s16, s16);
s16 obj_getField1c(u32);
s32 obj_isState2_324(u32);

extern f32 lbl_805DC3D8;

struct Sp801D6230_801d6230 { s16 f0; s16 fA; s16 fC; };

void draw_party_label__15TFontSmallLobbyFiUis(s32 arg0, u32 arg1, s16 arg2) {
    Sp801D6230_801d6230 sp8;

    set_flag_40_bit5__15TFontSmallLobbyFPv();
    TFontSmallLobby__sub_801D62D0(arg0, lbl_805DC3D8);
    set_target_index__15TFontSmallLobbyFPvi(arg0 + 0x4C, 8);
    TFontSmallLobby__sub_801D671C(arg0 + 0x4C, 1);
    create_party_effect__11TWindowCtrlFPvPv(obj_getField1c(arg1), arg2);
    if ((arg1 == 0U) || (obj_isState2_324(arg1) == 0)) {
        TFontSmallLobby__sub_801D698C((M2C_UNK *) &sp8);
        sp8.fA = obj_getField1c(arg1);
        sp8.fC = arg2;
        send_state__15TFontSmallLobbyFPv((M2C_UNK *) &sp8);
    }
}

}
