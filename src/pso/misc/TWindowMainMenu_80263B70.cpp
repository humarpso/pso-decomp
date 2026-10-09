#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_80263b70 { char pad[0x18]; };
struct V_A_80263b70 : Base_A_80263b70 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual M2C_UNK m5();
};
struct Base_80263C24_80263B70 { char pad[0x18]; };
struct VObj_80263C24_80263B70 : Base_80263C24_80263B70 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {

s32 close_active_submenu__15TWindowMainMenuFPv(void *arg0);
void try_open_battle_menu__15TWindowMainMenuFPvs(void *arg0, s16 arg1);
s32 get_player_by_client_id(s32);
struct Obj_80263D7C; struct Obj_80263DBC;
void TWindowMainMenu__sub_80263D7C(Obj_80263D7C *o);
void update_selection_value__15TWindowMainMenuFPv(Obj_80263DBC *o);
s32 filter_menu_entry__15TWindowMainMenuFPvPvPv(u8 *arg0, s16 *arg1, s32 *arg2);
M2C_UNK open_menu_with_entry__15TWindowMainMenuFPvs(void *, s16);
void create_submenu__15TWindowMainMenuFPvUi(u8 *arg0, u32 arg1);
M2C_UNK close_submenu__15TWindowMainMenuFPvPv(void *, u32);
void destroy_submenu__15TWindowMainMenuFPv(void* p);
M2C_UNK reset_equip_slots__10TObjPlayerFPv(s32);

void try_open_battle_menu__15TWindowMainMenuFPvs(void *arg0, s16 arg1) {
    s32 spC;
    s16 sp8;
    s32 temp_r3;

    sp8 = arg1;
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s32 *, 0x54));
    if ((temp_r3 != 0) && !(M2C_FIELD(arg0, s32 *, 0x4C) & 1) && (filter_menu_entry__15TWindowMainMenuFPvPvPv((u8 *)arg0, &sp8, &spC) != 0) && (spC != 0)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) | 1);
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        open_menu_with_entry__15TWindowMainMenuFPvs(arg0, sp8);
        create_submenu__15TWindowMainMenuFPvUi((u8 *)arg0, sp8);
        reset_equip_slots__10TObjPlayerFPv(temp_r3);
        ((V_A_80263b70 *) arg0)->m5();
    }
}

s32 close_active_submenu__15TWindowMainMenuFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) & 0xFFFFFFFB);
    ((M2C_UNK (*)())destroy_submenu__15TWindowMainMenuFPv)();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) == 0U) {
        ((VObj_80263C24_80263B70 *)arg0)->m6();
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0x1F;
    TWindowMainMenu__sub_80263D7C((Obj_80263D7C *)arg0);
    update_selection_value__15TWindowMainMenuFPv((Obj_80263DBC *)arg0);
    close_submenu__15TWindowMainMenuFPvPv(arg0, M2C_FIELD(arg0, u32 *, 0x5C));
    return 1;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Elt80263D94_80263d94_80263B70 { s16 f0; s16 f2; s32 f4; };

struct Obj_80263D7C { u8 pad[0x50]; s16 f50; u8 pad3[0x5c - 0x52]; s32 f5c; };

struct E_80263DBC { s16 a; s32 b; };

struct Obj_80263DBC { u8 pad[0x28]; E_80263DBC arr[4]; u8 pad2[0x50 - 0x48]; s16 f50; s16 f52; u8 pad3[0x5c - 0x54]; u32 f5c; };

extern "C" {
void TWindowMainMenu__sub_80263D7C(Obj_80263D7C *o);
void update_selection_value__15TWindowMainMenuFPv(Obj_80263DBC *o);
}

extern "C" {

void add_menu_entry__15TWindowMainMenuFPvs(u8 *arg0, s16 arg1);
void close_and_clear_flags__15TWindowMainMenuFPv(void *arg0);
void open__15TWindowMainMenuFPvi(void *arg0, s32 arg1);
s32 get_player_by_client_id(s32);
M2C_UNK populate_menu__15TWindowMainMenuFPvPv(void *, s32);
M2C_UNK close__15TWindowMainMenuFPv(void *);
void close_child_window__15TWindowMainMenuFPv(void* p);

M2C_UNK init_parts__10TObjPlayerFPv();
M2C_UNK reset_equip_slots__10TObjPlayerFPv(s32);
void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0);

void close_and_clear_flags__15TWindowMainMenuFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r4 & ~5);
    ((M2C_UNK (*)(void *, s32))close_child_window__15TWindowMainMenuFPv)(arg0, temp_r4);
    destroy_submenu__15TWindowMainMenuFPv(arg0);
    close__15TWindowMainMenuFPv(arg0);
    if (get_player_by_client_id((s32)(M2C_FIELD(arg0, s32 *, 0x54))) != 0U) {
        init_parts__10TObjPlayerFPv();
    }
}

