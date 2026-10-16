#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TWindowMainMenu.h"

struct Base_A_80263b70 { char pad[0x18]; };
struct V_A_80263b70 : Base_A_80263b70 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual s32 m5();
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

s32 get_player_by_client_id(s32);
struct Obj_80263D7C; struct Obj_80263DBC;
s32 open_menu_with_entry__15TWindowMainMenuFs(void *, s16);
void destroy_submenu__15TWindowMainMenuFv(void* p);
s32 reset_equip_slots__10TObjPlayerFv(s32);

void TWindowMainMenu::try_open_battle_menu(s16 arg1) {
    s32 spC;
    s16 sp8;
    s32 temp_r3;

    sp8 = arg1;
    temp_r3 = get_player_by_client_id(*(s32 *)((s8 *)this + 0x54));
    if ((temp_r3 != 0) && !(*(s32 *)((s8 *)this + 0x4C) & 1) && (filter_menu_entry(&sp8, &spC) != 0) && (spC != 0)) {
        *(s32 *)((s8 *)this + 0x4C) = (s32) (*(s32 *)((s8 *)this + 0x4C) | 1);
        *(s32 *)((s8 *)this + 0x5C) = 0;
        open_menu_with_entry__15TWindowMainMenuFs(this, sp8);
        ((TWindowMainMenu *)this)->create_submenu(sp8);
        reset_equip_slots__10TObjPlayerFv(temp_r3);
        ((V_A_80263b70 *) this)->m5();
    }
}

s32 TWindowMainMenu::close_active_submenu() {
    *(s32 *)((s8 *)this + 0x4C) = (s32) (*(s32 *)((s8 *)this + 0x4C) & 0xFFFFFFFB);
    ((s32 (*)())destroy_submenu__15TWindowMainMenuFv)();
    if ((u32) *(u32 *)((s8 *)this + 0x5C) == 0U) {
        ((VObj_80263C24_80263B70 *)this)->m6();
        return 0;
    }
    *(s32 *)((s8 *)this + 0x48) = 0x1F;
    sub_80263D7C();
    update_selection_value();
    close_submenu((void*)(*(u32 *)((s8 *)this + 0x5C)));
    return 1;
}

}

#include "types.h"

struct Elt80263D94_80263d94_80263B70 { s16 f0; s16 f2; s32 f4; };

struct Obj_80263D7C { u8 pad[0x50]; s16 f50; u8 pad3[0x5c - 0x52]; s32 f5c; };

struct E_80263DBC { s16 a; s32 b; };

struct Obj_80263DBC { u8 pad[0x28]; E_80263DBC arr[4]; u8 pad2[0x50 - 0x48]; s16 f50; s16 f52; u8 pad3[0x5c - 0x54]; u32 f5c; };

extern "C" {

s32 get_player_by_client_id(s32);
s32 populate_menu__15TWindowMainMenuFPvPv(void *, s32);
void close_child_window__15TWindowMainMenuFv(void* p);

s32 init_parts__10TObjPlayerFPv();
s32 reset_equip_slots__10TObjPlayerFv(s32);
void update_keyboard_card_state__15TWindowMainMenuFv(void *arg0);

void TWindowMainMenu::close_and_clear_flags() {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)this + 0x4C);
    *(s32 *)((s8 *)this + 0x4C) = (s32) (temp_r4 & ~5);
    ((s32 (*)(void *, s32))close_child_window__15TWindowMainMenuFv)(this, temp_r4);
    destroy_submenu__15TWindowMainMenuFv(this);
    close();
    if (get_player_by_client_id((s32)(*(s32 *)((s8 *)this + 0x54))) != 0U) {
        init_parts__10TObjPlayerFPv();
    }
}

void TWindowMainMenu::open(s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;

    temp_r3 = get_player_by_client_id((s32)(*(s32 *)((s8 *)this + 0x54)));
    if (temp_r3 != 0) {
        temp_r4 = *(s32 *)((s8 *)this + 0x4C) | 1;
        *(s32 *)((s8 *)this + 0x4C) = temp_r4;
        *(s32 *)((s8 *)this + 0x5C) = arg1;
        *(s16 *)((s8 *)this + 0x50) = 0;
        ((s32 (*)(void *, s32))update_keyboard_card_state__15TWindowMainMenuFv)(this, temp_r4);
        populate_menu__15TWindowMainMenuFPvPv(this, *(s32 *)((s8 *)this + 0x5C));
        reset_equip_slots__10TObjPlayerFv(temp_r3);
    }
}

