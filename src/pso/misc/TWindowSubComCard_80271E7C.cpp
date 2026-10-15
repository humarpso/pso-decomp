#pragma push

#include "types.h"

struct Ent_80272034 { u16 a; u16 b; u8 rest[0x1c]; };

struct Tbl_80272034 { u8 pad0; u8 count; u8 pad2[2]; Ent_80272034 e[1]; };

struct Win_80272034 { u8 pad[0x58]; Tbl_80272034 *tbl; };

struct Key_80272034 { u32 a; u32 b; };

struct Ent_80271F04 {
    u32 id;
    u32 value;
};

extern "C" {
u8 *get_shared_text_buffer(void);
s32 realloc_buffer__17TWindowSubComCardFPv(void *);
void free__11TOBoss4RockFUi(u32);
void send_simple_mail__6TLobbyFiPv(s32, s32);
void TWindowSubComCard__sub_80225E80(void *, void *);
s32 get_id__6TLobbyFPv(void *);
s32 *get_selected_guild_card_record(void);
void TWindowSubComCard__sub_802721D8(u8 *arg0);
u8 *find_entry_rest__17TWindowSubComCardFPvPvi(Win_80272034 *arg0, Key_80272034 *arg1, s32 arg2);
void set_value_by_key(void *, u16, s32);
s32 find_value_by_key__17TWindowSubComCardFPvUs(void *, u16);
s32 open_hard_keyboard__6TLobbyFPv(void *);
void *get_field_20__17TWindowSubComCardFPv(void *);
void *get_selected_entry__17TWindowSubComCardFPv(void *);
void mark_entry_by_id__17TWindowSubComCardFPvi(void *, u32);
void disable_entry_by_id__17TWindowSubComCardFPvi(void *, u32);
void set_entry_string_by_id__15TWindowMakeTeamFPvPvi(void *, void *, s32);
void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1);
void set_com_param__17TWindowSubComCardFii(s32 arg0, s32 arg1);
void TWindowSubComCard__sub_80271F04(u8 *arg0, Ent_80271F04 *arg1, s32 arg2, s32 arg3);
}

extern "C" {

void apply_selection__17TWindowSubComCardFi(s32 arg0);
void cleanup__17TWindowSubComCardFPv(void* p);
void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1);
void handle_close_flag__17TWindowSubComCardFPv(void *arg0);
void init_layout__17TWindowSubComCardFv(void);
void send_cmd_133__17TWindowSubComCardFv(void);
void send_command__17TWindowSubComCardFi(s32 arg0);
void send_state_if_dirty__17TWindowSubComCardFPv(u8 *arg0);
int send_find_user_self_tag__6TLobbyFi(void);
s32 create_for_card__14TWindowComCardFiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 get_card_entry_data__17TWindowSubComCardFPv(s32);
int get_card_entry__17TWindowSubComCardFi(void);
s32 get_card_slot__17TWindowSubComCardFi(s32 a0 = 0);
int get_selected_menu_value(void*);
s32 get_window_layout_position(s32 a0 = 0);
s32 create__14TWindowComCardFPvPv(s32 a0 = 0, s32 a1 = 0);
s32 create_card_list__17TWindowSubComCardFiiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
int fn_802754EC(void);
int get_card_id__17TWindowSubComCardFPv(void);
int get_message_10__20TWindowSubStatusDispFPv(void*);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
s32 send_card_window_state__6TLobbyFv();
s32 send_status_packet__6TLobbyFv();

void handle_close_flag__17TWindowSubComCardFPv(void *arg0) {
    if (*(u8 *)((s8 *)arg0 + 0x1D) & 2) {
        send_status_packet__6TLobbyFv();
        *(u8 *)((s8 *)arg0 + 0x1D) = (u8) (*(u8 *)((s8 *)arg0 + 0x1D) & 0xFFFFFFFD);
    }
}

void send_state_if_dirty__17TWindowSubComCardFPv(u8 *arg0) {
    if (*(u8 *)((s8 *)arg0 + 0x1D) & 1) {
        send_card_window_state__6TLobbyFv();
        *(s8 *)((s8 *)arg0 + 0x1D) = (s8) (*(s8 *)((s8 *)arg0 + 0x1D) & ~1);
    }
}

typedef void *(*GetMsg_80271F04)(void *, void *);
void TWindowSubComCard__sub_80271F04(u8 *arg0, Ent_80271F04 *arg1, s32 arg2, s32 arg3) {
    s32 i;
    if (arg2 == 0) {
        if (arg3 != open_hard_keyboard__6TLobbyFPv(*(void **)(arg0 + 0x20))) {
            arg0[0x1D] |= 1;
            ((void (*)(void*, s32))set_com_param__17TWindowSubComCardFii)(*(void **)(arg0 + 0x20), arg3);
            set_entry_string_by_id__15TWindowMakeTeamFPvPvi(*(void **)(arg0 + 0x7C), ((GetMsg_80271F04)get_message_10__17TWindowSubComCardFPvPv)(arg0, (void *)arg3), 0);
            if (arg3 != 0) {
                for (i = 0; i < 5; i++) {
                    if (arg1[i].id != 0) {
                        disable_entry_by_id__17TWindowSubComCardFPvi(*(void **)(arg0 + 0x7C), arg1[i].id);
                    }
                }
            } else {
                for (i = 0; i < 5; i++) {
                    if (arg1[i].id != 0) {
                        mark_entry_by_id__17TWindowSubComCardFPvi(*(void **)(arg0 + 0x7C), arg1[i].id);
                    }
                }
            }
        }
    } else if (arg3 != find_value_by_key__17TWindowSubComCardFPvUs(arg1, arg2)) {
        arg0[0x1D] |= 1;
        set_value_by_key(arg1, arg2, arg3);
        set_entry_string_by_id__15TWindowMakeTeamFPvPvi(*(void **)(arg0 + 0x7C), get_field_20__17TWindowSubComCardFPv(get_selected_entry__17TWindowSubComCardFPv(*(void **)(arg0 + 0x64))), arg2);
    }
}

u8 *find_entry_rest__17TWindowSubComCardFPvPvi(Win_80272034 *arg0, Key_80272034 *arg1, s32 arg2) {
    Tbl_80272034 *t = arg0->tbl;
    Ent_80272034 *e;
    Key_80272034 *k;
    s32 i;
    k = arg1 + arg2;
    e = t->e;
    for (i = 0; i < t->count; i++, e++) {
        if (e->a == k->a && e->b == k->b) return e->rest;
    }
    return 0;
}

void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1) { get_message_10__20TWindowSubStatusDispFPv((char*)a1 + 0xa6); }
void apply_selection__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r31;

    temp_r31 = get_card_slot__17TWindowSubComCardFi(0);
    create_for_card__14TWindowComCardFiii(get_window_layout_position(0x92), arg0, temp_r31);
}
void send_command__17TWindowSubComCardFi(s32 arg0) {
    create__14TWindowComCardFPvPv(get_window_layout_position(0x86), arg0);
}
void init_layout__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = get_card_slot__17TWindowSubComCardFi(0);
    create_card_list__17TWindowSubComCardFiiii(get_window_layout_position(0x91), temp_r31, 0x1C, 1);
}
void send_cmd_133__17TWindowSubComCardFv(void) { get_window_layout_position(133); fn_802754EC(); }
void cleanup__17TWindowSubComCardFPv(void* p) { get_selected_menu_value(*(void**)((char*)p + 0x84)); get_card_entry__17TWindowSubComCardFi(); get_card_id__17TWindowSubComCardFPv(); send_find_user_self_tag__6TLobbyFi(); }
#pragma scheduling off
void TWindowSubComCard__sub_802721D8(u8 *arg0) {
  u8 *new_var;
  s32 temp_r30;
  u8 *temp_r29;
  u8 *temp_r31;
  temp_r30 = realloc_buffer__17TWindowSubComCardFPv(*((u8 **) (((s8 *) arg0) + 0x80)));
  temp_r29 = (u8 *) ((u8* (*)(void))get_selected_guild_card_record)();
  TWindowSubComCard__sub_80225E80((void *) temp_r30, get_shared_text_buffer());
  new_var = get_shared_text_buffer();
  temp_r31 = (u8 *) new_var;
  send_simple_mail__6TLobbyFiPv(get_id__6TLobbyFPv(temp_r29), (s32) temp_r31);
  free__11TOBoss4RockFUi((u32) temp_r30);
}

}

#pragma pop

#include "types.h"

struct RecoveredGlobal_8034CC68_lbl_80478C3C {
    s32 value;
    u8 remaining[0x8];
};

struct Rec_80272290 { s32 f0; u8 f4[0xD0]; };

