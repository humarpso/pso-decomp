#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;

struct Ent_80272CB0 {
    u16 type;
    u16 id;
    u8 name[0x1C];
};

struct List_80272CB0 {
    u8 pad0;
    u8 count;
    u8 pad2[2];
    Ent_80272CB0 ents[1];
};

extern "C" {
void *get_message_10__20TWindowSubStatusDispFPv(int);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(int);
M2C_UNK TWindowSubComCard__sub_80265E60(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, void *, int, int);
s32 draw_card_icon__17TWindowSubComCardFiii(int, int, void *);
s32 get_window_layout_position(M2C_UNK);
extern const f32 lbl_805DD508;
s32 TWindowSubComCard__sub_80272814(void);
void *get_message_10__20TWindowSubStatusDispFPv(int);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, void *, int, int);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(int);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(int, f32);
s32 draw_card_icon__17TWindowSubComCardFiii(int, int, void *);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DD510;
s32 TWindowSubComCard__sub_80272994(void);
s32 get_window_layout_position(M2C_UNK);
s32 set_window_mode_4__6TLobbyFPvii(M2C_UNK, M2C_UNK *, M2C_UNK);
extern char lbl_8044F6C4[];
void TWindowSubComCard__sub_80272A64(void);
s32 get_window_layout_position(M2C_UNK);
s32 set_window_mode_4__6TLobbyFPvii(M2C_UNK, M2C_UNK *, M2C_UNK);
extern char lbl_8044F6AC[];
void TWindowSubComCard__sub_80272EBC(void);
void *get_message_10__20TWindowSubStatusDispFPv(int);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(int);
s32 draw_card_icon__17TWindowSubComCardFiii(int, int, void *);
s32 get_window_layout_position(M2C_UNK);
s32 TWindowSubComCard__sub_80273004(void);
void *get_message_10__20TWindowSubStatusDispFPv(int);
s32 open_hard_keyboard__6TLobbyFPv(void *);
u8 *get_card_window__17TWindowSubComCardFUi(u32);
s32 TWindowSubComCard__sub_802491C4(s32, void *, s32);
void TWindowSubComCard__sub_802685C4(void *, u32);
void update_next_entry__17TWindowSubComCardFPviii(s32, void *, void *, u32);
void create_sub_window__20TWindowChoiceSettingFPvi(s32, void *);
s32 get_window_layout_position(M2C_UNK);
void *TWindowSubComCard__sub_80272034(void *, void *, s32);
void get_message_10__17TWindowSubComCardFPvPv(void *p, void *a1);
void set_flag_10__17TWindowSubComCardFPv(s32);
extern u8 lbl_8044F6BC[];
s32 TWindowSubComCard__sub_80272CB0(u8 *arg0);
}

extern "C" {

s32 create__17TWindowSubComCardFv(void);
s32 create_keyboard__17TWindowSubComCardFi(s32 arg0);
s32 create_keyboard__17TWindowSubComCardFii(s32 arg0, s32 arg1);
void update_display_value__17TWindowSubComCardFUiUiPv(u32 arg0, u32 arg1, s32 *arg2);
void update_selection__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 TWindowSubComCard__sub_8007A860(s32);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
s32 TWindowSubComCard__sub_8007BC04(M2C_UNK);
s32 get_selected_menu_value(u32);
s32 get_window_layout_position(M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);
s32 get_kbd_ptr__14TWindowComCardFPv(s32);
M2C_UNK get_keyboard_field_6c__15TWindowMakeTeamFPv(s32, s32);
s32 get_keyboard_mode__17TWindowSubComCardFv();
M2C_UNK set_display_value__14TWindowComCardFiii(u32, s32, s32);
M2C_UNK set_field_1c__6TLobbyFPvf(f32);
M2C_UNK set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
s32 set_window_mode_4__6TLobbyFPvii(M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK update_selection__17TWindowSubComCardFUiUiPvi(s32, s32, s32, s32);

void update_selection__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 tmp = TWindowSubComCard__sub_8007BC04(0);
    update_selection__17TWindowSubComCardFUiUiPvi(arg0, arg1, arg2, tmp);
}

void update_display_value__17TWindowSubComCardFUiUiPv(u32 arg0, u32 arg1, s32 *arg2) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = TWindowSubComCard__sub_8007A8F8(0);
    if ((arg0 != 0U) && (arg1 != 0U)) {
        temp_r3 = get_selected_menu_value(arg0);
        if (temp_r3 != (s32) *arg2) {
            *arg2 = temp_r3;
            set_display_value__14TWindowComCardFiii(arg1, temp_r3, temp_r31);
        }
    }
}

