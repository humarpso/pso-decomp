#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021F134 { char pad[0x18]; };
struct VObj_8021F134 : Base_8021F134 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021F16C_8021F134 { char pad[0x18]; };
struct VObj_8021F16C_8021F134 : Base_8021F16C_8021F134 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
struct Base_8021F678_8021F134 { char pad[0x18]; };
struct VObj_8021F678_8021F134 : Base_8021F678_8021F134 {
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
struct Base_8021F708_8021F134 { char pad[0x18]; };
struct VObj_8021F708_8021F134 : Base_8021F708_8021F134 {
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

struct RecoveredGlobal_8021FDC8___vt__19TShopItemListWindow {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct VBase_18_a93f07 { char pad[0x18]; };

struct VObj_18_a93f07 : VBase_18_a93f07 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
};

struct Rec_8021F798 { s32 w[4]; s32 qty; };

struct Win_8021F798 {
    VObj_18_a93f07 base;
    u8 pad1c[0x24 - 0x1C];
    u8 *player;
    void *list;
    u8 pad2c[0x38 - 0x2C];
    void *help;
    void *status;
    void *sell;
    u8 pad44[0x54 - 0x44];
    s32 cur;
    Rec_8021F798 recs[16];
};

struct Rec_8021F964 { s32 w[4]; s32 qty; };

struct Win_8021F964 {
    u8 pad0[0x24];
    s32 player;
    void *list;
    u8 pad2c[0x58 - 0x2C];
    Rec_8021F964 recs[16];
};

struct Rec_8021F9EC { s32 w[4]; s32 price; };

struct Win_8021F9EC {
    u8 pad0[0x24];
    u8 *player;
    void *list;
    u8 pad2c[0x38 - 0x2C];
    void *help;
    void *status;
    void *cost;
    u8 pad44[0x48 - 0x44];
    s32 count;
    u8 pad4c[0x58 - 0x4C];
    Rec_8021F9EC recs[16];
};

extern "C" {
s32 calc_item_count__18TShopGetItemWindowFPvPv(int, void *);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __ct__15TShopWindowBaseFv(void *);
s32 set_6264_and_call_2244B0__6TLobbyFii(void *, int);
extern M2C_UNK __vt__19TShopItemListWindow[];
extern s32 TShopItemListWindow__class_name;
u8 *TShopItemListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
s32 queue_destruction__7TObjectFv(void *);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 handle_amount_confirm__19TShopItemListWindowFv(void *);
s32 prepare_tool_purchase__19TShopItemListWindowFv(void *);
s32 handle_confirm__19TShopItemListWindowFPv(void *arg0);
s32 update__19TShopItemListWindowFPv(void *arg0);
void TShopItemListWindow__vt9(u8 *arg0);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 count_items_by_id__10TObjPlayerFPvi(s32, void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK play_sound_effect(int, int, int, int);
M2C_UNK set_displayed_item_colored__15TWindowHelpItemFPvUi(void *, void *);
s32 select_cursor_entry__6TLobbyFPv(void *);
M2C_UNK set_entry1_field20__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK get_item_count__24TShopEquipmentSellWindowFPv(void *a, s32 b);
s32 handle_tool_list_select__19TShopItemListWindowFPv(void *p);
s32 obj_getPtr2B0_20(s32);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(s32, void *);
s32 select_cursor_entry__6TLobbyFPv(void *);
s32 check_purchase_eligibility__19TShopItemListWindowFPv(void *arg0);
s32 obj_getField1c(void *);
M2C_UNK copy_item_data__6TLobbyFPvPv(void *, void *);
s32 get_item_price_if_valid__24TShopEquipmentSellWindowFUi(void *);
s32 count_items_by_id__10TObjPlayerFPvi(s32, void *);
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(s32);
M2C_UNK set_position__6TLobbyFPvff(void *, f32, f32);
s32 TShopItemTecSequence__sub_8021FE6C();
s32 get_shop_text(int);
s32 TShopWindowBase__sub_8022397C(void *);
s32 get_child_field1c__15TShopWindowBaseFPv(void *);
M2C_UNK copy_shop_item_entry__6TLobbyFiii(void *, int, s32);
void *__nw__7TObjectFUl(u32);
M2C_UNK set_displayed_item_colored__15TWindowHelpItemFPvUi(void *, void *);
void *__ct__15TWindowHelpItemFPvUs(void *, s32, u16);
M2C_UNK clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(void *);
M2C_UNK reset_list__20TShopArmorListWindowFPv(void *);
M2C_UNK calc_list_content_extent(void *);
M2C_UNK add_ground_item__20TWindowSubStatusDispFPvii(void *, void *, s32);
s32 get_window_layout_position(int);
M2C_UNK set_entry1_field20__20TWindowSubStatusDispFPvi(void *, s32);
void *create_window_quantity(u16);
void *create_item_list_window(s32, s32, u16);
M2C_UNK get_item_count__24TShopEquipmentSellWindowFPv(void *a, s32 b);
void *create_cost_window(u16);
s32 is_camera_ctrl_active__6TLobbyFv();
extern const f32 lbl_805DC6F8;
void build_item_list__19TShopItemListWindowFv(void *p);
}

extern "C" {

void TShopItemListWindow__vt4(void *arg0);
void TShopItemListWindow__vt5(void *arg0);
void *__dt__19TShopItemListWindowFv(void *arg0, s16 arg1);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(s32);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);

void TShopItemListWindow__vt5(void *arg0) {
    struct VObj_8021F134 *temp_r3;

    temp_r3 = (struct VObj_8021F134 *)M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

void TShopItemListWindow__vt4(void *arg0) {
    struct VObj_8021F16C_8021F134 *temp_r3;

    temp_r3 = (struct VObj_8021F16C_8021F134 *)M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r3 != NULL) {
        temp_r3->m4();
    }
}

s32 handle_confirm__19TShopItemListWindowFPv(void *arg0) {
    VObj_8021F678_8021F134 *o = (VObj_8021F678_8021F134 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(s32 *)((s8 *)arg0 + 0x28));
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    }
}

s32 update__19TShopItemListWindowFPv(void *arg0) {
    VObj_8021F708_8021F134 *o = (VObj_8021F708_8021F134 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(s32 *)((s8 *)arg0 + 0x28));
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    }
}

extern M2C_UNK __vt__19TShopItemListWindow[];

#define W ((Win_8021F798 *)p)
s32 handle_tool_list_select__19TShopItemListWindowFPv(void *p) {
    s32 i;
    s32 n;
    u8 *e;
    if (W->list != NULL) {
        i = select_cursor_entry__6TLobbyFPv(W->list);
        if (W->help != NULL && i != W->cur) {
            set_displayed_item_colored__15TWindowHelpItemFPvUi(W->help, &W->recs[i]);
        }
        if (W->status != NULL && i != W->cur) {
            n = count_items_by_id__10TObjPlayerFPvi(*(s32 *)(W->player + 0xD00), &W->recs[i]);
            set_entry1_field20__20TWindowSubStatusDispFPvi(W->status, n);
        }
        if (W->sell != NULL && i != W->cur && (e = (u8 *)W + i * 0x14, *(s32 *)(e + 0x68) > 0)) {
            get_item_count__24TShopEquipmentSellWindowFPv(W->sell, *(s32 *)(e + 0x68));
        }
        W->cur = i;
    }
    if (TShopWindowBase__sub_802239EC(W) != 0) {
        *(s32 *)((u8 *)W + 0x20) = 3;
        play_sound_effect(0x52D01, 0, 0, 0);
        return;
    }
    if (TShopWindowBase__sub_80223A48(W) != 0) {
        play_sound_effect(0x52D01, 0, 0, 0);
        switch (check_purchase_eligibility__19TShopItemListWindowFPv((void *)(W))) {
        case 0:
            W->base.m4(0xF, 1);
            set_field_20__12TQuestListVMFPvi(W, 5);
            break;
        case 1:
            W->base.m4(0x19, 1);
            set_field_20__12TQuestListVMFPvi(W, 6);
            break;
        case 2:
            break;
        case 3:
            set_field_20__12TQuestListVMFPvi(W, 7);
            break;
        }
    }
}
#undef W

s32 check_purchase_eligibility__19TShopItemListWindowFPv(void *arg0) {
    Win_8021F964 *self = (Win_8021F964 *)arg0;
    s32 sel;
    s32 meseta;
    if (self->list == NULL) {
        return 0;
    }
    sel = select_cursor_entry__6TLobbyFPv(self->list);
    meseta = obj_getPtr2B0_20(self->player);
    if (self->recs[sel].qty > meseta) {
        return 0;
    }
    if (can_inventory_accept_item__10TObjPlayerFPvPv(self->player, &self->recs[sel]) == 0) {
        return 1;
    }
    return 3;
}

#pragma push
#pragma opt_common_subs off
#define W ((Win_8021F9EC *)p)
void build_item_list__19TShopItemListWindowFv(void *p) {
    Rec_8021F9EC tmp;
    s32 i;
    Rec_8021F9EC *r;
    s32 j;
    void *o;
    u8 *e;
    s32 n;
    void *c;
    TShopWindowBase__sub_8022397C(W);
    W->count = TShopItemTecSequence__sub_8021FE6C();
    for (i = 0; i < W->count; i++) {
        copy_shop_item_entry__6TLobbyFiii(&tmp, i, TShopWindowBase__sub_8022397C(W));
        copy_item_data__6TLobbyFPvPv(&W->recs[i], &tmp);
    }
    r = W->recs;
    for (j = 0; j < W->count; j++, r++) {
        if (r->price != -1) {
            r->price = get_item_price_if_valid__24TShopEquipmentSellWindowFUi(r);
        }
    }
    if (W->list == NULL) {
        W->list = create_item_list_window(get_shop_text(0x2D), W->count, obj_getField1c(W->player));
    } else {
        reset_list__20TShopArmorListWindowFPv(W->list);
    }
    if (W->list != NULL) {
        for (i = 0; i < W->count; i++) {
            e = (u8 *)W + i * 0x14;
            if (*(s32 *)(e + 0x68) != -1) {
                add_ground_item__20TWindowSubStatusDispFPvii(W->list, e + 0x58, i);
            }
        }
        calc_list_content_extent(W->list);
        clear_selected_and_update_entry__14TWindowSubItemFPv((s32)W->list);
        clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(W->list);
    }
    if (W->help == NULL) {
        o = __nw__7TObjectFUl(0xBC);
        if (o != NULL) {
            o = __ct__15TWindowHelpItemFPvUs(o, get_window_layout_position(0x27), obj_getField1c(W->player));
        }
        W->help = o;
        if (W->help != NULL && is_camera_ctrl_active__6TLobbyFv() > 2) {
            set_position__6TLobbyFPvff(W->help, lbl_805DC6F8, lbl_805DC6F8);
        }
        set_displayed_item_colored__15TWindowHelpItemFPvUi(W->help, W->recs);
    }
    if (W->status == NULL) {
        W->status = create_window_quantity(get_child_field1c__15TShopWindowBaseFPv(W));
        n = count_items_by_id__10TObjPlayerFPvi(*(s32 *)(W->player + 0xD00), W->recs);
        set_entry1_field20__20TWindowSubStatusDispFPvi(W->status, n);
    }
    if (W->cost == NULL) {
        W->cost = create_cost_window(obj_getField1c(W->player));
        if ((c = W->cost) != NULL && W->recs[0].price > 0) {
            get_item_count__24TShopEquipmentSellWindowFPv(c, W->recs[0].price);
        }
    }
}
#undef W
#pragma pop

void TShopItemListWindow__vt9(u8 *arg0) {
    M2C_UNK (*temp_r12)(s32);
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        build_item_list__19TShopItemListWindowFv((void *)((void *) (arg0)));
        set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (1)));
        return;
    case 1:
        handle_tool_list_select__19TShopItemListWindowFPv((void *)((void *) (arg0)));
        return;
    case 2:
        handle_amount_confirm__19TShopItemListWindowFv((void *) (arg0));
        return;
    case 3:
    case 8:
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x1C0);
        if (temp_r12 != NULL) {
            temp_r12(M2C_FIELD(arg0, s32 *, 0x2C));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    case 5:
        update__19TShopItemListWindowFPv((void *) (arg0));
        return;
    case 6:
        handle_confirm__19TShopItemListWindowFPv((void *) (arg0));
        return;
    case 7:
        prepare_tool_purchase__19TShopItemListWindowFv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__19TShopItemListWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TShopItemListWindow;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8021FDC8___vt__19TShopItemListWindow_size[sizeof(RecoveredGlobal_8021FDC8___vt__19TShopItemListWindow) == 0x30 ? 1 : -1];
u8 *TShopItemListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    __ct__15TShopWindowBaseFv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8021FDC8___vt__19TShopItemListWindow *)&__vt__19TShopItemListWindow).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TShopItemListWindow__class_name;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    calc_item_count__18TShopGetItemWindowFPvPv((int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (&sp8));
    set_6264_and_call_2244B0__6TLobbyFii((void *) (TShopWindowBase__sub_8022397C((void *) (arg0))), (int) (sp8));
    return arg0;
}

}
