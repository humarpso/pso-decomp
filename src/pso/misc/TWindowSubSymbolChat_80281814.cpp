#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_80281EA8 { u8 pad[0x24]; s32 f24; };

typedef s32 M2C_UNK;
struct Ent_80281B18 { s8 c; u8 pad[3]; };

struct Data_80281B18 { u8 pad0[4]; u16 w[4]; Ent_80281B18 e[1]; };

struct Quad_80281840 { f32 x, y, x2, y2, u0, v0, u1, v1; };

struct Sub_80281840 { u8 pad[0x5C]; s32 count; };

struct Win_80281840 { u8 pad[0x24]; s32 ctrl; u8 pad2[0x34 - 0x28]; Sub_80281840 *sub; };

extern "C" {
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, int);
s32 TWindow__close(int);
M2C_UNK TWindowSubSymbolChat__sub_802484C0(s32);
s32 set_selection__20TWindowSubSymbolChatFPvUi(void *, int);
s32 get_window_layout_position(M2C_UNK);
s32 is_card_confirmed__20TWindowSubSymbolChatFPv(void *arg0);
u8 *TWindowSubSymbolChat__sub_802826E4(void *, s32);
s32 TWindowSubSymbolChat__sub_8028379C();
void TWindowSubSymbolChat__sub_802819BC(u8 *arg0);
s32 add__20TWindowSubSymbolChatFPviiiii(int, int, int, int, int, int);
s32 get_cursor_pos__20TWindowSubSymbolChatFPv(int);
s32 get_cursor_x__20TWindowSubSymbolChatFPv(int);
extern M2C_UNK TWindowSubSymbolChat__data_805D6498;
extern M2C_UNK TWindowSubSymbolChat__data_805D649C;
extern s32 TWindowSubSymbolChat__data_805D64A0;
void TWindowSubSymbolChat__sub_80281CC4(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_window_layout_position(M2C_UNK);
s32 notify_warp_flag70__19TWindowSubShortMailFPv(int);
s32 TWindowSubShortMail__sub_802A58AC(int, int, int, int, f32);
s32 TWindowMessageYesNo__sub_802A59D8(void *, s32, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DD738;
s32 TWindowSubSymbolChat__sub_80281EA8(Win_80281EA8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
s32 get_window_layout_position(M2C_UNK);
void open_menu__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
s32 TWindowSubSymbolChat__sub_8028233C(s32 arg0);
M2C_UNK TWindowSubSymbolChat__sub_800771B0(s32, s32);
s32 TWindowSubSymbolChat__sub_800771C4(s32, s32);
M2C_UNK TWindowSubSymbolChat__sub_800771E4(s32, s32, s32, s32, s32, s32, s32);
s32 add__20TWindowSubSymbolChatFPviiiii(int, int, int, int, int, int);
M2C_UNK TWindowSubSymbolChat__sub_8007728C(s32, s32, s32, s32, s32, s32);
Data_80281B18 *get_data_ptr__20TWindowSubSymbolChatFPv();
s32 get_instance__20TWindowSubSymbolChatFv();
s32 calc_remaining_slots__20TWindowSubSymbolChatFv();
s32 get_cursor_pos__20TWindowSubSymbolChatFPv(int);
s32 get_cursor_x__20TWindowSubSymbolChatFPv(int);
extern s8 TWindowSubSymbolChat__data_805D6494;
extern M2C_UNK TWindowSubSymbolChat__data_805D6498;
extern M2C_UNK TWindowSubSymbolChat__data_805D649C;
extern s32 TWindowSubSymbolChat__data_805D64A0;
void TWindowSubSymbolChat__sub_80281B18(u8 *arg0);
M2C_UNK TWindowSubSymbolChat__sub_8007728C(s32, s32, s32, s32, s32, s32);
s32 get_cursor_pos__20TWindowSubSymbolChatFPv(int);
s32 get_cursor_x__20TWindowSubSymbolChatFPv(int);
extern s8 TWindowSubSymbolChat__data_805D6494;
extern M2C_UNK TWindowSubSymbolChat__data_805D6498;
extern M2C_UNK TWindowSubSymbolChat__data_805D649C;
void TWindowSubSymbolChat__sub_80281C60(void *arg0);
f32 get_scale__15TWindowCtrlMainFv(s32);
void set_global_param__8TObjFishFi(s32);
void TWindowSubStatusDisp__sub_803DEE6C(s32);
void get_player__20TWindowSubStatusDispFv(void);
void draw_textured_quad_at_depth(void *, f32);
void TWindowSubStatusDisp__sub_803DF160(s32, u32);
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
}

extern "C" {

void close_child__20TWindowSubSymbolChatFv(void);
s32 create_confirm_window__20TWindowSubSymbolChatFPv(void *arg0);
s32 create_keyboard_control__20TWindowSubSymbolChatFPv(void *arg0);
s32 create_menu__20TWindowSubSymbolChatFPv(void *arg0);
s32 create_menu__20TWindowSubSymbolChatFv(void);
s32 create_parts__20TWindowSubSymbolChatFv(void);
s32 create_parts_set__20TWindowSubSymbolChatFPv(void *arg0);
s32 is_card_confirmed__20TWindowSubSymbolChatFPv(void *arg0);
void open_menu__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
void update_state__20TWindowSubSymbolChatFPv(void *arg0);
s32 TKeyBoardControl__ct(s32, void *, M2C_UNK, M2C_UNK, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_802655E4(s32);
s32 TWindowSubComCard__sub_80265660(s32, s32);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
s32 get_window_layout_position(M2C_UNK);
s32 TWindowSubSymbolChatPartsSet__ct(s32, s32, s16, M2C_UNK *, M2C_UNK *);
s32 TWindowSubSymbolChatParts__ct(s32, s32, M2C_UNK *, M2C_UNK *);
s32 TWindowSubSymbolChat__sub_80076FE0(s32);
M2C_UNK TWindowSubSymbolChat__sub_802484C0(s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK add_menu_item__17TWindowOptionCtrlFiii(s32, s32, M2C_UNK);
s32 compute_total_height__20TWindowSubSymbolChatFv();
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
M2C_UNK fn_80284CB8(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_cursor_pos__20TWindowShortListCtrlFPv(s32);
M2C_UNK get_keyboard_field_6c__15TWindowMakeTeamFPv(s32, s32);
s32 get_keyboard_ptr__20TWindowSubSymbolChatFPv(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 is_initialized__20TWindowSubSymbolChatFPv(s32);
s32 refresh_parts__20TWindowSubSymbolChatFPv();
s32 refresh_with_default_list__20TWindowSubStatusDispFii(M2C_UNK, M2C_UNK *);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
M2C_UNK set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK set_selected_index__20TWindowSubStatusDispFPvs(s32, M2C_UNK);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
M2C_UNK update_chat_window(s32);

extern void *lbl_805D6490;

void close_child__20TWindowSubSymbolChatFv(void) {
    void *temp_r3;
    temp_r3 = lbl_805D6490;
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
        TWindowSubStatusDisp__sub_803DEE6C(1);
        set_global_param__8TObjFishFi(lbl_805D63F0);
        TWindowSubStatusDisp__sub_803DF160(0, color);
        q.x = lbl_805DD718;
        q.y = lbl_805DD71C;
        q.x2 = lbl_805DD720 + q.x;
        q.y2 = lbl_805DD724 + q.y;
        q.u0 = lbl_805DD728;
        q.v0 = lbl_805DD72C;
        q.u1 = lbl_805DD730;
        q.v1 = lbl_805DD734;
        draw_textured_quad_at_depth(&q, scale);
        get_player__20TWindowSubStatusDispFv();
    }
}

s32 is_card_confirmed__20TWindowSubSymbolChatFPv(void *arg0) {
    if (TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x38)) != 0x20) {
        return 0;
    }
    s32 temp;
    s32 ret;

    temp = get_cursor_pos__20TWindowShortListCtrlFPv(M2C_FIELD(arg0, s32 *, 0x38));
    ret = TWindowSubComCard__sub_80265660(M2C_FIELD(arg0, s32 *, 0x38), temp);
    return ret ? 1 : 0;
}

void TWindowSubSymbolChat__sub_802819BC(u8 *arg0) {
    u8 *temp_r3;
    if (is_card_confirmed__20TWindowSubSymbolChatFPv((void *) (arg0)) == 0) {
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        if (temp_r3 != NULL) {
            TWindow__close((int) (temp_r3));
            M2C_FIELD(arg0, u8 **, 0x34) = NULL;
            copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (M2C_FIELD(arg0, u8 **, 0x30) + 0x30), (int) (get_window_layout_position((M2C_UNK)((int) (0x7B)))));
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x30), s32 *, 0x50) = 6;
        }
    } else {
        if ((void *) M2C_FIELD(arg0, u8 **, 0x34) == NULL) {
            M2C_FIELD(arg0, u8 **, 0x34) = TWindowSubSymbolChat__sub_802826E4(arg0, 0);
            set_selection__20TWindowSubSymbolChatFPvUi((void *) (M2C_FIELD(arg0, u8 **, 0x34)), (int) (TWindowSubSymbolChat__sub_8028379C()));
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), s32 *, 0x64) = 1;
            copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (M2C_FIELD(arg0, u8 **, 0x30) + 0x30), (int) (get_window_layout_position((M2C_UNK)((int) (0x7C)))));
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x30), s32 *, 0x50) = 6;
        }
        TWindowSubSymbolChat__sub_802484C0((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x34))));
    }
}

