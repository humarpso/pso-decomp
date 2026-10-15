#include "types.h"
#include "pso/misc/TWindowSubSymbolChat.h"

struct RecoveredGlobal_8028379C_lbl_804FF968 {
    s32 value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_8028351C___vt__20TWindowSubSymbolChat { s32 value; u8 remaining[0x14]; };

struct Win_80282600 { u8 pad[0x20]; s32 sel; };

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

extern "C" {
extern RecoveredGlobal_8028379C_lbl_804FF968 symbol_chat_receive_buffer;
s32 *TWindowSubSymbolChat__sub_8028379C(void);
s32 __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv(int);
s32 set_flag_bit9__20TWindowSubSymbolChatFl(int, int);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(int);
s32 update_selected_item__17TWindowOptionCtrlFv(int);
s32 TWindowCtrlMain__sub_8024CE58();
s32 clear_flag_bit2__20TWindowSubSymbolChatFPl(int);
s32 close__17TWindowSubComCardFv(int);
extern s32 __vt__20TWindowSubSymbolChat[];
extern void *TWindowSubSymbolChat__instance;
u8 *__dt__20TWindowSubSymbolChatFv(u8 *arg0, s16 arg1);
s32 __nw__7TObjectFUl(int);
s32 TWindowChatSymbol__ct(int, void *, void *);
s32 get_window_layout_position(s32);
extern s32 lbl_8044FB20[];
s32 get_symbol_chat_data__20TWindowSubSymbolChatFv(s32);
s32 is_symbol_chat_preset_in_use(s32);
s32 get_symbol_chat_preset(s32);
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 set_flag70_bit10__16TObjCityMainWarpFv(s32);
void set_selected_index__17TWindowSubComCardFs(s32, s16);
s32 align_menu_entry_positions(s32);
s32 set_scroll_target__17TWindowSubComCardFff(s32, f32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 draw_card_icon__17TWindowSubComCardFll(s32, s32, s32);
s32 get_window_layout_position(s32);
extern const f32 lbl_805DD748;
extern const f32 lbl_805DD74C;
s32 queue_destruction__7TObjectFv(int);
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPv(void *, int);
s32 is_visible__17TWindowSubComCardFv(int);
s32 get_status_flag__17TWindowSubComCardFv(int);
s32 set_entry_name__20TWindowSubSymbolChatFPv(int, int);
s32 set_flag_bit9__20TWindowSubSymbolChatFl(int, int);
s32 set_symbol_index__20TWindowSubSymbolChatFl(int, int);
s32 set_symbol_flags__20TWindowSubSymbolChatFll(int, int, int);
s32 refresh_parts__20TWindowSubSymbolChatFv();
s32 update_symbol_chat_result__20TWindowSubSymbolChatFv(int);
s32 update_selected_symbol__20TWindowSubSymbolChatFv(int);
s32 play_symbol_sound__20TWindowSubSymbolChatFl();
s32 get_symbol_chat_preset(s32);
s32 clear_entries__20TWindowSubSymbolChatFv(int);
u32 get_instance__20TWindowSubSymbolChatFv();
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 realloc_buffer__17TWindowSubComCardFv(int);
s32 is_keyboard_active__17TWindowSubComCardFv(int);
s32 update_keyboard__17TWindowSubComCardFv(int);
s32 get_flag_bit2__6TLobbyFv(int);
s32 mem_free(int);
s32 clear_flag_and_release__17TWindowSubComCardFv(int);
s32 __nw__7TObjectFUl(int);
s32 TWindow__close(int);
s32 update_visibility__20TWindowSubSymbolChatFPv(void *);
s32 set_selection__20TWindowSubSymbolChatFPvUi(void *, int);
s32 set_from_key__20TWindowSubSymbolChatFii(void *, int);
s32 update_selected_item__17TWindowOptionCtrlFv(int);
s32 get_selected_menu_value(int);
s32 clear_transition_flag__17TWindowSubComCardFv(int);
s32 open__17TWindowOptionCtrlFv(int);
s32 get_window_layout_position(s32);
s32 update_sub_window__20TWindowSubSymbolChatFv(void *);
s32 update_state__20TWindowSubSymbolChatFv(void *);
s32 draw_selected_entry__20TWindowSubSymbolChatFv(void *);
s32 TWindowSubSymbolChat__sub_80281C60(void *);
s32 TWindowSubSymbolChat__sub_80281CC4(void *);
u32 create_keyboard_control__20TWindowSubSymbolChatFv(void *);
u32 create_confirm_window__20TWindowSubSymbolChatFv(void *);
u32 open_confirm_prompt__20TWindowSubSymbolChatFv();
u32 create_menu__20TWindowSubSymbolChatFv(void *);
u32 create_menu__20TWindowSubSymbolChatFPv(void *);
u32 create_parts_set__20TWindowSubSymbolChatFv(void *);
u32 create_parts__20TWindowSubSymbolChatFv(void *);
s32 open_menu__20TWindowSubSymbolChatFll(void *, int);
u32 TWindowSubSymbolChat__sub_8028233C(void *);
s32 *TWindowSubSymbolChat__sub_8028379C(void);
s32 set_flag_bit1__20TWindowSubSymbolChatFPl(int);
s32 commit__20TWindowSubSymbolChatFPl(int, int);
s32 set_flag_bit2__20TWindowSubSymbolChatFPl(int);
s32 clear_flag_bit2__20TWindowSubSymbolChatFPl(int);
s32 is_active__20TWindowSubSymbolChatFv(int);
s32 TWindowSubSymbolChat__sub_80283900(int);
s32 clear_flag60_bit2__20TWindowSubSymbolChatFv(int);
s32 clear_flag60_bit4__20TWindowSubSymbolChatFv(int);
s32 set_pos_and_flag__20TWindowSubSymbolChatFll(int, void *, void *);
s32 TWindowSubSymbolChat__sub_80283944(int);
s32 set_flag60_bit1__20TWindowSubSymbolChatFv(int);
s32 set_flag60_bit2__20TWindowSubSymbolChatFv(int);
s32 TWindowSubSymbolChat__sub_80283974(int);
s32 TWindowSubSymbolChat__sub_80283980(int);
s32 is_open__20TWindowSubSymbolChatFv(int);
s32 TWindowSubSymbolChat__sub_80283998(int);
s32 fn_802839A4(int);
u32 TWindowSubSymbolChatFaceType__ct(int, int, void *);
u32 TWindowSubSymbolChatHelp__ct(u32, void *, void *);
s16 calc_symbol_index__20TWindowSubSymbolChatFPv(int);
s32 select_index_and_scroll__20TWindowSubSymbolChatFl(int, int);
s32 update_height__20TWindowSubSymbolChatFv(int);
s32 open__20TWindowSubSymbolChatFl(int, void *);
s32 fn_80285A28(int, void *);
s32 select_symbol_chat_record__20TWindowSubSymbolChatFPvPvPv(int, void *, void *);
s32 set_selection_and_refresh__20TWindowSubSymbolChatFl(int, void *);
s32 init_symbol_layout__20TWindowSubSymbolChatFPvPv(int, void *);
s32 close__17TWindowSubComCardFv(int);
s32 get_slot_or_neg1__17TWindowSubComCardFv(int);
s32 get_card_data__17TWindowSubComCardFv(int);
s32 is_child_visible__17TWindowSubComCardFv(int);
extern s8 TWindowSubSymbolChat__data_805D6494;
extern s32 TWindowSubSymbolChat__data_805D6498;
extern s32 TWindowSubSymbolChat__data_805D649C;
extern s32 TWindowSubSymbolChat__help_window;
}

extern "C" {

void *TWindowSubSymbolChat__ct(void *arg0, s32 arg1, s32 arg2);
s32 TWindowSubComCard__sub_80265680(s32, s16);
s32 align_menu_entry_positions(s32);
s32 update_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 get_window_layout_position(s32);
s32 __ct__7TObjectFP7TObject();
s32 draw_card_icon__17TWindowSubComCardFll(s32, s32, s32);
s32 draw_text_gray__17TWindowSubComCardFllll(s32, s32, s32, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s8 get_global_4e54__20TWindowSubSymbolChatFv();
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 is_initialized__20TWindowSubSymbolChatFv(s32);
s32 set_flag70_bit10__16TObjCityMainWarpFv(s32);
s32 set_scroll_target__17TWindowSubComCardFff(s32, f32, f32);
s32 update_display__20TWindowSubSymbolChatFl(s32 *);

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

s32 TWindowSubSymbolChat::open_edit_menu() {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFll(get_window_layout_position(0x79), 3, get_message_10__20TWindowSubStatusDispFl(0xA8));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xB3), 6, 8);
    if (is_initialized__20TWindowSubSymbolChatFv(*(s32 *)((s8 *)this + 0x28)) != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xB4), 6, 0x1E);
    } else {
        draw_text_gray__17TWindowSubComCardFllll(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xB4), 6, 0x1E);
    }
    if (get_global_4e54__20TWindowSubSymbolChatFv() > 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xB5), 6, 0x20);
    } else {
        draw_text_gray__17TWindowSubComCardFllll(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xB5), 6, 0x20);
    }
    set_flag70_bit10__16TObjCityMainWarpFv(temp_r31);
    set_scroll_target__17TWindowSubComCardFff(temp_r31, lbl_805DD73C, lbl_805DD740);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD73C;

