#include "types.h"
#include "pso/misc/TUnk_804D1160.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowSubCustomEquip.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubCustomSelect.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjCityMainWarp.h"

struct Win_802758C8 {
    u8 pad0[0x20];
    s32 player;
    u8 pad24[0x30 - 0x24];
    s32 lobby;
    u16 kind;
    u16 id;
};

struct Ev_802758C8 {
    u16 kind;
    u16 id;
};

class VObj_80275A8C {
public:
    u8 pad0[0x18];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
};

struct Self_80275A8C {
    u8 pad0[0x1C];
    u8 state;
    u8 pad1d[3];
    s32 f20;
    VObj_80275A8C *f24;
    s32 f28;
    void *f2c;
};

extern "C" {
u32 get_item_field_6__10TObjPlayerFPv(void *);
s32 get_shared_text_buffer();
void get_technique_name(u16);
s32 weapon_has_extra_attack();
u8 *get_player_by_client_id(s32);
u8 get_cast_technique_level(void *, s16);
s32 validate_and_clear_slot__10TObjPlayerFv(void *, s16);
void append_text_space();
void TWindowSubStatusDisp__sub_80228F5C(s32);
void text_builder_append();
void text_builder_reset();
u8 *calc_technique_parameters(u16, u8, s32);
s32 get_palette_consumable_count(u16, s32);
void get_help_text_string(s32);
void toggle_help_window_on_button(s32, s32);
extern s32 current_language;
void update_customize_help_text__13TUnk_804D1160FPv(Win_802758C8 *self, Ev_802758C8 *ev);
s32 get_card_entry__17TWindowSubComCardFi(s32);
s32 count_active_cards__17TWindowSubComCardFv(void);
void *alloc__23TAdSinglePlyChrSelectGCFv(u32);
s32 set_selected_index__17TWindowSubComCardFs(void *, s32);
void TWindowMenu__ct(void *, s32, s32, void *);
void *init__21TWindowSubComCardListFiii(void *, s32, s8, s32);
s32 TWindowSubComCardList__sub_80275360(void *);
extern s32 __vt__21TWindowSubComCardList[];
extern s32 TWindowSubComCardList__class_name;
extern s32 local_client_id;
extern const f32 lbl_805DD540;
extern const f32 lbl_805DD544;
extern const f32 lbl_805DD548;
u8 *TWindowSubComCardList__ct(u8 *arg0, void *arg1);
s32 count_leading_active__17TWindowSubComCardFPvi(s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(u32);
s32 set_selected_index__17TWindowSubComCardFs(void *, s32);
void TWindowMenu__ct(void *, s32, s32, void *);
void *init__21TWindowSubComCardListFiii(void *, s32, s8, s32);
s32 TWindowSubComCardList__sub_80275360(void *);
extern s32 __vt__21TWindowSubComCardList[];
extern s32 TWindowSubComCardList__class_name;
extern s32 local_client_id;
extern const f32 lbl_805DD540;
extern const f32 lbl_805DD544;
extern const f32 lbl_805DD548;
u8 *TWindowSubComCardList__sub_802757AC(u8 *arg0, void *arg1, s32 arg2, s32 arg3, s8 arg4);
void *__nw__7TObjectFUl(u32);
s32 TWindow__close(void *);
s32 set_field_1c__6TLobbyFf(void *);
s32 TWindowSubEquip__sub_80263AF8(void *, s32);
void update_customize_help_text__13TUnk_804D1160FPv(Win_802758C8 *self, Ev_802758C8 *ev);
s32 fn_80275D90(void *);
s32 TWindowSubCustomEquip__sub_80275DA8(s32);
Ev_802758C8 *calc_equip_index__21TWindowSubCustomEquipFv(void *);
void *TWindowSubCustomSelect__ct(void *, s32);
}

extern "C" {

void render__13TUnk_804D1160Fv(void);
void *__dt__21TWindowSubComCardListFv(void *arg0, s16 arg1);
void render__21TWindowSubComCardListFv(u8 *arg0);
s32 handle_list_page_flip_input(s32);
s32 TWindowSubComCardList__sub_80275360(void *);
s32 draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
s32 draw_visible_window_entries(void *, void *, s32);
s32 draw_list_page_indicator(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__11TWindowMenuFv(void *, int);
void delete_if_allocated(void *, int);
s32 draw_card_list_selection(void *, s32);
s32 forward_render__20TWindowSubStatusDispFv(s32, s32);
s32 is_visible__11TWindowMenuFv(void *);
s32 run_task__11TWindowMenuFv();
s32 set_selected_index__17TWindowSubComCardFs(void *, s32);

void render__21TWindowSubComCardListFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    ((TWindowSubComCard *)arg0)->render_selected_entry(temp_r3);
    draw_card_list_selection(arg0, temp_r3);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x88) != 0U) {
        forward_render__20TWindowSubStatusDispFv(*(s32 *)((s8 *)arg0 + 0x88), temp_r3);
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x8C) != 0U) {
        draw_list_page_indicator(*(s32 *)((s8 *)arg0 + 0x8C), temp_r3);
    }
}