void TWindowMainMenu::sub_80263D7C() {
    ((Obj_80263D7C *)this)->f5c = *(s32 *)((u8 *)((Obj_80263D7C *)this) + ((Obj_80263D7C *)this)->f50 * 8 + 0x2c);
}

void TWindowMainMenu::add_menu_entry(s16 arg1) {
    struct Elt80263D94_80263d94_80263B70 *arr = (struct Elt80263D94_80263d94_80263B70 *)((u8 *)this);
    struct Elt80263D94_80263d94_80263B70 *e = (struct Elt80263D94_80263d94_80263B70 *)((char *)&arr[*(s16 *)((s8 *)((u8 *)this) + 0x50)] + 0x28);
    e->f0 = (s16) *(s16 *)((s8 *)((u8 *)this) + 0x52);
    e->f2 = arg1;
    e->f4 = (s32) *(s32 *)((s8 *)((u8 *)this) + 0x5C);
}
void TWindowMainMenu::update_selection_value() {
    Obj_80263DBC *o = (Obj_80263DBC *)this;
    E_80263DBC *e = &o->arr[o->f50];
    if (e->b != o->f5c) {
        o->f52 = 0;
    } else {
        o->f52 = e->a;
    }
}

}

#include "types.h"

extern "C" {
s32 get_main_phase();
s32 is_quest_active();

s32 get_short_mail_ctrl__6TLobbyFv();
s32 is_trade_range_bit_set(s32);
extern s32 local_client_id;
}

extern "C" {

void close_child_window__15TWindowMainMenuFv(void* p);
void destroy_submenu__15TWindowMainMenuFv(void* p);
void update_keyboard_card_state__15TWindowMainMenuFv(void *arg0);
u32 create_message_window__6TLobbyFllUls(u32, s32 *, s32, s32);

u32 get_window_layout_position(s32);
int TWindow__close(void*);
s32 call_if_split_screen(u32, s32);
s32 toggle_help_window_on_button(s32, s32);
int queue_destruction__7TObjectFv(void*);
s32 select_main_menu_item_10(s32);
s32 test_keyboard_card_flag4(s32);

void TWindowMainMenu::update_keyboard_card_state() {
    if (test_keyboard_card_flag4(*(s32 *)((s8 *)this + 0x54)) != 0) {
        *(s16 *)((s8 *)this + 0x52) = 0;
        return;
    }
    update_selection_value();
}

s32 TWindowMainMenu::filter_menu_entry(s16 *arg1, s32 *arg2) {
    u8 *base;
    u8 *p;
    s32 st;
    base = ((u8 *(*)(s32))get_player_by_client_id)(*(s32 *)((s8 *)((u8 *)this) + 0x54));
    if (base == NULL) {
        return 0;
    }
    p = base + 0x85C;
    if (p == NULL) {
        return 0;
    }
    *arg2 = 1;
    st = TOKeyMachine01::get_global_state();
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
        } else if (is_trade_range_bit_set(local_client_id) == 0) {
            *arg2 = 0;
        }
        break;
    case 15:
        if (is_quest_active() != 1) {
            *arg2 = 0;
        }
        break;
    case 3:
        if (*(s32 *)((s8 *)p + 0x34) & 0x10) {
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

void TWindowMainMenu::sub_80263FE0() {
    toggle_help_window_on_button(*(s32 *)((s8 *)this + 0x24), *(s32 *)((s8 *)this + 0x54));
}

void TWindowMainMenu::close_child_window() { if (*(unsigned int*)((char*)this + 0x24) != 0) { TWindow__close(*(void**)((char*)this + 0x24)); *(int*)((char*)this + 0x24) = 0; } }

extern s32 lbl_8044F2E0[];
extern const f32 lbl_805DD13C;

void TWindowMainMenu::update_description_text(s32 arg1) {
    if ((s32) *(s32 *)((s8 *)this + 0x48) != arg1) {
        *(s32 *)((s8 *)this + 0x48) = arg1;
        if ((u32) *(u32 *)((s8 *)this + 0x24) == 0U) {
            u32 tmp = get_window_layout_position(0x1B);
            *(u32 *)((s8 *)this + 0x24) = create_message_window__6TLobbyFllUls(tmp, lbl_8044F2E0, 1, *(s32 *)((s8 *)this + 0x54));
            ((TLobby *)(*(u32 *)((s8 *)this + 0x24)))->set_field_1c(lbl_805DD13C);
            call_if_split_screen(*(u32 *)((s8 *)this + 0x24), *(s32 *)((s8 *)this + 0x54));
        }
        ((TLobby *)(*(u32 *)((s8 *)this + 0x24)))->send_and_handle(select_main_menu_item_10(arg1), 0x80);
    }
}

void TWindowMainMenu::destroy_submenu() { if (*(unsigned int*)((char*)this + 0x20) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)this + 0x20)); *(int*)((char*)this + 0x20) = 0; } }

}

