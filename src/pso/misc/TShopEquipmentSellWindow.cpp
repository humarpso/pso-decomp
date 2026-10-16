#include "types.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/TShopWindowBase.h"
#include "pso/item/TItem.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubItem.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TWindowInputNumber.h"

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
void TShopEquipmentSellWindow__vt9(u8 *arg0);
int count_matching_items__10TObjPlayerFPvi(void *a0, u32 *a1);
int reset_list__20TShopArmorListWindowFPv(void *);
s32 get_shop_text(s32);
void *create_item_list_window(s32, s32, u16);
void calc_list_content_extent(void *);
void set_cursor_index__20TWindowSubStatusDispFPvs(void *, s16);
void *__nw__7TObjectFUl(u32);
s32 obj_getField1c(s32);
s32 get_window_layout_position(s32);
void *__ct__15TWindowHelpItemFPvUs(void *, s32, u16);
void TWindowHelpItem__set_displayed_item_by_id(void *arg0, s32 arg1);
s32 select_cursor_entry__6TLobbyFv(void *);
void *create_window_quantity(u16 arg0);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(void *, void *);
void *get_owner_if_alive__10TObjPlayerFv(u32);
void *create_cost_window(u16);
void get_item_count__24TShopEquipmentSellWindowFv(void *, s32);
int set_field_20__12TQuestListVMFl(void *, int);
extern const f32 lbl_805DC6D8;
int set_field_20__12TQuestListVMFl(void *, int);
s32 get_item_type_or_default__9TItemListFv(void *);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(void *, void *);
void *get_owner_if_alive__10TObjPlayerFv(u32);
s32 get_shop_text(s32);
f32 get_scale__15TShopWindowBaseFv(void *);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
s32 play_sound_effect(s32, s32, s32, s32);
void *__nw__7TObjectFUl(u32);
s32 set_position_xy(u32, f32, f32);
void TWindowHelpItem__set_displayed_item_by_id(void *arg0, s32 arg1);
void *__ct__18TWindowInputNumberFPvllls(void *, s32, s32, s32, s32, s16);
s32 align_menu_entry_positions(u32);
s32 calc_window_size__17TWindowSubComCardFPv(u32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, s32, s32);
u32 create_window_menu(s32, s32, u16);
s32 select_cursor_entry__6TLobbyFv(void *);
s32 get_window_layout_position(s32);
void get_item_count__24TShopEquipmentSellWindowFv(void *, s32);
s32 obj_getField1c(s32);
extern const f32 lbl_805DC6D8;
int set_field_20__12TQuestListVMFl(void *, int);
s32 try_add_sale_meseta__10TObjPlayerFv(s32, s32, s32, s32);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
s32 select_cursor_entry__6TLobbyFv(void *);
}

extern "C" {

void *TShopEquipmentSellWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TShopEquipmentSellWindow__vt4(void *arg0);
void TShopEquipmentSellWindow__vt5(void *arg0);
void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1);
u32 create_window_menu(s32, s32, u16);
s32 get_shop_text(s32);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
s32 align_menu_entry_positions(u32);
s32 calc_window_size__17TWindowSubComCardFPv(u32);
s32 get_window_layout_position(s32);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, s32, s32);
f32 get_scale__15TShopWindowBaseFv(void *);
void memset(void *, int, int);
s32 obj_getField1c(s32);
int set_field_20__12TQuestListVMFl(void *, int);
s32 set_position_xy(u32, f32, f32);

void TShopEquipmentSellWindow__vt5(void *arg0) {
    struct VObj_8021C870 *o = (struct VObj_8021C870 *)*(void **)((s8 *)arg0 + 0x388);
    if (o != NULL) {
        o->m5();
    }
}

void TShopEquipmentSellWindow__vt4(void *arg0) {
    struct VObj_8021C8A8_8021C870 *o = (struct VObj_8021C8A8_8021C870 *)*(void **)((s8 *)arg0 + 0x388);
    if (o != NULL) {
        o->m4();
    }
}