extern "C" {
extern const RecoveredGlobal_8034CC68_lbl_80478C3C lbl_8044F6D4;
void set_help_message__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1);
Rec_80272290 *get_com_count__17TWindowSubComCardFv();
void text_builder_append(void *);
void text_builder_reset();
void load_selected_guild_card_record(int, int);
void* get_card_data_ptr__17TWindowSubComCardFPv(void* p);
void* TWindowSubComCard__sub_8027523C(void* p);
void* get_name__17TWindowSubComCardFPv(void* p);
extern u8 lbl_805DD4F8;
void set_selected_card__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

void set_card_index__17TWindowSubComCardFPvi(void *arg0, s32 arg1) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x28) != arg1) {
        *(s32 *)((s8 *)arg0 + 0x28) = arg1;
        send_and_handle__6TLobbyFPvii(*(s32 *)((s8 *)arg0 + 0x6C), get_card_entry_data__17TWindowSubComCardFPv(arg1), 0x82);
    }
}
typedef char RecoveredGlobal_8034CC68_lbl_80478C3C_size[sizeof(RecoveredGlobal_8034CC68_lbl_80478C3C) == 0xC ? 1 : -1];

void set_selected_card__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    s32 temp_r30;
    Rec_80272290 *cnt;
    if (*(s32 *)(arg0 + 0x28) != arg1) {
        *(s32 *)(arg0 + 0x28) = arg1;
        cnt = get_com_count__17TWindowSubComCardFv();
        temp_r31 = cnt[arg1].f4;
        load_selected_guild_card_record((int)temp_r31, arg1 * 0xD4);
        temp_r30 = ((s32 (*)(void))get_selected_guild_card_record)();
        text_builder_reset();
        text_builder_append((void *)(temp_r31 + 0x14));
        text_builder_append(((void* (*)(int))get_name__17TWindowSubComCardFPv)(temp_r30));
        text_builder_append(&lbl_805DD4F8);
        text_builder_append(((void* (*)(int))TWindowSubComCard__sub_8027523C)(temp_r30));
        text_builder_append(&lbl_805DD4F8);
        text_builder_append(((void* (*)(int))get_card_data_ptr__17TWindowSubComCardFPv)(temp_r30));
        send_and_handle__6TLobbyFPvii(*(s32 *)(arg0 + 0x6C), ((s32 (*)(void))get_shared_text_buffer)(), 0x82);
    }
}

void set_help_message__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x28) != arg1) {
        *(s32 *)((s8 *)arg0 + 0x28) = arg1;
        send_and_handle__6TLobbyFPvii((s32)((s32)(*(u8 **)((s8 *)arg0 + 0x6c))), (s32)((s32)(((s32)get_message_10__20TWindowSubStatusDispFPv((void*)((int) (*(s32 *)((s8 *)(&lbl_8044F6D4.value) + (arg1 * 4)))))))), (s32)((s32)(0x80)));
    }
}

}

#include "types.h"

extern "C" {

void update_selection__17TWindowSubComCardFUiUiPvi(u32 arg0, u32 arg1, s32 *arg2, s32 arg3);
s32 TWindowComCard__sub_80249920(u32, s32, s32);

void update_selection__17TWindowSubComCardFUiUiPvi(u32 arg0, u32 arg1, s32 *arg2, s32 arg3) {
    s32 temp_r3;

    if ((arg0 != 0U) && (arg1 != 0U)) {
        temp_r3 = ((s32 (*)(void))get_selected_menu_value)();
        if (temp_r3 != (s32) *arg2) {
            *arg2 = temp_r3;
            TWindowComCard__sub_80249920(arg1, temp_r3, arg3);
        }
    }
}

}

#pragma push

#include "types.h"

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

struct Entry_80272B60 { u16 id; u16 val; u8 name[0x1C]; };

struct ChrSel_80272B60 { u8 f0; u8 count; u8 pad[2]; Entry_80272B60 e[1]; };

struct VBase_18_80272714 { char pad[0x18]; };

struct VObj_18_80272714 : VBase_18_80272714 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void *m10();
};

extern "C" {
s32 set_flag70_bit10__16TObjCityMainWarpFPv(int);
s32 update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, void *, int, int);
s32 draw_card_icon__17TWindowSubComCardFiii(int, int, void *);
extern const f32 lbl_805DD508;
s32 create_card_action_window__17TWindowSubComCardFv(void);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, void *, int, int);
s32 set_flag70_bit10__16TObjCityMainWarpFPv(int);
s32 align_menu_entry_positions(s32);
s32 update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 draw_card_icon__17TWindowSubComCardFiii(int, int, void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s32);
extern const f32 lbl_805DD510;
s32 create_menu_window__17TWindowSubComCardFv(void);
s32 set_window_mode_4__6TLobbyFPvii(s32, s32 *, s32);
extern char lbl_8044F6C4[];
void open_mode4_window__17TWindowSubComCardFv(void);
s32 set_window_mode_4__6TLobbyFPvii(s32, s32 *, s32);
extern char lbl_8044F6AC[];
void open_layout_window__17TWindowSubComCardFv(void);
s32 set_flag70_bit10__16TObjCityMainWarpFPv(int);
s32 draw_card_icon__17TWindowSubComCardFiii(int, int, void *);
s32 TWindowSubComCard__sub_80273004(void);
u8 *get_character_save_record(u32);
s32 create_choice_setting_window__17TWindowSubComCardFiii(s32, void *, s32);
void update_next_entry__17TWindowSubComCardFPviii(s32, void *, void *, u32);
void create_sub_window__20TWindowChoiceSettingFPvi(s32, void *);
void set_flag_10__17TWindowSubComCardFPv(void* p);
extern u8 lbl_8044F6BC[];
s32 create_entry_list_window__17TWindowSubComCardFPv(u8 *arg0);
s32 init_card__17TWindowSubComCardFv();
s32 set_flag70_bit10__16TObjCityMainWarpFPv(int);
s32 update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, void *, int, int);
s32 draw_card_icon__17TWindowSubComCardFiii(int, int, void *);
extern const f32 lbl_805DD50C;
s32 TWindowSubComCard__sub_802728CC(void);
ChrSel_80272B60 *get_chr_select__17TWindowSubComCardFv();
s32 set_flag70_bit10__16TObjCityMainWarpFPv(int);
s32 set_selected_index__17TWindowSubComCardFPvs(s32, s16);
s32 align_menu_entry_positions(s32);
s32 set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, void *, int, int);
s32 draw_card_icon__17TWindowSubComCardFiii(int, int, void *);
void *find_entry_value_by_id__17TWindowSubComCardFPvi(s32, s32);
extern const f32 TWindowSubComCard__data_805DD514;
extern const f32 lbl_805DD518;
s32 create_option_list_window__17TWindowSubComCardFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 obj_isState3_324(void *);
s32 is_script_controlled__10TObjPlayerFPv(void *);
s32 set_flag70_bit10__16TObjCityMainWarpFPv(int);
VObj_18_80272714 *get_player_by_client_id(s32);
s32 set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, void *, int, int);
s32 draw_card_icon__17TWindowSubComCardFiii(int, int, void *);
s16 get_field_72__17TWindowSubComCardFPv(void* p);
extern s32 local_client_id;
extern const f32 TWindowSubComCard__data_805DD500;
extern const f32 lbl_805DD504;
s32 create_player_select_window__17TWindowSubComCardFv(void);
void *get_com_card_entry__6TLobbyFi(s32);
u32 TLobby__sub_802428F8(void *);
s32 get_com_card_data__6TLobbyFv(void);
void clear_flag_bit2__6TLobbyFv(void);
void reset_entries__17TWindowSubComCardFPv(s32);
s32 set_selected_index__17TWindowSubComCardFPvs(s32, s16);
s32 update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, void *, int, int);
s16 get_cursor_pos__20TWindowShortListCtrlFPv(s32);
void *get_sub_obj__17TWindowSubComCardFPv(void *);
extern const f32 lbl_805DD51C;
void rebuild_com_card_list__17TWindowSubComCardFii(s32 arg0, s32 arg1);
}

extern "C" {

s32 create__17TWindowSubComCardFv(void);
s32 create_keyboard__17TWindowSubComCardFi(s32 arg0);
s32 create_keyboard__17TWindowSubComCardFii(s32 arg0, s32 arg1);
void update_display_value__17TWindowSubComCardFUiUiPv(u32 arg0, u32 arg1, s32 *arg2);
void update_selection__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TKeyBoardControl__ct(s32, s32, s32, s32, s32, s32);
s32 __nw__7TObjectFUl(s32);
void destroy_keyboard__17TWindowSubComCardFPv(void* p);
s32 get_kbd_ptr__14TWindowComCardFPv(s32);
s32 get_keyboard_field_6c__15TWindowMakeTeamFPv(s32, s32);
s32 get_keyboard_mode__17TWindowSubComCardFv();
s32 set_display_value__14TWindowComCardFiii(u32, s32, s32);
s32 set_field_1c__6TLobbyFPvf(f32);
s32 set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
s32 set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
s32 set_window_mode_4__6TLobbyFPvii(s32, s32 *, s32);

void update_selection__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 tmp = get_card_slot__17TWindowSubComCardFi(0);
    ((s32 (*)(s32, s32, s32, s32))update_selection__17TWindowSubComCardFUiUiPvi)(arg0, arg1, arg2, tmp);
}