s32 TWindowSubSymbolChat::open_main_menu(void * _w0) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFll(get_window_layout_position(0x78), 6, get_message_10__20TWindowSubStatusDispFl(0x1D));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xA8), 6, 6);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xA9), 6, 0xA);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xAA), 6, 0x14);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xAB), 6, 0x22);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xAC), 6, 0x26);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0xAD), 6, 0x28);
    set_flag70_bit10__16TObjCityMainWarpFv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD73C);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

void TWindowSubSymbolChat::apply_symbol() {
    TWindowSubComCard__sub_80265680(*(s32 *)((s8 *)this + 0x38), (s16) *(s32 *)((s8 *)this + 0x20));
}

s32 TWindowSubSymbolChat::create_symbol_list_card() {
    Win_80282600 *arg0 = (Win_80282600 *)this;
    s32 i;
    s32 sym;
    s32 card;
    s32 data;
    card = draw_card_icon__17TWindowSubComCardFll(get_window_layout_position(0x77), 0xC, get_message_10__20TWindowSubStatusDispFl(0x31));
    for (i = 0; i < 0xC; i++) {
        sym = get_symbol_chat_preset(i);
        data = get_symbol_chat_data__20TWindowSubSymbolChatFv(sym);
        if (is_symbol_chat_preset_in_use(sym) != 0) {
            forward_trade_action_default__16TObjCityMainWarpFPviii(card, data, 0x66, i);
        } else {
            forward_trade_action_default__16TObjCityMainWarpFPviii(card, data, 0x46, i);
        }
    }
    set_flag70_bit10__16TObjCityMainWarpFv(card);
    set_scroll_target__17TWindowSubComCardFff(card, lbl_805DD748, lbl_805DD74C);
    align_menu_entry_positions(card);
    set_selected_index__17TWindowSubComCardFs(card, arg0->sel);
    return card;
}

