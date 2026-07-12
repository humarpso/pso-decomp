#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_list__19TWindowSubTradeMainFPv(void *arg0);
s32 TWindowShortListCtrl__sub_80278E48(M2C_UNK, M2C_UNK *, s32);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK refresh_item_list__19TWindowSubTradeMainFPvPv(s32, s32);
s32 TLobby__sub_802D298C();

extern M2C_UNK lbl_80477494[];

s32 create_list__19TWindowSubTradeMainFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = TWindowShortListCtrl__sub_80278E48(TWindowSubComCard__sub_8026CBB8(0x64), lbl_80477494, M2C_FIELD(arg0, s32 *, 0x28));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, TWindowSubStatusDisp__sub_80077760(0x24));
    refresh_item_list__19TWindowSubTradeMainFPvPv(temp_r31, TLobby__sub_802D298C());
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 2);
    set_field_1c__6TLobbyFPvf(temp_r31);
    return temp_r31;
}

}