void update_display_value__17TWindowSubComCardFUiUiPv(u32 arg0, u32 arg1, s32 *arg2) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = ((s32 (*)(s32))get_card_entry__17TWindowSubComCardFi)(0);
    if ((arg0 != 0U) && (arg1 != 0U)) {
        temp_r3 = ((s32 (*)(u32))get_selected_menu_value)(arg0);
        if (temp_r3 != (s32) *arg2) {
            *arg2 = temp_r3;
            set_display_value__14TWindowComCardFiii(arg1, temp_r3, temp_r31);
        }
    }
}

extern s32 local_client_id;

s32 create_keyboard__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, arg0, 0xC6, 3, 4, local_client_id);
    }
    get_keyboard_field_6c__15TWindowMakeTeamFPv(var_r31, get_card_entry_data__17TWindowSubComCardFPv(arg1));
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, get_window_layout_position((s32)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    ((s32 (*)(s32))destroy_keyboard__17TWindowSubComCardFPv)(var_r31);
    return var_r31;
}

extern s32 local_client_id;

s32 create_keyboard__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = get_keyboard_mode__17TWindowSubComCardFv();
    temp_r31 = __nw__7TObjectFUl(0x2C);
    if (temp_r31 != 0) {
        temp_r31 = TKeyBoardControl__ct(temp_r31, arg0, 0xC6, 3, 4, local_client_id);
    }
    get_keyboard_field_6c__15TWindowMakeTeamFPv(temp_r31, get_kbd_ptr__14TWindowComCardFPv(var_r30));
    set_sub_position__15TWindowMakeTeamFPvPv(temp_r31, get_window_layout_position((s32)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(temp_r31);
    ((s32 (*)(s32))destroy_keyboard__17TWindowSubComCardFPv)(temp_r31);
    return temp_r31;
}

extern s32 lbl_8044F6CC[];
extern f32 lbl_805DD4FC;

s32 create__17TWindowSubComCardFv(void) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = get_window_layout_position((s32)(0x98));
    temp_r31 = set_window_mode_4__6TLobbyFPvii(temp_r3, lbl_8044F6CC, 1);
    set_field_1c__6TLobbyFPvf(lbl_805DD4FC);
    return temp_r31;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_loop_invariants off
s32 create_player_select_window__17TWindowSubComCardFv(void) {
    s32 i;
    VObj_18_80272714 *p;
    s32 w;
    w = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0x94), 0xC, ((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0x2D));
    i = 0;
    do {
        if (i != local_client_id && (p = get_player_by_client_id(i)) != NULL &&
            is_script_controlled__10TObjPlayerFPv(p) == 0 && obj_isState3_324(p) == 0) {
            forward_trade_action_default__16TObjCityMainWarpFPviii(w, p->m10(), 7, i);
        }
        i++;
    } while (i < 0xC);
    if (((s16 (*)(int))get_field_72__17TWindowSubComCardFPv)(w) <= 0) {
        draw_text_gray__17TWindowSubComCardFiiii(w, (s32)((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0xD2), 7, 0);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(w);
    set_scroll_target__17TWindowSubComCardFPvff((s32)(w), TWindowSubComCard__data_805DD500, lbl_805DD504);
    return w;
}
#pragma pop

s32 create_card_action_window__17TWindowSubComCardFv(void) {
    s32 temp_r31;
    void *temp_r31_2;
    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(((s32)get_window_layout_position((s32)((int) (0x93)))), (int) (3), ((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)((int) (0x1D)));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)((int) (0xFD))), (int) (6), (int) (0x41));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)((int) (0xFE))), (int) (6), (int) (0x45));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)((int) (0xFF))), (int) (6), (int) (0x4A));
    set_flag70_bit10__16TObjCityMainWarpFPv((int) (temp_r31));
    update_layout_height__17TWindowSubComCardFPvf((int) (temp_r31), (f32) (lbl_805DD508));
    return temp_r31;
}

