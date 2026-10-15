#include "types.h"
#include "pso/misc/TShopArmorListWindow.h"

struct Base_8021A394 { char pad[0x18]; };
struct VObj_8021A394 : Base_8021A394 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021A3CC_8021A394 { char pad[0x18]; };
struct VObj_8021A3CC_8021A394 : Base_8021A3CC_8021A394 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
struct Base_8021AA2C_8021A394 { char pad[0x18]; };
struct VObj_8021AA2C_8021A394 : Base_8021AA2C_8021A394 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};
struct Base_8021AABC_8021A394 { char pad[0x18]; };
struct VObj_8021AABC_8021A394 : Base_8021AABC_8021A394 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

struct RecoveredGlobal_8021B1CC___vt__20TShopArmorListWindow {
    s32 value;
    u8 remaining[0x2C];
};

struct Rec_8021AD24 { u8 kind; u8 sub; u8 pad[0xe]; s32 price; };

struct Win_8021AD24 {
    u8 pad[0x24];
    void *player;
    u8 pad28[4];
    void *list;
    u8 pad30[0x4c - 0x30];
    Rec_8021AD24 recs[(0x1f0 - 0x4c) / 0x14];
    s32 flag;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_a93f07 { char pad[0x18]; };

struct VObj_18_a93f07 : VBase_18_a93f07 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(s32, s32);
};

struct ByteBlock_10 { u8 bytes[0x10]; };

struct ByteBlock_14 { u8 bytes[0x14]; };

struct Rec_8021A43C { s32 w[5]; };

struct Win_8021A43C {
    VObj_18_a93f07 base;
    u8 pad1c[0x24 - 0x1C];
    s32 player;
    u8 pad28[4];
    void *list;
    void *win;
    u8 pad34[0x4c - 0x34];
    Rec_8021A43C recs[(0x1f0 - 0x4c) / 0x14];
    s32 flag;
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(s32, s32);
};

struct Rec_8021AB4C { s32 w[5]; };

struct Win_8021AB4C : VObj_18 {
    u8 pad1c[0x20 - 0x1C];
    s32 f20;
    u8 pad24[0x2c - 0x24];
    void *list;
    u8 pad30[4];
    void *help;
    u8 pad38[0x48 - 0x38];
    s32 sel;
    Rec_8021AB4C recs[1];
};

struct VBase_18_b34251 { char pad[0x18]; };

struct VObj_18_b34251 : VBase_18_b34251 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual s8 m31();
};

struct Rec_8021A634 { s32 w[3]; s32 id; s32 price; };

struct Win_8021A634 {
    u8 pad0[0x24];
    s32 player;
    u8 pad28[0x2C - 0x28];
    void *list;
    void *card;
    u8 pad34[0x4C - 0x34];
    Rec_8021A634 recs[16];
};

struct Rec_8021AE18 { s32 w[4]; s32 price; };

struct Win_8021AE18 {
    VObj_18_a93f07 base;
    u8 pad1c[0x24 - 0x1C];
    s32 player;
    u8 pad28[4];
    void *list;
    u8 pad30[0x34 - 0x30];
    void *help;
    u8 pad38[0x3C - 0x38];
    void *cost;
    u8 pad40[0x44 - 0x40];
    s32 count;
    u8 pad48[0x4C - 0x48];
    Rec_8021AE18 recs[16];
};

