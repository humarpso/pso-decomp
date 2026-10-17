#include "types.h"
#include "pso/misc/TWindowSubComCard_802A5748.h"
#include "pso/misc/TWindowSubStatusDisp_803DEE6C.h"
#include "pso/misc/TWindowSubSymbolChat_80076F88.h"
#include "pso/misc/TWindowSubSymbolChat_80281814.h"
#include "pso/misc/TWindowSubSymbolChat_8028239C.h"
#include "pso/misc/TUnk_804D0618.h"
#include "pso/misc/TWindowSubShortCutList.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowSubSymbolChat.h"
#include "pso/misc/TWindowMakeTeam.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/misc/TWindowShortListCtrl.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/object/TObjFish.h"

struct Win_80281EA8 { u8 pad[0x24]; s32 f24; };

struct Ent_80281B18 { s8 c; u8 pad[3]; };

struct Data_80281B18 { u8 pad0[4]; u16 w[4]; Ent_80281B18 e[1]; };

struct Quad_80281840 { f32 x, y, x2, y2, u0, v0, u1, v1; };

struct Sub_80281840 { u8 pad[0x5C]; s32 count; };

struct Win_80281840 { u8 pad[0x24]; s32 ctrl; u8 pad2[0x34 - 0x28]; Sub_80281840 *sub; };

extern "C" {
void TWindow__close(u8 *arg0);
s32 get_window_layout_position(s32);
u8 *create_chat_symbol_window__20TWindowSubSymbolChatFll(void *, s32);
s32 add__20TWindowSubSymbolChatFlllll(int, int, int, int, int, int);
s32 get_cursor_pos__20TWindowSubSymbolChatFv(int);
s32 get_cursor_x__20TWindowSubSymbolChatFv(int);
extern s32 TWindowSubSymbolChat__data_805D6498;
extern s32 TWindowSubSymbolChat__data_805D649C;
extern s32 TWindowSubSymbolChat__help_window;
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
extern const f32 lbl_805DD738;
s32 draw_card_icon__17TWindowSubComCardFll(s32, s32, s32);
s32 TWindowSubSymbolChat__sub_800771B0(s32, s32);
s32 TWindowSubSymbolChat__sub_800771C4(s32, s32);
s32 set_entry_bits__20TWindowSubSymbolChatFUsllll(s32, s32, s32, s32, s32, s32);
Data_80281B18 *get_data_ptr__20TWindowSubSymbolChatFv();
extern s8 TWindowSubSymbolChat__data_805D6494;
f32 get_scale__15TWindowCtrlMainFv(s32);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DD710;
extern const f32 lbl_805DD714;
extern const f32 lbl_805DD718;
extern const f32 lbl_805DD71C;
extern const f32 lbl_805DD720;
extern const f32 lbl_805DD724;
extern const f32 lbl_805DD728;
extern const f32 lbl_805DD72C;
extern const f32 lbl_805DD730;
extern const f32 lbl_805DD734;
void TWindowSubSymbolChat__sub_80281840(Win_80281840 *arg0);
s32 TKeyBoardControl__ct(s32, void *, s32, s32, s32, s32);
s32 TWindowSubComCard__sub_80265660(s32, s32);
s32 get_selected_menu_value(s32);
s32 align_menu_entry_positions(s32);
s32 TWindowSubSymbolChatPartsSet__ct(s32, s32, s16, s32 *, s32 *);
s32 TWindowSubSymbolChatParts__ct(s32, s32, s32 *, s32 *);
s32 __nw__7TObjectFUl(s32);
s32 select_symbol_chat_slot(s32);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void *p, int a1, int a2, int a3);
s32 get_cursor_pos__20TWindowShortListCtrlFv(s32);
s32 get_keyboard_field_6c__15TWindowMakeTeamFv(s32, s32);
s32 get_keyboard_ptr__20TWindowSubSymbolChatFv(s32);
s32 refresh_parts__20TWindowSubSymbolChatFv();
s32 refresh_with_default_list__20TWindowSubStatusDispFll(s32, s32 *);
}
void update_chat_window(void *p);