extern s32 lbl_805D53A0;

s32 create_keyboard__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, arg0, 0xC6, 3, 4, lbl_805D53A0);
    }
    get_keyboard_field_6c__15TWindowMakeTeamFPv(var_r31, TWindowSubComCard__sub_8007A860(arg1));
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, get_window_layout_position((M2C_UNK)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

extern s32 lbl_805D53A0;

s32 create_keyboard__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = get_keyboard_mode__17TWindowSubComCardFv();
    temp_r31 = __nw__7TObjectFUl(0x2C);
    if (temp_r31 != 0) {
        temp_r31 = TKeyBoardControl__ct(temp_r31, arg0, 0xC6, 3, 4, lbl_805D53A0);
    }
    get_keyboard_field_6c__15TWindowMakeTeamFPv(temp_r31, get_kbd_ptr__14TWindowComCardFPv(var_r30));
    set_sub_position__15TWindowMakeTeamFPvPv(temp_r31, get_window_layout_position((M2C_UNK)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(temp_r31);
    destroy_keyboard__17TWindowSubComCardFPv(temp_r31);
    return temp_r31;
}

extern M2C_UNK lbl_8044F6CC[];
extern f32 lbl_805DD4FC;

s32 create__17TWindowSubComCardFv(void) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = get_window_layout_position((M2C_UNK)(0x98));
    temp_r31 = set_window_mode_4__6TLobbyFPvii(temp_r3, lbl_8044F6CC, 1);
    set_field_1c__6TLobbyFPvf(lbl_805DD4FC);
    return temp_r31;
}
s32 TWindowSubComCard__sub_80272814(void) {
    s32 temp_r31;
    void *temp_r31_2;
    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(((M2C_UNK)get_window_layout_position((M2C_UNK)((int) (0x93)))), (int) (3), get_message_10__20TWindowSubStatusDispFPv((int) (0x1D)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (get_message_10__20TWindowSubStatusDispFPv((int) (0xFD))), (int) (6), (int) (0x41));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (get_message_10__20TWindowSubStatusDispFPv((int) (0xFE))), (int) (6), (int) (0x45));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (get_message_10__20TWindowSubStatusDispFPv((int) (0xFF))), (int) (6), (int) (0x4A));
    set_flag70_bit10__16TObjCityMainWarpFPv((int) (temp_r31));
    TWindowSubComCard__sub_80265E60((int) (temp_r31), (f32) (lbl_805DD508));
    return temp_r31;
}
s32 TWindowSubComCard__sub_80272994(void) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, ((s32)get_message_10__20TWindowSubStatusDispFPv((int)((M2C_UNK)((int) 0x1D)))));
  temp_r31 = draw_card_icon__17TWindowSubComCardFiii((int)((s32)((int) get_window_layout_position((M2C_UNK)((int) 0x8f)))), (int)((M2C_UNK)((int) 2)), (void *)((s32)((int) temp_r31_2)));
  forward_trade_action_default__16TObjCityMainWarpFPviii((int)((s32)((int) temp_r31)), (void *)((s32)((int) ((s32)get_message_10__20TWindowSubStatusDispFPv((int)((M2C_UNK)((int) 0x57)))))), (int)((M2C_UNK)((int) 6)), (int)((M2C_UNK)((int) 0x21)));
  if (get_global_state__14TOKeyMachine01Fv() == 0xF)
  {
    forward_trade_action_default__16TObjCityMainWarpFPviii((int)((s32)((int) temp_r31)), (void *)((s32)((int) ((s32)get_message_10__20TWindowSubStatusDispFPv((int)((M2C_UNK)((int) 0x58)))))), (int)((M2C_UNK)((int) 6)), (int)((M2C_UNK)((int) 0x25)));
  }
  else
  {
    draw_text_gray__17TWindowSubComCardFiiii((s32)((int) temp_r31), (s32)((int) ((s32)get_message_10__20TWindowSubStatusDispFPv((int)((M2C_UNK)((int) 0x58))))), (M2C_UNK)((int) 6), (M2C_UNK)((int) 0x25));
  }
  set_flag70_bit10__16TObjCityMainWarpFPv((int)((s32)((int) temp_r31)));
  temp_r31_2 = temp_r31;
  TWindowSubComCard__sub_80265E60((int)((s32)((int) temp_r31_2)), (f32) lbl_805DD510);
  align_menu_entry_positions((s32)((int) temp_r31_2));
  return temp_r31_2;
}
void TWindowSubComCard__sub_80272A64(void) {
    set_window_mode_4__6TLobbyFPvii((M2C_UNK)(get_window_layout_position((M2C_UNK)(0x8f))), (M2C_UNK *)(lbl_8044F6C4), (M2C_UNK)(1));
}