s32 TShopEquipmentSellWindow::update() {
    VObj_8021C8E0_8021C870 *o = (VObj_8021C8E0_8021C870 *)this;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(this) != 0 || TShopWindowBase__sub_802239EC(this) != 0)) {
        o->m4(0xc, 1);
        set_field_20__12TQuestListVMFl((void *)(this), (int)(5));
    }
}

void TShopEquipmentSellWindow::handle_sell_confirm() {
    Win_8021C968 *w = (Win_8021C968 *)this;
    s32 r;
    if (w->card != NULL && ((TWindowSubComCard *)(w->card))->is_visible() != 0) {
        r = get_selected_menu_value(w->card);
        if (r == 0) {
            s32 i = select_cursor_entry__6TLobbyFv(w->list);
            if (try_add_sale_meseta__10TObjPlayerFv(w->player, ((TObjPlayer *)(w->recs[i].item))->get_field_d8(), w->recs[i].price * w->count, w->count) != 0) {
                TWindow__close(w->card);
                w->card = NULL;
                w->sel = i;
                set_field_20__12TQuestListVMFl(w, 0);
                return;
            }
            w->m4(0x1C, 1);
            TWindow__close(w->card);
            w->card = NULL;
            set_field_20__12TQuestListVMFl(w, 4);
            return;
        }
        if (r == 1) {
            TWindow__close(w->card);
            w->card = NULL;
            set_field_20__12TQuestListVMFl(w, 5);
            return;
        }
    }
    if (w->card != NULL && ((TWindowSubComCard *)(w->card))->get_status_flag() != 0) {
        TWindow__close(w->card);
        w->card = NULL;
        set_field_20__12TQuestListVMFl(w, 5);
    }
}

void TShopEquipmentSellWindow::handle_input_window_result() {
    f32 temp_f31;
    u16 temp_r31;

    if (((u32) *(u32 *)((s8 *)this + 0x394) != 0U) && (((TWindowInputNumber *)(*(u32 *)((s8 *)this + 0x394)))->is_confirmed() != 0)) {
        if ((u32) *(u32 *)((s8 *)this + 0x390) == 0U) {
            temp_r31 = (u16) obj_getField1c(*(s32 *)((s8 *)this + 0x24));
            *(u32 *)((s8 *)this + 0x390) = create_window_menu(get_window_layout_position(0x2B), 2, temp_r31);
            forward_trade_action_default__16TObjCityMainWarpFPviii(*(u32 *)((s8 *)this + 0x390), get_shop_text(6), 6, 0);
            forward_trade_action_default__16TObjCityMainWarpFPviii(*(u32 *)((s8 *)this + 0x390), get_shop_text(7), 6, 1);
            calc_window_size__17TWindowSubComCardFPv(*(u32 *)((s8 *)this + 0x390));
            align_menu_entry_positions(*(u32 *)((s8 *)this + 0x390));
            ((TCheckRoomSequence *)(*(u32 *)((s8 *)this + 0x390)))->set_ready_flag();
            temp_f31 = get_scale__15TShopWindowBaseFv(this);
            set_position_xy(*(u32 *)((s8 *)this + 0x390), get_scale__15TShopWindowBaseFv(this), temp_f31);
        }
        *(s32 *)((s8 *)this + 0x37C) = ((TShopEquipmentSellWindow *)(*(u32 *)((s8 *)this + 0x394)))->get_result();
        TWindow__close((void *)(*(u32 *)((s8 *)this + 0x394)));
        *(u32 *)((s8 *)this + 0x394) = 0U;
        set_field_20__12TQuestListVMFl((void *)(this), (int)(2));
        return;
    }
    if (((u32) *(u32 *)((s8 *)this + 0x394) != 0U) && (((TShopEquipmentSellWindow *)(*(u32 *)((s8 *)this + 0x394)))->is_confirmed() != 0)) {
        TWindow__close((void *)(*(u32 *)((s8 *)this + 0x394)));
        *(u32 *)((s8 *)this + 0x394) = 0U;
        set_field_20__12TQuestListVMFl((void *)(this), (int)(5));
    }
}