s32 TWindowSubComCard__sub_802728CC(void) {
    void *msg;
    s32 w;
    w = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0x90), 2, msg = ((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0xF8));
    forward_trade_action_default__16TObjCityMainWarpFPviii(w, ((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0xFA), 6, 0x3B);
    if (init_card__17TWindowSubComCardFv() != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(w, ((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0xFB), 6, 0x3F);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(w, (s32)((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0xFB), 6, 0x3F);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(w);
    update_layout_height__17TWindowSubComCardFPvf(w, lbl_805DD50C);
    return w;
}

s32 create_menu_window__17TWindowSubComCardFv(void) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, ((s32)((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)((int)((s32)((int) 0x1D)))));
  temp_r31 = draw_card_icon__17TWindowSubComCardFiii((int)((s32)((int) get_window_layout_position((s32)((int) 0x8f)))), (int)((s32)((int) 2)), (void *)((s32)((int) temp_r31_2)));
  forward_trade_action_default__16TObjCityMainWarpFPviii((int)((s32)((int) temp_r31)), (void *)((s32)((int) ((s32)((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)((int)((s32)((int) 0x57)))))), (int)((s32)((int) 6)), (int)((s32)((int) 0x21)));
  if (get_global_state__14TOKeyMachine01Fv() == 0xF)
  {
    forward_trade_action_default__16TObjCityMainWarpFPviii((int)((s32)((int) temp_r31)), (void *)((s32)((int) ((s32)((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)((int)((s32)((int) 0x58)))))), (int)((s32)((int) 6)), (int)((s32)((int) 0x25)));
  }
  else
  {
    draw_text_gray__17TWindowSubComCardFiiii((s32)((int) temp_r31), (s32)((int) ((s32)((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)((int)((s32)((int) 0x58))))), (s32)((int) 6), (s32)((int) 0x25));
  }
  set_flag70_bit10__16TObjCityMainWarpFPv((int)((s32)((int) temp_r31)));
  temp_r31_2 = temp_r31;
  update_layout_height__17TWindowSubComCardFPvf((int)((s32)((int) temp_r31_2)), (f32) lbl_805DD510);
  align_menu_entry_positions((s32)((int) temp_r31_2));
  return temp_r31_2;
}
void open_mode4_window__17TWindowSubComCardFv(void) {
    set_window_mode_4__6TLobbyFPvii((s32)(get_window_layout_position((s32)(0x8f))), (s32 *)(lbl_8044F6C4), (s32)(1));
}

typedef void *(*GetMsg_80272CB0)(void *, void *);

#pragma push
#pragma opt_loop_invariants off
s32 create_option_list_window__17TWindowSubComCardFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 count;
    s32 idx;
    u16 val;
    u16 sel;
    s32 win;
    Entry_80272B60 *e;
    ChrSel_80272B60 *cs;
    win = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0x8D), 0x20, find_entry_value_by_id__17TWindowSubComCardFPvi(*(s32 *)((s8 *)arg0 + 0x7C), arg2));
    if (arg2 == 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(win, ((u8* (*)(void*, void*))get_message_10__17TWindowSubComCardFPvPv)((void *)(arg0), (void *)(0)), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(win, ((u8* (*)(void*, void*))get_message_10__17TWindowSubComCardFPvPv)((void *)(arg0), (void *)(1)), 6, 1);
        set_selected_index__17TWindowSubComCardFPvs(win, open_hard_keyboard__6TLobbyFPv((void *)(*(s32 *)((s8 *)arg0 + 0x20))));
    } else {
        sel = ((s32 (*)(s32, u16))find_value_by_key__17TWindowSubComCardFPvUs)(arg1, arg2);
        cs = get_chr_select__17TWindowSubComCardFv();
        count = cs->count;
        e = cs->e;
        idx = 0;
        i = 0;
        while (i < count) {
            if (e->id == arg2) {
                val = e->val;
                forward_trade_action_default__16TObjCityMainWarpFPviii(win, e->name, 6, val);
                if (sel == val) {
                    set_selected_index__17TWindowSubComCardFPvs(win, idx);
                }
                idx++;
            }
            i++;
            e++;
        }
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(win);
    set_scroll_target__17TWindowSubComCardFPvff(win, lbl_805DD518, TWindowSubComCard__data_805DD514);
    align_menu_entry_positions(win);
    return win;
}
#pragma pop

s32 create_entry_list_window__17TWindowSubComCardFPv(u8 *arg0) {
    s32 i;
    u8 *card;
    u16 id;
    s32 n;
    s32 idx;
    s32 hard;
    s32 w;
    Ent_80272CB0 *e;
    List_80272CB0 *l;
    card = get_character_save_record(0xFFFF);
    hard = open_hard_keyboard__6TLobbyFPv(*(void **)(arg0 + 0x20));
    w = create_choice_setting_window__17TWindowSubComCardFiii(get_window_layout_position(0x8C), lbl_8044F6BC, 6);
    create_sub_window__20TWindowChoiceSettingFPvi(w, ((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0x6D));
    update_next_entry__17TWindowSubComCardFPviii(w, ((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0x6D), ((GetMsg_80272CB0)get_message_10__17TWindowSubComCardFPvPv)(arg0, (void *)hard), 0);
    l = *(List_80272CB0 **)(arg0 + 0x58);
    idx = -1;
    n = l->count;
    e = l->ents;
    for (i = 0; i < n; i++, e++) {
        if (e->type == 0) {
            idx++;
            if (e->id >= 500) {
                update_next_entry__17TWindowSubComCardFPviii(w, e->name, ((void* (*)(void*, void*, s32))find_entry_rest__17TWindowSubComCardFPvPvi)(arg0, card + 0x22EC, idx), e->id);
                if (hard != 0) {
                    disable_entry_by_id__17TWindowSubComCardFPvi((void *)w, e->id);
                }
            }
        }
    }
    ((void (*)(s32))set_flag_10__17TWindowSubComCardFPv)(w);
    return w;
}

void open_layout_window__17TWindowSubComCardFv(void) {
    set_window_mode_4__6TLobbyFPvii((s32)(get_window_layout_position((s32)(0x80))), (s32 *)(lbl_8044F6AC), (s32)(1));
}

#pragma push
#pragma opt_loop_invariants off
void rebuild_com_card_list__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    s32 n;
    u32 cur;
    s32 i;
    s16 sel;
    s16 pos;
    void *e;
    cur = ((s32 (*)(u32))get_selected_menu_value)(arg1);
    sel = -1;
    clear_flag_bit2__6TLobbyFv();
    pos = get_cursor_pos__20TWindowShortListCtrlFPv(arg1);
    reset_entries__17TWindowSubComCardFPv(arg1);
    n = get_com_card_data__6TLobbyFv();
    for (i = n - 1; i >= 0; i--) {
        e = get_com_card_entry__6TLobbyFi(i);
        forward_trade_action_default__16TObjCityMainWarpFPviii(arg1, get_sub_obj__17TWindowSubComCardFPv(e), 7, TLobby__sub_802428F8(e));
        if (cur == TLobby__sub_802428F8(e)) {
            sel = (n - 1) - i;
        }
    }
    if (n <= 0) {
        draw_text_gray__17TWindowSubComCardFiiii(arg1, (s32)((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0xD3), 6, -1);
    }
    update_layout_height__17TWindowSubComCardFPvf(arg1, lbl_805DD51C);
    if (sel == -1) {
        set_selected_index__17TWindowSubComCardFPvs(arg1, pos);
    } else {
        set_selected_index__17TWindowSubComCardFPvs(arg1, sel);
    }
}
#pragma pop

s32 TWindowSubComCard__sub_80273004(void) {
    s32 r = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0x89), 8, ((void* (*)(int))get_message_10__20TWindowSubStatusDispFPv)(0x21));
    set_flag70_bit10__16TObjCityMainWarpFPv(r);
    return r;
}

}

#pragma pop

#include "types.h"

struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

struct ComEntry_8027375C { u8 data[0xD4]; };

struct ComList_8027375C { u8 pad[4]; ComEntry_8027375C entries[1]; };

extern "C" {
s32 set_flag_40__16TAdChrSelASlotGCFPv(int);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
extern const f32 lbl_805DD528;
s32 create_single_entry_window__17TWindowSubComCardFv(void);
s32 TWindowSubComCard__sub_8027353C(void);
extern const f32 lbl_805DD52C;
s32 TWindowSubComCard__sub_8027346C(void);
s32 queue_destruction__7TObjectFv(void *);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
s32 release__17TWindowSubComCardFv();
s32 TWindowSubComCard__sub_800778B4(void *, int);
s32 set_card_text__17TWindowSubComCardFii(int, int);
s32 swap_cards__17TWindowSubComCardFii(int, int);
s32 remove_card_at__17TWindowSubComCardFi(int);
s32 TWindowSubComCard__sub_8007AF10(int);
s32 set_text__17TWindowSubComCardFPvPv(int, int);
s32 remove_entry__17TWindowSubComCardFi(int);
s32 init_and_press_a__17TWindowSubComCardFi(int);
s32 init_and_press_b__17TWindowSubComCardFi(int);
s32 update_press__17TWindowSubComCardFv(int);
s32 TWindowSubShortMail__sub_80131998(int);
s32 hide_window__19TWindowSubShortMailFPv(int);
s32 set_position__19TWindowSubShortMailFPvPv(int, int);
s32 is_keyboard_active__17TWindowSubComCardFPv(int);
s32 update_keyboard__17TWindowSubComCardFPv(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 send_choice_search_options_request__9TProtocolFv(int);
s32 free_menu_object(int);
s32 clear_flag_and_release__17TWindowSubComCardFPv(int);
s32 play_sound_effect(int, int, int, int);
s32 find_and_load_com_card__6TLobbyFUi(int);
s32 TLobby__sub_8024259C();
s32 fn_80244958(int, int);
s32 fn_80244994(int);
s32 fn_802449E0(int);
s32 TWindow__close(int);
s32 request_close__19TWindowSubTradeMainFPv(int);
s32 window_request_show(int);
s32 is_com_card_active();
s32 begin_scroll__17TWindowSubComCardFPvf(int, f32);
s32 TWindowSubComCard__sub_80249144(int);
s32 is_open__17TWindowSubComCardFPv(int);
u32 create_com_card_window__17TWindowSubComCardFi(int);
s32 fn_8024AB54(int);
s32 TWindowSubComCard__sub_8024AB98(int);
s32 get_flag__17TWindowSubComCardFPv(int);
s32 clear_flag_and_release2__17TWindowSubComCardFPv(int);
s32 clear_transition_flag__17TWindowSubComCardFPv(int);
s32 open__17TWindowOptionCtrlFPv(int);
s32 reset_selection__17TWindowSubComCardFPv(int);
s32 update_selected_entry__17TWindowSubComCardFPv(int);
s16 get_selected_index__20TWindowShortListCtrlFPv(int);
s32 send_packet__6TLobbyFii(void *, void *);
u32 TWindowSubComCard__sub_80272640(void *);
u32 TWindowSubComCard__sub_80272A98(void *);
u32 TWindowSubComCard__sub_80272DE0(void *);
s32 open_yesno_dialog__17TWindowSubComCardFPv(void *arg0);
s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0);
s32 open_menu__17TWindowSubComCardFv(void);
s32 create_single_entry_window__17TWindowSubComCardFv(void);
u32 TWindowSubComCard__sub_8027337C();
s32 TWindowSubComCard__sub_8027346C(void);
s32 TWindowSubComCard__sub_8027353C(void);
s32 create_menu__17TWindowSubComCardFv(void);
void set_display_page__17TWindowSubComCardFi(s32 arg0);
s32 TWindowSubComCardList__sub_80275360(int);
u32 open_confirm_prompt__19TWindowSubShortMailFPvi(void *, int);
u32 create_keyboard__19TWindowSubShortMailFv();
u32 TWindowUserSort__ct(int, int, int);
s32 close__17TWindowSubComCardFPv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(int);
s32 get_card_data__17TWindowSubComCardFPv(int);
s32 is_child_visible__17TWindowSubComCardFPv(int);
extern s32 controller_input_state[];
extern s32 TLobby__protocol_instance;
extern s32 lbl_805DD534;
extern const f32 lbl_805DD538;
extern const f32 lbl_805DD53C;
void run_task__17TWindowSubComCardFv(u8 *arg0);
s32 notify_warp_flag70__19TWindowSubShortMailFPv(s32);
s32 free_member__17TWindowSubComCardFPv(s32, s32);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
extern const f32 TWindowSubComCard__data_805DD520;
s32 TWindowSubComCard__sub_802730E0(u8 *arg0);
}

extern "C" {

s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0);
s32 create_menu__17TWindowSubComCardFv(void);
s32 open_menu__17TWindowSubComCardFv(void);
s32 open_yesno_dialog__17TWindowSubComCardFPv(void *arg0);
void render__17TWindowSubComCardFv(void);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
s32 open_yes_no_prompt(s32, s32, s32, s32, f32);
s32 free_member__17TWindowSubComCardFPv(s32, s32);
s32 get_main_phase();
s32 notify_warp_flag70__19TWindowSubShortMailFPv(s32);

extern const f32 TWindowSubComCard__data_805DD520;

s32 open_yesno_dialog__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, *(s32 *)((s8 *)arg0 + 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x20), ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x100), get_window_layout_position((s32)(0x97)), TWindowSubComCard__data_805DD520);
    free_member__17TWindowSubComCardFPv(temp_r29, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 lbl_805DD524;

s32 TWindowSubComCard__sub_802730E0(u8 *arg0) {
    s32 temp_r30;
    temp_r30 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, *(s32 *)((s8 *)arg0 + 0x20), 0, 0);
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(temp_r30, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0xFC), get_window_layout_position(0x96), (*(f32 *)&TWindowSubComCard__data_805DD520));
    free_member__17TWindowSubComCardFPv(temp_r30, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r30);
    return temp_r30;
}

