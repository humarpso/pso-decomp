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

typedef s32 M2C_UNK;
struct PB_803310BC { u8 pad[0x18]; };

class Plr_803310BC : public PB_803310BC {
public:
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual s32 m10();
};

struct Self_803310BC { u8 pad[0x28]; s32 f28; s32 f2c; };

struct PB_80331178 { u8 pad[0x18]; };

class Plr_80331178 : public PB_80331178 {
public:
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual s32 m10();
};

struct Self_80331178 { u8 pad[0x28]; s32 f28; s32 f2c; };

extern "C" {
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
extern s32 keyboard_active_flag;
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
extern s32 keyboard_key_state;
void mark_area_change_pending(void);
void TKeyBoardControl__sub_8000F9A4(void);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int player_matrix_stack_buffer;
    extern int resource_decompress_buffer;
    extern int anim_model_matrix_array;
    extern int lbl_805D5680;
u8 * open_option_dialog_thunk__19TWindowSubTradeMainFPvPv(void* p, void* _w1);
void initialize_option_dialog(void *, s32, s32, f32);
u8 * create__19TWindowMessageYesNoFPvPvPvPv(void *, void *, void *, void *);
s32 get_window_layout_position(s32);
extern f32 TWindowSubTradeMain__data_805DF858;
u8 *open_option_dialog__19TWindowSubTradeMainFPvi(u8 *arg0, s32 arg1);
M2C_UNK TWindowSubTradeMain__sub_802448E4(void *, void *);
void update_position_if_changed__19TWindowSubTradeMainFiPvPv(M2C_UNK arg0, u8 *arg1, u8 *arg2);
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
void set_child_windows_enabled__19TWindowSubTradeMainFPvi(TradeMain_80330BCC *self, s32 on);
Plr_803310BC *get_player_by_client_id(s32);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK close__19TWindowSubTradeMainFPv(s32);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
s32 get_window_layout_position(s32);
s32 set_trade_state__19TWindowSubTradeMainFPvs(u32, s32);
s32 refresh_item_list__19TWindowSubTradeMainFPvPv(u32, s32);
s32 create_equip_kind_window(M2C_UNK, M2C_UNK *, s32);
s32 TLobby__sub_802D29AC();
extern M2C_UNK lbl_8047748C[];
s32 open_trade_equip_window__19TWindowSubTradeMainFPv(Self_803310BC *arg0);
Plr_803310BC *get_player_by_client_id(s32);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK close__19TWindowSubTradeMainFPv(s32);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
s32 get_window_layout_position(s32);
s32 set_trade_state__19TWindowSubTradeMainFPvs(u32, s32);
s32 refresh_item_list__19TWindowSubTradeMainFPvPv(u32, s32);
s32 create_equip_kind_window(M2C_UNK, M2C_UNK *, s32);
s32 TLobby__sub_802D299C();
s8 get_trade_mode__6TLobbyFv();
extern M2C_UNK lbl_80477484[];
s32 create_trade_window__19TWindowSubTradeMainFPv(Self_80331178 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 get_window_layout_position(s32);
M2C_UNK free_member__17TWindowSubComCardFPv(u8 *, int);
M2C_UNK open_yes_no_prompt(u8 *, int, int, int, f32);
u8 * create__19TWindowMessageYesNoFPvPvPvPv(void *, void *, void *, void *);
extern f32 TWindowSubTradeMain__data_805DF858;
u8 *open_confirm_prompt__19TWindowSubTradeMainFPv(u8 *arg0);
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
s32 __ct__15TWindowHelpItemFPvUs(s32, s32, s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);
s32 TWindowInputNumber__ct(s32, s32, M2C_UNK, s32, M2C_UNK, s16);
s32 create_equip_kind_window(M2C_UNK, M2C_UNK *, s32);
s32 get_window_layout_position(s32);
M2C_UNK update_label_positions__17TWindowSubComCardFPvPv(u32, s32);
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

void update_position_if_changed__19TWindowSubTradeMainFiPvPv(M2C_UNK arg0, u8 *arg1, u8 *arg2) {
    if ((M2C_FIELD(arg1, f32 *, 0x30) != M2C_FIELD(arg2, f32 *, 0)) || (M2C_FIELD(arg1, f32 *, 0x34) != M2C_FIELD(arg2, f32 *, 4))) {
        TWindowSubTradeMain__sub_802448E4((void *) (arg1), (void *) (arg2));
    }
}

void set_child_windows_enabled__19TWindowSubTradeMainFPvi(TradeMain_80330BCC *self, s32 on) {
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
        update_position_if_changed__19TWindowSubTradeMainFiPvPv((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x30))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x5C)))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        update_position_if_changed__19TWindowSubTradeMainFiPvPv((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x34))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x5E)))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        update_label_positions__17TWindowSubComCardFPvPv(M2C_FIELD(arg0, u32 *, 0x38), get_window_layout_position((s32)(arg1 + 0x5F)));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            update_position_if_changed__19TWindowSubTradeMainFiPvPv((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x3C))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x62)))));
        } else {
            update_position_if_changed__19TWindowSubTradeMainFiPvPv((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x3C))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x60)))));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            update_position_if_changed__19TWindowSubTradeMainFiPvPv((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x40))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x63)))));
        } else {
            update_position_if_changed__19TWindowSubTradeMainFiPvPv((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x40))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x61)))));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        update_position_if_changed__19TWindowSubTradeMainFiPvPv((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x44))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x64)))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        update_position_if_changed__19TWindowSubTradeMainFiPvPv((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x48))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x5D)))));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        update_position_if_changed__19TWindowSubTradeMainFiPvPv((M2C_UNK)((void *)(arg0)), (u8 *)((u32)(M2C_FIELD(arg0, u32 *, 0x4C))), (u8 *)((s32)(get_window_layout_position((s32)(arg1 + 0x65)))));
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
        var_r31 = __ct__15TWindowHelpItemFPvUs(var_r31, get_window_layout_position((s32)(2)), M2C_FIELD(arg0, s32 *, 0x28));
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

    temp_r31 = create_equip_kind_window(get_window_layout_position((s32)(0x64)), lbl_80477494, M2C_FIELD(arg0, s32 *, 0x28));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv((s32)(0x24)));
    refresh_item_list__19TWindowSubTradeMainFPvPv((u32)(temp_r31), (s32)(TLobby__sub_802D298C()));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 2);
    set_field_1c__6TLobbyFPvf(temp_r31);
    return temp_r31;
}

