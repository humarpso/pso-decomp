#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8021C870 { char pad[0x18]; };
struct VObj_8021C870 : Base_8021C870 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021C8A8_8021C870 { char pad[0x18]; };
struct VObj_8021C8A8_8021C870 : Base_8021C8A8_8021C870 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
struct Base_8021C8E0_8021C870 { char pad[0x18]; };
struct VObj_8021C8E0_8021C870 : Base_8021C8E0_8021C870 {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4(int, int);
    virtual int m5();
    virtual int m6();
    virtual int m7();
    virtual int m8();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct ItemData_8021CF04 {
    u8 b[0xC];
    s32 id;
};

struct Entry_8021CF04 {
    u32 id;
    ItemData_8021CF04 item;
    s32 price;
    s32 index;
};

struct Owner_8021CF04 {
    u8 pad0[0xD00];
    void *inventory;
};

struct WinBase_8021CF04 { char pad[0x18]; };

struct Win_8021CF04 : WinBase_8021CF04 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    u8 pad1c[0x24 - 0x1C];
    Owner_8021CF04 *owner;
    Entry_8021CF04 entries[30];
    u8 pad370[4];
    s32 count;
    s32 text;
    u8 pad37c[4];
    s32 cursor;
    u8 pad384[8];
    void *list_win;
    u8 pad390[8];
    void *qty_win;
    void *help_win;
    void *cost_win;
};

struct ItemData_8021CC44 {
    u8 b[0xC];
    s32 id;
};

struct Entry_8021CC44 {
    u32 id;
    ItemData_8021CC44 item;
    s32 price;
    s32 index;
};

struct Owner_8021CC44 {
    u8 pad0[0xD00];
    void *inventory;
};

struct Win_8021CC44 {
    u8 pad0[0x24];
    Owner_8021CC44 *owner;
    Entry_8021CC44 entries[30];
    u8 pad370[0x37C - 0x370];
    s32 f37c;
    u8 pad380[4];
    s32 sel;
    u8 pad388[4];
    void *list_win;
    u32 menu_win;
    void *qty_win;
    void *status_win;
    void *help_win;
    void *cost_win;
};

struct VBase_8021C968 { char pad[0x18]; };

struct VObj_8021C968 : VBase_8021C968 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(s32, s32);
};

struct Rec_8021C968 { s32 item; s32 w[4]; s32 price; s32 w18; };

