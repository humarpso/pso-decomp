#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    M2C_UNK value;
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

extern "C" {
s32 set_shop_armor_list_flag__6TLobbyFii(void *, int);
s32 calc_item_count__18TShopGetItemWindowFPvPv(int, void *);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __ct__15TShopWindowBaseFv(void *);
extern M2C_UNK __vt__20TShopArmorListWindow[];
extern s32 lbl_805D3698;
u8 *TShopArmorListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
s32 queue_destruction__7TObjectFv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 TShopArmorListWindow__sub_8021A43C(void *);
s32 TShopArmorListWindow__sub_8021A634(void *);
s32 open_menu_window__20TShopArmorListWindowFPv(void *arg0);
int TShopArmorListWindow__sub_8021AA08(void* p);
s32 update__20TShopArmorListWindowFPv(void *arg0);
s32 handle_select__20TShopArmorListWindowFPv(void *arg0);
s32 TShopArmorListWindow__sub_8021AB4C(void *);
s32 TShopArmorListWindow__sub_8021AE18(void *);
void TShopArmorListWindow__vt9(u8 *arg0);
s32 obj_getPtr2B0_20(void *);
s32 check_equip_requirements(void *, Rec_8021AD24 *, u32 *);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(void *, Rec_8021AD24 *);
s32 select_cursor_entry__6TLobbyFPv(void *);
s32 check_purchase_eligibility__20TShopArmorListWindowFPv(Win_8021AD24 *w);
}

extern "C" {

void TShopArmorListWindow__vt4(void *arg0);
void TShopArmorListWindow__vt5(void *arg0);
void *__dt__20TShopArmorListWindowFv(void *arg0, s16 arg1);
void update_selection__20TShopArmorListWindowFPvPv(void *arg0, void *arg1);
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
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, s32, s32);
M2C_UNK get_item_count__24TShopEquipmentSellWindowFPv(void *a, s32 b);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 obj_getField1c(s32);
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 set_position_xy(u32, f32, f32);
s32 set_ready_flag__18TCheckRoomSequenceFPv(u32);

void TShopArmorListWindow__vt5(void *arg0) {
    struct VObj_8021A394 *o = (struct VObj_8021A394 *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m5();
    }
}

void TShopArmorListWindow__vt4(void *arg0) {
    struct VObj_8021A3CC_8021A394 *o = (struct VObj_8021A3CC_8021A394 *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m4();
    }
}

void update_selection__20TShopArmorListWindowFPvPv(void *arg0, void *arg1) {
    void *r3 = M2C_FIELD(arg0, void **, 0x3C);
    if (r3 != 0) {
        s32 r4 = M2C_FIELD(arg1, s32 *, 0x10);
        if (r4 > 0) {
            get_item_count__24TShopEquipmentSellWindowFPv(r3, r4);
        }
    }
}

s32 open_menu_window__20TShopArmorListWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
        temp_r31 = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x30) = create_window_menu(get_window_layout_position(0x2B), 2, temp_r31);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x30), get_shop_text(4), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x30), get_shop_text(5), 6, 1);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x30));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0x30));
        set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x30));
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, u32 *, 0x30), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
    }
    set_field_20__12TQuestListVMFPvi((void*)((void*)(arg0)), (int)(2));
}
int TShopArmorListWindow__sub_8021AA08(void* p) { return set_field_20__12TQuestListVMFPvi((void*)(p), (int)(8)); }

s32 update__20TShopArmorListWindowFPv(void *arg0) {
    if ((((VObj_8021AA2C_8021A394 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021AA2C_8021A394 *)arg0)->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, s32 *, 0x2C));
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (int)(1));
    }
}

s32 handle_select__20TShopArmorListWindowFPv(void *arg0) {
    if ((((VObj_8021AABC_8021A394 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021AABC_8021A394 *)arg0)->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, s32 *, 0x2C));
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (int)(1));
    }
}

extern M2C_UNK __vt__20TShopArmorListWindow[];

s32 check_purchase_eligibility__20TShopArmorListWindowFPv(Win_8021AD24 *w) {
    u32 res;
    s32 i;
    Rec_8021AD24 *r;
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
    if (w->recs[i].kind == 1 && w->recs[i].sub == 3) {
        w->flag = 0;
    } else {
        w->flag = 1;
    }
    return 4;
}

void TShopArmorListWindow__vt9(u8 *arg0) {
    M2C_UNK (*temp_r12)(s32);
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        TShopArmorListWindow__sub_8021AE18((void *) (arg0));
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (int)((int) (1)));
        return;
    case 1:
        TShopArmorListWindow__sub_8021AB4C((void *) (arg0));
        return;
    case 2:
        TShopArmorListWindow__sub_8021A43C((void *) (arg0));
        return;
    case 3:
    case 10:
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x1F4);
        if (temp_r12 != NULL) {
            temp_r12(M2C_FIELD(arg0, s32 *, 0x28));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    case 5:
        handle_select__20TShopArmorListWindowFPv((void *) (arg0));
        return;
    case 6:
        update__20TShopArmorListWindowFPv((void *) (arg0));
        return;
    case 7:
        ((s32)TShopArmorListWindow__sub_8021AA08((void*)(arg0)));
        return;
    case 8:
        open_menu_window__20TShopArmorListWindowFPv((void *) (arg0));
        return;
    case 9:
        TShopArmorListWindow__sub_8021A634((void *) (arg0));
    default:
        return;
    }
}

void *__dt__20TShopArmorListWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TShopArmorListWindow;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
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
typedef char RecoveredGlobal_8021B1CC___vt__20TShopArmorListWindow_size[sizeof(RecoveredGlobal_8021B1CC___vt__20TShopArmorListWindow) == 0x30 ? 1 : -1];
u8 *TShopArmorListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    __ct__15TShopWindowBaseFv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8021B1CC___vt__20TShopArmorListWindow *)&__vt__20TShopArmorListWindow).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3698;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
    calc_item_count__18TShopGetItemWindowFPvPv((int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (&sp8));
    set_shop_armor_list_flag__6TLobbyFii((void *) (TShopWindowBase__sub_8022397C((void *) (arg0))), (int) (sp8));
    return arg0;
}

}