s32 open_trade_equip_window__19TWindowSubTradeMainFPv(Self_803310BC *arg0) {
    Plr_803310BC *p;
    s32 w;
    p = get_player_by_client_id(arg0->f28);
    if (p == NULL) {
        return 0;
    }
    w = create_equip_kind_window(get_window_layout_position(0x61), lbl_8047748C, arg0->f28);
    ensure_status_display__20TWindowSubStatusDispFPvi(w, p->m10());
    set_trade_state__19TWindowSubTradeMainFPvs(w, 0);
    refresh_item_list__19TWindowSubTradeMainFPvPv(w, TLobby__sub_802D29AC());
    close__19TWindowSubTradeMainFPv(w);
    TWindowSubEquip__sub_80263AF8(arg0->f2c, 1);
    set_field_1c__6TLobbyFPvf(w);
    return w;
}

s32 create_trade_window__19TWindowSubTradeMainFPv(Self_80331178 *arg0) {
    Plr_80331178 *p;
    s32 w;
    p = ((Plr_80331178 *)get_player_by_client_id(get_trade_mode__6TLobbyFv()));
    if (p == NULL) {
        return 0;
    }
    w = create_equip_kind_window(get_window_layout_position(0x60), lbl_80477484, arg0->f28);
    ensure_status_display__20TWindowSubStatusDispFPvi(w, p->m10());
    set_trade_state__19TWindowSubTradeMainFPvs(w, 0);
    refresh_item_list__19TWindowSubTradeMainFPvPv(w, TLobby__sub_802D299C());
    close__19TWindowSubTradeMainFPv(w);
    TWindowSubEquip__sub_80263AF8(arg0->f2c, 0);
    set_field_1c__6TLobbyFPvf(w);
    return w;
}

