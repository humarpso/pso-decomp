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

extern "C" {
s32 calc_item_count__18TShopGetItemWindowFPvPv(int, void *);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __ct__15TShopWindowBaseFv(void *);
s32 TLobby__sub_80225238(void *, int);
extern M2C_UNK __vt__24TShopEquipmentListWindow[];
extern s32 lbl_805D36A8;
u8 *TShopEquipmentListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
s32 queue_destruction__7TObjectFv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 TShopEquipmentListWindow__sub_8021BA1C(void *);
s32 TShopEquipmentListWindow__sub_8021BC18(void *);
s32 open_menu_window__24TShopEquipmentListWindowFPv(void *arg0);
int get_list_item8__24TShopEquipmentListWindowFPv(void* p);
s32 handle_confirm__24TShopEquipmentListWindowFPv(void *arg0);
s32 handle_select__24TShopEquipmentListWindowFPv(void *arg0);
s32 TShopEquipmentListWindow__sub_8021C160(void *);
void TShopEquipmentListWindow__vt9(u8 *arg0);
s32 obj_getPtr2B0_20(void *);
s32 TWindowHelpItem__sub_80104FCC(void *, Rec_8021C33C *, u32 *);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(void *, Rec_8021C33C *);
s32 select_cursor_entry__6TLobbyFPv(void *);
s32 check_purchase_eligibility__24TShopEquipmentListWindowFPv(Win_8021C33C *w);
s32 obj_getField1c(s32);
M2C_UNK copy_item_data__6TLobbyFPvPv(void *, void *);
s32 get_item_price_if_valid__24TShopEquipmentSellWindowFUi(void *);
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(s32);
M2C_UNK TLobby__sub_80225550(void *, int, s32);
M2C_UNK set_position__6TLobbyFPvff(void *, f32, f32);
int TShopEquipmentListWindow__sub_8021C85C(int a0);
s32 get_shop_text(s32);
s32 TShopWindowBase__sub_8022397C(void *);
void *__nw__7TObjectFUl(u32);
M2C_UNK set_displayed_item_colored__15TWindowHelpItemFPvUi(void *, void *);
void *TWindowHelpItem__ct(void *, s32, u16);
M2C_UNK TShopArmorListWindow__sub_80266CF8(void *);
M2C_UNK save_cursor_selection__20TShopArmorListWindowFPv(void *);
M2C_UNK TShopArmorListWindow__sub_80266DB0(void *);
M2C_UNK TLobby__sub_80266E34(void *);
M2C_UNK add_ground_item__20TWindowSubStatusDispFPvii(void *, void *, s32);
s32 get_window_layout_position(s32);
void *create_item_list_window(s32, s32, u16);
M2C_UNK get_item_count__24TShopEquipmentSellWindowFPv(void *a, s32 b);
void *create_cost_window(u16);
s32 is_camera_ctrl_active__6TLobbyFv();
extern const f32 lbl_805DC6D0;
void create_buy_list_windows__24TShopEquipmentListWindowFPv(void *p);
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
s32 TWindowSubComCard__sub_80265C30(u32);
s32 TWindowSubComCard__sub_80265F60(u32);
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

s32 open_menu_window__24TShopEquipmentListWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        temp_r31 = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x2C) = create_window_menu(get_window_layout_position(0x2B), 2, temp_r31);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), get_shop_text(4), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), get_shop_text(5), 6, 1);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x2C));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0x2C));
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
    if (TWindowHelpItem__sub_80104FCC(w->player, r, &res) == 0) {
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
        TLobby__sub_80225550(&tmp, i, TShopWindowBase__sub_8022397C(W));
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
        TShopArmorListWindow__sub_80266DB0(W->list);
    }
    if (W->list != NULL) {
        for (k = 0; k < W->count; k++) {
            e = (u8 *)W + k * 0x14;
            if (*(s32 *)(e + 0x60) != -1) {
                add_ground_item__20TWindowSubStatusDispFPvii(W->list, e + 0x50, k);
            }
        }
        TLobby__sub_80266E34(W->list);
        clear_selected_and_update_entry__14TWindowSubItemFPv((s32)W->list);
        TShopArmorListWindow__sub_80266CF8(W->list);
    }
    if (W->help == NULL) {
        o = __nw__7TObjectFUl(0xBC);
        if (o != NULL) {
            id = obj_getField1c(W->player);
            o = TWindowHelpItem__ct(o, get_window_layout_position(0x27), id);
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
        TShopEquipmentListWindow__sub_8021C160((void *) (arg0));
        return;
    case 2:
        TShopEquipmentListWindow__sub_8021BA1C((void *) (arg0));
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
        TShopEquipmentListWindow__sub_8021BC18((void *) (arg0));
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

    extern int lbl_80513F40[];

typedef char RecoveredGlobal_8021C7C0___vt__24TShopEquipmentListWindow_size[sizeof(RecoveredGlobal_8021C7C0___vt__24TShopEquipmentListWindow) == 0x30 ? 1 : -1];
u8 *TShopEquipmentListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    __ct__15TShopWindowBaseFv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8021C7C0___vt__24TShopEquipmentListWindow *)&__vt__24TShopEquipmentListWindow).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36A8;
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

int TShopEquipmentListWindow__sub_8021C85C(int a0) {  return lbl_80513F40[a0]; }

}
