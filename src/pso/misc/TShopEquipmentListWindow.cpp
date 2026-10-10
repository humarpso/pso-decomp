#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021B974 { char pad[0x18]; };
struct VObj_8021B974 : Base_8021B974 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021B9AC_8021B974 { char pad[0x18]; };
struct VObj_8021B9AC_8021B974 : Base_8021B9AC_8021B974 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
struct Base_8021C040_8021B974 { char pad[0x18]; };
struct VObj_8021C040_8021B974 : Base_8021C040_8021B974 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int  m8();
};
struct Base_8021C0D0_8021B974 { char pad[0x18]; };
struct VObj_8021C0D0_8021B974 : Base_8021C0D0_8021B974 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int  m8();
};

struct RecoveredGlobal_8021C7C0___vt__24TShopEquipmentListWindow {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Rec_8021C33C { u8 kind; u8 sub; u8 pad[0xe]; s32 price; };

struct Win_8021C33C {
    u8 pad[0x24];
    void *player;
    u8 pad28[8];
    void *list;
    u8 pad34[0x4c - 0x34];
    s32 flag;
    Rec_8021C33C recs[16];
};

struct VBase_18_a93f07 { char pad[0x18]; };

struct VObj_18_a93f07 : VBase_18_a93f07 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
};

struct Rec_8021C408 { s32 w[4]; s32 price; };

struct Win_8021C408 {
    VObj_18_a93f07 base;
    u8 pad1c[0x24 - 0x1C];
    s32 player;
    u8 pad28[8];
    void *list;
    void *help;
    u8 pad38[0x3C - 0x38];
    void *cost;
    u8 pad40[0x44 - 0x40];
    s32 count;
    u8 pad48[0x50 - 0x48];
    Rec_8021C408 recs[16];
};

typedef s32 M2C_UNK;
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

struct Rec_8021BC18 { s32 w[3]; s32 id; s32 price; };

struct Win_8021BC18 {
    u8 pad0[0x24];
    void *player;
    u8 pad28[0x2C - 0x28];
    void *card;
    void *list;
    u8 pad34[0x50 - 0x34];
    Rec_8021BC18 recs[16];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Rec_8021BA1C { s32 w[5]; };

struct Win_8021BA1C {
    VObj_18_a93f07 base;
    u8 pad1c[0x24 - 0x1C];
    s32 player;
    u8 pad28[4];
    void *win;
    void *list;
    u8 pad34[0x4c - 0x34];
    s32 flag;
    Rec_8021BA1C recs[16];
};

struct VBase_8021C160 { char pad[0x18]; };

struct VObj_8021C160 : VBase_8021C160 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(s32, s32);
};

struct Rec_8021C160 { s32 w[5]; };

struct Win_8021C160 : VObj_8021C160 {
    u8 pad1c[0x30 - 0x1C];
    void *list;
    void *help;
    u8 pad38[0x48 - 0x38];
    s32 sel;
    u8 pad4c[4];
    Rec_8021C160 recs[1];
};