extern "C" {
s32 set_shop_armor_list_flag__6TLobbyFii(void *, int);
s32 calc_item_count__18TShopGetItemWindowFPl(int, void *);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __ct__15TShopWindowBaseFv(void *);
extern s32 __vt__20TShopArmorListWindow[];
extern s32 TShopArmorListWindow__class_name;
u8 *TShopArmorListWindow__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 queue_destruction__7TObjectFv(void *);
int set_field_20__12TQuestListVMFl(void*, int);
void TShopArmorListWindow__vt9(u8 *arg0);
s32 obj_getPtr2B0_20(void *);
s32 check_equip_requirements(void *, Rec_8021AD24 *, u32 *);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(void *, Rec_8021AD24 *);
s32 select_cursor_entry__6TLobbyFv(void *);
s32 obj_getField1c(s32);
s32 is_visible__17TWindowSubComCardFv(void *);
s32 get_status_flag__17TWindowSubComCardFv(void *);
int set_field_20__12TQuestListVMFl(void*, int);
s32 advance_item_id_counter(u16);
s32 try_buy_item(int, void *);
s32 clear_shop_entry_value__6TLobbyFll(int, void *);
s32 is_single_purchase_shop_item(void *);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 TShopWindowBase__sub_8022397C(void *);
s32 set_position_xy(u32, f32, f32);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
u32 create_yes_no_window(int, u16, int, int);
s32 save_cursor_selection__20TShopArmorListWindowFv(void *);
s32 select_cursor_entry__6TLobbyFv(void *);
s32 get_window_layout_position(s32);
extern const s32 local_client_id;
int set_field_20__12TQuestListVMFl(void*, int);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 play_sound_effect(int, int, int, int);
s32 set_displayed_item_colored__15TWindowHelpItemFUl(int, void *);
s32 select_cursor_entry__6TLobbyFv(void *);
s32 is_visible__17TWindowSubComCardFv(void *);
s32 get_status_flag__17TWindowSubComCardFv(void *);
int set_field_20__12TQuestListVMFl(void*, int);
s32 get_field_d8__10TObjPlayerFv(u32);
VObj_18_b34251 *find_item_by_id(s32);
u32 get_equip_field_d04__10TObjPlayerFv(s32, s32);
s32 advance_item_id_counter(u16);
s32 try_buy_item(int, void *);
void send_6x26_unequip_item__10TObjPlayerFPvPv(s32, s32);
void send_6x25_equip_item(s32, s32, s32);
s32 clear_shop_entry_value__6TLobbyFll(int, void *);
s32 is_single_purchase_shop_item(void *);
s32 TShopWindowBase__sub_8022397C(void *);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
s32 save_cursor_selection__20TShopArmorListWindowFv(void *);
s32 select_cursor_entry__6TLobbyFv(void *);
extern const s32 local_client_id;
void handle_buy_confirm__20TShopArmorListWindowFv(Win_8021A634 *w);
s32 obj_getField1c(s32);
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
s32 get_item_price_if_valid__24TShopEquipmentSellWindowFv(void *);
s32 clear_selected_and_update_entry__14TWindowSubItemFv(s32);
s32 copy_armor_shop_entry__6TLobbyFll(void *, int, s32);
s32 set_position__6TLobbyFff(void *, f32, f32);
s32 TLobby__sub_8021B274();
s32 get_shop_text(s32);
s32 TShopWindowBase__sub_8022397C(void *);
void *__nw__7TObjectFUl(u32);
s32 set_displayed_item_colored__15TWindowHelpItemFUl(int, void *);
void *__ct__15TWindowHelpItemFPvUs(void *, s32, u16);
s32 clamp_selection_to_valid_entry__20TShopArmorListWindowFv(void *);
s32 save_cursor_selection__20TShopArmorListWindowFv(void *);
s32 reset_list__20TShopArmorListWindowFPv(void *);
s32 calc_list_content_extent(void *);
s32 add_ground_item__20TWindowSubStatusDispFll(void *, void *, s32);
s32 get_window_layout_position(s32);
void *create_item_list_window(s32, s32, u16);
s32 get_item_count__24TShopEquipmentSellWindowFv(void *a, s32 b);
void *create_cost_window(u16);
s32 is_camera_ctrl_active__6TLobbyFv();
extern const f32 lbl_805DC6C0;
}