s32 TShopEquipmentSellWindow::close() {
    if ((u32) *(u32 *)((s8 *)this + 0x38C) != 0U) {
        ((TWindowSubItem *)(*(void **)((s8 *)this + 0x38C)))->clear_selected_and_update_entry();
    }
    set_field_20__12TQuestListVMFl((void *)(this), (int)(1));
}

extern s32 __vt__24TShopEquipmentSellWindow[];

void TShopEquipmentSellWindow::handle_selection() {
    Win_8021CC44 *w = (Win_8021CC44 *)this;
    s32 i;
    void *n;
    s32 type;
    if (w->list_win != NULL) {
        i = select_cursor_entry__6TLobbyFv(w->list_win);
        if (w->help_win != NULL && i != w->sel) {
            TWindowHelpItem__set_displayed_item_by_id(w->help_win, w->entries[i].item.id);
        }
        if (w->status_win != NULL && i != w->sel) {
            if (set_mode_and_refresh_object__10TObjPlayerFPvi(w->owner->inventory, &w->entries[i].item) != 0) {
                TShopEquipmentSellWindow::set_entry_count(w->status_win, ((void *(*)(void))get_owner_if_alive__10TObjPlayerFv)());
            } else {
                TShopEquipmentSellWindow::set_entry_count(w->status_win, 0);
            }
        }
        if (w->cost_win != NULL && i != w->sel && w->entries[i].price > 0) {
            get_item_count__24TShopEquipmentSellWindowFv(w->cost_win, w->entries[i].price);
        }
        w->sel = i;
    }
    if (TShopWindowBase__sub_802239EC(w) != 0) {
        set_field_20__12TQuestListVMFl(w, 8);
        play_sound_effect(0x52D01, 0, 0, 0);
        return;
    }
    if (TShopWindowBase__sub_80223A48(w) != 0) {
        w->f37c = 1;
        i = select_cursor_entry__6TLobbyFv(w->list_win);
        if (w->entries[i].item.b[0] == 3) {
            type = get_item_type_or_default__9TItemListFv(&w->entries[i].item);
            if (type > 1 && w->qty_win == NULL) {
                n = __nw__7TObjectFUl(0x7C);
                if (n != NULL) {
                    n = __ct__18TWindowInputNumberFPvllls(n, get_window_layout_position(0x2B), 1, type, 1, ((TShopWindowBase *)w)->get_child_field1c());
                }
                w->qty_win = n;
                if (w->qty_win != NULL && TLobby::is_camera_ctrl_active() > 2) {
                    ((TCheckRoomSequence *)(w->qty_win))->set_position(lbl_805DC6D8, lbl_805DC6D8);
                }
                set_field_20__12TQuestListVMFl(w, 3);
                return;
            }
        }
        if (w->menu_win == 0) {
            w->menu_win = create_window_menu(get_window_layout_position(0x2B), 2, obj_getField1c((s32)w->owner));
            forward_trade_action_default__16TObjCityMainWarpFPviii(w->menu_win, get_shop_text(6), 6, 0);
            forward_trade_action_default__16TObjCityMainWarpFPviii(w->menu_win, get_shop_text(7), 6, 1);
            calc_window_size__17TWindowSubComCardFPv(w->menu_win);
            align_menu_entry_positions(w->menu_win);
            ((TCheckRoomSequence *)(w->menu_win))->set_ready_flag();
            set_position_xy(w->menu_win, get_scale__15TShopWindowBaseFv(w), get_scale__15TShopWindowBaseFv(w));
            set_field_20__12TQuestListVMFl(w, 2);
        }
    }
}