s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, *(s32 *)((s8 *)arg0 + 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x20), ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x39), get_window_layout_position((s32)(0x88)), lbl_805DD524);
    free_member__17TWindowSubComCardFPv(temp_r29, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 lbl_805DD510;

s32 open_menu__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = ((s32 (*)(s32, s32, s32))draw_card_icon__17TWindowSubComCardFiii)(get_window_layout_position((s32)(0x87)), 5, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x1D));
    if (get_main_phase() == 0xF) {
        ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x59), 6, 0xF);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x59), 6, 0xF);
    }
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x101), 6, 0x11);
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x102), 6, 0x13);
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x63), 6, 0x1B);
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x5A), 6, 0x15);
    ((s32 (*)(s32))set_flag70_bit10__16TObjCityMainWarpFPv)(temp_r31);
    ((s32 (*)(s32, f32))update_layout_height__17TWindowSubComCardFPvf)(temp_r31, lbl_805DD510);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD530;

s32 create_single_entry_window__17TWindowSubComCardFv(void) {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((void *)(((s32)get_window_layout_position((s32)((int) (0x84))))), (int) (1));
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)((s32)((int) (temp_r31)), (s32)((int) (((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)((int) (0x38)))), (s32)((int) (3)), (s32)((int) (0)));
    set_flag_40__16TAdChrSelASlotGCFPv((int) (temp_r31));
    ((s32 (*)(int, f32, f32))set_scroll_target__17TWindowSubComCardFPvff)((int) (temp_r31), (f32) (TWindowSubComCard__data_805DD520), (f32) (lbl_805DD528));
    return temp_r31;
}

s32 TWindowSubComCard__sub_8027346C(void) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)((s32)((int) 0x1D)));
  temp_r31 = ((s32 (*)(s32, s32, s32))draw_card_icon__17TWindowSubComCardFiii)((s32)((int) get_window_layout_position((s32)((int) 0x8B))), (s32)((int) 2), (s32)((int) temp_r31_2));
  ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)((s32)((int) temp_r31), (s32)((int) ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)((s32)((int) 0x57))), (s32)((int) 6), (s32)((int) 0x21));
  if (get_global_state__14TOKeyMachine01Fv() == 0xF)
  {
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)((s32)((int) temp_r31), (s32)((int) ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)((s32)((int) 0x58))), (s32)((int) 6), (s32)((int) 0x25));
  }
  else
  {
    draw_text_gray__17TWindowSubComCardFiiii((s32)((int) temp_r31), (s32)((int) ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)((s32)((int) 0x58))), (s32)((int) 6), (s32)((int) 0x25));
  }
  ((s32 (*)(s32))set_flag70_bit10__16TObjCityMainWarpFPv)((s32)((int) temp_r31));
  temp_r31_2 = temp_r31;
  ((s32 (*)(s32, f32))update_layout_height__17TWindowSubComCardFPvf)((s32)((int) temp_r31_2), (f32) lbl_805DD52C);
  align_menu_entry_positions((s32)((int) temp_r31_2));
  return temp_r31_2;
}

s32 TWindowSubComCard__sub_8027353C(void) {
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31 = ((s32 (*)(s32, s32, s32))draw_card_icon__17TWindowSubComCardFiii)((s32)(((s32)get_window_layout_position((int) (0x82)))), (s32)((int) (2)), (s32)(((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)((int) (0x1E))));
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)((s32)((int) (temp_r31)), (s32)((int) (((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)((int) (0x55)))), (s32)((int) (6)), (s32)((int) (5)));
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)((s32)((int) (temp_r31)), (s32)((int) (((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)((int) (0x56)))), (s32)((int) (6)), (s32)((int) (9)));
    ((s32 (*)(s32))set_flag70_bit10__16TObjCityMainWarpFPv)((s32)((int) (temp_r31)));
    ((s32 (*)(s32, f32))update_layout_height__17TWindowSubComCardFPvf)((s32)((int) (temp_r31)), (f32) (TWindowSubComCard__data_805DD520));
    align_menu_entry_positions((s32)((int) (temp_r31)));
    return temp_r31;
}

s32 create_menu__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = ((s32 (*)(s32, s32, s32))draw_card_icon__17TWindowSubComCardFiii)(get_window_layout_position((s32)(0x7F)), 6, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x1D));
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x52), 6, 3);
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x53), 6, 0xB);
    ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x54), 6, 0x1D);
    if (get_main_phase() == 0xF) {
        ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, TQuestVmDownLoadServer__sub_8006EF6C(0x49), 6, 0x27);
        ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x6D), 6, 0x33);
        ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0xF8), 6, 0x39);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, TQuestVmDownLoadServer__sub_8006EF6C(0x49), 6, 0x27);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0x6D), 6, 0x33);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFPv)(0xF8), 6, 0x39);
    }
    ((s32 (*)(s32))set_flag70_bit10__16TObjCityMainWarpFPv)(temp_r31);
    ((s32 (*)(s32, f32))update_layout_height__17TWindowSubComCardFPvf)(temp_r31, lbl_805DD530);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