extern "C" {

void TShopArmorListWindow__vt4(void *arg0);
void TShopArmorListWindow__vt5(void *arg0);
void *__dt__20TShopArmorListWindowFv(void *arg0, s16 arg1);
u32 create_window_menu(s32, s32, u16);
s32 get_shop_text(s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 align_menu_entry_positions(u32);
s32 calc_window_size__17TWindowSubComCardFPv(u32);
s32 get_window_layout_position(s32);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
s32 clear_selected_and_update_entry__14TWindowSubItemFv(s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, s32, s32);
s32 get_item_count__24TShopEquipmentSellWindowFv(void *a, s32 b);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 obj_getField1c(s32);
int set_field_20__12TQuestListVMFl(void*, int);
s32 set_position_xy(u32, f32, f32);
s32 set_ready_flag__18TCheckRoomSequenceFv(u32);

void TShopArmorListWindow__vt5(void *arg0) {
    struct VObj_8021A394 *o = (struct VObj_8021A394 *)*(void **)((s8 *)arg0 + 0x28);
    if (o != NULL) {
        o->m5();
    }
}

void TShopArmorListWindow__vt4(void *arg0) {
    struct VObj_8021A3CC_8021A394 *o = (struct VObj_8021A3CC_8021A394 *)*(void **)((s8 *)arg0 + 0x28);
    if (o != NULL) {
        o->m4();
    }
}

void TShopArmorListWindow::update_selection(void *arg1) {
    void *r3 = *(void **)((s8 *)this + 0x3C);
    if (r3 != 0) {
        s32 r4 = *(s32 *)((s8 *)arg1 + 0x10);
        if (r4 > 0) {
            get_item_count__24TShopEquipmentSellWindowFv(r3, r4);
        }
    }
}

void TShopArmorListWindow::handle_equip_offer() {
    Win_8021A43C *w = (Win_8021A43C *)this;
    s32 i;
    s32 r;
    f32 sc;
    if (w->win != NULL && is_visible__17TWindowSubComCardFv(w->win) != 0) {
        r = get_selected_menu_value(w->win);
        if (r == 0 && w->list != NULL) {
            if (w->flag != 0) {
                w->base.m4(0x18, 1);
                TWindow__close(w->win);
                w->win = (void *)create_yes_no_window(get_window_layout_position(0x2B), obj_getField1c(w->player), 0, 0);
                sc = get_scale__15TShopWindowBaseFv(w);
                set_position_xy((u32)w->win, get_scale__15TShopWindowBaseFv(w), sc);
                set_field_20__12TQuestListVMFl(w, 9);
            } else {
                Rec_8021A43C c;
                i = select_cursor_entry__6TLobbyFv(w->list);
                c = w->recs[i];
                c.w[3] = advance_item_id_counter(local_client_id);
                try_buy_item(w->player, &c);
                ((TShopArmorListWindow *)w)->update_selection(&w->recs[i]);
                if (is_single_purchase_shop_item(&w->recs[i]) != 0) {
                    clear_shop_entry_value__6TLobbyFll(i, (void *)TShopWindowBase__sub_8022397C(w));
                }
                save_cursor_selection__20TShopArmorListWindowFv(w->list);
                TWindow__close(w->win);
                w->win = NULL;
                set_field_20__12TQuestListVMFl(w, 0);
            }
        }
        if (r == 1) {
            TWindow__close(w->win);
            w->win = NULL;
            set_field_20__12TQuestListVMFl(w, 0);
        }
    }
    if (w->win != NULL && get_status_flag__17TWindowSubComCardFv(w->win) != 0) {
        TWindow__close(w->win);
        w->win = NULL;
        set_field_20__12TQuestListVMFl(w, 0);
    }
}

void handle_buy_confirm__20TShopArmorListWindowFv(Win_8021A634 *w) {
    s32 base = TShopWindowBase__sub_8022397C(w);
    s32 r;
    if (w->card != NULL && is_visible__17TWindowSubComCardFv(w->card) != 0) {
        r = get_selected_menu_value(w->card);
        if (r == 0) {
            if (w->list != NULL) {
                s32 i = select_cursor_entry__6TLobbyFv(w->list);
                Rec_8021A634 it = w->recs[i];
                VObj_18_b34251 *item;
                u32 e;
                it.id = advance_item_id_counter(local_client_id);
                try_buy_item(w->player, &it);
                item = find_item_by_id(it.id);
                if (item != NULL && (e = get_equip_field_d04__10TObjPlayerFv(w->player, item->m31())) != 0) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv(w->player, get_field_d8__10TObjPlayerFv(e));
                }
                send_6x25_equip_item(w->player, it.id, 0);
                ((TShopArmorListWindow *)w)->update_selection(&w->recs[i]);
                if (is_single_purchase_shop_item(&w->recs[i]) != 0) {
                    clear_shop_entry_value__6TLobbyFll(i, (void *)base);
                }
                save_cursor_selection__20TShopArmorListWindowFv(w->list);
            }
            TWindow__close(w->card);
            w->card = NULL;
            set_field_20__12TQuestListVMFl((void*)(w), (int)(0));
        }
        if (r == 1) {
            if (w->list != NULL) {
                s32 i = select_cursor_entry__6TLobbyFv(w->list);
                Rec_8021A634 it = w->recs[i];
                it.id = advance_item_id_counter(local_client_id);
                try_buy_item(w->player, &it);
                ((TShopArmorListWindow *)w)->update_selection(&w->recs[i]);
                if (is_single_purchase_shop_item(&w->recs[i]) != 0) {
                    clear_shop_entry_value__6TLobbyFll(i, (void *)base);
                }
                save_cursor_selection__20TShopArmorListWindowFv(w->list);
            }
            TWindow__close(w->card);
            w->card = NULL;
            set_field_20__12TQuestListVMFl((void*)(w), (int)(0));
        }
    }
    if (w->card != NULL && get_status_flag__17TWindowSubComCardFv(w->card) != 0) {
        if (w->list != NULL) {
            s32 i = select_cursor_entry__6TLobbyFv(w->list);
            Rec_8021A634 it = w->recs[i];
            it.id = advance_item_id_counter(local_client_id);
            try_buy_item(w->player, &it);
            ((TShopArmorListWindow *)w)->update_selection(&w->recs[i]);
            if (is_single_purchase_shop_item(&w->recs[i]) != 0) {
                clear_shop_entry_value__6TLobbyFll(i, (void *)base);
            }
            save_cursor_selection__20TShopArmorListWindowFv(w->list);
        }
        TWindow__close(w->card);
        w->card = NULL;
        set_field_20__12TQuestListVMFl((void*)(w), (int)(0));
    }
}

s32 TShopArmorListWindow::open_menu_window() {
    f32 temp_f31;
    u16 temp_r31;

    if ((u32) *(u32 *)((s8 *)this + 0x30) == 0U) {
        temp_r31 = obj_getField1c(*(s32 *)((s8 *)this + 0x24));
        *(u32 *)((s8 *)this + 0x30) = create_window_menu(get_window_layout_position(0x2B), 2, temp_r31);
        forward_trade_action_default__16TObjCityMainWarpFPviii(*(u32 *)((s8 *)this + 0x30), get_shop_text(4), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(*(u32 *)((s8 *)this + 0x30), get_shop_text(5), 6, 1);
        calc_window_size__17TWindowSubComCardFPv(*(u32 *)((s8 *)this + 0x30));
        align_menu_entry_positions(*(u32 *)((s8 *)this + 0x30));
        set_ready_flag__18TCheckRoomSequenceFv(*(u32 *)((s8 *)this + 0x30));
        temp_f31 = get_scale__15TShopWindowBaseFv(this);
        set_position_xy(*(u32 *)((s8 *)this + 0x30), get_scale__15TShopWindowBaseFv(this), temp_f31);
    }
    set_field_20__12TQuestListVMFl((void*)((void*)(this)), (int)(2));
}
int TShopArmorListWindow::advance_to_preparation_phase() { return set_field_20__12TQuestListVMFl((void*)(this), (int)(8)); }

s32 TShopArmorListWindow::update() {
    if ((((VObj_8021AA2C_8021A394 *)this)->m8() != 0) && ((TShopWindowBase__sub_80223A48(this) != 0) || (TShopWindowBase__sub_802239EC(this) != 0))) {
        ((VObj_8021AA2C_8021A394 *)this)->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFv(*(s32 *)((s8 *)this + 0x2C));
        set_field_20__12TQuestListVMFl((void*)(this), (int)(1));
    }
}

s32 TShopArmorListWindow::handle_select() {
    if ((((VObj_8021AABC_8021A394 *)this)->m8() != 0) && ((TShopWindowBase__sub_80223A48(this) != 0) || (TShopWindowBase__sub_802239EC(this) != 0))) {
        ((VObj_8021AABC_8021A394 *)this)->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFv(*(s32 *)((s8 *)this + 0x2C));
        set_field_20__12TQuestListVMFl((void*)(this), (int)(1));
    }
}

extern s32 __vt__20TShopArmorListWindow[];

struct Win_8021AD24;
void TShopArmorListWindow::handle_selection() {
    Win_8021AB4C *w = (Win_8021AB4C *)this;
    s32 i;
    if (w->list != NULL) {
        i = select_cursor_entry__6TLobbyFv(w->list);
        if (w->help != NULL && i != w->sel) {
            set_displayed_item_colored__15TWindowHelpItemFUl((int)w->help, &w->recs[i]);
        }
        if (i != w->sel) {
            update_selection(&w->recs[i]);
        }
        w->sel = i;
    }
    if (TShopWindowBase__sub_802239EC(w) != 0) {
        w->f20 = 3;
        play_sound_effect(0x52D01, 0, 0, 0);
        return;
    }
    if (TShopWindowBase__sub_80223A48(w) != 0) {
        play_sound_effect(0x52D01, 0, 0, 0);
        switch (check_purchase_eligibility()) {
        case 0:
            w->m4(0xF, 1);
            set_field_20__12TQuestListVMFl(w, 5);
            break;
        case 1:
            w->m4(0x19, 1);
            set_field_20__12TQuestListVMFl(w, 6);
            break;
        case 2:
            w->m4(0x12, 1);
            set_field_20__12TQuestListVMFl(w, 7);
            break;
        case 3:
            w->m4(0x11, 1);
            set_field_20__12TQuestListVMFl(w, 7);
            break;
        case 4:
            set_field_20__12TQuestListVMFl(w, 8);
            break;
        }
    }
}

s32 TShopArmorListWindow::check_purchase_eligibility() {
    Win_8021AD24 *w = (Win_8021AD24 *)this;
    u32 res;
    s32 i;
    Rec_8021AD24 *r;
    w->flag = 0;
    if (w->list == 0) {
        return 0;
    }
    i = select_cursor_entry__6TLobbyFv(w->list);
    if (w->recs[i].price > obj_getPtr2B0_20(w->player)) {
        return 0;
    }
    r = &w->recs[i];
    if (can_inventory_accept_item__10TObjPlayerFPvPv(w->player, r) == 0) {
        return 1;
    }
    if (check_equip_requirements(w->player, r, &res) == 0) {
        return (res & 1) ? 2 : 3;
    }
    if (w->recs[i].kind == 1 && w->recs[i].sub == 3) {
        w->flag = 0;
    } else {
        w->flag = 1;
    }
    return 4;
}

#pragma push
#pragma opt_common_subs off
#define W ((Win_8021AE18 *)p)
void TShopArmorListWindow::refresh_item_list(void *p) {
    Rec_8021AE18 tmp;
    void *o;
    u16 id;
    s32 base;
    s32 i;
    Rec_8021AE18 *r;
    s32 j;
    s32 k;
    u8 *e;
    void *c;
    base = TShopWindowBase__sub_8022397C(W);
    W->count = TLobby__sub_8021B274();
    for (i = 0; i < W->count; i++) {
        copy_armor_shop_entry__6TLobbyFll(&tmp, i, base);
        copy_item_data__6TLobbyFPvPv(&W->recs[i], &tmp);
    }
    r = W->recs;
    for (j = 0; j < W->count; j++, r++) {
        if (r->price != -1) {
            r->price = get_item_price_if_valid__24TShopEquipmentSellWindowFv(r);
        }
    }
    if (W->list == NULL) {
        W->list = create_item_list_window(get_shop_text(0x2A), W->count, (u16)obj_getField1c(W->player));
    } else {
        save_cursor_selection__20TShopArmorListWindowFv(W->list);
        reset_list__20TShopArmorListWindowFPv(W->list);
    }
    if (W->list != NULL) {
        for (k = 0; k < W->count; k++) {
            e = (u8 *)W + k * 0x14;
            if (*(s32 *)(e + 0x5C) != -1) {
                add_ground_item__20TWindowSubStatusDispFll(W->list, e + 0x4C, k);
            }
        }
        calc_list_content_extent(W->list);
        clear_selected_and_update_entry__14TWindowSubItemFv((s32)W->list);
        clamp_selection_to_valid_entry__20TShopArmorListWindowFv(W->list);
    }
    if (W->help == NULL) {
        o = __nw__7TObjectFUl(0xBC);
        if (o != NULL) {
            o = __ct__15TWindowHelpItemFPvUs(o, get_window_layout_position(0x27), (u16)obj_getField1c(W->player));
        }
        W->help = o;
        if (W->help != NULL && is_camera_ctrl_active__6TLobbyFv() > 2) {
            set_position__6TLobbyFff(W->help, lbl_805DC6C0, lbl_805DC6C0);
        }
        set_displayed_item_colored__15TWindowHelpItemFUl((int)W->help, W->recs);
    }
    if (W->cost == NULL) {
        W->cost = create_cost_window(obj_getField1c(W->player));
        if ((c = W->cost) != NULL && W->recs[0].price > 0) {
            get_item_count__24TShopEquipmentSellWindowFv(c, W->recs[0].price);
        }
    }
    W->base.m4(0xB, 1);
}
#undef W
#pragma pop

void TShopArmorListWindow__vt9(u8 *arg0) {
    s32 (*temp_r12)(s32);
    u32 temp_r0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 0:
        TShopArmorListWindow::refresh_item_list((void *)((void *) (arg0)));
        set_field_20__12TQuestListVMFl((void*)((void *) (arg0)), (int)((int) (1)));
        return;
    case 1:
        ((TShopArmorListWindow *)arg0)->handle_selection();
        return;
    case 2:
        ((TShopArmorListWindow *)arg0)->handle_equip_offer();
        return;
    case 3:
    case 10:
        temp_r12 = *(s32 (**)(s32))((s8 *)arg0 + 0x1F4);
        if (temp_r12 != NULL) {
            temp_r12(*(s32 *)((s8 *)arg0 + 0x28));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    case 5:
        ((TShopArmorListWindow *)arg0)->handle_select();
        return;
    case 6:
        ((TShopArmorListWindow *)arg0)->update();
        return;
    case 7:
        ((s32)((TShopArmorListWindow *)arg0)->advance_to_preparation_phase());
        return;
    case 8:
        ((TShopArmorListWindow *)arg0)->open_menu_window();
        return;
    case 9:
        handle_buy_confirm__20TShopArmorListWindowFv((Win_8021A634 *)((void *) (arg0)));
    default:
        return;
    }
}

void *__dt__20TShopArmorListWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TShopArmorListWindow;
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)((s8 *)arg0 + 0x30) = 0; }
        if (*(void **)((s8 *)arg0 + 0x34) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x34)); *(s32 *)((s8 *)arg0 + 0x34) = 0; }
        if (*(void **)((s8 *)arg0 + 0x38) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x38)); *(s32 *)((s8 *)arg0 + 0x38) = 0; }
        if (*(void **)((s8 *)arg0 + 0x3C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x3C)); *(s32 *)((s8 *)arg0 + 0x3C) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8021B1CC___vt__20TShopArmorListWindow_size[sizeof(RecoveredGlobal_8021B1CC___vt__20TShopArmorListWindow) == 0x30 ? 1 : -1];
u8 *TShopArmorListWindow__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    __ct__15TShopWindowBaseFv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8021B1CC___vt__20TShopArmorListWindow *)&__vt__20TShopArmorListWindow).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TShopArmorListWindow__class_name;
    *(s32 *)((s8 *)arg0 + 0x24) = arg3;
    *(s32 *)((s8 *)arg0 + 0x28) = arg2;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    *(s32 *)((s8 *)arg0 + 0x1F4) = 0;
    *(s32 *)((s8 *)arg0 + 0x1F0) = 0;
    calc_item_count__18TShopGetItemWindowFPl((int) (*(s32 *)((s8 *)arg0 + 0x24)), (void *) (&sp8));
    set_shop_armor_list_flag__6TLobbyFii((void *) (TShopWindowBase__sub_8022397C((void *) (arg0))), (int) (sp8));
    return arg0;
}

}