s32 TWindowSubSymbolChat::create_chat_symbol_window(s32 arg0, s32 arg1) {
    s32 var_r31;
    var_r31 = __nw__7TObjectFUl((int) (0x68));
    if (var_r31 != 0) {
        var_r31 = TWindowChatSymbol__ct((int) (var_r31), (void *) (((s32)get_window_layout_position((s32)((void *) (arg1 + 0x7B))))), (void *) (lbl_8044FB20));
    }
    return var_r31;
}

void TWindowSubSymbolChat::render() {  }

extern s32 close_child__20TWindowSubSymbolChatFv[];
extern s32 __vt__20TWindowSubSymbolChat[];
extern s32 TWindowSubSymbolChat__class_name;
extern void *TWindowSubSymbolChat__instance;
extern s8 TWindowSubSymbolChat__data_805D6494;
extern s32 TWindowSubSymbolChat__data_805D6498;
extern s32 TWindowSubSymbolChat__data_805D649C;

void TWindowSubSymbolChat::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3_2;
    u32 var_r0;
    u32 var_r0_2;
    u32 var_r0_3;
    u32 var_r0_4;
    u32 var_r30;
    u8 temp_r0;
    u8 *temp_r3;
    u8 *temp_r4;
    u8 *temp_r5;
    temp_r0 = *(u8 *)((s8 *)arg0 + 0x1C);
    switch (temp_r0) {
    case 0:
    case 1:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U) {
            clear_flag_bit2__20TWindowSubSymbolChatFPl((int)(*(void **)((s8 *)arg0 + 0x28)));
            *(u32 *)((s8 *)arg0 + 0x28) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            close__17TWindowSubComCardFv((int)(*(void **)((s8 *)arg0 + 0x40)));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        if ((void *) *(u8 **)((s8 *)arg0 + 0x30) == NULL) {
            *(u8 **)((s8 *)arg0 + 0x30) = ((u8 *)TWindowSubSymbolChat::create_chat_symbol_window((s32)(arg0), (s32)(0)));
        }
        update_visibility__20TWindowSubSymbolChatFPv((void *) (*(u8 **)((s8 *)arg0 + 0x30)));
        *(u32 *)((s8 *)arg0 + 0x38) = ((u32)create_symbol_list_card());
        *(u8 *)((s8 *)arg0 + 0x1C) = 2U;
    case 2:
        set_from_key__20TWindowSubSymbolChatFii((void *) (*(u8 **)((s8 *)arg0 + 0x30)), (int) (get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x38)))));
        if (get_status_flag__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x2C));
            ((VObj_18_204a81 *)(temp_r3))->m7();
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x2AU;
            return;
        }
        if (is_visible__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(s32 *)((s8 *)arg0 + 0x20) = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x38)));
            update_symbol_chat_result__20TWindowSubSymbolChatFv((int) (*(s32 *)((s8 *)arg0 + 0x20)));
            *(u32 *)((s8 *)arg0 + 0x28) = get_instance__20TWindowSubSymbolChatFv();
            update_selected_symbol__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x28)));
            set_flag_bit2__20TWindowSubSymbolChatFPl((int) (*(u32 *)((s8 *)arg0 + 0x28)));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (*(u8 **)((s8 *)arg0 + 0x30)));
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
            return;
        }
        break;
    case 3:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
    case 4:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x58) != 0U) {
            queue_destruction__7TObjectFv((int)(*(void **)((s8 *)arg0 + 0x58)));
            *(u32 *)((s8 *)arg0 + 0x58) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x44) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x44)));
            *(u32 *)((s8 *)arg0 + 0x44) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            close__17TWindowSubComCardFv((int)(*(void **)((s8 *)arg0 + 0x40)));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x54)));
            *(u32 *)((s8 *)arg0 + 0x54) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x48) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x48)));
            *(u32 *)((s8 *)arg0 + 0x48) = 0U;
        }
        if ((void *) *(u8 **)((s8 *)arg0 + 0x34) != NULL) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x34)));
            *(u8 **)((s8 *)arg0 + 0x34) = NULL;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x38)));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        if ((void *) *(u8 **)((s8 *)arg0 + 0x30) == NULL) {
            *(u8 **)((s8 *)arg0 + 0x30) = ((u8 *)TWindowSubSymbolChat::create_chat_symbol_window((s32)(arg0), (s32)(0)));
            set_selection__20TWindowSubSymbolChatFPvUi((void *) (*(u8 **)((s8 *)arg0 + 0x30)), (int) (*(u32 *)((s8 *)arg0 + 0x28)));
        }
        temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x30));
        copy_vec2__28TWindowSubSymbolChatPartsSetFPv((void *) ((u8 *)(*(u8 **)((s8 *)arg0 + 0x30)) + 0x30), (int) (((s32)get_window_layout_position((s32)((int) (0x7B))))));
        *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x30)) + 0x50) = 6;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x3C) = ((u32)TWindowSubSymbolChat::open_main_menu((void *)((void *) (arg0))));
        }
        clear_flag_and_release__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
        clear_transition_flag__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 5U;
    case 5:
        if (get_status_flag__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x3C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x3C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
            return;
        }
        break;
    case 6:
        open__17TWindowOptionCtrlFv((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x54)));
            *(u32 *)((s8 *)arg0 + 0x54) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x48) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x48)));
            *(u32 *)((s8 *)arg0 + 0x48) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x38) = ((u32)open_edit_menu());
        }
        clear_flag_and_release__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 7U;
    case 7:
        update_sub_window__20TWindowSubSymbolChatFv((void *) (arg0));
        if (get_status_flag__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x38)));
            return;
        }
        break;
    case 8:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x48) == 0U) {
            var_r30 = ((u32)__nw__7TObjectFUl((int) (0x6C)));
            if (var_r30 != 0U) {
                var_r30 = TWindowSubSymbolChatFaceType__ct((int) (var_r30), (int) (((s32)get_window_layout_position((s32)((int) (0x7D))))), (void *) (&TWindowSubSymbolChat__data_805D6494));
            }
            *(u32 *)((s8 *)arg0 + 0x48) = var_r30;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) == 0U) {
            var_r0 = ((u32)__nw__7TObjectFUl((int) (0x74)));
            if (var_r0 != 0U) {
                var_r0 = TWindowSubSymbolChatHelp__ct(var_r0, (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__help_window));
            }
            *(u32 *)((s8 *)arg0 + 0x54) = var_r0;
        }
        set_flag60_bit2__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x54)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 9U;
    case 9:
        if (TWindowSubSymbolChat__sub_80283998((int) (*(u32 *)((s8 *)arg0 + 0x48))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 6U;
            return;
        }
        if (is_open__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x48))) != 0) {
            set_symbol_flags__20TWindowSubSymbolChatFll((int) (*(u32 *)((s8 *)arg0 + 0x28)), (int) (fn_802839A4((int) (*(u32 *)((s8 *)arg0 + 0x48)))), (int) (TWindowSubSymbolChat__data_805D6494));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (*(u8 **)((s8 *)arg0 + 0x30)));
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
            return;
        }
        break;
    case 10:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x50)));
            *(u32 *)((s8 *)arg0 + 0x50) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x54)));
            *(u32 *)((s8 *)arg0 + 0x54) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        open__17TWindowOptionCtrlFv((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x38) = TWindowSubSymbolChat__sub_8028233C((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xBU;
    case 11:
        if (get_status_flag__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(s16 *)((s8 *)arg0 + 0x1E) = 0;
            *(u8 *)((s8 *)arg0 + 0x1C) = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x38)));
            return;
        }
        break;
    case 12:
        TWindowSubSymbolChat__help_window = 0;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x50)));
            *(u32 *)((s8 *)arg0 + 0x50) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x4C) = create_parts__20TWindowSubSymbolChatFv((void *) (arg0));
            fn_80285A28((int) (*(u32 *)((s8 *)arg0 + 0x4C)), (void *) (&TWindowSubSymbolChat__help_window));
        }
        select_index_and_scroll__20TWindowSubSymbolChatFl((int) (*(u32 *)((s8 *)arg0 + 0x4C)), (int) (*(s16 *)((s8 *)arg0 + 0x1E)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) == 0U) {
            var_r0_2 = ((u32)__nw__7TObjectFUl((int) (0x74)));
            if (var_r0_2 != 0U) {
                var_r0_2 = TWindowSubSymbolChatHelp__ct(var_r0_2, (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__help_window));
            }
            *(u32 *)((s8 *)arg0 + 0x54) = var_r0_2;
        }
        if (refresh_parts__20TWindowSubSymbolChatFv() > 1) {
            set_flag60_bit1__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x54)));
        } else {
            TWindowSubSymbolChat__sub_80283944((int) (*(u32 *)((s8 *)arg0 + 0x54)));
        }
        set_pos_and_flag__20TWindowSubSymbolChatFll((int) (*(u32 *)((s8 *)arg0 + 0x54)), (void *) (&TWindowSubSymbolChat__data_805D6498), (void *) (&TWindowSubSymbolChat__data_805D649C));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xDU;
    case 13:
        if (TWindowSubSymbolChat__sub_80283980((int) (*(u32 *)((s8 *)arg0 + 0x4C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xAU;
            return;
        }
        if (TWindowSubSymbolChat__sub_80283974((int) (*(u32 *)((s8 *)arg0 + 0x4C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xEU;
            return;
        }
        break;
    case 14:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            *(s16 *)((s8 *)arg0 + 0x1E) = calc_symbol_index__20TWindowSubSymbolChatFPv((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x50) = create_parts_set__20TWindowSubSymbolChatFv((void *) (arg0));
            init_symbol_layout__20TWindowSubSymbolChatFPvPv((int) (*(u32 *)((s8 *)arg0 + 0x50)), (void *) (&TWindowSubSymbolChat__help_window));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xFU;
    case 15:
        if (TWindowSubSymbolChat__sub_80283900((int) (*(u32 *)((s8 *)arg0 + 0x50))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xCU;
            return;
        }
        if (is_active__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x50))) != 0) {
            TWindowSubSymbolChat__sub_80281CC4((void *) (arg0));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (*(u8 **)((s8 *)arg0 + 0x30)));
            if (refresh_parts__20TWindowSubSymbolChatFv() > 0) {
                *(u8 *)((s8 *)arg0 + 0x1C) = 0xCU;
                return;
            }
            open_menu__20TWindowSubSymbolChatFll((void *) (arg0), (int) (*(u32 *)((s8 *)arg0 + 0x38)));
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xAU;
            return;
        }
        break;
    case 16:
        TWindowSubSymbolChat__help_window = 0;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x50)));
            *(u32 *)((s8 *)arg0 + 0x50) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x4C) = create_parts__20TWindowSubSymbolChatFv((void *) (arg0));
            open__20TWindowSubSymbolChatFl((int) (*(u32 *)((s8 *)arg0 + 0x4C)), (void *) (&TWindowSubSymbolChat__data_805D6494));
        }
        select_index_and_scroll__20TWindowSubSymbolChatFl((int) (*(u32 *)((s8 *)arg0 + 0x4C)), (int) (*(s16 *)((s8 *)arg0 + 0x1E)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) == 0U) {
            var_r0_3 = ((u32)__nw__7TObjectFUl((int) (0x74)));
            if (var_r0_3 != 0U) {
                var_r0_3 = TWindowSubSymbolChatHelp__ct(var_r0_3, (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__help_window));
            }
            *(u32 *)((s8 *)arg0 + 0x54) = var_r0_3;
        }
        set_flag60_bit2__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x54)));
        set_pos_and_flag__20TWindowSubSymbolChatFll((int) (*(u32 *)((s8 *)arg0 + 0x54)), (void *) (&TWindowSubSymbolChat__data_805D6498), (void *) (&TWindowSubSymbolChat__data_805D649C));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x11U;
    case 17:
        if (TWindowSubSymbolChat__sub_80283980((int) (*(u32 *)((s8 *)arg0 + 0x4C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xAU;
            return;
        }
        if (TWindowSubSymbolChat__sub_80283974((int) (*(u32 *)((s8 *)arg0 + 0x4C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x12U;
            return;
        }
        break;
    case 18:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            *(s16 *)((s8 *)arg0 + 0x1E) = calc_symbol_index__20TWindowSubSymbolChatFPv((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x50) = create_parts_set__20TWindowSubSymbolChatFv((void *) (arg0));
            set_selection_and_refresh__20TWindowSubSymbolChatFl((int) (*(u32 *)((s8 *)arg0 + 0x50)), (void *) (&TWindowSubSymbolChat__data_805D6494));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x13U;
    case 19:
        if (TWindowSubSymbolChat__sub_80283900((int) (*(u32 *)((s8 *)arg0 + 0x50))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x10U;
            return;
        }
        if (is_active__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x50))) != 0) {
            TWindowSubSymbolChat__sub_80281C60((void *) (arg0));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (*(u8 **)((s8 *)arg0 + 0x30)));
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x10U;
            return;
        }
        break;
    case 20:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x54)));
            *(u32 *)((s8 *)arg0 + 0x54) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        open__17TWindowOptionCtrlFv((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x38) = create_menu__20TWindowSubSymbolChatFPv((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x15U;
    case 21:
        if (get_status_flag__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(s16 *)((s8 *)arg0 + 0x1E) = 0;
            *(u8 *)((s8 *)arg0 + 0x1C) = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x38)));
            return;
        }
        break;
    case 22:
    case 26:
        TWindowSubSymbolChat__help_window = 0;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x50)));
            *(u32 *)((s8 *)arg0 + 0x50) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x4C) = create_parts__20TWindowSubSymbolChatFv((void *) (arg0));
            update_height__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
        }
        select_index_and_scroll__20TWindowSubSymbolChatFl((int) (*(u32 *)((s8 *)arg0 + 0x4C)), (int) (*(s16 *)((s8 *)arg0 + 0x1E)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) == 0U) {
            var_r0_4 = ((u32)__nw__7TObjectFUl((int) (0x74)));
            if (var_r0_4 != 0U) {
                var_r0_4 = TWindowSubSymbolChatHelp__ct(var_r0_4, (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__help_window));
            }
            *(u32 *)((s8 *)arg0 + 0x54) = var_r0_4;
        }
        clear_flag60_bit4__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x54)));
        clear_flag60_bit2__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x54)));
        TWindowSubSymbolChat__sub_80283944((int) (*(u32 *)((s8 *)arg0 + 0x54)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x17U;
    case 23:
    case 27:
        if (TWindowSubSymbolChat__sub_80283980((int) (*(u32 *)((s8 *)arg0 + 0x4C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x14U;
            return;
        }
        if (TWindowSubSymbolChat__sub_80283974((int) (*(u32 *)((s8 *)arg0 + 0x4C))) != 0) {
            update_state__20TWindowSubSymbolChatFv((void *) (arg0));
            return;
        }
        break;
    case 24:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            *(s16 *)((s8 *)arg0 + 0x1E) = calc_symbol_index__20TWindowSubSymbolChatFPv((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x4C)));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x50) = create_parts_set__20TWindowSubSymbolChatFv((void *) (arg0));
        }
        if (select_symbol_chat_record__20TWindowSubSymbolChatFPvPvPv((int) (*(u32 *)((s8 *)arg0 + 0x50)), (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__help_window)) != 0) {
            set_flag60_bit2__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x54)));
        } else if (refresh_parts__20TWindowSubSymbolChatFv() > 0) {
            set_flag60_bit1__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x54)));
        }
        set_pos_and_flag__20TWindowSubSymbolChatFll((int) (*(u32 *)((s8 *)arg0 + 0x54)), (void *) (&TWindowSubSymbolChat__data_805D6498), (void *) (&TWindowSubSymbolChat__data_805D649C));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x19U;
    case 25:
        if (TWindowSubSymbolChat__sub_80283900((int) (*(u32 *)((s8 *)arg0 + 0x50))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x16U;
            return;
        }
        if (is_active__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x50))) != 0) {
            draw_selected_entry__20TWindowSubSymbolChatFv((void *) (arg0));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (*(u8 **)((s8 *)arg0 + 0x30)));
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x16U;
            return;
        }
        break;
    case 28:
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x1DU;
    case 29:
        clear_entries__20TWindowSubSymbolChatFv((int) (*(u32 *)((s8 *)arg0 + 0x28)));
        set_flag_bit2__20TWindowSubSymbolChatFPl((int) (*(u32 *)((s8 *)arg0 + 0x28)));
        update_visibility__20TWindowSubSymbolChatFPv((void *) (*(u8 **)((s8 *)arg0 + 0x30)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
        return;
    case 30:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x38)));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        if ((void *) *(u8 **)((s8 *)arg0 + 0x34) == NULL) {
            *(u8 **)((s8 *)arg0 + 0x34) = ((u8 *)TWindowSubSymbolChat::create_chat_symbol_window((s32)(arg0), (s32)(1)));
        }
        temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x34));
        *(s32 *)((s8 *)temp_r4 + 0x64) = 1;
        *(u32 *)((s8 *)arg0 + 0x38) = ((u32)create_symbol_list_card());
        apply_symbol();
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x1FU;
    case 31:
        set_from_key__20TWindowSubSymbolChatFii((void *) (*(u8 **)((s8 *)arg0 + 0x34)), (int) (get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x38)))));
        if (get_status_flag__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            commit__20TWindowSubSymbolChatFPl((int) get_symbol_chat_preset(get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x38)))), (int) (*(u32 *)((s8 *)arg0 + 0x28)));
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
            return;
        }
        break;
    case 32:
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x21U;
    case 33:
        commit__20TWindowSubSymbolChatFPl((int) (*(u32 *)((s8 *)arg0 + 0x28)), (int) (((s32)TWindowSubSymbolChat__sub_8028379C())));
        set_flag_bit1__20TWindowSubSymbolChatFPl((int) (*(u32 *)((s8 *)arg0 + 0x28)));
        set_flag_bit2__20TWindowSubSymbolChatFPl((int) (*(u32 *)((s8 *)arg0 + 0x28)));
        set_entry_name__20TWindowSubSymbolChatFPv((int) (*(u32 *)((s8 *)arg0 + 0x28)), (int) (get_message_10__20TWindowSubStatusDispFl((s32)((int) (0xB5)))));
        update_visibility__20TWindowSubSymbolChatFPv((void *) (*(u8 **)((s8 *)arg0 + 0x30)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
        return;
    case 34:
        open__17TWindowOptionCtrlFv((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            close__17TWindowSubComCardFv((int)(*(void **)((s8 *)arg0 + 0x40)));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x38) = create_menu__20TWindowSubSymbolChatFv((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x23U;
    case 35:
        if (get_status_flag__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x38)));
            play_symbol_sound__20TWindowSubSymbolChatFl();
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x24U;
            return;
        }
        break;
    case 36:
        *(u32 *)((s8 *)arg0 + 0x40) = ((u32 (*)(void *))open_confirm_prompt__20TWindowSubSymbolChatFv)(arg0);
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x25U;
    case 37:
        if (get_card_data__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x40))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x22U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x40))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x40))) == 0) {
                set_symbol_index__20TWindowSubSymbolChatFl((int) (*(u32 *)((s8 *)arg0 + 0x28)), (int) (get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x38)))));
                *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 0x22U;
            return;
        }
        break;
    case 38:
        open__17TWindowOptionCtrlFv((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x44) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x44) = create_confirm_window__20TWindowSubSymbolChatFv((void *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x27U;
    case 39:
        if (get_flag_bit2__6TLobbyFv((int) (*(u32 *)((s8 *)arg0 + 0x44))) != 0) {
            set_flag_bit9__20TWindowSubSymbolChatFl((int) (*(u32 *)((s8 *)arg0 + 0x28)), (int) (update_selected_item__17TWindowOptionCtrlFv((int) (*(u32 *)((s8 *)arg0 + 0x44)))));
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
            return;
        }
        break;
    case 40:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x3C)));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        if ((void *) *(u8 **)((s8 *)arg0 + 0x30) != NULL) {
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x30)));
            *(u8 **)((s8 *)arg0 + 0x30) = NULL;
        }
        *(u32 *)((s8 *)arg0 + 0x58) = create_keyboard_control__20TWindowSubSymbolChatFv((void *) (arg0));
        *(u8 *)((s8 *)arg0 + 0x1C) = 0x29U;
    case 41:
        if (is_keyboard_active__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x58))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
            return;
        }
        if (update_keyboard__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x58))) != 0) {
            temp_r3_2 = realloc_buffer__17TWindowSubComCardFv((int) (*(u32 *)((s8 *)arg0 + 0x58)));
            set_entry_name__20TWindowSubSymbolChatFPv((int) (*(u32 *)((s8 *)arg0 + 0x28)), (int) (temp_r3_2));
            mem_free((int) (temp_r3_2));
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
        }
        break;
    case 42:
        break;
    }
}

