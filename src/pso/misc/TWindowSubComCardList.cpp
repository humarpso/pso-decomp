#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

typedef s32 M2C_UNK;

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
s32 validate_and_clear_slot__10TObjPlayerFPv(void *, s16);
void append_text_space();
void TWindowSubStatusDisp__sub_80228F5C(s32);
void text_builder_append();
void text_builder_reset();
u8 *calc_technique_parameters(u16, u8, s32);
s32 get_palette_consumable_count(u16, s32);
void get_help_text_string(s32);
void toggle_help_window_on_button(s32, s32);
void send_and_handle__6TLobbyFPvii(s32, s32, s32);
extern s32 lbl_805D5544;
void update_customize_help_text(Win_802758C8 *self, Ev_802758C8 *ev);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
s32 TWindowSubComCard__sub_8007AFB8(void);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(void *);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(void *, M2C_UNK);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(void *, f32, f32);
void TWindowMenu__ct(void *, s32, s32, void *);
M2C_UNK set_flag70_bit100__17TWindowOptionCtrlFPv(void *);
void *init__21TWindowSubComCardListFPviii(void *, s32, s8, s32);
M2C_UNK TWindowSubComCardList__sub_80275360(void *);
f32 TWindowSubStatusDisp__sub_803D647C(f32);
extern M2C_UNK __vt__21TWindowSubComCardList[];
extern s32 lbl_805D3A18;
extern s32 lbl_805D53A0;
extern const f32 lbl_805DD540;
extern const f32 lbl_805DD544;
extern const f32 lbl_805DD548;
u8 *TWindowSubComCardList__ct(u8 *arg0, void *arg1);
s32 TWindowSubComCard__sub_8007AF60(s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(void *);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(void *, M2C_UNK);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(void *, f32, f32);
void TWindowMenu__ct(void *, s32, s32, void *);
M2C_UNK set_flag70_bit100__17TWindowOptionCtrlFPv(void *);
void *init__21TWindowSubComCardListFPviii(void *, s32, s8, s32);
M2C_UNK TWindowSubComCardList__sub_80275360(void *);
f32 TWindowSubStatusDisp__sub_803D647C(f32);
extern M2C_UNK __vt__21TWindowSubComCardList[];
extern s32 lbl_805D3A18;
extern s32 lbl_805D53A0;
extern const f32 lbl_805DD540;
extern const f32 lbl_805DD544;
extern const f32 lbl_805DD548;
u8 *TWindowSubComCardList__sub_802757AC(u8 *arg0, void *arg1, s32 arg2, s32 arg3, s8 arg4);
void *__nw__7TObjectFUl(u32);
M2C_UNK TWindow__close(void *);
M2C_UNK set_field_1c__6TLobbyFPvf(void *);
M2C_UNK TWindowSubEquip__sub_80263AF8(void *, M2C_UNK);
void update_customize_help_text(Win_802758C8 *self, Ev_802758C8 *ev);
s32 is_active__22TWindowSubCustomSelectFPv(void *);
s32 fn_80275D90(void *);
s32 is_selected__21TWindowSubCustomEquipFPv(s32);
s32 TWindowSubCustomEquip__sub_80275DA8(s32);
M2C_UNK TWindowSubCustomEquip__sub_80275DB4(s32);
M2C_UNK get_cursor_pos__21TWindowSubCustomEquipFPvPv(s32, Ev_802758C8 *);
M2C_UNK toggle_action_binding__21TWindowSubCustomEquipFPvPv(s32, Ev_802758C8 *);
Ev_802758C8 *calc_equip_index__21TWindowSubCustomEquipFPv(void *);
void *TWindowSubCustomSelect__ct(void *, s32);
void update_customize_state__21TWindowSubCustomEquipFPv(Self_80275A8C *self);
}

extern "C" {

void TWindowSubCustomEquip__sub_80275A88(void);
void *__dt__21TWindowSubComCardListFv(void *arg0, s16 arg1);
void render__21TWindowSubComCardListFv(u8 *arg0);
void run_task__21TWindowSubComCardListFv(void *arg0);
s32 handle_list_page_flip_input(s32);
M2C_UNK TWindowSubComCardList__sub_80275360(void *);
M2C_UNK draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
M2C_UNK draw_visible_window_entries(void *, void *, s32);
M2C_UNK draw_list_page_indicator(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__11TWindowMenuFv(void *, int);
void delete_if_allocated(void *, int);
M2C_UNK fn_802752D8(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK render_selected_entry__17TWindowSubComCardFPvi(void *, s32);
M2C_UNK run_task__11TWindowMenuFv();
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(void *, M2C_UNK);

void render__21TWindowSubComCardListFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    render_selected_entry__17TWindowSubComCardFPvi(arg0, temp_r3);
    fn_802752D8(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, s32 *, 0x88), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        draw_list_page_indicator(M2C_FIELD(arg0, s32 *, 0x8C), temp_r3);
    }
}

void run_task__21TWindowSubComCardListFv(void *arg0) {
    run_task__11TWindowMenuFv();
    if ((is_visible__17TWindowSubComCardFPv(arg0) == 0) && (handle_list_page_flip_input(M2C_FIELD(arg0, s32 *, 0x8C)) != 0)) {
        set_selected_index__17TWindowSubComCardFPvs(arg0, 0);
        TWindowSubComCardList__sub_80275360(arg0);
    }
}

extern M2C_UNK __vt__21TWindowSubComCardList[];

void *__dt__21TWindowSubComCardListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TWindowSubComCardList;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x8C), 1);
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
    *(M2C_UNK **)(arg0 + 0x18) = __vt__21TWindowSubComCardList;
    *(s32 *)(arg0 + 0) = lbl_805D3A18;
    n = TWindowSubStatusDisp__sub_803D647C((f32)TWindowSubComCard__sub_8007AFB8() / lbl_805DD540);
    if (n <= 0) {
        n = 1;
    }
    list = alloc__23TAdSinglePlyChrSelectGCFPv(0xC);
    if (list != NULL) {
        list = init__21TWindowSubComCardListFPviii(list, 0, n, lbl_805D53A0);
    }
    *(void **)(arg0 + 0x8C) = list;
    *(s32 *)(arg0 + 0x90) = 0;
    *(s32 *)(arg0 + 0x94) = TWindowSubComCard__sub_8007A8F8(0);
    *(s32 *)(arg0 + 0x98) = 0xD2;
    *(s8 *)(arg0 + 0x9C) = 0;
    set_flag70_bit100__17TWindowOptionCtrlFPv(arg0);
    set_selected_index__17TWindowSubComCardFPvs(arg0, 0);
    TWindowSubComCardList__sub_80275360(arg0);
    set_flag70_bit10__16TObjCityMainWarpFPv(arg0);
    set_scroll_target__17TWindowSubComCardFPvff(arg0, lbl_805DD544, lbl_805DD548);
    return arg0;
}