void TShopEquipmentSellWindow::build_sell_list() {
    Win_8021CF04 *self = (Win_8021CF04 *)this;
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
            v = TShopEquipmentSellWindow::get_item_data_value(ids[i]);
            if (v > 0 && ((TItem *)(ids[i]))->copy_to_item_data(&self->entries[self->count].item) != 0) {
                self->entries[self->count].id = ids[i];
                self->entries[self->count].price = v / 8;
                self->entries[self->count].index = i;
                self->count++;
            }
        }
    }
    if (self->count == 0) {
        set_field_20__12TQuestListVMFl(self, 7);
        if (self->list_win != NULL) {
            reset_list__20TShopArmorListWindowFPv(self->list_win);
        }
        return;
    }
    self->m4(0xC, 1);
    set_field_20__12TQuestListVMFl(self, 1);
    if (self->list_win == NULL) {
        self->list_win = create_item_list_window(get_shop_text(self->text), self->count, obj_getField1c((s32)self->owner));
        for (i = 0; i < self->count; i++) {
            ((TShopEquipmentSellWindow *)(self->list_win))->add_item(self->entries[i].id, self->entries[i].price, i);
        }
        calc_list_content_extent(self->list_win);
    } else {
        reset_list__20TShopArmorListWindowFPv(self->list_win);
        for (i = 0; i < self->count; i++) {
            ((TShopEquipmentSellWindow *)(self->list_win))->add_item(self->entries[i].id, self->entries[i].price, i);
        }
        if (self->cursor > self->count - 1) {
            self->cursor = self->count - 1;
        }
        calc_list_content_extent(self->list_win);
        set_cursor_index__20TWindowSubStatusDispFPvs(self->list_win, self->cursor);
        ((TWindowSubItem *)(self->list_win))->clear_selected_and_update_entry();
    }
    if (self->help_win == NULL) {
        p = __nw__7TObjectFUl(0xBC);
        if (p != NULL) {
            p = __ct__15TWindowHelpItemFPvUs(p, get_window_layout_position(0x27), obj_getField1c((s32)self->owner));
        }
        self->help_win = p;
        if (self->help_win != NULL && TLobby::is_camera_ctrl_active() > 2) {
            ((TLobby *)(self->help_win))->set_position(lbl_805DC6D8, lbl_805DC6D8);
        }
        TWindowHelpItem__set_displayed_item_by_id(self->help_win, self->entries[0].item.id);
    } else if (self->list_win != NULL) {
        v = select_cursor_entry__6TLobbyFv(self->list_win);
        TWindowHelpItem__set_displayed_item_by_id(self->help_win, self->entries[v].item.id);
    }
    if (self->qty_win == NULL) {
        self->qty_win = create_window_quantity(((TShopWindowBase *)self)->get_child_field1c());
        r = set_mode_and_refresh_object__10TObjPlayerFPvi(self->owner->inventory, &self->entries[0].item);
        if (r != 0) {
            TShopEquipmentSellWindow::set_entry_count(self->qty_win, get_owner_if_alive__10TObjPlayerFv(r));
        } else {
            TShopEquipmentSellWindow::set_entry_count(self->qty_win, 0);
        }
    } else if (self->list_win != NULL) {
        v = select_cursor_entry__6TLobbyFv(self->list_win);
        r = set_mode_and_refresh_object__10TObjPlayerFPvi(self->owner->inventory, &self->entries[v].item);
        if (r != 0) {
            TShopEquipmentSellWindow::set_entry_count(self->qty_win, get_owner_if_alive__10TObjPlayerFv(r));
        } else {
            TShopEquipmentSellWindow::set_entry_count(self->qty_win, 0);
        }
    }
    if (self->cost_win == NULL) {
        self->cost_win = create_cost_window(obj_getField1c((s32)self->owner));
        if (self->cost_win != NULL && self->entries[0].price > 0) {
            get_item_count__24TShopEquipmentSellWindowFv(self->cost_win, self->entries[0].price);
        }
    } else if (self->entries[self->cursor].price > 0) {
        get_item_count__24TShopEquipmentSellWindowFv(self->cost_win, self->entries[self->cursor].price);
    }
}