void update_state__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x38));
    switch (temp_r3) {
    case 22:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0x18;
        return;
    case 26:
        fn_80284CB8(M2C_FIELD(arg0, s32 *, 0x4C));
        TWindowSubSymbolChat__sub_802484C0(M2C_FIELD(arg0, s32 *, 0x30));
        if (compute_total_height__20TWindowSubSymbolChatFv() <= 0) {
            M2C_FIELD(arg0, s8 *, 0x1C) = 4;
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x1C) = 0x14;
        return;
    }
}

extern s32 lbl_805D53A0;

void TWindowSubSymbolChat__sub_80281B18(u8 *arg0) {
    Data_80281B18 *data;
    u8 v;
    s16 y;
    s16 x;
    s32 i;
    s32 n;
    s32 pos;
    s32 inst;
    s32 rem;
    x = get_cursor_x__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x50));
    y = get_cursor_pos__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x50));
    inst = get_instance__20TWindowSubSymbolChatFv();
    data = get_data_ptr__20TWindowSubSymbolChatFPv();
    rem = calc_remaining_slots__20TWindowSubSymbolChatFv();
    if (rem > M2C_FIELD(arg0, s16 *, 0x1E)) {
        TWindowSubSymbolChat__sub_800771E4(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s16 *, 0x1E), data->e[M2C_FIELD(arg0, s16 *, 0x1E)].c, x, y, TWindowSubSymbolChat__data_805D6498, TWindowSubSymbolChat__data_805D649C);
        if (TWindowSubSymbolChat__data_805D64A0 != 0) {
            add__20TWindowSubSymbolChatFPviiiii(M2C_FIELD(arg0, s32 *, 0x28), data->e[M2C_FIELD(arg0, s16 *, 0x1E)].c, 0x40 - x, y, (u8)(TWindowSubSymbolChat__data_805D6498 == 0), TWindowSubSymbolChat__data_805D649C);
        }
    } else {
        n = M2C_FIELD(arg0, s16 *, 0x1E) - rem;
        pos = x + y * 2;
        for (i = 0; i < 4; i++) {
            if (TWindowSubSymbolChat__sub_800771C4(inst, i) != 0 && n-- <= 0) {
                v = data->w[i];
                TWindowSubSymbolChat__sub_800771B0(M2C_FIELD(arg0, s32 *, 0x28), i);
                TWindowSubSymbolChat__sub_8007728C(M2C_FIELD(arg0, s32 *, 0x28), v, TWindowSubSymbolChat__data_805D6494, pos, TWindowSubSymbolChat__data_805D6498, TWindowSubSymbolChat__data_805D649C);
                return;
            }
        }
    }
}