void TWindowSubComCardList::run_task() {
    run_task__11TWindowMenuFv();
    if ((is_visible__11TWindowMenuFv(this) == 0) && (handle_list_page_flip_input(*(s32 *)&this->m_8c) != 0)) {
        set_selected_index__17TWindowSubComCardFs(this, 0);
        TWindowSubComCardList__sub_80275360(this);
    }
}

extern s32 __vt__21TWindowSubComCardList[];

void *__dt__21TWindowSubComCardListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TWindowSubComCardList;
        delete_if_allocated(*(void **)((s8 *)arg0 + 0x8C), 1);
        __dt__11TWindowMenuFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TWindowSubComCardList__ct(u8 *arg0, void *arg1) {
    void *list;
    s32 n;
    TWindowMenu__ct(arg0, 7, 4, arg1);
    *(s32 **)(arg0 + 0x18) = __vt__21TWindowSubComCardList;
    *(s32 *)(arg0 + 0) = TWindowSubComCardList__class_name;
    n = TWindowSubStatusDisp::round_away_from_zero((f32)count_active_cards__17TWindowSubComCardFv() / lbl_805DD540);
    if (n <= 0) {
        n = 1;
    }
    list = alloc__23TAdSinglePlyChrSelectGCFv(0xC);
    if (list != NULL) {
        list = init__21TWindowSubComCardListFiii(list, 0, n, local_client_id);
    }
    *(void **)(arg0 + 0x8C) = list;
    *(s32 *)(arg0 + 0x90) = 0;
    *(s32 *)(arg0 + 0x94) = get_card_entry__17TWindowSubComCardFi(0);
    *(s32 *)(arg0 + 0x98) = 0xD2;
    *(s8 *)(arg0 + 0x9C) = 0;
    ((TWindowSubComCardList *)arg0)->set_flag70_bit100();
    set_selected_index__17TWindowSubComCardFs(arg0, 0);
    TWindowSubComCardList__sub_80275360(arg0);
    ((TWindowSubComCardList *)arg0)->set_flag70_bit10();
    ((TWindowSubComCard *)arg0)->set_scroll_target(lbl_805DD544, lbl_805DD548);
    return arg0;
}

u8 *TWindowSubComCardList__sub_802757AC(u8 *arg0, void *arg1, s32 arg2, s32 arg3, s8 arg4) {
    void *list;
    s32 n;
    TWindowMenu__ct(arg0, 7, 4, arg1);
    *(s32 **)(arg0 + 0x18) = __vt__21TWindowSubComCardList;
    *(s32 *)(arg0 + 0) = TWindowSubComCardList__class_name;
    n = TWindowSubStatusDisp::round_away_from_zero((f32)count_leading_active__17TWindowSubComCardFPvi(arg2, arg3) / lbl_805DD540);
    if (n <= 0) {
        n = 1;
    }
    list = alloc__23TAdSinglePlyChrSelectGCFv(0xC);
    if (list != NULL) {
        list = init__21TWindowSubComCardListFiii(list, 0, n, local_client_id);
    }
    *(void **)(arg0 + 0x8C) = list;
    *(s32 *)(arg0 + 0x90) = arg2;
    *(s32 *)(arg0 + 0x94) = 0;
    *(s32 *)(arg0 + 0x98) = arg3;
    *(s8 *)(arg0 + 0x9C) = arg4;
    ((TWindowSubComCardList *)arg0)->set_flag70_bit100();
    set_selected_index__17TWindowSubComCardFs(arg0, 0);
    TWindowSubComCardList__sub_80275360(arg0);
    ((TWindowSubComCardList *)arg0)->set_flag70_bit10();
    ((TWindowSubComCard *)arg0)->set_scroll_target(lbl_805DD544, lbl_805DD548);
    return arg0;
}