struct Win_8021C968 : VObj_8021C968 {
    u8 pad1c[0x24 - 0x1C];
    s32 player;
    Rec_8021C968 recs[30];
    u8 pad370[0x37C - 0x370];
    s32 count;
    s32 sel;
    u8 pad384[0x38C - 0x384];
    void *list;
    void *card;
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 update__24TShopEquipmentSellWindowFPv(void *arg0);
void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0);
s32 close__24TShopEquipmentSellWindowFPv(void *arg0);
void TShopEquipmentSellWindow__vt9(u8 *arg0);
int count_matching_items__10TObjPlayerFPvi(void *a0, u32 *a1);
s32 get_item_data_value__24TShopEquipmentSellWindowFUi(u32 arg0);
s32 copy_to_item_data__5TItemFPvPv(u32, void *);
int reset_list__20TShopArmorListWindowFPv(void *);
s32 get_shop_text(M2C_UNK);
void *create_item_list_window(s32, s32, u16);
void add_item__24TShopEquipmentSellWindowFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void calc_list_content_extent(void *);
void set_cursor_index__20TWindowSubStatusDispFPvs(void *, s16);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
void *__nw__7TObjectFUl(u32);
s32 obj_getField1c(s32);
M2C_UNK get_window_layout_position(M2C_UNK);
void *TWindowHelpItem__ct(void *, s32, u16);
s32 is_camera_ctrl_active__6TLobbyFv();
void set_position__6TLobbyFPvff(void *p, f32 a, f32 b);
void TWindowHelpItem__set_displayed_item_by_id(void *arg0, s32 arg1);
s32 select_cursor_entry__6TLobbyFPv(void *);
s32 get_child_field1c__15TShopWindowBaseFPv(void *);
void *create_window_quantity(u16 arg0);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(void *, void *);
void *get_owner_if_alive__10TObjPlayerFPv(u32);
void set_entry_count__24TShopEquipmentSellWindowFPvPv(void *arg1, void *arg2);
void *create_cost_window(u16);
void get_item_count__24TShopEquipmentSellWindowFPv(void *, s32);
int set_field_20__12TQuestListVMFPvi(void *, int);
extern const f32 lbl_805DC6D8;
void build_sell_list__24TShopEquipmentSellWindowFPv(Win_8021CF04 *self);
int set_field_20__12TQuestListVMFPvi(void *, int);
s32 get_item_type_or_default__9TItemListFPv(void *);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(u32);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(void *, void *);
void *get_owner_if_alive__10TObjPlayerFPv(u32);
void set_position__18TCheckRoomSequenceFPvff(void *, f32, f32);
s32 get_shop_text(M2C_UNK);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 get_child_field1c__15TShopWindowBaseFPv(void *);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(u32);
M2C_UNK set_position_xy(u32, f32, f32);
void TWindowHelpItem__set_displayed_item_by_id(void *arg0, s32 arg1);
void *TWindowInputNumber__ct(void *, M2C_UNK, s32, s32, s32, s16);
M2C_UNK align_menu_entry_positions(u32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(u32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
u32 create_window_menu(M2C_UNK, M2C_UNK, u16);
s32 select_cursor_entry__6TLobbyFPv(void *);
M2C_UNK get_window_layout_position(M2C_UNK);
void set_entry_count__24TShopEquipmentSellWindowFPvPv(void *arg1, void *arg2);
void get_item_count__24TShopEquipmentSellWindowFPv(void *, s32);
s32 is_camera_ctrl_active__6TLobbyFv();
s32 obj_getField1c(s32);
extern const f32 lbl_805DC6D8;
void handle_selection__24TShopEquipmentSellWindowFv(Win_8021CC44 *w);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
int set_field_20__12TQuestListVMFPvi(void *, int);
s32 get_field_d8__10TObjPlayerFPv(s32);
s32 try_add_sale_meseta__10TObjPlayerFv(s32, s32, s32, s32);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
s32 select_cursor_entry__6TLobbyFPv(void *);
void handle_sell_confirm__24TShopEquipmentSellWindowFv(Win_8021C968 *w);
}

extern "C" {

void *TShopEquipmentSellWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TShopEquipmentSellWindow__vt4(void *arg0);
void TShopEquipmentSellWindow__vt5(void *arg0);
void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1);
void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0);
u32 create_window_menu(M2C_UNK, M2C_UNK, u16);
s32 get_shop_text(M2C_UNK);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
M2C_UNK align_menu_entry_positions(u32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(u32);
M2C_UNK get_window_layout_position(M2C_UNK);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
s32 get_result__24TShopEquipmentSellWindowFPv(u32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 is_confirmed__18TWindowInputNumberFPv(u32);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(u32);
void memset(void *, int, int);
s32 obj_getField1c(s32);
int set_field_20__12TQuestListVMFPvi(void *, int);
M2C_UNK set_position_xy(u32, f32, f32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(u32);

void TShopEquipmentSellWindow__vt5(void *arg0) {
    struct VObj_8021C870 *o = (struct VObj_8021C870 *)M2C_FIELD(arg0, void **, 0x388);
    if (o != NULL) {
        o->m5();
    }
}

void TShopEquipmentSellWindow__vt4(void *arg0) {
    struct VObj_8021C8A8_8021C870 *o = (struct VObj_8021C8A8_8021C870 *)M2C_FIELD(arg0, void **, 0x388);
    if (o != NULL) {
        o->m4();
    }
}

s32 update__24TShopEquipmentSellWindowFPv(void *arg0) {
    VObj_8021C8E0_8021C870 *o = (VObj_8021C8E0_8021C870 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xc, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (int)(5));
    }
}

void handle_sell_confirm__24TShopEquipmentSellWindowFv(Win_8021C968 *w) {
    s32 r;
    if (w->card != NULL && is_visible__17TWindowSubComCardFPv(w->card) != 0) {
        r = get_selected_menu_value(w->card);
        if (r == 0) {
            s32 i = select_cursor_entry__6TLobbyFPv(w->list);
            if (try_add_sale_meseta__10TObjPlayerFv(w->player, get_field_d8__10TObjPlayerFPv(w->recs[i].item), w->recs[i].price * w->count, w->count) != 0) {
                TWindow__close(w->card);
                w->card = NULL;
                w->sel = i;
                set_field_20__12TQuestListVMFPvi(w, 0);
                return;
            }
            w->m4(0x1C, 1);
            TWindow__close(w->card);
            w->card = NULL;
            set_field_20__12TQuestListVMFPvi(w, 4);
            return;
        }
        if (r == 1) {
            TWindow__close(w->card);
            w->card = NULL;
            set_field_20__12TQuestListVMFPvi(w, 5);
            return;
        }
    }
    if (w->card != NULL && get_status_flag__17TWindowSubComCardFPv(w->card) != 0) {
        TWindow__close(w->card);
        w->card = NULL;
        set_field_20__12TQuestListVMFPvi(w, 5);
    }
}

void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) && (is_confirmed__18TWindowInputNumberFPv(M2C_FIELD(arg0, u32 *, 0x394)) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            temp_r31 = (u16) obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x390) = create_window_menu(get_window_layout_position(0x2B), 2, temp_r31);
            forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x390), get_shop_text(6), 6, 0);
            forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x390), get_shop_text(7), 6, 1);
            calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x390));
            align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0x390));
            set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x390));
            temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(M2C_FIELD(arg0, u32 *, 0x390), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = get_result__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x394));
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x394)));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (int)(2));
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) && (is_confirmed__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x394)) != 0)) {
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x394)));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (int)(5));
    }
}

