#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubTradeMain__sub_80330A84(void* p);
int TWindowSubTradeMain__sub_80330B84(void *, u32, s32);
int TWindowSubTradeMain__sub_8033131C(void* p);
s32 create_help_item__19TWindowSubTradeMainFPv(void *arg0);
s32 create_input_number__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1);
s32 create_list__19TWindowSubTradeMainFPv(void *arg0);
void draw_item_slot__19TWindowSubTradeMainFPv(void *arg0);
void forward_to_child__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1);
void notify_child_if_present__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1);
void set_displayed_item__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1);
void set_labels__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1);
void update_trade_window__19TWindowSubTradeMainFPv(void *arg0);
s32 TLobby__sub_802D268C();
s32 TLobby__sub_802D298C();
s32 TLobby__sub_802D299C();
s32 TLobby__sub_802D29AC();
s32 TWindowHelpItem__ct(s32, s32, s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);
s32 TWindowInputNumber__ct(s32, s32, M2C_UNK, s32, M2C_UNK, s16);
s32 TWindowShortListCtrl__sub_80278E48(M2C_UNK, M2C_UNK *, s32);
s32 TWindowSubComCard__sub_8026CBB8(s32);
M2C_UNK TWindowSubComCard__sub_802A5628(u32, s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
int TWindowSubTradeMain__sub_803312BC(void*, void* a1 = 0);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create__18TWindowInputNumberFPvi(s32, s32);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 refresh_item_list__19TWindowSubTradeMainFPvPv(u32, s32);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
s32 set_trade_state__19TWindowSubTradeMainFPvs(u32, s32);
M2C_UNK set_value__18TWindowInputNumberFPvf(s32, f32);

void TWindowSubTradeMain__sub_80330A84(void* p) { *(u8*)((char*)p + 0x1c) = 30; }
void forward_to_child__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x40);
    if (temp != 0U) {
        set_trade_state__19TWindowSubTradeMainFPvs(temp, (s16) arg1);
    }
}
void notify_child_if_present__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x3C);
    if (temp != 0U) {
        set_trade_state__19TWindowSubTradeMainFPvs(temp, (s16) arg1);
    }
}
void draw_item_slot__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        refresh_item_list__19TWindowSubTradeMainFPvPv((u32)(M2C_FIELD(arg0, u32 *, 0x40)), (s32)(TLobby__sub_802D29AC()));
    }
}
void update_trade_window__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        refresh_item_list__19TWindowSubTradeMainFPvPv((u32)(M2C_FIELD(arg0, u32 *, 0x3C)), (s32)(TLobby__sub_802D299C()));
        set_trade_state__19TWindowSubTradeMainFPvs(M2C_FIELD(arg0, u32 *, 0x3C), 3);
    }
}

int TWindowSubTradeMain__sub_80330B84(void *, u32, s32) { return 0; }

void set_labels__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindowSubTradeMain__sub_80330B84((void *)(arg0), (u32)(M2C_FIELD(arg0, u32 *, 0x30)), (s32)(TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x5C))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindowSubTradeMain__sub_80330B84((void *)(arg0), (u32)(M2C_FIELD(arg0, u32 *, 0x34)), (s32)(TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x5E))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindowSubComCard__sub_802A5628(M2C_FIELD(arg0, u32 *, 0x38), TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x5F)));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindowSubTradeMain__sub_80330B84((void *)(arg0), (u32)(M2C_FIELD(arg0, u32 *, 0x3C)), (s32)(TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x62))));
        } else {
            TWindowSubTradeMain__sub_80330B84((void *)(arg0), (u32)(M2C_FIELD(arg0, u32 *, 0x3C)), (s32)(TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x60))));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindowSubTradeMain__sub_80330B84((void *)(arg0), (u32)(M2C_FIELD(arg0, u32 *, 0x40)), (s32)(TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x63))));
        } else {
            TWindowSubTradeMain__sub_80330B84((void *)(arg0), (u32)(M2C_FIELD(arg0, u32 *, 0x40)), (s32)(TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x61))));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindowSubTradeMain__sub_80330B84((void *)(arg0), (u32)(M2C_FIELD(arg0, u32 *, 0x44)), (s32)(TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x64))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        TWindowSubTradeMain__sub_80330B84((void *)(arg0), (u32)(M2C_FIELD(arg0, u32 *, 0x48)), (s32)(TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x5D))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        TWindowSubTradeMain__sub_80330B84((void *)(arg0), (u32)(M2C_FIELD(arg0, u32 *, 0x4C)), (s32)(TWindowSubComCard__sub_8026CBB8((s32)(arg1 + 0x65))));
    }
}

void set_displayed_item__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x24))) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, u32 *, 0x4C));
    }
}

s32 create_help_item__19TWindowSubTradeMainFPv(void *arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0xBC);
    if (var_r31 != 0) {
        var_r31 = TWindowHelpItem__ct(var_r31, TWindowSubComCard__sub_8026CBB8((s32)(2)), M2C_FIELD(arg0, s32 *, 0x28));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    return var_r31;
}

extern f32 TWindowSubTradeMain__data_805DF858;

s32 create_input_number__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x7C);
    if (var_r31 != 0) {
        var_r31 = TWindowInputNumber__ct(var_r31, TWindowSubComCard__sub_8026CBB8((s32)(0x5D)), 1, arg1, 1, (s16) M2C_FIELD(arg0, s32 *, 0x28));
    }
    create__18TWindowInputNumberFPvi(var_r31, get_message_10__20TWindowSubStatusDispFPv((s32)(0x28)));
    set_value__18TWindowInputNumberFPvf(var_r31, TWindowSubTradeMain__data_805DF858);
    return var_r31;
}

extern M2C_UNK lbl_80477494[];

s32 create_list__19TWindowSubTradeMainFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = TWindowShortListCtrl__sub_80278E48(TWindowSubComCard__sub_8026CBB8((s32)(0x64)), lbl_80477494, M2C_FIELD(arg0, s32 *, 0x28));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv((s32)(0x24)));
    refresh_item_list__19TWindowSubTradeMainFPvPv((u32)(temp_r31), (s32)(TLobby__sub_802D298C()));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 2);
    set_field_1c__6TLobbyFPvf(temp_r31);
    return temp_r31;
}

int TWindowSubTradeMain__sub_8033131C(void* p) { return TWindowSubTradeMain__sub_803312BC(p); }

}