extern "C" {
s32 calc_item_count__18TShopGetItemWindowFPvPv(int, void *);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __ct__15TShopWindowBaseFv(void *);
s32 TLobby__sub_80225238(void *, int);
extern M2C_UNK __vt__24TShopEquipmentListWindow[];
extern s32 TShopEquipmentListWindow__class_name;
u8 *TShopEquipmentListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
s32 queue_destruction__7TObjectFv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 open_menu_window__24TShopEquipmentListWindowFPv(void *arg0);
int get_list_item8__24TShopEquipmentListWindowFPv(void* p);
s32 handle_confirm__24TShopEquipmentListWindowFPv(void *arg0);
s32 handle_select__24TShopEquipmentListWindowFPv(void *arg0);
void TShopEquipmentListWindow__vt9(u8 *arg0);
s32 obj_getPtr2B0_20(void *);
s32 check_equip_requirements(void *, Rec_8021C33C *, u32 *);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(void *, Rec_8021C33C *);
s32 select_cursor_entry__6TLobbyFPv(void *);
s32 check_purchase_eligibility__24TShopEquipmentListWindowFPv(Win_8021C33C *w);
s32 obj_getField1c(s32);
M2C_UNK copy_item_data__6TLobbyFPvPv(void *, void *);
s32 get_item_price_if_valid__24TShopEquipmentSellWindowFUi(void *);
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(s32);
M2C_UNK get_shop_weapon_stock_item(void *, int, s32);
M2C_UNK set_position__6TLobbyFPvff(void *, f32, f32);
int TShopEquipmentListWindow__sub_8021C85C(int a0);
s32 get_shop_text(s32);
s32 TShopWindowBase__sub_8022397C(void *);
void *__nw__7TObjectFUl(u32);
M2C_UNK set_displayed_item_colored__15TWindowHelpItemFPvUi(void *, void *);
void *__ct__15TWindowHelpItemFPvUs(void *, s32, u16);
M2C_UNK clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void *);
M2C_UNK save_cursor_selection__20TShopArmorListWindowFPv(void *);
M2C_UNK reset_list__20TShopArmorListWindowFPv(void *);
M2C_UNK calc_list_content_extent(void *);
M2C_UNK add_ground_item__20TWindowSubStatusDispFPvii(void *, void *, s32);
s32 get_window_layout_position(s32);
void *create_item_list_window(s32, s32, u16);
M2C_UNK get_item_count__24TShopEquipmentSellWindowFPv(void *a, s32 b);
void *create_cost_window(u16);
s32 is_camera_ctrl_active__6TLobbyFv();
extern const f32 lbl_805DC6D0;
void create_buy_list_windows__24TShopEquipmentListWindowFPv(void *p);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 get_field_d8__10TObjPlayerFPv(u32);
VObj_18_b34251 *find_item_by_id(s32);
u32 get_equip_field_d04__10TObjPlayerFPv(void *, s32);
s32 advance_item_id_counter(u16);
void try_buy_item(void *, void *);
void send_6x26_unequip_item__10TObjPlayerFPvPv(void *, s32);
void send_6x25_equip_item(void *, s32, s32);
void update_list__24TShopEquipmentListWindowFPvPv(void *arg0, void *arg1);
s32 is_single_purchase_shop_item(void *);
s32 TShopWindowBase__sub_8022397C(void *);
void clear_slot_field_f10__6TLobbyFii(s32, s32);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
M2C_UNK save_cursor_selection__20TShopArmorListWindowFPv(void *);
s32 select_cursor_entry__6TLobbyFPv(void *);
extern const s32 local_client_id;
void handle_buy_confirm__24TShopEquipmentListWindowFPv(Win_8021BC18 *w);
s32 obj_getField1c(s32);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);
void set_stack_count__24TShopEquipmentListWindowFPvc(void *, int);
s32 advance_item_id_counter(u16);
void try_buy_item(void *, void *);
void update_list__24TShopEquipmentListWindowFPvPv(void *arg0, void *arg1);
s32 is_single_purchase_shop_item(void *);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 TShopWindowBase__sub_8022397C(void *);
void clear_slot_field_f10__6TLobbyFii(s32, s32);
s32 set_position_xy(u32, f32, f32);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
u32 create_yes_no_window(int, u16, int, int);
s32 select_cursor_entry__6TLobbyFPv(void *);
s32 get_window_layout_position(s32);
extern const s32 local_client_id;
void handle_equip_offer__24TShopEquipmentListWindowFv(void *p);
int set_field_20__12TQuestListVMFPvi(void*, int);
void update_list__24TShopEquipmentListWindowFPvPv(void *arg0, void *arg1);
s32 check_purchase_eligibility__24TShopEquipmentListWindowFPv(Win_8021C33C *w);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void play_sound_effect(int, int, int, int);
M2C_UNK set_displayed_item_colored__15TWindowHelpItemFPvUi(void *, void *);
s32 select_cursor_entry__6TLobbyFPv(void *);
void handle_selection__24TShopEquipmentListWindowFv(Win_8021C160 *w);
}

extern "C" {

int TShopEquipmentListWindow__sub_8021C85C(int a0);
void TShopEquipmentListWindow__vt4(void *arg0);
void TShopEquipmentListWindow__vt5(void *arg0);
void *__dt__24TShopEquipmentListWindowFv(void *arg0, s16 arg1);
void update_list__24TShopEquipmentListWindowFPvPv(void *arg0, void *arg1);
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
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, s32, s32);
M2C_UNK get_item_count__24TShopEquipmentSellWindowFPv(void *a, s32 b);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 obj_getField1c(s32);
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 set_position_xy(u32, f32, f32);
s32 set_ready_flag__18TCheckRoomSequenceFPv(u32);

void TShopEquipmentListWindow__vt5(void *arg0) {
    struct VObj_8021B974 *o = (struct VObj_8021B974 *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m5();
    }
}

void TShopEquipmentListWindow__vt4(void *arg0) {
    struct VObj_8021B9AC_8021B974 *o = (struct VObj_8021B9AC_8021B974 *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m4();
    }
}