s32 close__24TShopEquipmentSellWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38C) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x38C));
    }
    set_field_20__12TQuestListVMFPvi((void *)(arg0), (int)(1));
}

extern M2C_UNK __vt__24TShopEquipmentSellWindow[];

void handle_selection__24TShopEquipmentSellWindowFv(Win_8021CC44 *w) {
    s32 i;
    void *n;
    s32 type;
    if (w->list_win != NULL) {
        i = select_cursor_entry__6TLobbyFPv(w->list_win);
        if (w->help_win != NULL && i != w->sel) {
            TWindowHelpItem__set_displayed_item_by_id(w->help_win, w->entries[i].item.id);
        }
        if (w->status_win != NULL && i != w->sel) {
            if (set_mode_and_refresh_object__10TObjPlayerFPvi(w->owner->inventory, &w->entries[i].item) != 0) {
                set_entry_count__24TShopEquipmentSellWindowFPvPv(w->status_win, ((void *(*)(void))get_owner_if_alive__10TObjPlayerFPv)());
            } else {
                set_entry_count__24TShopEquipmentSellWindowFPvPv(w->status_win, 0);
            }
        }
        if (w->cost_win != NULL && i != w->sel && w->entries[i].price > 0) {
            get_item_count__24TShopEquipmentSellWindowFPv(w->cost_win, w->entries[i].price);
        }
        w->sel = i;
    }
    if (TShopWindowBase__sub_802239EC(w) != 0) {
        set_field_20__12TQuestListVMFPvi(w, 8);
        play_sound_effect(0x52D01, 0, 0, 0);
        return;
    }
    if (TShopWindowBase__sub_80223A48(w) != 0) {
        w->f37c = 1;
        i = select_cursor_entry__6TLobbyFPv(w->list_win);
        if (w->entries[i].item.b[0] == 3) {
            type = get_item_type_or_default__9TItemListFPv(&w->entries[i].item);
            if (type > 1 && w->qty_win == NULL) {
                n = __nw__7TObjectFUl(0x7C);
                if (n != NULL) {
                    n = TWindowInputNumber__ct(n, get_window_layout_position(0x2B), 1, type, 1, get_child_field1c__15TShopWindowBaseFPv(w));
                }
                w->qty_win = n;
                if (w->qty_win != NULL && is_camera_ctrl_active__6TLobbyFv() > 2) {
                    set_position__18TCheckRoomSequenceFPvff(w->qty_win, lbl_805DC6D8, lbl_805DC6D8);
                }
                set_field_20__12TQuestListVMFPvi(w, 3);
                return;
            }
        }
        if (w->menu_win == 0) {
            w->menu_win = create_window_menu(get_window_layout_position(0x2B), 2, obj_getField1c((s32)w->owner));
            forward_trade_action_default__16TObjCityMainWarpFPviii(w->menu_win, get_shop_text(6), 6, 0);
            forward_trade_action_default__16TObjCityMainWarpFPviii(w->menu_win, get_shop_text(7), 6, 1);
            calc_window_size__17TWindowSubComCardFPv(w->menu_win);
            align_menu_entry_positions(w->menu_win);
            set_ready_flag__18TCheckRoomSequenceFPv(w->menu_win);
            set_position_xy(w->menu_win, get_scale__15TShopWindowBaseFv(w), get_scale__15TShopWindowBaseFv(w));
            set_field_20__12TQuestListVMFPvi(w, 2);
        }
    }
}