void render__17TWindowSubComCardFv(void) {  }
void run_task__17TWindowSubComCardFv(u8 *arg0) {
    s32 temp_r29;
    s32 temp_r29_4;
    s32 temp_r29_7;
    s32 temp_r29_8;
    s32 temp_r30;
    u32 temp_r30_2;
    s32 temp_r4;
    s32 var_r29;
    u8 temp_r0;
    s32 temp_r29_6;
    s32 temp_r30_3;
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r0 = *(u8 *)((s8 *)arg0 + 0x1C);
    switch (temp_r0) {
    case 0x0:
    case 0x1:
        ((s32 (*)(void*))send_state_if_dirty__17TWindowSubComCardFPv)((void *) (arg0));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x80));
            *(u32 *)((s8 *)arg0 + 0x80) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x7C)));
            *(u32 *)((s8 *)arg0 + 0x7C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            *(u32 *)((s8 *)arg0 + 0x84) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x78) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x78)));
            *(u32 *)((s8 *)arg0 + 0x78) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x74)));
            *(u32 *)((s8 *)arg0 + 0x74) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x6C)));
            *(u32 *)((s8 *)arg0 + 0x6C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x60) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x60) = ((s32 (*)(void *)) create_menu__17TWindowSubComCardFv)((void *) (arg0));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x6C) = ((u32 (*)(void*))open_layout_window__17TWindowSubComCardFv)((void *) (arg0));
            *(s32 *)((s8 *)arg0 + 0x28) = -1;
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x60)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 2U;
    case 0x2:
        ((s32 (*)(void*, int))set_help_message__17TWindowSubComCardFPvi)((void *) (arg0), (int) (((s16 (*)(int))get_cursor_pos__20TWindowShortListCtrlFPv)((int) (*(u32 *)((s8 *)arg0 + 0x60)))));
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x60))) != 0) {
            temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x5C));
            ((VObj_18_204a81 *)(temp_r3))->m7();
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x4FU;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x60))) != 0) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) != 0U) {
                TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x6C)));
                *(u32 *)((s8 *)arg0 + 0x6C) = 0U;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x60)));
            return;
        }
        break;
    case 0x3:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x74) = create_com_card_window__17TWindowSubComCardFi(get_window_layout_position((int) (0x81)));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x64) = ((s32 (*)(void *)) TWindowSubComCard__sub_8027353C)((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64)));
        clear_transition_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
    case 0x4:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            return;
        }
        break;
    case 0x5:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x68) = TWindowSubComCard__sub_8027337C();
        }
        open__17TWindowOptionCtrlFPv((int) (*(u32 *)((s8 *)arg0 + 0x64)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 6U;
    case 0x6:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x68))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x68))) != 0) {
            TWindowSubComCard__sub_8007AF10(((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x68))));
            *(u8 *)((s8 *)arg0 + 0x1C) = 7U;
            return;
        }
        break;
    case 0x7:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x68) = ((s32 (*)(void *)) create_single_entry_window__17TWindowSubComCardFv)((void *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 8U;
    case 0x8:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(controller_input_state) + 0x20), (int) (6)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(controller_input_state) + 0x160), (int) (6)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
            return;
        }
        break;
    case 0x9:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x74)));
            *(u32 *)((s8 *)arg0 + 0x74) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x60) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x60)));
            *(u32 *)((s8 *)arg0 + 0x60) = 0U;
        }
        *(u32 *)((s8 *)arg0 + 0x80) = ((u32 (*)(void*))create_keyboard__17TWindowSubComCardFi)((void *) (arg0));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xAU;
    case 0xA:
        if (is_keyboard_active__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x80))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x80))) != 0) {
            temp_r29 = ((s32 (*)(int))realloc_buffer__17TWindowSubComCardFPv)((int) (*(u32 *)((s8 *)arg0 + 0x80)));
            ((s32 (*)(int, int))TWindowSubComCard__sub_80225E80)((int) (temp_r29), (int) (((s32 (*)(void))get_shared_text_buffer)()));
            temp_r30 = get_keyboard_mode__17TWindowSubComCardFv();
            set_text__17TWindowSubComCardFPvPv((int) (temp_r30), (int) (((s32 (*)(void))get_shared_text_buffer)()));
            ((s32 (*)(int))free__11TOBoss4RockFUi)((int) (temp_r29));
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        break;
    case 0xB:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x6C) = ((u32 (*)(void*))create__17TWindowSubComCardFv)((void *) (arg0));
            fn_802449E0((int) (*(u32 *)((s8 *)arg0 + 0x6C)));
            *(s32 *)((s8 *)arg0 + 0x28) = -1;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x84) = ((u32 (*)(void))send_cmd_133__17TWindowSubComCardFv)();
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) == 0U) {
            *(s32 *)((s8 *)arg0 + 0x24) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            *(u32 *)((s8 *)arg0 + 0x74) = ((u32 (*)(int))send_command__17TWindowSubComCardFi)((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        }
        fn_80244958((int) (*(u32 *)((s8 *)arg0 + 0x6C)), (int) (get_window_layout_position((int) (0x99))));
        request_close__19TWindowSubTradeMainFPv((int) (*(u32 *)((s8 *)arg0 + 0x6C)));
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xCU;
    case 0xC:
        ((s32 (*)(int, int, void*))update_display_value__17TWindowSubComCardFUiUiPv)((int) (*(u32 *)((s8 *)arg0 + 0x84)), (int) (*(u32 *)((s8 *)arg0 + 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        ((s32 (*)(void*, int))set_card_index__17TWindowSubComCardFPvi)((void *) (arg0), (int) (((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84)))));
        if (TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(controller_input_state) + 0x20), (int) (0x400)) != 0) {
            if (fn_80244994((int) (*(u32 *)((s8 *)arg0 + 0x6C))) != 0) {
                request_close__19TWindowSubTradeMainFPv((int) (*(u32 *)((s8 *)arg0 + 0x6C)));
            } else {
                window_request_show((int) (*(u32 *)((s8 *)arg0 + 0x6C)));
            }
        }
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xDU;
            return;
        }
        break;
    case 0xD:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x6C)));
            *(u32 *)((s8 *)arg0 + 0x6C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x74)));
            *(u32 *)((s8 *)arg0 + 0x74) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x64) = ((s32 (*)(void *)) open_menu__17TWindowSubComCardFv)((void *) (arg0));
        }
        clear_transition_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64)));
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xEU;
    case 0xE:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xBU;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            return;
        }
        break;
    case 0xF:
        ((s32 (*)(void))cleanup__17TWindowSubComCardFPv)();
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x10U;
    case 0x10:
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xBU;
        return;
    case 0x11:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x6C) = ((u32 (*)(void*))create__17TWindowSubComCardFv)((void *) (arg0));
            *(s32 *)((s8 *)arg0 + 0x28) = -1;
        }
        ((s32 (*)(void*, int))set_card_index__17TWindowSubComCardFPvi)((void *) (arg0), (int) (((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84)))));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x12U;
    case 0x12:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(controller_input_state) + 0x20), (int) (6)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(controller_input_state) + 0x160), (int) (6)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xBU;
            return;
        }
        break;
    case 0x13:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) {
            *(s32 *)((s8 *)arg0 + 0x24) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            *(u32 *)((s8 *)arg0 + 0x84) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x60) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x60)));
            *(u32 *)((s8 *)arg0 + 0x60) = 0U;
        }
        *(u32 *)((s8 *)arg0 + 0x80) = ((u32 (*)(void*, int))create_keyboard__17TWindowSubComCardFii)((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0x24)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x14U;
    case 0x14:
        if (is_keyboard_active__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x80))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x80))) != 0) {
            temp_r29 = ((s32 (*)(int))realloc_buffer__17TWindowSubComCardFPv)((int) (*(u32 *)((s8 *)arg0 + 0x80)));
            ((s32 (*)(int, int))TWindowSubComCard__sub_80225E80)((int) (temp_r29), (int) (((s32 (*)(void))get_shared_text_buffer)()));
            set_card_text__17TWindowSubComCardFii((int) (*(s32 *)((s8 *)arg0 + 0x24)), (int) (((s32 (*)(void))get_shared_text_buffer)()));
            ((s32 (*)(int))free__11TOBoss4RockFUi)((int) (temp_r29));
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        break;
    case 0x15:
        open__17TWindowOptionCtrlFPv((int) (*(u32 *)((s8 *)arg0 + 0x64)));
        *(u32 *)((s8 *)arg0 + 0x70) = confirm_and_free__17TWindowSubComCardFPv((void *) (arg0));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x16U;
    case 0x16:
        if (get_card_data__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xDU;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) == 0) {
                remove_card_at__17TWindowSubComCardFi(((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84))));
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xDU;
            return;
        }
        break;
    case 0x19:
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x1AU;
    case 0x1A:
        ((s32 (*)(int, int, void*))update_display_value__17TWindowSubComCardFUiUiPv)((int) (*(u32 *)((s8 *)arg0 + 0x84)), (int) (*(u32 *)((s8 *)arg0 + 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x1BU;
            return;
        }
        break;
    case 0x1B:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x84) = ((u32 (*)(void))send_cmd_133__17TWindowSubComCardFv)();
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) == 0U) {
            *(s32 *)((s8 *)arg0 + 0x24) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            *(u32 *)((s8 *)arg0 + 0x74) = ((u32 (*)(int))send_command__17TWindowSubComCardFi)((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        }
        ((s32 (*)(int))set_display_page__17TWindowSubComCardFi)((int) (*(u32 *)((s8 *)arg0 + 0x84)));
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x1CU;
    case 0x1C:
        ((s32 (*)(int, int, void*))update_display_value__17TWindowSubComCardFUiUiPv)((int) (*(u32 *)((s8 *)arg0 + 0x84)), (int) (*(u32 *)((s8 *)arg0 + 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            reset_selection__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            swap_cards__17TWindowSubComCardFii((int) (get_selected_index__20TWindowShortListCtrlFPv((int) (*(u32 *)((s8 *)arg0 + 0x84)))), (int) (((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84)))));
            reset_selection__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            TWindowSubComCardList__sub_80275360((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x19U;
            return;
        }
        break;
    case 0x1D:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x78) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x78)));
            *(u32 *)((s8 *)arg0 + 0x78) = 0U;
        }
        *(u32 *)((s8 *)arg0 + 0x68) = ((u32 (*)(void*))TWindowSubComCard__sub_80273004)((void *) (arg0));
        ((s32 (*)(s32, s32, s32, s32))forward_trade_action_default__16TObjCityMainWarpFPviii)((int) (*(u32 *)((s8 *)arg0 + 0x68)), (s32) (&lbl_805DD534), (int) (0x15), (int) (-1));
        ((s32 (*)(void*, int))rebuild_com_card_list__17TWindowSubComCardFii)((void *) (arg0), (int) (*(u32 *)((s8 *)arg0 + 0x68)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x1EU;
    case 0x1E:
        if (is_com_card_active() != 0) {
            ((s32 (*)(void*, int))rebuild_com_card_list__17TWindowSubComCardFii)((void *) (arg0), (int) (*(u32 *)((s8 *)arg0 + 0x68)));
        }
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x68))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x68))) != 0) {
            find_and_load_com_card__6TLobbyFUi(((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x68))));
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x1FU;
            return;
        }
        break;
    case 0x1F:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x78) == 0U) {
            var_r29 = ((s32 (*)(void))get_selected_guild_card_record)();
            temp_r30_2 = ((u32 (*)(int))__nw__7TObjectFUl)((int) (0x64));
            if (temp_r30_2 != 0U) {
                temp_r30_2 = TWindowUserSort__ct((int) (temp_r30_2), (int) (get_window_layout_position((int) (0x8A))), (int) (var_r29));
            }
            *(u32 *)((s8 *)arg0 + 0x78) = temp_r30_2;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x64) = ((s32 (*)(void *)) TWindowSubComCard__sub_8027346C)((void *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x20U;
    case 0x20:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x1DU;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            return;
        }
        break;
    case 0x21:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x78) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x78)));
            *(u32 *)((s8 *)arg0 + 0x78) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x60) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x60)));
            *(u32 *)((s8 *)arg0 + 0x60) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x80) = create_keyboard__19TWindowSubShortMailFv();
        }
        set_position__19TWindowSubShortMailFPvPv((int) (*(u32 *)((s8 *)arg0 + 0x80)), (int) (get_window_layout_position((int) (0xBB))));
        free_menu_object((int) (*(u32 *)((s8 *)arg0 + 0x80)));
        hide_window__19TWindowSubShortMailFPv((int) (*(u32 *)((s8 *)arg0 + 0x80)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x22U;
    case 0x22:
        if (is_keyboard_active__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x80))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x80))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x23U;
            return;
        }
        break;
    case 0x23:
        set_position__19TWindowSubShortMailFPvPv((int) (*(u32 *)((s8 *)arg0 + 0x80)), (int) (get_window_layout_position((int) (0xBC))));
        TWindowSubShortMail__sub_80131998((int) (*(u32 *)((s8 *)arg0 + 0x80)));
        *(u32 *)((s8 *)arg0 + 0x70) = open_confirm_prompt__19TWindowSubShortMailFPvi((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0x20)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x24U;
    case 0x24:
        if (get_card_data__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x21U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) == 0) {
                ((s32 (*)(void*))TWindowSubComCard__sub_802721D8)((void *) (arg0));
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x21U;
            return;
        }
        break;
    case 0x25:
        ((s32 (*)(void))get_selected_guild_card_record)();
        TLobby__sub_8024259C();
        fn_8024AB54((int) (*(s32 *)((s8 *)arg0 + 0x20)));
        *(s32 *)((s8 *)arg0 + 0x2C) = 0;
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x26U;
    case 0x26:
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x2C);
        *(s32 *)((s8 *)arg0 + 0x2C) = (s32) (temp_r4 + 1);
        if ((f32) temp_r4 > lbl_805DD538) {
            TWindowSubComCard__sub_8024AB98((int) (*(s32 *)((s8 *)arg0 + 0x20)));
            temp_r3_2 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x5C));
            ((VObj_18_204a81 *)(temp_r3_2))->m7();
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x4FU;
            return;
        }
        break;
    case 0x27:
    case 0x33:
        if (((u32 (*)(void))get_chr_select__17TWindowSubComCardFv)() == 0U) {
            send_choice_search_options_request__9TProtocolFv((int) (TLobby__protocol_instance));
        }
        if ((u8) *(u8 *)((s8 *)arg0 + 0x1C) == 0x27) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x28U;
        } else {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x34U;
        }
    case 0x28:
    case 0x34:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(controller_input_state) + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(controller_input_state) + 0x160), (int) (2)) != 0)) {
            play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
        }
        if (((u32 (*)(void))get_chr_select__17TWindowSubComCardFv)() != 0U) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x58) == 0U) {
                *(u32 *)((s8 *)arg0 + 0x58) = ((u32 (*)(void))get_chr_select__17TWindowSubComCardFv)();
                temp_r29_4 = ((s32 (*)(int))get_character_save_record)((int) (0xFFFF));
                TWindowSubComCard__sub_800778B4((void *) ((u8 *)(arg0) + 0x30), (int) (*(u32 *)((s8 *)arg0 + 0x58)));
                TWindowSubComCard__sub_800778B4((void *) (temp_r29_4 + 0x22EC), (int) (*(u32 *)((s8 *)arg0 + 0x58)));
            }
            if ((u8) *(u8 *)((s8 *)arg0 + 0x1C) == 0x28) {
                *(u8 *)((s8 *)arg0 + 0x1C) = 0x29U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x35U;
            return;
        }
        break;
    case 0x29:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x7C) = TWindowSubComCard__sub_80272DE0((void *) (arg0));
        }
        begin_scroll__17TWindowSubComCardFPvf((int) (*(u32 *)((s8 *)arg0 + 0x7C)), (f32) (lbl_805DD53C));
        clear_flag_and_release2__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x2AU;
    case 0x2A:
        if (get_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_open__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C))) != 0) {
            if (update_selected_entry__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C))) == 0) {
                *(u8 *)((s8 *)arg0 + 0x1C) = 0x2DU;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x2BU;
            return;
        }
        break;
    case 0x2B:
        TWindowSubComCard__sub_80249144((int) (*(u32 *)((s8 *)arg0 + 0x7C)));
        *(u32 *)((s8 *)arg0 + 0x64) = ((u32 (*)(void*, void*, int))create_option_list_window__17TWindowSubComCardFPvii)((void *) (arg0), (void *) ((u8 *)(arg0) + 0x30), (int) (update_selected_entry__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C)))));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x2CU;
    case 0x2C:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x29U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            ((s32 (*)(void*, void*, int, int))TWindowSubComCard__sub_80271F04)((void *) (arg0), (void *) ((u8 *)(arg0) + 0x30), (int) (update_selected_entry__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C)))), (int) (((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x64)))));
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x29U;
            return;
        }
        break;
    case 0x2D:
        release__17TWindowSubComCardFv();
        send_packet__6TLobbyFii((void *) (arg0), (void *) ((u8 *)(arg0) + 0x30));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x2EU;
    case 0x2E:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(controller_input_state) + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(controller_input_state) + 0x160), (int) (2)) != 0)) {
            play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x29U;
        }
        if (((u32 (*)(void))get_com_count__17TWindowSubComCardFv)() != 0U) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x2FU;
            return;
        }
        break;
    case 0x2F:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x7C)));
            *(u32 *)((s8 *)arg0 + 0x7C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x68) = TWindowSubComCard__sub_80272A98((void *) (arg0));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x6C) = ((u32 (*)(void*))open_mode4_window__17TWindowSubComCardFv)((void *) (arg0));
            *(s32 *)((s8 *)arg0 + 0x28) = -1;
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x68)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x30U;
    case 0x30:
        ((s32 (*)(void*, int))set_selected_card__17TWindowSubComCardFPvi)((void *) (arg0), (int) (((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x68)))));
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x68))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x68))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x31U;
            return;
        }
        break;
    case 0x31:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x6C)));
            *(u32 *)((s8 *)arg0 + 0x6C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) == 0U) {
            temp_r29_6 = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            ComList_8027375C *cl = (ComList_8027375C *) ((u32 (*)(void))get_com_count__17TWindowSubComCardFv)();
            ((s32 (*)(void*))load_selected_guild_card_record)(&cl->entries[temp_r29_6]);
            *(u32 *)((s8 *)arg0 + 0x64) = ((u32 (*)(void*))create_menu_window__17TWindowSubComCardFv)((void *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x32U;
    case 0x32:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x2FU;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            return;
        }
        break;
    case 0x35:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x7C) = ((u32 (*)(void*))create_entry_list_window__17TWindowSubComCardFPv)((void *) (arg0));
        }
        begin_scroll__17TWindowSubComCardFPvf((int) (*(u32 *)((s8 *)arg0 + 0x7C)), (f32) (lbl_805DD53C));
        clear_flag_and_release2__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x36U;
    case 0x36:
        if (get_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_open__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x37U;
            return;
        }
        break;
    case 0x37:
        TWindowSubComCard__sub_80249144((int) (*(u32 *)((s8 *)arg0 + 0x7C)));
        temp_r29_7 = ((s32 (*)(int))get_character_save_record)((int) (0xFFFF));
        *(u32 *)((s8 *)arg0 + 0x64) = ((u32 (*)(void*, void*, int))create_option_list_window__17TWindowSubComCardFPvii)((void *) (arg0), (void *) (temp_r29_7 + 0x22EC), (int) (update_selected_entry__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C)))));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x38U;
    case 0x38:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x35U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            temp_r29_8 = ((s32 (*)(int))get_character_save_record)((int) (0xFFFF));
            ((s32 (*)(void*, void*, int, int))TWindowSubComCard__sub_80271F04)((void *) (arg0), (void *) (temp_r29_8 + 0x22EC), (int) (update_selected_entry__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x7C)))), (int) (((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x64)))));
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x35U;
            return;
        }
        break;
    case 0x39:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x74)));
            *(u32 *)((s8 *)arg0 + 0x74) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            *(u32 *)((s8 *)arg0 + 0x84) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x64) = ((u32 (*)(void*))TWindowSubComCard__sub_802728CC)((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x3AU;
    case 0x3A:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            return;
        }
        break;
    case 0x3B:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x6C)));
            *(u32 *)((s8 *)arg0 + 0x6C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x84) = ((u32 (*)(void))init_layout__17TWindowSubComCardFv)();
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) == 0U) {
            *(s32 *)((s8 *)arg0 + 0x24) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            *(u32 *)((s8 *)arg0 + 0x74) = ((u32 (*)(int))apply_selection__17TWindowSubComCardFi)((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x3CU;
    case 0x3C:
        ((s32 (*)(int, int, void*))update_selection__17TWindowSubComCardFiii)((int) (*(u32 *)((s8 *)arg0 + 0x84)), (int) (*(u32 *)((s8 *)arg0 + 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x39U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x3DU;
            return;
        }
        break;
    case 0x3D:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x74)));
            *(u32 *)((s8 *)arg0 + 0x74) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x70) = TWindowSubComCard__sub_802730E0((u8 *)((void *) (arg0)));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x3EU;
    case 0x3E:
        if (get_card_data__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x3BU;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) == 0) {
                remove_entry__17TWindowSubComCardFi(((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84))));
                *(u8 *)((s8 *)arg0 + 0x1D) = (u8) (*(u8 *)((s8 *)arg0 + 0x1D) | 2);
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x3BU;
            return;
        }
        break;
    case 0x3F:
        *(u32 *)((s8 *)arg0 + 0x68) = ((u32 (*)(void))create_card_action_window__17TWindowSubComCardFv)();
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x40U;
    case 0x40:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x68))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x39U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x68))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            return;
        }
        break;
    case 0x41:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x84) = ((u32 (*)(void))send_cmd_133__17TWindowSubComCardFv)();
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) == 0U) {
            *(s32 *)((s8 *)arg0 + 0x24) = ((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84)));
            *(u32 *)((s8 *)arg0 + 0x74) = ((u32 (*)(int))send_command__17TWindowSubComCardFi)((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x42U;
    case 0x42:
        ((s32 (*)(int, int, void*))update_display_value__17TWindowSubComCardFUiUiPv)((int) (*(u32 *)((s8 *)arg0 + 0x84)), (int) (*(u32 *)((s8 *)arg0 + 0x74)), (void *) ((u8 *)(arg0) + 0x24));
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x43U;
            return;
        }
        break;
    case 0x43:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x74)));
            *(u32 *)((s8 *)arg0 + 0x74) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x70) = open_yesno_dialog__17TWindowSubComCardFPv((void *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x44U;
    case 0x44:
        if (get_card_data__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x41U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) == 0) {
                update_press__17TWindowSubComCardFv(((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x84))));
                *(u8 *)((s8 *)arg0 + 0x1D) = (u8) (*(u8 *)((s8 *)arg0 + 0x1D) | 2);
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x41U;
            return;
        }
        break;
    case 0x45:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
    case 0x46:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x64) = ((u32 (*)(void*))create_player_select_window__17TWindowSubComCardFv)((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x47U;
    case 0x47:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x48U;
            return;
        }
        break;
    case 0x48:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x70) = open_yesno_dialog__17TWindowSubComCardFPv((void *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x49U;
    case 0x49:
        if (get_card_data__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x46U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) == 0) {
                init_and_press_b__17TWindowSubComCardFi(((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x64))));
                *(u8 *)((s8 *)arg0 + 0x1D) = (u8) (*(u8 *)((s8 *)arg0 + 0x1D) | 2);
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x46U;
            return;
        }
        break;
    case 0x4A:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x64)));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
    case 0x4B:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x68)));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x64) = TWindowSubComCard__sub_80272640((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x4CU;
    case 0x4C:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x64))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x4DU;
            return;
        }
        break;
    case 0x4D:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x70) = open_yesno_dialog__17TWindowSubComCardFPv((void *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x4EU;
    case 0x4E:
        if (get_card_data__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x4BU;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x70))) == 0) {
                init_and_press_a__17TWindowSubComCardFi(((s32 (*)(int))get_selected_menu_value)((int) (*(u32 *)((s8 *)arg0 + 0x64))));
                *(u8 *)((s8 *)arg0 + 0x1D) = (u8) (*(u8 *)((s8 *)arg0 + 0x1D) | 2);
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x4BU;
        }
        break;
    case 0x4F:
        break;
    }
}

}