void update_list__24TShopEquipmentListWindowFPvPv(void *arg0, void *arg1) {
    void *v = M2C_FIELD(arg0, void **, 0x3C);
    if (v != 0) {
        s32 n = M2C_FIELD(arg1, s32 *, 0x10);
        if (n > 0) {
            get_item_count__24TShopEquipmentSellWindowFPv(v, n);
        }
    }
}

void handle_equip_offer__24TShopEquipmentListWindowFv(void *p) {
    Win_8021BA1C *w = (Win_8021BA1C *)p;
    s32 r;
    s32 i;
    f32 sc;
    if (w->win != NULL && is_visible__17TWindowSubComCardFPv(w->win) != 0) {
        r = get_selected_menu_value(w->win);
        if (r == 0 && w->list != NULL) {
            if (w->flag != 0) {
                w->base.m4(0x18, 1);
                TWindow__close(w->win);
                w->win = (void *)create_yes_no_window(get_window_layout_position(0x2B), obj_getField1c(w->player), 0, 0);
                sc = get_scale__15TShopWindowBaseFv(w);
                set_position_xy((u32)w->win, get_scale__15TShopWindowBaseFv(w), sc);
                set_field_20__12TQuestListVMFPvi(w, 9);
            } else {
                Rec_8021BA1C c;
                i = select_cursor_entry__6TLobbyFPv(w->list);
                c = w->recs[i];
                c.w[3] = advance_item_id_counter(local_client_id);
                set_stack_count__24TShopEquipmentListWindowFPvc(&c, 1);
                try_buy_item((void *)(w->player), (void *)(&c));
                update_list__24TShopEquipmentListWindowFPvPv(w, &w->recs[i]);
                if (is_single_purchase_shop_item(&w->recs[i]) != 0) {
                    clear_slot_field_f10__6TLobbyFii((s32)(i), (s32)((void *)TShopWindowBase__sub_8022397C(w)));
                }
                TWindow__close(w->win);
                w->win = NULL;
                set_field_20__12TQuestListVMFPvi(w, 0);
            }
        }
        if (r == 1) {
            TWindow__close(w->win);
            w->win = NULL;
            set_field_20__12TQuestListVMFPvi(w, 0);
        }
    }
    if (w->win != NULL && get_status_flag__17TWindowSubComCardFPv(w->win) != 0) {
        TWindow__close(w->win);
        w->win = NULL;
        set_field_20__12TQuestListVMFPvi(w, 0);
    }
}

void handle_buy_confirm__24TShopEquipmentListWindowFPv(Win_8021BC18 *w) {
    s32 r;
    if (w->card != NULL && is_visible__17TWindowSubComCardFPv(w->card) != 0) {
        r = get_selected_menu_value(w->card);
        if (r == 0) {
            if (w->list != NULL) {
                s32 i = select_cursor_entry__6TLobbyFPv(w->list);
                Rec_8021BC18 it = w->recs[i];
                VObj_18_b34251 *item;
                u32 e;
                it.id = advance_item_id_counter(local_client_id);
                set_stack_count__24TShopEquipmentListWindowFPvc((void *)(&it), (s8)(1));
                try_buy_item(w->player, &it);
                item = find_item_by_id(it.id);
                if (item != NULL && (e = get_equip_field_d04__10TObjPlayerFPv(w->player, item->m31())) != 0) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv(w->player, get_field_d8__10TObjPlayerFPv(e));
                }
                send_6x25_equip_item(w->player, it.id, 0);
                update_list__24TShopEquipmentListWindowFPvPv(w, &w->recs[i]);
                if (is_single_purchase_shop_item(&w->recs[i]) != 0) {
                    clear_slot_field_f10__6TLobbyFii(i, TShopWindowBase__sub_8022397C(w));
                }
                save_cursor_selection__20TShopArmorListWindowFPv(w->list);
            }
            TWindow__close(w->card);
            w->card = NULL;
            set_field_20__12TQuestListVMFPvi((void*)(w), (int)(0));
        }
        if (r == 1) {
            if (w->list != NULL) {
                s32 i = select_cursor_entry__6TLobbyFPv(w->list);
                Rec_8021BC18 it = w->recs[i];
                it.id = advance_item_id_counter(local_client_id);
                set_stack_count__24TShopEquipmentListWindowFPvc((void *)(&it), (s8)(1));
                try_buy_item(w->player, &it);
                update_list__24TShopEquipmentListWindowFPvPv(w, &w->recs[i]);
                if (is_single_purchase_shop_item(&w->recs[i]) != 0) {
                    clear_slot_field_f10__6TLobbyFii(i, TShopWindowBase__sub_8022397C(w));
                }
                save_cursor_selection__20TShopArmorListWindowFPv(w->list);
            }
            TWindow__close(w->card);
            w->card = NULL;
            set_field_20__12TQuestListVMFPvi((void*)(w), (int)(0));
        }
    }
    if (w->card != NULL && get_status_flag__17TWindowSubComCardFPv(w->card) != 0) {
        if (w->list != NULL) {
            s32 i = select_cursor_entry__6TLobbyFPv(w->list);
            Rec_8021BC18 it = w->recs[i];
            it.id = advance_item_id_counter(local_client_id);
            set_stack_count__24TShopEquipmentListWindowFPvc((void *)(&it), (s8)(1));
            try_buy_item(w->player, &it);
            update_list__24TShopEquipmentListWindowFPvPv(w, &w->recs[i]);
            if (is_single_purchase_shop_item(&w->recs[i]) != 0) {
                clear_slot_field_f10__6TLobbyFii(i, TShopWindowBase__sub_8022397C(w));
            }
            save_cursor_selection__20TShopArmorListWindowFPv(w->list);
        }
        TWindow__close(w->card);
        w->card = NULL;
        set_field_20__12TQuestListVMFPvi((void*)(w), (int)(0));
    }
}