u8 *TWindowSubComCardList__sub_802757AC(u8 *arg0, void *arg1, s32 arg2, s32 arg3, s8 arg4) {
    void *list;
    s32 n;
    TWindowMenu__ct(arg0, 7, 4, arg1);
    *(M2C_UNK **)(arg0 + 0x18) = __vt__21TWindowSubComCardList;
    *(s32 *)(arg0 + 0) = lbl_805D3A18;
    n = TWindowSubStatusDisp__sub_803D647C((f32)TWindowSubComCard__sub_8007AF60(arg2, arg3) / lbl_805DD540);
    if (n <= 0) {
        n = 1;
    }
    list = alloc__23TAdSinglePlyChrSelectGCFPv(0xC);
    if (list != NULL) {
        list = init__21TWindowSubComCardListFPviii(list, 0, n, lbl_805D53A0);
    }
    *(void **)(arg0 + 0x8C) = list;
    *(s32 *)(arg0 + 0x90) = arg2;
    *(s32 *)(arg0 + 0x94) = 0;
    *(s32 *)(arg0 + 0x98) = arg3;
    *(s8 *)(arg0 + 0x9C) = arg4;
    set_flag70_bit100__17TWindowOptionCtrlFPv(arg0);
    set_selected_index__17TWindowSubComCardFPvs(arg0, 0);
    TWindowSubComCardList__sub_80275360(arg0);
    set_flag70_bit10__16TObjCityMainWarpFPv(arg0);
    set_scroll_target__17TWindowSubComCardFPvff(arg0, lbl_805DD544, lbl_805DD548);
    return arg0;
}

void update_customize_help_text(Win_802758C8 *self, Ev_802758C8 *ev) {
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
        if (validate_and_clear_slot__10TObjPlayerFPv(pl + 0x428, ev->id) != 0) {
            break;
        }
        get_technique_name(ev->id);
        text_builder_append();
        if (ev->id != 0x11 && ev->id != 0xE) {
            lvl = get_cast_technique_level(pl + 0x428, ev->id);
            if (lbl_805D5544 != 0) {
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
    send_and_handle__6TLobbyFPvii(self->lobby, get_shared_text_buffer(), 0x82);
}

void TWindowSubCustomEquip__sub_80275A88(void) {  }
void update_customize_state__21TWindowSubCustomEquipFPv(Self_80275A8C *self) {
    Ev_802758C8 ev;
    void *p;
    switch (self->state) {
    case 0:
    case 1:
        if (self->f2c != NULL) {
            TWindow__close(self->f2c);
            self->f2c = NULL;
        }
        TWindowSubCustomEquip__sub_80275DB4(self->f28);
        self->state = 2;
    case 2:
        get_cursor_pos__21TWindowSubCustomEquipFPvPv(self->f28, &ev);
        update_customize_help_text((Win_802758C8 *)self, &ev);
        if (TWindowSubCustomEquip__sub_80275DA8(self->f28) != 0) {
            self->f24->v7();
            self->state = 5;
        } else if (is_selected__21TWindowSubCustomEquipFPv(self->f28) != 0) {
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
        set_field_1c__6TLobbyFPvf(self->f2c);
        self->state = 4;
    case 4:
        update_customize_help_text((Win_802758C8 *)self, calc_equip_index__21TWindowSubCustomEquipFPv(self->f2c));
        if (fn_80275D90(self->f2c) != 0) {
            self->state = 1;
        }
        if (is_active__22TWindowSubCustomSelectFPv(self->f2c) != 0) {
            Ev_802758C8 *e = calc_equip_index__21TWindowSubCustomEquipFPv(self->f2c);
            toggle_action_binding__21TWindowSubCustomEquipFPvPv(self->f28, e);
            self->state = 1;
        }
        break;
    case 5:
        break;
    }
}

}
