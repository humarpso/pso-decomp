#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct TradeMain_80330BCC {
    u8 pad0[0x1C];
    u8 state;
    u8 pad1D[0x30 - 0x1D];
    void *w30;
    void *w34;
    void *w38;
    void *w3C;
    void *w40;
    void *w44;
    void *w48;
    void *w4C;
} TradeMain_80330BCC;

extern "C" {
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F998(void);
void TKeyBoardControl__sub_8000F9A4(void);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
u8 * TWindowSubTradeMain__sub_8033131C(void* p, void* _w1);
void initialize_option_dialog(void *, s32, s32, f32);
u8 * TWindowMessageYesNo__sub_802A59D8(void *, void *, void *, void *);
s32 get_window_layout_position(s32);
extern f32 TWindowSubTradeMain__data_805DF858;
u8 *TWindowSubTradeMain__sub_803312BC(u8 *arg0, s32 arg1);
M2C_UNK TWindowSubTradeMain__sub_802448E4(void *, void *);
void TWindowSubTradeMain__sub_80330B84(M2C_UNK arg0, u8 *arg1, u8 *arg2);
void set_flag_40__16TAdChrSelASlotGCFPv(void *);
void set_visible__19TWindowSubTradeMainFPv(void *);
void set_flag60_bit4__13TWindowSubMagFPv(void *);
void TWindowSubMag__sub_80255E24(void *);
void clear_flag__19TWindowSubTradeMainFPv(void *);
void clear_trade_flag__19TWindowSubTradeMainFPv(void *);
void update_card_slot__17TWindowSubComCardFPv(void *);
void notify_trade_main__17TWindowSubComCardFPv(void *);
void TWindowSubTradeMain__sub_803323A8(void *);
void TWindowSubTradeMain__sub_803323B8(void *);
void TWindowSubTradeMain__sub_80330BCC(TradeMain_80330BCC *self, s32 on);
}