void TShopEquipmentSellWindow__vt9(u8 *arg0) {
    s32 (*temp_r12)(s32);
    s32 (*temp_r12_2)(s32);
    u32 temp_r0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 0:
        ((TShopEquipmentSellWindow *)arg0)->build_sell_list();
        return;
    case 1:
        ((TShopEquipmentSellWindow *)arg0)->handle_selection();
        return;
    case 2:
        ((TShopEquipmentSellWindow *)arg0)->handle_sell_confirm();
        return;
    case 3:
        ((TShopEquipmentSellWindow *)arg0)->handle_input_window_result();
        return;
    case 5:
        ((TShopEquipmentSellWindow *)arg0)->close();
        return;
    case 4:
        ((TShopEquipmentSellWindow *)arg0)->update();
        return;
    case 8:
        temp_r12 = *(s32 (**)(s32))((s8 *)arg0 + 0x3A4);
        if (temp_r12 != NULL) {
            temp_r12(*(s32 *)((s8 *)arg0 + 0x388));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    case 7:
        temp_r12_2 = *(s32 (**)(s32))((s8 *)arg0 + 0x3A8);
        if (temp_r12_2 != NULL) {
            temp_r12_2(*(s32 *)((s8 *)arg0 + 0x388));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__24TShopEquipmentSellWindow;
        if (*(void **)((s8 *)arg0 + 0x38C) != NULL) { TWindow__close((void *)(*(void **)((s8 *)arg0 + 0x38C))); *(s32 *)((s8 *)arg0 + 0x38C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x390) != NULL) { TWindow__close((void *)(*(void **)((s8 *)arg0 + 0x390))); *(s32 *)((s8 *)arg0 + 0x390) = 0; }
        if (*(void **)((s8 *)arg0 + 0x394) != NULL) { TWindow__close((void *)(*(void **)((s8 *)arg0 + 0x394))); *(s32 *)((s8 *)arg0 + 0x394) = 0; }
        if (*(void **)((s8 *)arg0 + 0x39C) != NULL) { TWindow__close((void *)(*(void **)((s8 *)arg0 + 0x39C))); *(s32 *)((s8 *)arg0 + 0x39C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x398) != NULL) { TWindow__close((void *)(*(void **)((s8 *)arg0 + 0x398))); *(s32 *)((s8 *)arg0 + 0x398) = 0; }
        if (*(void **)((s8 *)arg0 + 0x3A0) != NULL) { TWindow__close((void *)(*(void **)((s8 *)arg0 + 0x3A0))); *(s32 *)((s8 *)arg0 + 0x3A0) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__24TShopEquipmentSellWindow[];
extern void *TShopEquipmentSellWindow__class_name;

void *TShopEquipmentSellWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__15TShopWindowBaseFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__24TShopEquipmentSellWindow;
    *(void **)((s8 *)arg0 + 0x0) = TShopEquipmentSellWindow__class_name;
    *(u32 *)((s8 *)arg0 + 0x370) = 0;
    *(u32 *)((s8 *)arg0 + 0x374) = 0;
    *(void **)((s8 *)arg0 + 0x378) = arg4;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x37C) = 1;
    *(u32 *)((s8 *)arg0 + 0x380) = 0;
    *(u32 *)((s8 *)arg0 + 0x384) = 0;
    *(void **)((s8 *)arg0 + 0x388) = arg2;
    *(u32 *)((s8 *)arg0 + 0x38C) = 0;
    *(u32 *)((s8 *)arg0 + 0x390) = 0;
    *(u32 *)((s8 *)arg0 + 0x394) = 0;
    *(u32 *)((s8 *)arg0 + 0x39C) = 0;
    *(u32 *)((s8 *)arg0 + 0x398) = 0;
    *(u32 *)((s8 *)arg0 + 0x3A0) = 0;
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    *(u32 *)((s8 *)arg0 + 0x3A4) = 0;
    *(u32 *)((s8 *)arg0 + 0x3A8) = 0;
    memset((void *)((char *)arg0 + 40), 0, 840);
    return arg0;
}

}