void open__15TWindowMainMenuFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;

    temp_r3 = get_player_by_client_id((s32)(M2C_FIELD(arg0, s32 *, 0x54)));
    if (temp_r3 != 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C) | 1;
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
        M2C_FIELD(arg0, s16 *, 0x50) = 0;
        ((M2C_UNK (*)(void *, s32))update_keyboard_card_state__15TWindowMainMenuFPv)(arg0, temp_r4);
        populate_menu__15TWindowMainMenuFPvPv(arg0, M2C_FIELD(arg0, s32 *, 0x5C));
        reset_equip_slots__10TObjPlayerFPv(temp_r3);
    }
}

void TWindowMainMenu__sub_80263D7C(Obj_80263D7C *o) {
    o->f5c = *(s32 *)((u8 *)o + o->f50 * 8 + 0x2c);
}

void add_menu_entry__15TWindowMainMenuFPvs(u8 *arg0, s16 arg1) {
    struct Elt80263D94_80263d94_80263B70 *arr = (struct Elt80263D94_80263d94_80263B70 *)arg0;
    struct Elt80263D94_80263d94_80263B70 *e = (struct Elt80263D94_80263d94_80263B70 *)((char *)&arr[M2C_FIELD(arg0, s16 *, 0x50)] + 0x28);
    e->f0 = (s16) M2C_FIELD(arg0, s16 *, 0x52);
    e->f2 = arg1;
    e->f4 = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
}
void update_selection_value__15TWindowMainMenuFPv(Obj_80263DBC *o) {
    E_80263DBC *e = &o->arr[o->f50];
    if (e->b != o->f5c) {
        o->f52 = 0;
    } else {
        o->f52 = e->a;
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_main_phase();
s32 is_quest_active();

s32 get_global_state__14TOKeyMachine01Fv();
s32 get_short_mail_ctrl__6TLobbyFv();
s32 TWindowSubTradeMain__sub_802D3924(s32);
extern s32 local_client_id;
s32 filter_menu_entry__15TWindowMainMenuFPvPvPv(u8 *arg0, s16 *arg1, s32 *arg2);
}

extern "C" {

void TWindowMainMenu__sub_80263FE0(void *arg0);
void close_child_window__15TWindowMainMenuFPv(void* p);
void destroy_submenu__15TWindowMainMenuFPv(void* p);
void update_description_text__15TWindowMainMenuFPvi(void *arg0, s32 arg1);
void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0);
u32 create_message_window__6TLobbyFiiUis(u32, M2C_UNK *, M2C_UNK, s32);

u32 get_window_layout_position(M2C_UNK);
int TWindow__close(void*);
M2C_UNK call_if_split_screen(u32, s32);
M2C_UNK toggle_help_window_on_button(s32, s32);
int queue_destruction__7TObjectFv(void*);
s32 select_main_menu_item_10(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
s32 test_keyboard_card_flag4(s32);

void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0) {
    if (test_keyboard_card_flag4(M2C_FIELD(arg0, s32 *, 0x54)) != 0) {
        M2C_FIELD(arg0, s16 *, 0x52) = 0;
        return;
    }
    update_selection_value__15TWindowMainMenuFPv((Obj_80263DBC *)arg0);
}

s32 filter_menu_entry__15TWindowMainMenuFPvPvPv(u8 *arg0, s16 *arg1, s32 *arg2) {
    u8 *base;
    u8 *p;
    s32 st;
    base = ((u8 *(*)(s32))get_player_by_client_id)(M2C_FIELD(arg0, s32 *, 0x54));
    if (base == NULL) {
        return 0;
    }
    p = base + 0x85C;
    if (p == NULL) {
        return 0;
    }
    *arg2 = 1;
    st = get_global_state__14TOKeyMachine01Fv();
    switch (*arg1) {
    case 0:
    case 9:
    case 23:
        if (st == 0xF) {
            *arg2 = 0;
        }
        break;
    case 26:
        if (get_main_phase() != 0xF) {
            *arg1 += 1;
            *arg2 = 0;
        } else if (TWindowSubTradeMain__sub_802D3924(local_client_id) == 0) {
            *arg2 = 0;
        }
        break;
    case 15:
        if (is_quest_active() != 1) {
            *arg2 = 0;
        }
        break;
    case 3:
        if (M2C_FIELD(p, s32 *, 0x34) & 0x10) {
            return 0;
        }
        if (st == 0xF || st == 0 || st == 0x12) {
            *arg1 = 4;
        }
        break;
    case 12:
        if (st == 0xF || st == 0 || st == 0x12) {
            *arg2 = 0;
        }
        break;
    case 19:
        if (get_main_phase() != 0xF && get_short_mail_ctrl__6TLobbyFv() <= 0) {
            *arg2 = 0;
        }
        break;
    case 7:
        if (get_main_phase() == 0xF) {
            *arg1 = 8;
        }
        break;
    }
    if (*arg2 == 0) {
        *arg1 += 1;
    }
    return 1;
}

void TWindowMainMenu__sub_80263FE0(void *arg0) {
    toggle_help_window_on_button(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x54));
}