u8 *open_confirm_prompt__19TWindowSubTradeMainFPv(u8 *arg0) {
    u8 *w;
    w = create__19TWindowMessageYesNoFPvPvPvPv(arg0, *(void **)(arg0 + 0x28), NULL, NULL);
    open_yes_no_prompt(w, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0xE4), get_window_layout_position(0x5F), TWindowSubTradeMain__data_805DF858);
    free_member__17TWindowSubComCardFPv(w, 1);
    return w;
}

u8 *open_option_dialog__19TWindowSubTradeMainFPvi(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(create__19TWindowMessageYesNoFPvPvPvPv(arg0, M2C_FIELD(arg0, u8 **, 0x28), NULL, NULL));
    initialize_option_dialog(temp_r31, arg1, get_window_layout_position((s32)((int) (0x5F))), TWindowSubTradeMain__data_805DF858);
    return temp_r31;
}

u8 * open_option_dialog_thunk__19TWindowSubTradeMainFPvPv(void* p, void* _w1) { return open_option_dialog__19TWindowSubTradeMainFPvi((u8 *)((void*)(p)), (s32)((void*)(_w1))); }

}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredFields_80331434_arg0
{
  u8 unknown_0[0x28];
  s32 field_28;
};

struct RecoveredFields_80331520_arg0
{
  u8 unknown_0[0x28];
  s32 field_28;
};

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct Ctrl_8033162C {
    u8 pad0[0x20];
    u8 btn[0x30];
};

struct TWindowSubTradeMain_8033162C {
    u8 pad0[0x1C];
    u8 state;
    u8 flags;
    u8 pad1E[2];
    s32 timer;
    u8 pad24[4];
    s32 player;
    VObj_18_204a81 *obj2C;
    void *menu;
    void *confirm;
    void *card;
    void *offer;
    void *request;
    void *list;
    void *number;
    void *help;
    void *chat;
    u8 submission[4];
};

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 add_text_entry__19TWindowSubTradeMainFPviiii(int, int, int, int, int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 create_titled_window_menu(int, int, int, int);
s32 create_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 add_text_entry__19TWindowSubTradeMainFPviiii(int, int, int, int, int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 create_titled_window_menu(int, int, int, int);
s32 build_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 open_confirm_yes_no__19TWindowSubTradeMainFPv(u8 *arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 chat_accept_submission(void *);
s32 get_status_flag__6TLobbyFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
void clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(void *);
s32 get_result__24TShopEquipmentSellWindowFPv(void *);
s32 is_confirmed__18TWindowInputNumberFPv(void *);
void clear_flag_and_release__17TWindowSubComCardFPv(void *);
void play_sound_effect(int, int, int, int);
void TWindow__close(void *);
void request_close__19TWindowSubTradeMainFPv(void *);
void window_request_show(void *);
s32 TWindowCtrl__sub_8024701C(void *);
void TWindowChat__sub_80247DFC(void *);
s32 is_visible__11TWindowChatFPv(void *);
void TWindowChat__sub_80247E50(void *);
s32 is_mode_bit4__11TWindowChatFPv(void *);
s32 is_player_input_active(s32);
void TWindowSubComCard__sub_80265680(void *, int);
void set_entry_value_clear_flag__17TWindowSubComCardFPvii(void *, int, int);
u8 get_selected_menu_value(void *);
void clear_transition_flag__17TWindowSubComCardFPv(void *);
void open__17TWindowOptionCtrlFPv(void *);
void update_trade_state__19TWindowSubTradeMainFPv(void *);
void *select_cursor_entry__6TLobbyFPv(void *);
void clear_flag70_bit4__17TWindowOptionCtrlFPv(void *);
void close__17TWindowSubComCardFPv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(void *);
s32 is_child_visible__17TWindowSubComCardFPv(void *);
s32 get_state__19TWindowSubTradeMainFv(void *, void *);
s32 check_trade_items_and_show_error__6TLobbyFv();
s32 TWindowSubTradeMain__sub_802D2808();
void TWindowSubTradeMain__sub_802D2824();
void TWindowSubTradeMain__sub_802D2834();
s32 TWindowSubTradeMain__sub_802D2844();
void TWindowSubTradeMain__sub_802D2850();
void TWindowSubTradeMain__sub_802D2860();
void draw_offer__19TWindowSubTradeMainFPvPv(void *, s32);
void draw_request__19TWindowSubTradeMainFPvPv(void *, s32);
void clear_flag400__6TLobbyFv();
void reset__6TLobbyFv();
void open_status_window__19TWindowSubTradeMainFi(s32 arg0);
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0);
s32 open_confirm_yes_no__19TWindowSubTradeMainFPv(u8 *arg0);
s32 create_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0);
s32 build_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0);
void TWindowSubTradeMain__sub_803323C8(void *);
extern Ctrl_8033162C controller_input_state[];
void run_task__19TWindowSubTradeMainFv(TWindowSubTradeMain_8033162C *o);
}