extern void *TWindowSubSymbolChat__instance;
extern "C" {

void TWindowSubSymbolChat::close_child() {
    void *temp_r3;
    temp_r3 = TWindowSubSymbolChat__instance;
    if (temp_r3 != NULL) {
        TWindowSubSymbolChat__sub_80281840((Win_80281840 *)(temp_r3));
    }
}

void TWindowSubSymbolChat__sub_80281840(Win_80281840 *arg0) {
    Quad_80281840 q;
    u32 color;
    f32 scale;
    Sub_80281840 *sub;
    sub = arg0->sub;
    if (sub != NULL) {
        if (sub->count < 6) {
            color = ((s32)(lbl_805DD710 * (f32)(sub->count * 0xFF)) << 24) | 0xFFFFFF;
        } else {
            color = 0xFFFFFFFF;
        }
        scale = lbl_805DD714 / get_scale__15TWindowCtrlMainFv(arg0->ctrl);
        begin_screen_draw(1);
        TObjFish::set_global_param(lbl_805D63F0);
        set_draw_texture_and_color(0, color);
        q.x = lbl_805DD718;
        q.y = lbl_805DD71C;
        q.x2 = lbl_805DD720 + q.x;
        q.y2 = lbl_805DD724 + q.y;
        q.u0 = lbl_805DD728;
        q.v0 = lbl_805DD72C;
        q.u1 = lbl_805DD730;
        q.v1 = lbl_805DD734;
        draw_textured_quad_at_depth((f32 *)&q, scale);
        TWindowSubStatusDisp::get_player();
    }
}

s32 TWindowSubSymbolChat::is_card_confirmed() {
    if (get_selected_menu_value(*(s32 *)&this->m_38) != 0x20) {
        return 0;
    }
    s32 temp;
    s32 ret;

    temp = get_cursor_pos__20TWindowShortListCtrlFv(*(s32 *)&this->m_38);
    ret = TWindowSubComCard__sub_80265660(*(s32 *)&this->m_38, temp);
    return ret ? 1 : 0;
}

void TWindowSubSymbolChat::update_sub_window() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    if (is_card_confirmed() == 0) {
        temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x34));
        if (temp_r3 != NULL) {
            TWindow__close((temp_r3));
            *(u8 **)((s8 *)arg0 + 0x34) = NULL;
            ((TWindowSubSymbolChatPartsSet *)(*(u8 **)((s8 *)arg0 + 0x30) + 0x30))->copy_vec2((void*)(get_window_layout_position(0x7B)));
            *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x30)) + 0x50) = 6;
        }
    } else {
        if ((void *) *(u8 **)((s8 *)arg0 + 0x34) == NULL) {
            *(u8 **)((s8 *)arg0 + 0x34) = create_chat_symbol_window__20TWindowSubSymbolChatFll(arg0, 0);
            ((TWindowSubSymbolChatPartsSet *)(*(u8 **)((s8 *)arg0 + 0x34)))->set_selection((int) (TWindowSubSymbolChat__sub_8028379C()));
            *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 0x64) = 1;
            ((TWindowSubSymbolChatPartsSet *)(*(u8 **)((s8 *)arg0 + 0x30) + 0x30))->copy_vec2((void*)(get_window_layout_position(0x7C)));
            *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x30)) + 0x50) = 6;
        }
        ((TWindowSubSymbolChatPartsSet *)(*(u8 **)((s8 *)arg0 + 0x34)))->update_visibility();
    }
}

void TWindowSubSymbolChat::update_state() {
    s32 selected_menu_value;

    selected_menu_value = get_selected_menu_value(*(s32 *)((s8 *)this + 0x38));
    switch (selected_menu_value) {
    case 22:
        *(s8 *)((s8 *)this + 0x1C) = 0x18;
        return;
    case 26:
        select_symbol_chat_slot(*(s32 *)((s8 *)this + 0x4C));
        ((TWindowSubSymbolChatPartsSet *)(*(s32 *)((s8 *)this + 0x30)))->update_visibility();
        if (TWindowSubSymbolChat::compute_total_height() <= 0) {
            *(s8 *)((s8 *)this + 0x1C) = 4;
            return;
        }
        *(s8 *)((s8 *)this + 0x1C) = 0x14;
        return;
    }
}

extern s32 local_client_id;