#include "types.h"
#include "pso/misc/TWindowMainMenu1P.h"

extern "C" {
void *__nw__7TObjectFUl(int);
void destroy_submenu__15TWindowMainMenuFv(void *);
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
s32 __ct__22TWindowSubTradeMessageFP7TObjectl(int, void *, int);
s32 TWindowSubInformationBoard__ct(int, void *, int);
}

extern "C" {

void *__nw__7TObjectFUl(int);
void destroy_submenu__15TWindowMainMenuFv(void *);
void *construct_character_select_transition(void *, void *, void *);

void TWindowMainMenu1P::create_char_select_slot() {
    void *o;
    destroy_submenu__15TWindowMainMenuFv(this);
    set_scale_f();
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = construct_character_select_transition(o, this, *(void **)((s8 *)this + 0x54));
    }
    *(void **)((s8 *)this + 0x20) = o;
}
void TWindowMainMenu::create_submenu(u32 arg1) {
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
    *(s32 *)((s8 *)((u8 *)this) + 0x4C) = (s32) (*(s32 *)((s8 *)((u8 *)this) + 0x4C) | 4);
    destroy_submenu__15TWindowMainMenuFv((void *) (((u8 *)this)));
    set_scale_f();
    switch (arg1) {
    case 25:
        temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x2C)));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = construct_status_category_window((int) (temp_r3), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0;
        return;
    case 0:
    case 1:
        temp_r3_2 = ((s32)__nw__7TObjectFUl((int) (0x38)));
        var_r0_2 = temp_r3_2;
        if (var_r0_2 != 0) {
            var_r0_2 = TWindowSubEquip__sub_80275CB0((int) (temp_r3_2), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_2;
        return;
    case 9:
    case 10:
        temp_r3_3 = ((s32)__nw__7TObjectFUl((int) (0x3C)));
        var_r0_3 = temp_r3_3;
        if (var_r0_3 != 0) {
            var_r0_3 = TWindowSubEquip__ct((int) (temp_r3_3), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_3;
        return;
    case 11:
        temp_r3_4 = ((s32)__nw__7TObjectFUl((int) (0x44)));
        var_r0_4 = temp_r3_4;
        if (var_r0_4 != 0) {
            var_r0_4 = TWindowSubItem__ct((int) (temp_r3_4), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_4;
        return;
    case 23:
    case 24:
        temp_r3_5 = ((s32)__nw__7TObjectFUl((int) (0x50)));
        var_r0_5 = temp_r3_5;
        if (var_r0_5 != 0) {
            var_r0_5 = TWindowSubMag__ct((int) (temp_r3_5), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_5;
        return;
    case 26:
    case 27:
    case 28:
        temp_r3_6 = ((s32)__nw__7TObjectFUl((int) (0x38)));
        var_r0_6 = temp_r3_6;
        if (var_r0_6 != 0) {
            var_r0_6 = TWindowSubTrade__ct((int) (temp_r3_6), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_6;
        return;
    case 29:
        temp_r3_7 = ((s32)__nw__7TObjectFUl((int) (0xA8)));
        var_r0_7 = temp_r3_7;
        if (var_r0_7 != 0) {
            var_r0_7 = TWindowSubTradeMain__ct((int) (temp_r3_7), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_7;
        return;
    case 30:
        temp_r3_8 = ((s32)__nw__7TObjectFUl((int) (0x2C)));
        var_r0_8 = temp_r3_8;
        if (var_r0_8 != 0) {
            var_r0_8 = __ct__22TWindowSubTradeMessageFP7TObjectl((int) (temp_r3_8), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_8;
        return;
    case 12:
    case 13:
        temp_r3_9 = ((s32)__nw__7TObjectFUl((int) (0x28)));
        var_r0_9 = temp_r3_9;
        if (var_r0_9 != 0) {
            var_r0_9 = TWindowSubAreaMap__ct((int) (temp_r3_9), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_9;
        return;
    case 15:
    case 16:
        temp_r3_10 = ((s32)__nw__7TObjectFUl((int) (0x30)));
        var_r0_10 = temp_r3_10;
        if (var_r0_10 != 0) {
            var_r0_10 = TWindowSubQuestBoard__ct((int) (temp_r3_10), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_10;
        return;
    case 3:
    case 4:
        temp_r3_11 = ((s32)__nw__7TObjectFUl((int) (0x40)));
        var_r0_11 = temp_r3_11;
        if (var_r0_11 != 0) {
            var_r0_11 = TWindowSubTechnique__ct((int) (temp_r3_11), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_11;
        return;
    case 18:
        temp_r3_12 = ((s32)__nw__7TObjectFUl((int) (0x60)));
        var_r0_12 = temp_r3_12;
        if (var_r0_12 != 0) {
            var_r0_12 = TWindowSubSymbolChat__ct((int) (temp_r3_12), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_12;
        return;
    case 14:
        temp_r3_13 = ((s32)__nw__7TObjectFUl((int) (0x88)));
        var_r0_13 = temp_r3_13;
        if (var_r0_13 != 0) {
            var_r0_13 = TWindowSubComCard__ct((int) (temp_r3_13), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_13;
        return;
    case 21:
        temp_r3_14 = ((s32)__nw__7TObjectFUl((int) (0x80)));
        var_r0_14 = temp_r3_14;
        if (var_r0_14 != 0) {
            var_r0_14 = TWindowSubLog__ct((int) (temp_r3_14), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_14;
        return;
    case 6:
        temp_r3_15 = ((s32)__nw__7TObjectFUl((int) (0x30)));
        var_r0_15 = temp_r3_15;
        if (var_r0_15 != 0) {
            var_r0_15 = TWindowSubQuestBoard__sub_8027CE74((int) (temp_r3_15), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_15;
        return;
    case 19:
    case 20:
        temp_r3_16 = ((s32)__nw__7TObjectFUl((int) (0x60)));
        var_r0_16 = temp_r3_16;
        if (var_r0_16 != 0) {
            var_r0_16 = TWindowSubShortMail__ct((int) (temp_r3_16), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_16;
        return;
    case 22:
        temp_r3_17 = ((s32)__nw__7TObjectFUl((int) (0x914)));
        var_r0_17 = temp_r3_17;
        if (var_r0_17 != 0) {
            var_r0_17 = TWindowSubInformationBoard__ct((int) (temp_r3_17), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_17;
        return;
    case 17:
        temp_r3_18 = ((s32)__nw__7TObjectFUl((int) (0x94)));
        var_r0_18 = temp_r3_18;
        if (var_r0_18 != 0) {
            var_r0_18 = TWindowSubShortCut__ct((int) (temp_r3_18), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_18;
        return;
    case 7:
    case 8:
        temp_r3_19 = ((s32)__nw__7TObjectFUl((int) (0x2C)));
        var_r0_19 = temp_r3_19;
        if (var_r0_19 != 0) {
            var_r0_19 = TWindowSubGameEnd__ct((int) (temp_r3_19), (void *) (((u8 *)this)), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x54)));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = var_r0_19;
    default:
        return;
    }
}

}