#include "types.h"

extern "C" {

void *__dt__17TWindowSubComCardFv(void *arg0, s16 arg1);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);

extern void* __vt__17TWindowSubComCard[];

void *__dt__17TWindowSubComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((s8 *)arg0 + 0x18) = (void *) __vt__17TWindowSubComCard;
        ((s32 (*)(void*))handle_close_flag__17TWindowSubComCardFPv)(arg0);
        ((s32 (*)(void*))send_state_if_dirty__17TWindowSubComCardFPv)(arg0);
        if ((u8) *(u8 *)((s8 *)arg0 + 0x1C) == 0x26) {
            ((s32 (*)(s32))TWindowSubComCard__sub_8024AB98)(*(s32 *)((s8 *)arg0 + 0x20));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
            ((s32 (*)(void*))TWindow__close)(*(void **)((s8 *)arg0 + 0x7C));
            *(u32 *)((s8 *)arg0 + 0x7C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) {
            ((s32 (*)(void*))TWindow__close)(*(void **)((s8 *)arg0 + 0x84));
            *(u32 *)((s8 *)arg0 + 0x84) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x80));
            *(u32 *)((s8 *)arg0 + 0x80) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            ((s32 (*)(void*))TWindow__close)(*(void **)((s8 *)arg0 + 0x68));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            ((s32 (*)(void*))TWindow__close)(*(void **)((s8 *)arg0 + 0x64));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x78) != 0U) {
            ((s32 (*)(void*))TWindow__close)(*(void **)((s8 *)arg0 + 0x78));
            *(u32 *)((s8 *)arg0 + 0x78) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
            ((s32 (*)(void*))TWindow__close)(*(void **)((s8 *)arg0 + 0x74));
            *(u32 *)((s8 *)arg0 + 0x74) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) != 0U) {
            ((s32 (*)(void*))TWindow__close)(*(void **)((s8 *)arg0 + 0x6C));
            *(u32 *)((s8 *)arg0 + 0x6C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x60) != 0U) {
            ((s32 (*)(void*))TWindow__close)(*(void **)((s8 *)arg0 + 0x60));
            *(u32 *)((s8 *)arg0 + 0x60) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"

extern "C" {

void *TWindowSubComCard__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void TWindowSubComCard__sub_80077980(void *);

extern void *TWindowSubComCard__class_name;

void *TWindowSubComCard__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__17TWindowSubComCard;
    *(void **)((s8 *)arg0 + 0x0) = TWindowSubComCard__class_name;
    *(void **)((s8 *)arg0 + 0x5C) = arg1;
    *(void **)((s8 *)arg0 + 0x20) = arg2;
    *(u32 *)((s8 *)arg0 + 0x60) = 0;
    *(u32 *)((s8 *)arg0 + 0x64) = 0;
    *(u32 *)((s8 *)arg0 + 0x74) = 0;
    *(u32 *)((s8 *)arg0 + 0x78) = 0;
    *(u32 *)((s8 *)arg0 + 0x68) = 0;
    *(u32 *)((s8 *)arg0 + 0x6C) = 0;
    *(u32 *)((s8 *)arg0 + 0x70) = 0;
    *(u32 *)((s8 *)arg0 + 0x80) = 0;
    *(u32 *)((s8 *)arg0 + 0x84) = 0;
    *(u32 *)((s8 *)arg0 + 0x7C) = 0;
    *(u32 *)((s8 *)arg0 + 0x58) = 0;
    *(u8 *)((s8 *)arg0 + 0x1D) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = -1;
    TWindowSubComCard__sub_80077980((void *)((char *)arg0 + 48));
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}

#include "types.h"

struct RecoveredGlobal_80275228_lbl_80517EE0 {
    s32 value;
    u8 remaining[0xB8];
};

extern "C" {
extern RecoveredGlobal_80275228_lbl_80517EE0 selected_guild_card_record;
s32 *get_selected_guild_card_record(void);
}

extern "C" {

void* TWindowSubComCard__sub_8027523C(void* p);
void destroy_keyboard__17TWindowSubComCardFPv(void* p);
void* get_card_data_ptr__17TWindowSubComCardFPv(void* p);
s16 get_field_72__17TWindowSubComCardFPv(void* p);
void* get_name__17TWindowSubComCardFPv(void* p);
void set_com_param__17TWindowSubComCardFii(s32 arg0, s32 arg1);
void set_display_page__17TWindowSubComCardFi(s32 arg0);
void set_flag_10__17TWindowSubComCardFPv(void* p);
void set_page__17TWindowSubComCardFPvs(void* p, s16 v);
int fn_80247ED8(void*);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);

void set_com_param__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0x12, 0xFFFBFFFF);
}

typedef char RecoveredGlobal_80275228_lbl_80517EE0_size[sizeof(RecoveredGlobal_80275228_lbl_80517EE0) == 0xBC ? 1 : -1];
s32 *get_selected_guild_card_record(void) {
    return &selected_guild_card_record.value;
}

void* get_card_data_ptr__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x3b; }
void* TWindowSubComCard__sub_8027523C(void* p) { return (char*)p + 0x2a; }
void* get_name__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x19; }
void* get_sub_obj__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x8; }
void destroy_keyboard__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80247ED8(m); }
s16 get_field_72__17TWindowSubComCardFPv(void* p) { return *(s16*)((char*)p + 0x72); }
void set_page__17TWindowSubComCardFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x7a) = v; }
void set_flag_10__17TWindowSubComCardFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

#include "types.h"

extern "C" {

void set_display_page__17TWindowSubComCardFi(s32 arg0) {
    set_page__17TWindowSubComCardFPvs((void*)((void *) (arg0)), (s16)((int) (((s16 (*)(void))get_selected_menu_value)())));
}

}

}