void TWindowSubSymbolChat__sub_80281C60(void *arg0) {
    s16 x;
    s16 y;
    x = get_cursor_x__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x50));
    y = get_cursor_pos__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x50));
    TWindowSubSymbolChat__sub_8007728C(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s16 *, 0x1E), TWindowSubSymbolChat__data_805D6494, x + y * 2, TWindowSubSymbolChat__data_805D6498, TWindowSubSymbolChat__data_805D649C);
}

void TWindowSubSymbolChat__sub_80281CC4(u8 *arg0) {
  s16 temp_r31;
  s16 temp_r3;
  s32 new_var;
  temp_r31 = get_cursor_x__20TWindowSubSymbolChatFPv((int) (*((s32 *) (((s8 *) arg0) + 0x50))));
  temp_r3 = get_cursor_pos__20TWindowSubSymbolChatFPv((int) (*((s32 *) (((s8 *) arg0) + 0x50))));
  add__20TWindowSubSymbolChatFPviiiii((int) (*((s32 *) (((s8 *) arg0) + 0x28))), (int) ((s32) (*((s16 *) (((s8 *) arg0) + 0x1E)))), (int) ((s32) temp_r31), (int) ((s32) temp_r3), (int) (*(s32 *)&TWindowSubSymbolChat__data_805D6498), (int) (*(s32 *)&TWindowSubSymbolChat__data_805D649C));
  new_var = (s32) temp_r3;
  if (((s32) TWindowSubSymbolChat__data_805D64A0) != 0)
  {
    add__20TWindowSubSymbolChatFPviiiii((int) (*((s32 *) (((s8 *) arg0) + 0x28))), (int) ((s32) (*((s16 *) (((s8 *) arg0) + 0x1E)))), (int) (0x40 - temp_r31), (int) new_var, (int) ((s32) ((u8) ((*(s32 *)&TWindowSubSymbolChat__data_805D6498) == 0))), (int) (*(s32 *)&TWindowSubSymbolChat__data_805D649C));
  }
}