void TUnk_804D1160::update_customize_help_text(void *ev_arg) {
    Win_802758C8 *self = (Win_802758C8 *)this;
    Ev_802758C8 *ev = (Ev_802758C8 *)ev_arg;
    u8 *pl;
    s32 lvl;
    toggle_help_window_on_button(self->lobby, self->player);
    if (ev == NULL) {
        return;
    }
    pl = get_player_by_client_id(self->player);
    if (pl == NULL) {
        return;
    }
    if (self->id == ev->id && self->kind == ev->kind) {
        return;
    }
    self->kind = ev->kind;
    self->id = ev->id;
    text_builder_reset();
    switch (ev->kind) {
    case 0:
        break;
    case 2:
        if (ev->id == 2 && (get_item_field_6__10TObjPlayerFPv(pl) == 0 || weapon_has_extra_attack() != 1)) {
            break;
        }
        get_help_text_string(ev->id + 0x13);
        text_builder_append();
        break;
    case 3:
        if (validate_and_clear_slot__10TObjPlayerFv(pl + 0x428, ev->id) != 0) {
            break;
        }
        get_technique_name(ev->id);
        text_builder_append();
        if (ev->id != 0x11 && ev->id != 0xE) {
            lvl = get_cast_technique_level(pl + 0x428, ev->id);
            if (current_language != 0) {
                append_text_space();
            }
            get_help_text_string(0x2D);
            text_builder_append();
            TWindowSubStatusDisp__sub_80228F5C(lvl + 1);
        }
        get_help_text_string(0x2E);
        text_builder_append();
        TWindowSubStatusDisp__sub_80228F5C(*(s16 *)(calc_technique_parameters(ev->id, lvl, 0xFFFF) + 0x10));
        get_help_text_string(ev->id);
        text_builder_append();
        break;
    case 4:
        if (get_palette_consumable_count(ev->id, self->player) == -1) {
            break;
        }
        get_help_text_string(ev->id + 0x16);
        text_builder_append();
        break;
    case 7:
        break;
    }
    ((TLobby *)(self->lobby))->send_and_handle(get_shared_text_buffer(), 0x82);
}

void TUnk_804D1160::render() {  }
void TUnk_804D1160::run_task() {
    Self_80275A8C *self = (Self_80275A8C *)this;
    Ev_802758C8 ev;
    void *p;
    switch (self->state) {
    case 0:
    case 1:
        if (self->f2c != NULL) {
            TWindow__close(self->f2c);
            self->f2c = NULL;
        }
        ((TWindowSubCustomEquip *)(self->f28))->clear_flag_and_set_entry_state();
        self->state = 2;
    case 2:
        ((TWindowSubCustomEquip *)(self->f28))->get_cursor_pos(&ev);
        update_customize_help_text__13TUnk_804D1160FPv((Win_802758C8 *)self, &ev);
        if (TWindowSubCustomEquip__sub_80275DA8(self->f28) != 0) {
            self->f24->v7();
            self->state = 5;
        } else if (((TWindowSubCustomEquip *)(self->f28))->is_selected() != 0) {
            self->state = 3;
        }
        break;
    case 3:
        p = __nw__7TObjectFUl(0x84);
        if (p != NULL) {
            p = TWindowSubCustomSelect__ct(p, self->f20);
        }
        self->f2c = p;
        TWindowSubEquip__sub_80263AF8(self->f24, 1);
        set_field_1c__6TLobbyFf(self->f2c);
        self->state = 4;
    case 4:
        update_customize_help_text__13TUnk_804D1160FPv((Win_802758C8 *)self, calc_equip_index__21TWindowSubCustomEquipFv(self->f2c));
        if (fn_80275D90(self->f2c) != 0) {
            self->state = 1;
        }
        if (((TWindowSubCustomSelect *)(self->f2c))->is_active() != 0) {
            Ev_802758C8 *e = calc_equip_index__21TWindowSubCustomEquipFv(self->f2c);
            ((TWindowSubCustomEquip *)(self->f28))->toggle_action_binding(e);
            self->state = 1;
        }
        break;
    case 5:
        break;
    }
}

}