void build_sell_list__24TShopEquipmentSellWindowFPv(Win_8021CF04 *self) {
    u32 ids[32];
    s32 n;
    s32 i;
    s32 v;
    void *p;
    u32 r;
    n = count_matching_items__10TObjPlayerFPvi(self->owner->inventory, ids);
    self->count = 0;
    for (i = 0; i < n; i++) {
        if (ids[i] != 0) {
            v = get_item_data_value__24TShopEquipmentSellWindowFUi(ids[i]);
            if (v > 0 && copy_to_item_data__5TItemFPvPv(ids[i], &self->entries[self->count].item) != 0) {
                self->entries[self->count].id = ids[i];
                self->entries[self->count].price = v / 8;
                self->entries[self->count].index = i;
                self->count++;
            }
        }
    }
    if (self->count == 0) {
        set_field_20__12TQuestListVMFPvi(self, 7);
        if (self->list_win != NULL) {
            reset_list__20TShopArmorListWindowFPv(self->list_win);
        }
        return;
    }
    self->m4(0xC, 1);
    set_field_20__12TQuestListVMFPvi(self, 1);
    if (self->list_win == NULL) {
        self->list_win = create_item_list_window(get_shop_text(self->text), self->count, obj_getField1c((s32)self->owner));
        for (i = 0; i < self->count; i++) {
            add_item__24TShopEquipmentSellWindowFPviii(self->list_win, self->entries[i].id, self->entries[i].price, i);
        }
        calc_list_content_extent(self->list_win);
    } else {
        reset_list__20TShopArmorListWindowFPv(self->list_win);
        for (i = 0; i < self->count; i++) {
            add_item__24TShopEquipmentSellWindowFPviii(self->list_win, self->entries[i].id, self->entries[i].price, i);
        }
        if (self->cursor > self->count - 1) {
            self->cursor = self->count - 1;
        }
        calc_list_content_extent(self->list_win);
        set_cursor_index__20TWindowSubStatusDispFPvs(self->list_win, self->cursor);
        clear_selected_and_update_entry__14TWindowSubItemFPv(self->list_win);
    }
    if (self->help_win == NULL) {
        p = __nw__7TObjectFUl(0xBC);
        if (p != NULL) {
            p = TWindowHelpItem__ct(p, get_window_layout_position(0x27), obj_getField1c((s32)self->owner));
        }
        self->help_win = p;
        if (self->help_win != NULL && is_camera_ctrl_active__6TLobbyFv() > 2) {
            set_position__6TLobbyFPvff(self->help_win, lbl_805DC6D8, lbl_805DC6D8);
        }
        TWindowHelpItem__set_displayed_item_by_id(self->help_win, self->entries[0].item.id);
    } else if (self->list_win != NULL) {
        v = select_cursor_entry__6TLobbyFPv(self->list_win);
        TWindowHelpItem__set_displayed_item_by_id(self->help_win, self->entries[v].item.id);
    }
    if (self->qty_win == NULL) {
        self->qty_win = create_window_quantity(get_child_field1c__15TShopWindowBaseFPv(self));
        r = set_mode_and_refresh_object__10TObjPlayerFPvi(self->owner->inventory, &self->entries[0].item);
        if (r != 0) {
            set_entry_count__24TShopEquipmentSellWindowFPvPv(self->qty_win, get_owner_if_alive__10TObjPlayerFPv(r));
        } else {
            set_entry_count__24TShopEquipmentSellWindowFPvPv(self->qty_win, 0);
        }
    } else if (self->list_win != NULL) {
        v = select_cursor_entry__6TLobbyFPv(self->list_win);
        r = set_mode_and_refresh_object__10TObjPlayerFPvi(self->owner->inventory, &self->entries[v].item);
        if (r != 0) {
            set_entry_count__24TShopEquipmentSellWindowFPvPv(self->qty_win, get_owner_if_alive__10TObjPlayerFPv(r));
        } else {
            set_entry_count__24TShopEquipmentSellWindowFPvPv(self->qty_win, 0);
        }
    }
    if (self->cost_win == NULL) {
        self->cost_win = create_cost_window(obj_getField1c((s32)self->owner));
        if (self->cost_win != NULL && self->entries[0].price > 0) {
            get_item_count__24TShopEquipmentSellWindowFPv(self->cost_win, self->entries[0].price);
        }
    } else if (self->entries[self->cursor].price > 0) {
        get_item_count__24TShopEquipmentSellWindowFPv(self->cost_win, self->entries[self->cursor].price);
    }
}