s32 create_keyboard_control__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, arg0, 0x90, 1, 4, lbl_805D53A0);
    }
    update_chat_window(var_r31);
    get_keyboard_field_6c__15TWindowMakeTeamFPv(var_r31, get_keyboard_ptr__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x28)));
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, get_window_layout_position((M2C_UNK)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

extern M2C_UNK lbl_804D2B48[];

s32 create_confirm_window__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFii(get_window_layout_position((M2C_UNK)(0x79)), lbl_804D2B48);
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAC));
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBF), 1);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xC0), 0);
    if (TWindowSubSymbolChat__sub_80076FE0(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 0);
    } else {
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 1);
    }
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

typedef s32 M2C_UNK;
s32 TWindowSubSymbolChat__sub_80281EA8(Win_80281EA8 *arg0) {
    s32 r = TWindowMessageYesNo__sub_802A59D8(arg0, arg0->f24, 0, 0);
    TWindowSubShortMail__sub_802A58AC(r, get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0x20)), get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0x44)), get_window_layout_position((M2C_UNK)(0x7A)), lbl_805DD738);
    notify_warp_flag70__19TWindowSubShortMailFPv(r);
    return r;
}

s32 create_menu__20TWindowSubSymbolChatFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position((M2C_UNK)(0x79)), 9, get_message_10__20TWindowSubStatusDispFPv(0xAB));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB6), 0x26, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB7), 0x26, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB8), 0x26, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB9), 0x26, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBA), 0x26, 4);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBB), 0x26, 5);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBC), 0x26, 6);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBD), 0x26, 7);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBE), 0x26, 8);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    set_scroll_target__17TWindowSubComCardFPvff(temp_r31, lbl_805DD73C, lbl_805DD740);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

s32 create_menu__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position((M2C_UNK)(0x79)), 3, get_message_10__20TWindowSubStatusDispFPv(0xAA));
    if (compute_total_height__20TWindowSubSymbolChatFv() <= 0) {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB0), 6, 0x16);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB1), 6, 0x1A);
    } else {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB0), 6, 0x16);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB1), 6, 0x1A);
    }
    if (is_initialized__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB2), 6, 0x1C);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB2), 6, 0x1C);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    set_scroll_target__17TWindowSubComCardFPvff(temp_r31, lbl_805DD73C, lbl_805DD740);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

extern M2C_UNK TWindowSubSymbolChat__data_805D6498;
extern M2C_UNK TWindowSubSymbolChat__data_805D649C;

s32 create_parts_set__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x98);
    if (var_r31 != 0) {
        var_r31 = TWindowSubSymbolChatPartsSet__ct(var_r31, get_window_layout_position((M2C_UNK)(0x7D)), M2C_FIELD(arg0, s16 *, 0x1E), &TWindowSubSymbolChat__data_805D6498, &TWindowSubSymbolChat__data_805D649C);
    }
    return var_r31;
}

extern M2C_UNK TWindowSubSymbolChat__data_805D6498;
extern M2C_UNK TWindowSubSymbolChat__data_805D649C;

s32 create_parts__20TWindowSubSymbolChatFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x90);
    if (var_r31 != 0) {
        var_r31 = TWindowSubSymbolChatParts__ct(var_r31, get_window_layout_position((M2C_UNK)(0x7D)), &TWindowSubSymbolChat__data_805D6498, &TWindowSubSymbolChat__data_805D649C);
    }
    return var_r31;
}

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD744;

void open_menu__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    TWindowSubComCard__sub_802655E4(arg1);
    temp_r3 = refresh_parts__20TWindowSubSymbolChatFPv();
    if (temp_r3 > 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(arg1, get_message_10__20TWindowSubStatusDispFPv(0xAE), 6, 0xC);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(arg1, get_message_10__20TWindowSubStatusDispFPv(0xAE), 6, 0xC);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(arg1, get_message_10__20TWindowSubStatusDispFPv(0xAF), 6, 0x10);
    set_flag70_bit10__16TObjCityMainWarpFPv(arg1);
    set_scroll_target__17TWindowSubComCardFPvff(arg1, lbl_805DD73C, lbl_805DD744);
    TWindowSubComCard__sub_80265C30(arg1);
}
s32 TWindowSubSymbolChat__sub_8028233C(s32 arg0) {
    s32 r = draw_card_icon__17TWindowSubComCardFiii((s32)(get_window_layout_position((M2C_UNK)(0x79))), (M2C_UNK)(6), (s32)(get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xA9))));
    open_menu__20TWindowSubSymbolChatFii(arg0, r);
    return r;
}

}