void close_child_window__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x24) != 0) { TWindow__close(*(void**)((char*)p + 0x24)); *(int*)((char*)p + 0x24) = 0; } }

extern M2C_UNK lbl_8044F2E0[];
extern const f32 lbl_805DD13C;

void update_description_text__15TWindowMainMenuFPvi(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) {
            u32 tmp = get_window_layout_position(0x1B);
            M2C_FIELD(arg0, u32 *, 0x24) = create_message_window__6TLobbyFiiUis(tmp, lbl_8044F2E0, 1, M2C_FIELD(arg0, s32 *, 0x54));
            set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, u32 *, 0x24), lbl_805DD13C);
            call_if_split_screen(M2C_FIELD(arg0, u32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x54));
        }
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x24), select_main_menu_item_10(arg1), 0x80);
    }
}

void destroy_submenu__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; } }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void *__nw__7TObjectFUl(int);
void set_scale_f__15TWindowSubEquipFPv(void *);
void destroy_submenu__15TWindowMainMenuFPv(void *);
s32 TWindowSubAreaMap__ct(int, void *, int);
s32 TWindowSubComCard__ct(int, void *, int);
s32 TWindowSubEquip__sub_80275CB0(int, void *, int);
s32 TWindowSubEquip__ct(int, void *, int);
s32 TWindowSubGameEnd__ct(int, void *, int);
s32 TWindowSubItem__ct(int, void *, int);
s32 TWindowSubLog__ct(int, void *, int);
s32 TWindowSubMag__ct(int, void *, int);
s32 TWindowSubQuestBoard__sub_8027CE74(int, void *, int);
s32 TWindowSubQuestBoard__ct(int, void *, int);
s32 TWindowSubShortCut__ct(int, void *, int);
s32 TWindowSubShortMail__ct(int, void *, int);
s32 construct_status_category_window(int, void *, int);
s32 TWindowSubSymbolChat__ct(int, void *, int);
s32 TWindowSubTechnique__ct(int, void *, int);
s32 TWindowSubTrade__ct(int, void *, int);
s32 TWindowSubTradeMain__ct(int, void *, int);
s32 TWindowSubTradeMessage__ct(int, void *, int);
s32 TWindowSubInformationBoard__ct(int, void *, int);
void create_submenu__15TWindowMainMenuFPvUi(u8 *arg0, u32 arg1);
}