void TWindowSubSymbolChat::draw_selected_entry() {
    Data_80281B18 *data;
    u8 v;
    s16 y;
    s16 x;
    s32 i;
    s32 n;
    s32 pos;
    s32 inst;
    s32 rem;
    x = get_cursor_x__20TWindowSubSymbolChatFv(*(s32 *)&this->m_50);
    y = get_cursor_pos__20TWindowSubSymbolChatFv(*(s32 *)&this->m_50);
    inst = TWindowSubSymbolChat::get_instance();
    data = get_data_ptr__20TWindowSubSymbolChatFv();
    rem = TWindowSubSymbolChat::calc_remaining_slots();
    if (rem > this->m_1e) {
        ((TWindowSubSymbolChat *)(*(s32 *)&this->m_28))->set_entry(this->m_1e, data->e[this->m_1e].c, x, y, TWindowSubSymbolChat__data_805D6498, TWindowSubSymbolChat__data_805D649C);
        if (TWindowSubSymbolChat__help_window != 0) {
            add__20TWindowSubSymbolChatFlllll(*(s32 *)&this->m_28, data->e[this->m_1e].c, 0x40 - x, y, (u8)(TWindowSubSymbolChat__data_805D6498 == 0), TWindowSubSymbolChat__data_805D649C);
        }
    } else {
        n = this->m_1e - rem;
        pos = x + y * 2;
        for (i = 0; i < 4; i++) {
            if (TWindowSubSymbolChat__sub_800771C4(inst, i) != 0 && n-- <= 0) {
                v = data->w[i];
                TWindowSubSymbolChat__sub_800771B0(*(s32 *)&this->m_28, i);
                set_entry_bits__20TWindowSubSymbolChatFUsllll(*(s32 *)&this->m_28, v, TWindowSubSymbolChat__data_805D6494, pos, TWindowSubSymbolChat__data_805D6498, TWindowSubSymbolChat__data_805D649C);
                return;
            }
        }
    }
}

void TWindowSubSymbolChat::sub_80281C60() {
    s16 x;
    s16 y;
    x = get_cursor_x__20TWindowSubSymbolChatFv(*(s32 *)&this->m_50);
    y = get_cursor_pos__20TWindowSubSymbolChatFv(*(s32 *)&this->m_50);
    set_entry_bits__20TWindowSubSymbolChatFUsllll(*(s32 *)&this->m_28, this->m_1e, TWindowSubSymbolChat__data_805D6494, x + y * 2, TWindowSubSymbolChat__data_805D6498, TWindowSubSymbolChat__data_805D649C);
}

void TWindowSubSymbolChat::sub_80281CC4() {
  s16 temp_r31;
  s16 temp_r3;
  s32 new_var;
  temp_r31 = get_cursor_x__20TWindowSubSymbolChatFv((int) (*(s32 *)&this->m_50));
  temp_r3 = get_cursor_pos__20TWindowSubSymbolChatFv((int) (*(s32 *)&this->m_50));
  add__20TWindowSubSymbolChatFlllll((int) (*(s32 *)&this->m_28), (int) ((s32) (this->m_1e)), (int) ((s32) temp_r31), (int) ((s32) temp_r3), (int) (*(s32 *)&TWindowSubSymbolChat__data_805D6498), (int) (*(s32 *)&TWindowSubSymbolChat__data_805D649C));
  new_var = (s32) temp_r3;
  if (((s32) TWindowSubSymbolChat__help_window) != 0)
  {
    add__20TWindowSubSymbolChatFlllll((int) (*(s32 *)&this->m_28), (int) ((s32) (this->m_1e)), (int) (0x40 - temp_r31), (int) new_var, (int) ((s32) ((u8) ((*(s32 *)&TWindowSubSymbolChat__data_805D6498) == 0))), (int) (*(s32 *)&TWindowSubSymbolChat__data_805D649C));
  }
}

s32 TWindowSubSymbolChat::create_keyboard_control() {
    s32 keyboard;

    keyboard = __nw__7TObjectFUl(0x2C);
    if (keyboard != 0) {
        keyboard = TKeyBoardControl__ct(keyboard, this, 0x90, 1, 4, local_client_id);
    }
    update_chat_window((void *)keyboard);
    get_keyboard_field_6c__15TWindowMakeTeamFv(keyboard, get_keyboard_ptr__20TWindowSubSymbolChatFv(*(s32 *)&this->m_28));
    ((TWindowMakeTeam *)keyboard)->set_sub_position((u8 *)(get_window_layout_position(0xBB)));
    ((TWindowMakeTeam *)keyboard)->set_keyboard_flag62_bit2();
    ((TWindowSubComCard *)keyboard)->destroy_keyboard();
    return keyboard;
}

extern s32 lbl_804D2B48[];

s32 TWindowSubSymbolChat::create_confirm_window() {
    s32 temp_r31;

    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFll(get_window_layout_position(0x79), lbl_804D2B48);
    ((TUnk_804D0618 *)temp_r31)->ensure_status_display(get_message_10__20TWindowSubStatusDispFl(0xAC));
    TWindowOptionCtrl::add_menu_item(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xBF), 1);
    TWindowOptionCtrl::add_menu_item(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xC0), 0);
    if (TWindowSubSymbolChat__sub_80076FE0((void *)(*(s32 *)&this->m_28)) != 0) {
        ((TWindowSubStatusDisp *)temp_r31)->set_selected_index(0);
    } else {
        ((TWindowSubStatusDisp *)temp_r31)->set_selected_index(1);
    }
    ((TWindowSubShortCutList *)temp_r31)->set_flag70_bit10();
    return temp_r31;
}

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