u8 *__dt__20TWindowSubSymbolChatFv(u8 *arg0, s16 arg1) {
    u32 temp_r3;
    u32 temp_r3_10;
    u32 temp_r3_11;
    u32 temp_r3_12;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 temp_r3_6;
    u32 temp_r3_7;
    u32 temp_r3_8;
    u32 temp_r3_9;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8028351C___vt__20TWindowSubSymbolChat *)&__vt__20TWindowSubSymbolChat).value;
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x58);
        if (temp_r3 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3));
            *(u32 *)((s8 *)arg0 + 0x58) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x44) != 0U) {
            if ((TWindowCtrlMain__sub_8024CE58() != 0) && ((u8) *(u8 *)((s8 *)arg0 + 0x1C) == 0x27)) {
                set_flag_bit9__20TWindowSubSymbolChatFl((int) (*(u32 *)((s8 *)arg0 + 0x28)), (int) (update_selected_item__17TWindowOptionCtrlFv((int) (*(u32 *)((s8 *)arg0 + 0x44)))));
            }
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x44)));
            *(u32 *)((s8 *)arg0 + 0x44) = 0U;
        }
        temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x40);
        if (temp_r3_2 != 0U) {
            close__17TWindowSubComCardFv((int) (temp_r3_2));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        temp_r3_3 = *(u32 *)((s8 *)arg0 + 0x54);
        if (temp_r3_3 != 0U) {
            TWindow__close((int) (temp_r3_3));
            *(u32 *)((s8 *)arg0 + 0x54) = 0U;
        }
        temp_r3_4 = *(u32 *)((s8 *)arg0 + 0x48);
        if (temp_r3_4 != 0U) {
            TWindow__close((int) (temp_r3_4));
            *(u32 *)((s8 *)arg0 + 0x48) = 0U;
        }
        temp_r3_5 = *(u32 *)((s8 *)arg0 + 0x50);
        if (temp_r3_5 != 0U) {
            TWindow__close((int) (temp_r3_5));
            *(u32 *)((s8 *)arg0 + 0x50) = 0U;
        }
        temp_r3_6 = *(u32 *)((s8 *)arg0 + 0x4C);
        if (temp_r3_6 != 0U) {
            TWindow__close((int) (temp_r3_6));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        temp_r3_7 = *(u32 *)((s8 *)arg0 + 0x3C);
        if (temp_r3_7 != 0U) {
            TWindow__close((int) (temp_r3_7));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        temp_r3_8 = *(u32 *)((s8 *)arg0 + 0x38);
        if (temp_r3_8 != 0U) {
            TWindow__close((int) (temp_r3_8));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        temp_r3_9 = *(u32 *)((s8 *)arg0 + 0x34);
        if (temp_r3_9 != 0U) {
            TWindow__close((int) (temp_r3_9));
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        temp_r3_10 = *(u32 *)((s8 *)arg0 + 0x30);
        if (temp_r3_10 != 0U) {
            TWindow__close((int) (temp_r3_10));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        temp_r3_11 = *(u32 *)((s8 *)arg0 + 0x28);
        if (temp_r3_11 != 0U) {
            clear_flag_bit2__20TWindowSubSymbolChatFPl((int) (temp_r3_11));
            *(u32 *)((s8 *)arg0 + 0x28) = 0U;
        }
        temp_r3_12 = *(u32 *)((s8 *)arg0 + 0x5C);
        if (temp_r3_12 != 0U) {
            TWindow__close((int) (temp_r3_12));
            *(u32 *)((s8 *)arg0 + 0x5C) = 0U;
        }
        (*(s32 *)&TWindowSubSymbolChat__instance) = 0;
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

void *TWindowSubSymbolChat__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TWindowSubSymbolChat;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowSubSymbolChat__class_name;
    *(s32 *)((s8 *)arg0 + 0x2C) = arg1;
    *(s32 *)((s8 *)arg0 + 0x24) = arg2;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0;
    *(s32 *)((s8 *)arg0 + 0x50) = 0;
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
    *(s32 *)((s8 *)arg0 + 0x58) = 0;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    TWindowSubSymbolChat__data_805D6494 = 0;
    TWindowSubSymbolChat__data_805D6498 = 0;
    TWindowSubSymbolChat__data_805D649C = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    TWindowSubSymbolChat__instance = arg0;
    *(s32 *)((s8 *)arg0 + 0x5C) = update_display__20TWindowSubSymbolChatFl(close_child__20TWindowSubSymbolChatFv);
    *(s8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}
typedef char RecoveredGlobal_8028379C_lbl_804FF968_size[sizeof(RecoveredGlobal_8028379C_lbl_804FF968) == 0x58 ? 1 : -1];
s32 *TWindowSubSymbolChat__sub_8028379C(void) {
    return &symbol_chat_receive_buffer.value;
}

}