extern "C" {

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void set_scale_f__15TWindowSubEquipFPv(void *);
void destroy_submenu__15TWindowMainMenuFPv(void *);
void *TAdChrSelSlotGC__sub_802C7250(void *, void *, void *);

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0) {
    void *o;
    destroy_submenu__15TWindowMainMenuFPv(arg0);
    set_scale_f__15TWindowSubEquipFPv(arg0);
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = TAdChrSelSlotGC__sub_802C7250(o, arg0, M2C_FIELD(arg0, void **, 0x54));
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
}
void create_submenu__15TWindowMainMenuFPvUi(u8 *arg0, u32 arg1) {
    s32 temp_r3;
    s32 temp_r3_10;
    s32 temp_r3_11;
    s32 temp_r3_12;
    s32 temp_r3_13;
    s32 temp_r3_14;
    s32 temp_r3_15;
    s32 temp_r3_16;
    s32 temp_r3_17;
    s32 temp_r3_18;
    s32 temp_r3_19;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;
    s32 var_r0;
    s32 var_r0_10;
    s32 var_r0_11;
    s32 var_r0_12;
    s32 var_r0_13;
    s32 var_r0_14;
    s32 var_r0_15;
    s32 var_r0_16;
    s32 var_r0_17;
    s32 var_r0_18;
    s32 var_r0_19;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) | 4);
    destroy_submenu__15TWindowMainMenuFPv((void *) (arg0));
    set_scale_f__15TWindowSubEquipFPv((void *) (arg0));
    switch (arg1) {
    case 25:
        temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x2C)));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = construct_status_category_window((int) (temp_r3), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0;
        return;
    case 0:
    case 1:
        temp_r3_2 = ((s32)__nw__7TObjectFUl((int) (0x38)));
        var_r0_2 = temp_r3_2;
        if (var_r0_2 != 0) {
            var_r0_2 = TWindowSubEquip__sub_80275CB0((int) (temp_r3_2), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_2;
        return;
    case 9:
    case 10:
        temp_r3_3 = ((s32)__nw__7TObjectFUl((int) (0x3C)));
        var_r0_3 = temp_r3_3;
        if (var_r0_3 != 0) {
            var_r0_3 = TWindowSubEquip__ct((int) (temp_r3_3), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_3;
        return;
    case 11:
        temp_r3_4 = ((s32)__nw__7TObjectFUl((int) (0x44)));
        var_r0_4 = temp_r3_4;
        if (var_r0_4 != 0) {
            var_r0_4 = TWindowSubItem__ct((int) (temp_r3_4), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_4;
        return;
    case 23:
    case 24:
        temp_r3_5 = ((s32)__nw__7TObjectFUl((int) (0x50)));
        var_r0_5 = temp_r3_5;
        if (var_r0_5 != 0) {
            var_r0_5 = TWindowSubMag__ct((int) (temp_r3_5), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_5;
        return;
    case 26:
    case 27:
    case 28:
        temp_r3_6 = ((s32)__nw__7TObjectFUl((int) (0x38)));
        var_r0_6 = temp_r3_6;
        if (var_r0_6 != 0) {
            var_r0_6 = TWindowSubTrade__ct((int) (temp_r3_6), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_6;
        return;
    case 29:
        temp_r3_7 = ((s32)__nw__7TObjectFUl((int) (0xA8)));
        var_r0_7 = temp_r3_7;
        if (var_r0_7 != 0) {
            var_r0_7 = TWindowSubTradeMain__ct((int) (temp_r3_7), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_7;
        return;
    case 30:
        temp_r3_8 = ((s32)__nw__7TObjectFUl((int) (0x2C)));
        var_r0_8 = temp_r3_8;
        if (var_r0_8 != 0) {
            var_r0_8 = TWindowSubTradeMessage__ct((int) (temp_r3_8), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_8;
        return;
    case 12:
    case 13:
        temp_r3_9 = ((s32)__nw__7TObjectFUl((int) (0x28)));
        var_r0_9 = temp_r3_9;
        if (var_r0_9 != 0) {
            var_r0_9 = TWindowSubAreaMap__ct((int) (temp_r3_9), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_9;
        return;
    case 15:
    case 16:
        temp_r3_10 = ((s32)__nw__7TObjectFUl((int) (0x30)));
        var_r0_10 = temp_r3_10;
        if (var_r0_10 != 0) {
            var_r0_10 = TWindowSubQuestBoard__ct((int) (temp_r3_10), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_10;
        return;
    case 3:
    case 4:
        temp_r3_11 = ((s32)__nw__7TObjectFUl((int) (0x40)));
        var_r0_11 = temp_r3_11;
        if (var_r0_11 != 0) {
            var_r0_11 = TWindowSubTechnique__ct((int) (temp_r3_11), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_11;
        return;
    case 18:
        temp_r3_12 = ((s32)__nw__7TObjectFUl((int) (0x60)));
        var_r0_12 = temp_r3_12;
        if (var_r0_12 != 0) {
            var_r0_12 = TWindowSubSymbolChat__ct((int) (temp_r3_12), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_12;
        return;
    case 14:
        temp_r3_13 = ((s32)__nw__7TObjectFUl((int) (0x88)));
        var_r0_13 = temp_r3_13;
        if (var_r0_13 != 0) {
            var_r0_13 = TWindowSubComCard__ct((int) (temp_r3_13), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_13;
        return;
    case 21:
        temp_r3_14 = ((s32)__nw__7TObjectFUl((int) (0x80)));
        var_r0_14 = temp_r3_14;
        if (var_r0_14 != 0) {
            var_r0_14 = TWindowSubLog__ct((int) (temp_r3_14), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_14;
        return;
    case 6:
        temp_r3_15 = ((s32)__nw__7TObjectFUl((int) (0x30)));
        var_r0_15 = temp_r3_15;
        if (var_r0_15 != 0) {
            var_r0_15 = TWindowSubQuestBoard__sub_8027CE74((int) (temp_r3_15), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_15;
        return;
    case 19:
    case 20:
        temp_r3_16 = ((s32)__nw__7TObjectFUl((int) (0x60)));
        var_r0_16 = temp_r3_16;
        if (var_r0_16 != 0) {
            var_r0_16 = TWindowSubShortMail__ct((int) (temp_r3_16), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_16;
        return;
    case 22:
        temp_r3_17 = ((s32)__nw__7TObjectFUl((int) (0x914)));
        var_r0_17 = temp_r3_17;
        if (var_r0_17 != 0) {
            var_r0_17 = TWindowSubInformationBoard__ct((int) (temp_r3_17), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_17;
        return;
    case 17:
        temp_r3_18 = ((s32)__nw__7TObjectFUl((int) (0x94)));
        var_r0_18 = temp_r3_18;
        if (var_r0_18 != 0) {
            var_r0_18 = TWindowSubShortCut__ct((int) (temp_r3_18), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_18;
        return;
    case 7:
    case 8:
        temp_r3_19 = ((s32)__nw__7TObjectFUl((int) (0x2C)));
        var_r0_19 = temp_r3_19;
        if (var_r0_19 != 0) {
            var_r0_19 = TWindowSubGameEnd__ct((int) (temp_r3_19), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_19;
    default:
        return;
    }
}

}