void TShopEquipmentSellWindow__vt9(u8 *arg0) {
    M2C_UNK (*temp_r12)(s32);
    M2C_UNK (*temp_r12_2)(s32);
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        build_sell_list__24TShopEquipmentSellWindowFPv((Win_8021CF04 *)((void *) (arg0)));
        return;
    case 1:
        handle_selection__24TShopEquipmentSellWindowFv((Win_8021CC44 *)((void *) (arg0)));
        return;
    case 2:
        handle_sell_confirm__24TShopEquipmentSellWindowFv((Win_8021C968 *)((void *) (arg0)));
        return;
    case 3:
        handle_input_window_result__24TShopEquipmentSellWindowFPv((void *) (arg0));
        return;
    case 5:
        close__24TShopEquipmentSellWindowFPv((void *) (arg0));
        return;
    case 4:
        update__24TShopEquipmentSellWindowFPv((void *) (arg0));
        return;
    case 8:
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x3A4);
        if (temp_r12 != NULL) {
            temp_r12(M2C_FIELD(arg0, s32 *, 0x388));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    case 7:
        temp_r12_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x3A8);
        if (temp_r12_2 != NULL) {
            temp_r12_2(M2C_FIELD(arg0, s32 *, 0x388));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TShopEquipmentSellWindow;
        if (M2C_FIELD(arg0, void **, 0x38C) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x38C))); M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x390) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x390))); M2C_FIELD(arg0, M2C_UNK *, 0x390) = 0; }
        if (M2C_FIELD(arg0, void **, 0x394) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x394))); M2C_FIELD(arg0, M2C_UNK *, 0x394) = 0; }
        if (M2C_FIELD(arg0, void **, 0x39C) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x39C))); M2C_FIELD(arg0, M2C_UNK *, 0x39C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x398) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x398))); M2C_FIELD(arg0, M2C_UNK *, 0x398) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3A0) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x3A0))); M2C_FIELD(arg0, M2C_UNK *, 0x3A0) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__24TShopEquipmentSellWindow[];
extern void *lbl_805D36B0;

void *TShopEquipmentSellWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TShopEquipmentSellWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D36B0;
    M2C_FIELD(arg0, u32 *, 0x370) = 0;
    M2C_FIELD(arg0, u32 *, 0x374) = 0;
    M2C_FIELD(arg0, void **, 0x378) = arg4;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x37C) = 1;
    M2C_FIELD(arg0, u32 *, 0x380) = 0;
    M2C_FIELD(arg0, u32 *, 0x384) = 0;
    M2C_FIELD(arg0, void **, 0x388) = arg2;
    M2C_FIELD(arg0, u32 *, 0x38C) = 0;
    M2C_FIELD(arg0, u32 *, 0x390) = 0;
    M2C_FIELD(arg0, u32 *, 0x394) = 0;
    M2C_FIELD(arg0, u32 *, 0x39C) = 0;
    M2C_FIELD(arg0, u32 *, 0x398) = 0;
    M2C_FIELD(arg0, u32 *, 0x3A0) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x3A4) = 0;
    M2C_FIELD(arg0, u32 *, 0x3A8) = 0;
    memset((void *)((char *)arg0 + 40), 0, 840);
    return arg0;
}

}