extern "C" {

void open_status_window__19TWindowSubTradeMainFi(s32 arg0);
void render__19TWindowSubTradeMainFv(void);
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0);
s32 TLobby__sub_802D268C();
s32 get_message_10__20TWindowSubStatusDispFPv(s32);

void open_status_window__19TWindowSubTradeMainFi(s32 arg0) {
    ((int (*)(void*, void* a1 = 0))open_option_dialog__19TWindowSubTradeMainFPvi)((void*)(arg0), (void*)(get_message_10__20TWindowSubStatusDispFPv(0xF7)));
}
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0) {
    ((int (*)(void*, void* a1 = 0))open_option_dialog__19TWindowSubTradeMainFPvi)((void*)(arg0), (void*)(TLobby__sub_802D268C()));
}

typedef struct RecoveredFields_80331434_arg0 RecoveredFields_80331434_arg0;
#pragma fp_contract on

s32 open_confirm_yes_no__19TWindowSubTradeMainFPv(u8 *arg0) {
    s32 w = ((s32 (*)(void *, s32, s32, s32))create__19TWindowMessageYesNoFPvPvPvPv)(arg0, M2C_FIELD(arg0, s32 *, 0x28), 0, 0);
    ((M2C_UNK (*)(s32, s32, s32, s32, f32))open_yes_no_prompt)(w, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0xE6), ((s32 (*)(int))get_window_layout_position)(0x5F), TWindowSubTradeMain__data_805DF858);
    ((M2C_UNK (*)(s32, int))free_member__17TWindowSubComCardFPv)(w, 1);
    return w;
}

s32 create_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDD)));
  temp_r31 = create_titled_window_menu((int) ((s32 (*)(int))get_window_layout_position)((int) 0x5E), (int) 4, (int) temp_r31_2, (int) ((RecoveredFields_80331434_arg0 *) arg0)->field_28);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDC)), (int) 6, (int) 0x11);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xE3)), (int) 6, (int) 0x16);
  add_text_entry__19TWindowSubTradeMainFPviiii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDE)), (int) 6, (int) 0x1A, (int) 0xFFEE946E);
  add_text_entry__19TWindowSubTradeMainFPviiii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDF)), (int) 6, (int) 0x17, (int) 0xFFEE6ED8);
  update_layout_height__17TWindowSubComCardFPvf((int) temp_r31, (f32) TWindowSubTradeMain__data_805DF858);
  align_menu_entry_positions((int) temp_r31);
  return temp_r31;
}