typedef void *(*GetMsg_80272CB0)(void *, void *);
s32 TWindowSubComCard__sub_80272CB0(u8 *arg0) {
    s32 i;
    u8 *card;
    u16 id;
    s32 n;
    s32 idx;
    s32 hard;
    s32 w;
    Ent_80272CB0 *e;
    List_80272CB0 *l;
    card = get_card_window__17TWindowSubComCardFUi(0xFFFF);
    hard = open_hard_keyboard__6TLobbyFPv(*(void **)(arg0 + 0x20));
    w = TWindowSubComCard__sub_802491C4(get_window_layout_position(0x8C), lbl_8044F6BC, 6);
    create_sub_window__20TWindowChoiceSettingFPvi(w, get_message_10__20TWindowSubStatusDispFPv(0x6D));
    update_next_entry__17TWindowSubComCardFPviii(w, get_message_10__20TWindowSubStatusDispFPv(0x6D), ((GetMsg_80272CB0)get_message_10__17TWindowSubComCardFPvPv)(arg0, (void *)hard), 0);
    l = *(List_80272CB0 **)(arg0 + 0x58);
    idx = -1;
    n = l->count;
    e = l->ents;
    for (i = 0; i < n; i++, e++) {
        if (e->type == 0) {
            idx++;
            if (e->id >= 500) {
                update_next_entry__17TWindowSubComCardFPviii(w, e->name, TWindowSubComCard__sub_80272034(arg0, card + 0x22EC, idx), e->id);
                if (hard != 0) {
                    TWindowSubComCard__sub_802685C4((void *)w, e->id);
                }
            }
        }
    }
    set_flag_10__17TWindowSubComCardFPv(w);
    return w;
}

void TWindowSubComCard__sub_80272EBC(void) {
    set_window_mode_4__6TLobbyFPvii((M2C_UNK)(get_window_layout_position((M2C_UNK)(0x80))), (M2C_UNK *)(lbl_8044F6AC), (M2C_UNK)(1));
}
s32 TWindowSubComCard__sub_80273004(void) {
    s32 r = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0x89), 8, get_message_10__20TWindowSubStatusDispFPv(0x21));
    set_flag70_bit10__16TObjCityMainWarpFPv(r);
    return r;
}

}