s32 open_menu_window__24TShopEquipmentListWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        temp_r31 = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x2C) = create_window_menu(get_window_layout_position(0x2B), 2, temp_r31);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), get_shop_text(4), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), get_shop_text(5), 6, 1);
        calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x2C));
        align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0x2C));
        set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x2C));
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, u32 *, 0x2C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
    }
    set_field_20__12TQuestListVMFPvi((void*)((void*)(arg0)), (int)(2));
}
int get_list_item8__24TShopEquipmentListWindowFPv(void* p) { return set_field_20__12TQuestListVMFPvi((void*)(p), (int)(8)); }

s32 handle_confirm__24TShopEquipmentListWindowFPv(void *arg0) {
    VObj_8021C040_8021B974 *o = (VObj_8021C040_8021B974 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(s32 *)((s8 *)arg0 + 0x30));
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (int)(1));
    }
}

s32 handle_select__24TShopEquipmentListWindowFPv(void *arg0) {
    VObj_8021C0D0_8021B974 *o = (VObj_8021C0D0_8021B974 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(s32 *)((s8 *)arg0 + 0x30));
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (int)(1));
    }
}

extern M2C_UNK __vt__24TShopEquipmentListWindow[];

struct Win_8021C33C;
void handle_selection__24TShopEquipmentListWindowFv(Win_8021C160 *w) {
    s32 i;
    if (w->list != NULL) {
        i = select_cursor_entry__6TLobbyFPv(w->list);
        if (w->help != NULL && i != w->sel) {
            set_displayed_item_colored__15TWindowHelpItemFPvUi(w->help, &w->recs[i]);
        }
        if (i != w->sel) {
            update_list__24TShopEquipmentListWindowFPvPv(w, &w->recs[i]);
        }
        w->sel = i;
    }
    if (TShopWindowBase__sub_802239EC(w) != 0) {
        set_field_20__12TQuestListVMFPvi(w, 3);
        play_sound_effect(0x52D01, 0, 0, 0);
        return;
    }
    if (TShopWindowBase__sub_80223A48(w) != 0) {
        play_sound_effect(0x52D01, 0, 0, 0);
        switch (check_purchase_eligibility__24TShopEquipmentListWindowFPv((Win_8021C33C *)w)) {
        case 0:
            w->m4(0xF, 1);
            set_field_20__12TQuestListVMFPvi(w, 5);
            break;
        case 1:
            w->m4(0x19, 1);
            set_field_20__12TQuestListVMFPvi(w, 6);
            break;
        case 2:
            w->m4(0x12, 1);
            set_field_20__12TQuestListVMFPvi(w, 7);
            break;
        case 3:
            w->m4(0x11, 1);
            set_field_20__12TQuestListVMFPvi(w, 7);
            break;
        case 4:
            set_field_20__12TQuestListVMFPvi(w, 8);
            break;
        }
    }
}

s32 check_purchase_eligibility__24TShopEquipmentListWindowFPv(Win_8021C33C *w) {
    u32 res;
    s32 i;
    Rec_8021C33C *r;
    w->flag = 0;
    if (w->list == 0) {
        return 0;
    }
    i = select_cursor_entry__6TLobbyFPv(w->list);
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
    w->flag = 1;
    return 4;
}