typedef struct RecoveredFields_80331520_arg0 RecoveredFields_80331520_arg0;
#pragma fp_contract on
s32 build_trade_menu__19TWindowSubTradeMainFPv(u8 *arg0) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0x26)));
  temp_r31 = create_titled_window_menu((int) ((s32 (*)(int))get_window_layout_position)((int) 0x5C), (int) 5, (int) temp_r31_2, (int) ((RecoveredFields_80331520_arg0 *) arg0)->field_28);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDA)), (int) 6, (int) 3);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDB)), (int) 6, (int) 0xA);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDC)), (int) 6, (int) 0x11);
  add_text_entry__19TWindowSubTradeMainFPviiii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDD)), (int) 6, (int) 0x14, (int) 0xFFEE946E);
  add_text_entry__19TWindowSubTradeMainFPviiii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDF)), (int) 6, (int) 0x17, (int) 0xFFEE6ED8);
  update_layout_height__17TWindowSubComCardFPvf((int) temp_r31, (f32) TWindowSubTradeMain__data_805DF858);
  align_menu_entry_positions((int) temp_r31);
  return temp_r31;
}

void render__19TWindowSubTradeMainFv(void) {  }
void run_task__19TWindowSubTradeMainFv(TWindowSubTradeMain_8033162C *o) {
    s32 player;
    void *entry;
    s32 n;
    player = is_player_input_active(o->player);
    if (is_mode_bit4__11TWindowChatFPv(o->chat) != 0 && chat_accept_submission(o->submission) != 0) {
        TWindowChat__sub_80247E50(o->chat);
    }
    if (is_visible__11TWindowChatFPv(o->chat) != 0) {
        TWindowChat__sub_80247DFC(o->chat);
    }
    if (TWindowCtrl__sub_8024701C(o->chat) != 0) {
        ((void (*)(void *, int))set_labels__19TWindowSubTradeMainFPvi)(o, 0xA);
        ((void (*)(void *, int))set_child_windows_enabled__19TWindowSubTradeMainFPvi)(o, 0);
        o->flags |= 1;
    } else {
        ((void (*)(void *, int))set_labels__19TWindowSubTradeMainFPvi)(o, 0);
        ((void (*)(void *, int))set_child_windows_enabled__19TWindowSubTradeMainFPvi)(o, 1);
        o->flags &= ~1;
    }
    switch (o->state) {
    case 0:
    case 1:
        if (o->offer == 0) {
            o->offer = ((void * (*)(void *))create_trade_window__19TWindowSubTradeMainFPv)(o);
        }
        if (o->request == 0) {
            o->request = ((void * (*)(void *))open_trade_equip_window__19TWindowSubTradeMainFPv)(o);
        }
        if (o->menu == 0) {
            o->menu = (void *)build_trade_menu__19TWindowSubTradeMainFPv((u8 *)o);
        }
        window_request_show(o->menu);
        clear_flag_and_release__17TWindowSubComCardFPv(o->menu);
        clear_flag70_bit4__17TWindowOptionCtrlFPv(o->menu);
        o->state = 2;
    case 2:
        if (get_status_flag__17TWindowSubComCardFPv(o->menu) != 0) {
            o->state = 0x17;
        } else if (is_visible__17TWindowSubComCardFPv(o->menu) != 0) {
            o->state = get_selected_menu_value(o->menu);
        }
        break;
    case 3:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if (o->offer != 0) {
            ((void (*)(void *, s32))TWindowSubTradeMain__sub_802448E4)(o->offer, ((s32 (*)(int))get_window_layout_position)(0x62));
        }
        if (o->request != 0) {
            ((void (*)(void *, s32))TWindowSubTradeMain__sub_802448E4)(o->request, ((s32 (*)(int))get_window_layout_position)(0x63));
        }
        if (o->list == 0) {
            o->list = ((void * (*)(void *))create_list__19TWindowSubTradeMainFPv)(o);
        }
        if (o->help == 0) {
            o->help = ((void * (*)(void *))create_help_item__19TWindowSubTradeMainFPv)(o);
        }
        clear_selected_and_update_entry__14TWindowSubItemFPv(o->list);
        o->state = 4;
    case 4:
        ((void (*)(void *, void *))set_displayed_item__19TWindowSubTradeMainFPvi)(o, select_cursor_entry__6TLobbyFPv(o->list));
        if (get_flag_bit2__6TLobbyFPv(o->list) != 0) {
            o->state = 5;
        } else if (get_status_flag__6TLobbyFPv(o->list) != 0) {
            o->state = 6;
        }
        break;
    case 5:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        if (o->list != 0) {
            TWindow__close(o->list);
            o->list = 0;
        }
        if (o->offer != 0) {
            ((void (*)(void *, s32))TWindowSubTradeMain__sub_802448E4)(o->offer, ((s32 (*)(int))get_window_layout_position)(0x60));
        }
        if (o->request != 0) {
            ((void (*)(void *, s32))TWindowSubTradeMain__sub_802448E4)(o->request, ((s32 (*)(int))get_window_layout_position)(0x61));
        }
        o->state = 1;
        break;
    case 6:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        entry = select_cursor_entry__6TLobbyFPv(o->list);
        n = get_state__19TWindowSubTradeMainFv(((void * (*)())TLobby__sub_802D298C)(), entry);
        if (n <= 1) {
            draw_request__19TWindowSubTradeMainFPvPv(entry, 1);
            o->state = 9;
            break;
        }
        if (o->number == 0) {
            o->number = ((void * (*)(void *, s32))create_input_number__19TWindowSubTradeMainFPvi)(o, n);
        }
        o->state = 7;
    case 7:
        if (is_confirmed__24TShopEquipmentSellWindowFPv(o->number) != 0) {
            o->state = 8;
        }
        if (is_confirmed__18TWindowInputNumberFPv(o->number) != 0) {
            n = get_result__24TShopEquipmentSellWindowFPv(o->number);
            draw_request__19TWindowSubTradeMainFPvPv(select_cursor_entry__6TLobbyFPv(o->list), n);
            o->state = 9;
        }
        break;
    case 8:
        if (o->number != 0) {
            TWindow__close(o->number);
            o->number = 0;
        }
        o->state = 3;
        break;
    case 9:
        if (o->number != 0) {
            TWindow__close(o->number);
            o->number = 0;
        }
        o->state = 5;
        break;
    case 10:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if (o->request != 0) {
            update_trade_state__19TWindowSubTradeMainFPv(o->request);
        }
        if (o->help == 0) {
            o->help = ((void * (*)(void *))create_help_item__19TWindowSubTradeMainFPv)(o);
        }
        clear_selected_and_update_entry__14TWindowSubItemFPv(o->request);
        o->state = 0xB;
    case 11:
        ((void (*)(void *, void *))set_displayed_item__19TWindowSubTradeMainFPvi)(o, select_cursor_entry__6TLobbyFPv(o->request));
        if (get_flag_bit2__6TLobbyFPv(o->request) != 0) {
            o->state = 0xC;
        } else if (get_status_flag__6TLobbyFPv(o->request) != 0) {
            o->state = 0xD;
        }
        break;
    case 12:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        if (o->request != 0) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(o->request);
            TWindowSubTradeMain__sub_803323C8(o->request);
            ((void (*)(void *))close__19TWindowSubTradeMainFPv)(o->request);
        }
        o->state = 1;
        break;
    case 13:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        entry = select_cursor_entry__6TLobbyFPv(o->request);
        n = get_state__19TWindowSubTradeMainFv(((void * (*)())TLobby__sub_802D29AC)(), entry);
        if (n <= 1) {
            draw_offer__19TWindowSubTradeMainFPvPv(entry, 1);
            o->state = 0x10;
            break;
        }
        if (o->number == 0) {
            o->number = ((void * (*)(void *, s32))create_input_number__19TWindowSubTradeMainFPvi)(o, n);
        }
        o->state = 0xE;
    case 14:
        if (is_confirmed__24TShopEquipmentSellWindowFPv(o->number) != 0) {
            o->state = 0xF;
        }
        if (is_confirmed__18TWindowInputNumberFPv(o->number) != 0) {
            n = get_result__24TShopEquipmentSellWindowFPv(o->number);
            draw_offer__19TWindowSubTradeMainFPvPv(select_cursor_entry__6TLobbyFPv(o->request), n);
            o->state = 0x10;
        }
        break;
    case 15:
        if (o->number != 0) {
            TWindow__close(o->number);
            o->number = 0;
        }
        o->state = 0xA;
        break;
    case 16:
        if (o->number != 0) {
            TWindow__close(o->number);
            o->number = 0;
        }
        o->state = 0xC;
        break;
    case 17:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if (o->offer != 0) {
            update_trade_state__19TWindowSubTradeMainFPv(o->offer);
        }
        if (o->help == 0) {
            o->help = ((void * (*)(void *))create_help_item__19TWindowSubTradeMainFPv)(o);
        }
        o->state = 0x12;
    case 18:
        ((void (*)(void *, void *))set_displayed_item__19TWindowSubTradeMainFPvi)(o, select_cursor_entry__6TLobbyFPv(o->offer));
        if (get_flag_bit2__6TLobbyFPv(o->offer) != 0) {
            o->state = 0x13;
        } else if (get_status_flag__6TLobbyFPv(o->offer) != 0) {
            o->state = 0x13;
        }
        break;
    case 19:
        if (o->help != 0) {
            TWindow__close(o->help);
            o->help = 0;
        }
        if (o->offer != 0) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(o->offer);
            TWindowSubTradeMain__sub_803323C8(o->offer);
            ((void (*)(void *))close__19TWindowSubTradeMainFPv)(o->offer);
        }
        if (TWindowSubTradeMain__sub_802D2844() != 0) {
            o->state = 0x14;
        } else {
            o->state = 1;
        }
        break;
    case 20:
        if (o->menu != 0) {
            open__17TWindowOptionCtrlFPv(o->menu);
        }
        window_request_show(o->menu);
        if (o->confirm == 0) {
            o->confirm = (void *)create_trade_menu__19TWindowSubTradeMainFPv((u8 *)o);
        }
        window_request_show(o->confirm);
        clear_flag_and_release__17TWindowSubComCardFPv(o->confirm);
        TWindowSubTradeMain__sub_802D2860();
        o->state = 0x15;
    case 21:
        if (TWindowSubTradeMain__sub_802D2808() != 0) {
            set_entry_value_clear_flag__17TWindowSubComCardFPvii(o->confirm, 2, 0xFFEE946E);
        } else {
            TWindowSubComCard__sub_80265680(o->confirm, 2);
        }
        if (get_status_flag__17TWindowSubComCardFPv(o->confirm) != 0) {
            o->state = 0x16;
        } else if (is_visible__17TWindowSubComCardFPv(o->confirm) != 0) {
            o->state = get_selected_menu_value(o->confirm);
            if (o->confirm != 0) {
                request_close__19TWindowSubTradeMainFPv(o->confirm);
            }
            if (o->menu != 0) {
                clear_transition_flag__17TWindowSubComCardFPv(o->menu);
            }
        }
        break;
    case 22:
        if (o->confirm != 0) {
            TWindow__close(o->confirm);
            o->confirm = 0;
        }
        if (o->menu != 0) {
            clear_transition_flag__17TWindowSubComCardFPv(o->menu);
        }
        TWindowSubTradeMain__sub_802D2850();
        o->state = 1;
        break;
    case 23:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if (o->card == 0) {
            o->card = ((void * (*)(void *))open_confirm_prompt__19TWindowSubTradeMainFPv)(o);
        }
        o->state = 0x18;
    case 24:
        if (get_card_data__17TWindowSubComCardFPv(o->card) != 0) {
            o->state = 0x19;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->card) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->card) == 0) {
                o->obj2C->m7();
                o->state = 0x22;
            } else {
                o->state = 0x19;
            }
        }
        break;
    case 25:
        if (o->card != 0) {
            close__17TWindowSubComCardFPv(o->card);
            o->card = 0;
        }
        if (TWindowSubTradeMain__sub_802D2844() != 0) {
            o->state = 0x14;
        } else {
            o->state = 1;
        }
        break;
    case 26:
        if (o->menu != 0) {
            request_close__19TWindowSubTradeMainFPv(o->menu);
        }
        if ((n = check_trade_items_and_show_error__6TLobbyFv()) != 0) {
            if (o->card == 0) {
                o->card = (void *)((int (*)(void *, s32))open_option_dialog_thunk__19TWindowSubTradeMainFPvPv)(o, n);
            }
            o->state = 0x1C;
        } else {
            if (o->card == 0) {
                o->card = ((void *)open_confirm_yes_no__19TWindowSubTradeMainFPv((u8 *)(o)));
            }
            o->state = 0x1B;
        }
    case 27:
        if (TWindowSubTradeMain__sub_802D2808() == 0) {
            o->state = 0x1D;
        }
        if (get_card_data__17TWindowSubComCardFPv(o->card) != 0) {
            o->state = 0x1D;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->card) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->card) == 0) {
                close__17TWindowSubComCardFPv(o->card);
                o->card = ((void *(*)(void *))update_from_lobby__19TWindowSubTradeMainFi)(o);
                TWindowSubTradeMain__sub_802D2834();
                o->state = 0x1C;
            } else {
                o->state = 0x1D;
            }
        }
        break;
    case 28:
        if (TWindowSubTradeMain__sub_802D2808() == 0 ||
            (!(o->flags & 1) &&
             (TWindowShortListCtrl__check_controller_button(controller_input_state[player].btn, 2) != 0 ||
              test_flag_4c__23TAdSinglePlyChrSelectGCFPv(controller_input_state[4].btn, 2) != 0))) {
            play_sound_effect(0x52F16, 0, 0, 0);
            TWindowSubTradeMain__sub_802D2824();
            o->state = 0x1D;
        }
        break;
    case 29:
        if (o->card != 0) {
            close__17TWindowSubComCardFPv(o->card);
            o->card = 0;
        }
        o->state = 0x14;
        break;
    case 30:
        if (o->card != 0) {
            close__17TWindowSubComCardFPv(o->card);
            o->card = 0;
        }
        o->card = ((void *(*)(void *))open_status_window__19TWindowSubTradeMainFi)(o);
        o->timer = 900;
        o->state = 0x1F;
    case 31:
        if (o->timer > 0) {
            o->timer--;
        } else if (!(o->flags & 1) &&
                   (TWindowShortListCtrl__check_controller_button(controller_input_state[player].btn, 2) != 0 ||
                    test_flag_4c__23TAdSinglePlyChrSelectGCFPv(controller_input_state[4].btn, 2) != 0)) {
            play_sound_effect(0x52F16, 0, 0, 0);
            clear_flag400__6TLobbyFv();
            o->timer = 900;
            o->state = 0x20;
        }
        break;
    case 32:
        if (o->timer > 0) {
            o->timer--;
        } else {
            reset__6TLobbyFv();
            o->state = 0x22;
        }
        break;
    case 33:
    case 34:
        break;
    }
}

}