extern "C" {

void TWindowSubTradeMain__sub_80330A84(void* p);
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
s32 get_window_layout_position(s32);
M2C_UNK TWindowSubComCard__sub_802A5628(u32, s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
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

void TWindowSubTradeMain__sub_80330B84(M2C_UNK arg0, u8 *arg1, u8 *arg2) {
    if ((M2C_FIELD(arg1, f32 *, 0x30) != M2C_FIELD(arg2, f32 *, 0)) || (M2C_FIELD(arg1, f32 *, 0x34) != M2C_FIELD(arg2, f32 *, 4))) {
        TWindowSubTradeMain__sub_802448E4((void *) (arg1), (void *) (arg2));
    }
}

void TWindowSubTradeMain__sub_80330BCC(TradeMain_80330BCC *self, s32 on) {
    switch (self->state) {
    case 2:
        if (self->w30 != 0) {
            if (on != 0) {
                clear_trade_flag__19TWindowSubTradeMainFPv(self->w30);
            } else {
                set_flag_40__16TAdChrSelASlotGCFPv(self->w30);
            }
        }
        break;
    case 4:
        if (self->w4C != 0) {
            if (on != 0) {
                TWindowSubMag__sub_80255E24(self->w4C);
            } else {
                set_flag60_bit4__13TWindowSubMagFPv(self->w4C);
            }
        }
        if (self->w44 != 0) {
            if (on != 0) {
                clear_flag__19TWindowSubTradeMainFPv(self->w44);
            } else {
                set_visible__19TWindowSubTradeMainFPv(self->w44);
            }
        }
        break;
    case 7:
    case 14:
        if (self->w48 != 0) {
            if (on != 0) {
                TWindowSubTradeMain__sub_803323B8(self->w48);
            } else {
                TWindowSubTradeMain__sub_803323A8(self->w48);
            }
        }
        break;
    case 11:
        if (self->w4C != 0) {
            if (on != 0) {
                TWindowSubMag__sub_80255E24(self->w4C);
            } else {
                set_flag60_bit4__13TWindowSubMagFPv(self->w4C);
            }
        }
        if (self->w40 != 0) {
            if (on != 0) {
                clear_flag__19TWindowSubTradeMainFPv(self->w40);
            } else {
                set_visible__19TWindowSubTradeMainFPv(self->w40);
            }
        }
        break;
    case 18:
        if (self->w4C != 0) {
            if (on != 0) {
                TWindowSubMag__sub_80255E24(self->w4C);
            } else {
                set_flag60_bit4__13TWindowSubMagFPv(self->w4C);
            }
        }
        if (self->w3C != 0) {
            if (on != 0) {
                clear_flag__19TWindowSubTradeMainFPv(self->w3C);
            } else {
                set_visible__19TWindowSubTradeMainFPv(self->w3C);
            }
        }
        break;
    case 21:
        if (self->w34 != 0) {
            if (on != 0) {
                clear_trade_flag__19TWindowSubTradeMainFPv(self->w34);
            } else {
                set_flag_40__16TAdChrSelASlotGCFPv(self->w34);
            }
        }
        break;
    case 24:
    case 27:
        if (self->w38 != 0) {
            if (on != 0) {
                notify_trade_main__17TWindowSubComCardFPv(self->w38);
            } else {
                update_card_slot__17TWindowSubComCardFPv(self->w38);
            }
        }
        break;
    case 34:
        break;
    }
}

void set_labels__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindowSubTradeMain__sub_80330B84((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x30))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x5C)))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindowSubTradeMain__sub_80330B84((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x34))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x5E)))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindowSubComCard__sub_802A5628(M2C_FIELD(arg0, u32 *, 0x38), get_window_layout_position((s32)(arg1 + 0x5F)));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindowSubTradeMain__sub_80330B84((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x3C))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x62)))));
        } else {
            TWindowSubTradeMain__sub_80330B84((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x3C))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x60)))));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindowSubTradeMain__sub_80330B84((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x40))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x63)))));
        } else {
            TWindowSubTradeMain__sub_80330B84((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x40))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x61)))));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindowSubTradeMain__sub_80330B84((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x44))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x64)))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        TWindowSubTradeMain__sub_80330B84((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x48))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x5D)))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        TWindowSubTradeMain__sub_80330B84((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x4C))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x65)))));
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
        var_r31 = TWindowHelpItem__ct(var_r31, get_window_layout_position((s32)(2)), M2C_FIELD(arg0, s32 *, 0x28));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    return var_r31;
}

extern f32 TWindowSubTradeMain__data_805DF858;

s32 create_input_number__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x7C);
    if (var_r31 != 0) {
        var_r31 = TWindowInputNumber__ct(var_r31, get_window_layout_position((s32)(0x5D)), 1, arg1, 1, (s16) M2C_FIELD(arg0, s32 *, 0x28));
    }
    create__18TWindowInputNumberFPvi(var_r31, get_message_10__20TWindowSubStatusDispFPv((s32)(0x28)));
    set_value__18TWindowInputNumberFPvf(var_r31, TWindowSubTradeMain__data_805DF858);
    return var_r31;
}

extern M2C_UNK lbl_80477494[];

s32 create_list__19TWindowSubTradeMainFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = TWindowShortListCtrl__sub_80278E48(get_window_layout_position((s32)(0x64)), lbl_80477494, M2C_FIELD(arg0, s32 *, 0x28));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv((s32)(0x24)));
    refresh_item_list__19TWindowSubTradeMainFPvPv((u32)(temp_r31), (s32)(TLobby__sub_802D298C()));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 2);
    set_field_1c__6TLobbyFPvf(temp_r31);
    return temp_r31;
}

u8 *TWindowSubTradeMain__sub_803312BC(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, u8 **, 0x28), NULL, NULL));
    initialize_option_dialog(temp_r31, arg1, get_window_layout_position((s32)((int) (0x5F))), TWindowSubTradeMain__data_805DF858);
    return temp_r31;
}

u8 * TWindowSubTradeMain__sub_8033131C(void* p, void* _w1) { return TWindowSubTradeMain__sub_803312BC((u8 *)((void*)(p)), (s32)((void*)(_w1))); }

}