#pragma push
#pragma opt_common_subs off
#define W ((Win_8021C408 *)p)
void create_buy_list_windows__24TShopEquipmentListWindowFPv(void *p) {
    Rec_8021C408 tmp;
    u16 id;
    void *o;
    s32 i;
    Rec_8021C408 *r;
    s32 j;
    s32 k;
    u8 *e;
    void *c;
    W->count = TShopEquipmentListWindow__sub_8021C85C(TShopWindowBase__sub_8022397C(W));
    for (i = 0; i < W->count; i++) {
        get_shop_weapon_stock_item(&tmp, i, TShopWindowBase__sub_8022397C(W));
        copy_item_data__6TLobbyFPvPv(&W->recs[i], &tmp);
    }
    r = W->recs;
    for (j = 0; j < W->count; j++, r++) {
        if (r->price != -1) {
            r->price = get_item_price_if_valid__24TShopEquipmentSellWindowFUi(r);
        }
    }
    if (W->list == NULL) {
        W->list = create_item_list_window(get_shop_text(0x26), W->count, obj_getField1c(W->player));
    } else {
        save_cursor_selection__20TShopArmorListWindowFPv(W->list);
        reset_list__20TShopArmorListWindowFPv(W->list);
    }
    if (W->list != NULL) {
        for (k = 0; k < W->count; k++) {
            e = (u8 *)W + k * 0x14;
            if (*(s32 *)(e + 0x60) != -1) {
                add_ground_item__20TWindowSubStatusDispFPvii(W->list, e + 0x50, k);
            }
        }
        calc_list_content_extent(W->list);
        clear_selected_and_update_entry__14TWindowSubItemFPv((s32)W->list);
        clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(W->list);
    }
    if (W->help == NULL) {
        o = __nw__7TObjectFUl(0xBC);
        if (o != NULL) {
            id = obj_getField1c(W->player);
            o = __ct__15TWindowHelpItemFPvUs(o, get_window_layout_position(0x27), id);
        }
        W->help = o;
        if (W->help != NULL && is_camera_ctrl_active__6TLobbyFv() > 2) {
            set_position__6TLobbyFPvff(W->help, lbl_805DC6D0, lbl_805DC6D0);
        }
        set_displayed_item_colored__15TWindowHelpItemFPvUi(W->help, W->recs);
    }
    if (W->cost == NULL) {
        W->cost = create_cost_window(obj_getField1c(W->player));
        if ((c = W->cost) != NULL && W->recs[0].price > 0) {
            get_item_count__24TShopEquipmentSellWindowFPv(c, W->recs[0].price);
        }
    }
    W->base.m4(0xB, 1);
}
#undef W
#pragma pop

void TShopEquipmentListWindow__vt9(u8 *arg0) {
    M2C_UNK (*temp_r12)(s32);
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        create_buy_list_windows__24TShopEquipmentListWindowFPv((void *)((void *) (arg0)));
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (int)((int) (1)));
        return;
    case 1:
        handle_selection__24TShopEquipmentListWindowFv((Win_8021C160 *)((void *) (arg0)));
        return;
    case 2:
        handle_equip_offer__24TShopEquipmentListWindowFv((void *)((void *) (arg0)));
        return;
    case 5:
        handle_select__24TShopEquipmentListWindowFPv((void *) (arg0));
        return;
    case 6:
        handle_confirm__24TShopEquipmentListWindowFPv((void *) (arg0));
        return;
    case 7:
        ((s32)get_list_item8__24TShopEquipmentListWindowFPv((void*)(arg0)));
        return;
    case 8:
        open_menu_window__24TShopEquipmentListWindowFPv((void *) (arg0));
        return;
    case 9:
        handle_buy_confirm__24TShopEquipmentListWindowFPv((Win_8021BC18 *)((void *) (arg0)));
        return;
    case 3:
    case 10:
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x190);
        if (temp_r12 != NULL) {
            temp_r12(M2C_FIELD(arg0, s32 *, 0x28));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__24TShopEquipmentListWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TShopEquipmentListWindow;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int shop_weapon_stock_counts[];

typedef char RecoveredGlobal_8021C7C0___vt__24TShopEquipmentListWindow_size[sizeof(RecoveredGlobal_8021C7C0___vt__24TShopEquipmentListWindow) == 0x30 ? 1 : -1];
u8 *TShopEquipmentListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    __ct__15TShopWindowBaseFv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8021C7C0___vt__24TShopEquipmentListWindow *)&__vt__24TShopEquipmentListWindow).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TShopEquipmentListWindow__class_name;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    calc_item_count__18TShopGetItemWindowFPvPv((int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (&sp8));
    TLobby__sub_80225238((void *) (TShopWindowBase__sub_8022397C((void *) (arg0))), (int) (sp8));
    return arg0;
}

int TShopEquipmentListWindow__sub_8021C85C(int a0) {  return shop_weapon_stock_counts[a0]; }

}