s32 TWindowSubSymbolChat::open_confirm_prompt() {
    Win_80281EA8 *arg0 = (Win_80281EA8 *)this;
    s32 r = create__19TWindowMessageYesNoFPvPvPvPv(arg0, arg0->f24, 0, 0);
    open_yes_no_prompt((TChCrTagPlBack *)((u8 *)r), (u32)(get_message_10__20TWindowSubStatusDispFl(0x20)), (s32)(get_message_10__20TWindowSubStatusDispFl(0x44)), (s32)(get_window_layout_position(0x7A)), (f32)lbl_805DD738);
    ((TWindowSubShortMail *)r)->notify_warp_flag70();
    return r;
}

s32 TWindowSubSymbolChat::create_menu() {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFll(get_window_layout_position(0x79), 9, get_message_10__20TWindowSubStatusDispFl(0xAB));
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xB6)), 0x26, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xB7)), 0x26, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xB8)), 0x26, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xB9)), 0x26, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xBA)), 0x26, 4);
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xBB)), 0x26, 5);
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xBC)), 0x26, 6);
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xBD)), 0x26, 7);
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xBE)), 0x26, 8);
    ((TWindowSubComCardList *)temp_r31)->set_flag70_bit10();
    ((TWindowSubComCardList *)temp_r31)->set_scroll_target(lbl_805DD73C, lbl_805DD740);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

s32 create_menu__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFll(get_window_layout_position(0x79), 3, get_message_10__20TWindowSubStatusDispFl(0xAA));
    if (TWindowSubSymbolChat::compute_total_height() <= 0) {
        TWindowSubComCard::draw_text_gray(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xB0), 6, 0x16);
        TWindowSubComCard::draw_text_gray(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xB1), 6, 0x1A);
    } else {
        forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xB0)), 6, 0x16);
        forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xB1)), 6, 0x1A);
    }
    if (((TWindowSubSymbolChat *)(*(s32 *)&((TWindowSubSymbolChat *)arg0)->m_28))->is_initialized() != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii((void *)temp_r31, (int)(get_message_10__20TWindowSubStatusDispFl(0xB2)), 6, 0x1C);
    } else {
        TWindowSubComCard::draw_text_gray(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xB2), 6, 0x1C);
    }
    ((TWindowSubComCardList *)temp_r31)->set_flag70_bit10();
    ((TWindowSubComCardList *)temp_r31)->set_scroll_target(lbl_805DD73C, lbl_805DD740);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

s32 TWindowSubSymbolChat::create_parts_set() {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x98);
    if (var_r31 != 0) {
        var_r31 = TWindowSubSymbolChatPartsSet__ct(var_r31, get_window_layout_position(0x7D), this->m_1e, &TWindowSubSymbolChat__data_805D6498, &TWindowSubSymbolChat__data_805D649C);
    }
    return var_r31;
}

s32 TWindowSubSymbolChat::create_parts() {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x90);
    if (var_r31 != 0) {
        var_r31 = TWindowSubSymbolChatParts__ct(var_r31, get_window_layout_position(0x7D), &TWindowSubSymbolChat__data_805D6498, &TWindowSubSymbolChat__data_805D649C);
    }
    return var_r31;
}

extern const f32 lbl_805DD744;

void TWindowSubSymbolChat::open_menu(s32 arg0, s32 arg1) {
    ((TWindowSubComCardList *)arg1)->reset_entries();
    if (refresh_parts__20TWindowSubSymbolChatFv() > 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii((void *)arg1, (int)(get_message_10__20TWindowSubStatusDispFl(0xAE)), 6, 0xC);
    } else {
        TWindowSubComCard::draw_text_gray(arg1, get_message_10__20TWindowSubStatusDispFl(0xAE), 6, 0xC);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii((void *)arg1, (int)(get_message_10__20TWindowSubStatusDispFl(0xAF)), 6, 0x10);
    ((TWindowSubComCardList *)arg1)->set_flag70_bit10();
    ((TWindowSubComCardList *)arg1)->set_scroll_target(lbl_805DD73C, lbl_805DD744);
    align_menu_entry_positions(arg1);
}
s32 TWindowSubSymbolChat__sub_8028233C(s32 arg0) {
    s32 r = draw_card_icon__17TWindowSubComCardFll((s32)(get_window_layout_position(0x79)), 6, (s32)(get_message_10__20TWindowSubStatusDispFl(0xA9)));
    TWindowSubSymbolChat::open_menu(arg0, r);
    return r;
}
}
