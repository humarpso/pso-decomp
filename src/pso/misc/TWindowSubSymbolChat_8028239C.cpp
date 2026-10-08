#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028379C_lbl_804FF968 {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_8028351C___vt__20TWindowSubSymbolChat { M2C_UNK value; u8 remaining[0x14]; };

typedef s32 M2C_UNK;
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
    virtual M2C_UNK m7();
};

extern "C" {
extern RecoveredGlobal_8028379C_lbl_804FF968 lbl_804FF968;
M2C_UNK *TWindowSubSymbolChat__sub_8028379C(void);
s32 __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv(int);
s32 TWindowSubSymbolChat__sub_80077034(int, int);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(int);
s32 update_selected_item__17TWindowOptionCtrlFPv(int);
s32 TWindowCtrlMain__sub_8024CE58();
s32 clear_flag_bit2__20TWindowSubSymbolChatFPv(int);
s32 close__17TWindowSubComCardFPv(int);
extern M2C_UNK __vt__20TWindowSubSymbolChat[];
extern void *lbl_805D6490;
u8 *__dt__20TWindowSubSymbolChatFv(u8 *arg0, s16 arg1);
s32 __nw__7TObjectFUl(int);
s32 TWindowChatSymbol__ct(int, void *, void *);
M2C_UNK get_window_layout_position(M2C_UNK);
extern M2C_UNK lbl_8044FB20[];
s32 create_chat_symbol_window__20TWindowSubSymbolChatFii(M2C_UNK arg0, s32 arg1);
s32 get_symbol_chat_data__20TWindowSubSymbolChatFPv(s32);
s32 TWindowSubSymbolChat__sub_80077464(s32);
s32 TWindowSubSymbolChat__sub_80077480(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
void set_selected_index__17TWindowSubComCardFPvs(s32, s16);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK get_window_layout_position(M2C_UNK);
extern const f32 lbl_805DD748;
extern const f32 lbl_805DD74C;
s32 create_symbol_list_card__20TWindowSubSymbolChatFPv(Win_80282600 *arg0);
s32 queue_destruction__7TObjectFv(int);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, int);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
M2C_UNK set_entry_name__20TWindowSubSymbolChatFPvPv(int, int);
s32 TWindowSubSymbolChat__sub_80077034(int, int);
M2C_UNK TWindowSubSymbolChat__sub_8007706C(int, int);
M2C_UNK TWindowSubSymbolChat__sub_800772D8(int, int, int);
s32 refresh_parts__20TWindowSubSymbolChatFPv();
M2C_UNK update_symbol_chat_result__20TWindowSubSymbolChatFv(int);
M2C_UNK update_selected_symbol__20TWindowSubSymbolChatFPv(int);
M2C_UNK play_symbol_sound__20TWindowSubSymbolChatFi();
s32 TWindowSubSymbolChat__sub_80077480(s32);
M2C_UNK clear_entries__20TWindowSubSymbolChatFPv(int);
u32 get_instance__20TWindowSubSymbolChatFv();
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 realloc_buffer__17TWindowSubComCardFPv(int);
s32 is_keyboard_active__17TWindowSubComCardFPv(int);
s32 update_keyboard__17TWindowSubComCardFPv(int);
s32 get_flag_bit2__6TLobbyFPv(int);
M2C_UNK free__11TOBoss4RockFUi(int);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(int);
s32 __nw__7TObjectFUl(int);
s32 TWindow__close(int);
M2C_UNK update_visibility__20TWindowSubSymbolChatFPv(void *);
M2C_UNK set_selection__20TWindowSubSymbolChatFPvUi(void *, int);
M2C_UNK set_from_key__20TWindowSubSymbolChatFii(void *, int);
s32 update_selected_item__17TWindowOptionCtrlFPv(int);
s32 get_selected_menu_value(int);
M2C_UNK clear_transition_flag__17TWindowSubComCardFPv(int);
M2C_UNK open__17TWindowOptionCtrlFPv(int);
M2C_UNK get_window_layout_position(M2C_UNK);
M2C_UNK update_sub_window__20TWindowSubSymbolChatFPv(void *);
M2C_UNK update_state__20TWindowSubSymbolChatFPv(void *);
M2C_UNK draw_selected_entry__20TWindowSubSymbolChatFPv(void *);
M2C_UNK TWindowSubSymbolChat__sub_80281C60(void *);
M2C_UNK TWindowSubSymbolChat__sub_80281CC4(void *);
u32 create_keyboard_control__20TWindowSubSymbolChatFPv(void *);
u32 create_confirm_window__20TWindowSubSymbolChatFPv(void *);
u32 open_confirm_prompt__20TWindowSubSymbolChatFPv();
u32 create_menu__20TWindowSubSymbolChatFv(void *);
u32 create_menu__20TWindowSubSymbolChatFPv(void *);
u32 create_parts_set__20TWindowSubSymbolChatFPv(void *);
u32 create_parts__20TWindowSubSymbolChatFv(void *);
M2C_UNK open_menu__20TWindowSubSymbolChatFii(void *, int);
u32 TWindowSubSymbolChat__sub_8028233C(void *);
s32 open_edit_menu__20TWindowSubSymbolChatFPv(void *arg0);
s32 open_main_menu__20TWindowSubSymbolChatFv(void *);
void apply_symbol__20TWindowSubSymbolChatFPv(void *arg0);
s32 create_symbol_list_card__20TWindowSubSymbolChatFPv(Win_80282600 *arg0);
s32 create_chat_symbol_window__20TWindowSubSymbolChatFii(M2C_UNK arg0, s32 arg1);
M2C_UNK *TWindowSubSymbolChat__sub_8028379C(void);
M2C_UNK set_flag_bit1__20TWindowSubSymbolChatFPv(int);
M2C_UNK commit__20TWindowSubSymbolChatFi(int, int);
M2C_UNK set_flag_bit2__20TWindowSubSymbolChatFPv(int);
s32 clear_flag_bit2__20TWindowSubSymbolChatFPv(int);
s32 is_active__20TWindowSubSymbolChatFPv(int);
s32 TWindowSubSymbolChat__sub_80283900(int);
M2C_UNK clear_flag60_bit2__20TWindowSubSymbolChatFPv(int);
M2C_UNK clear_flag60_bit4__20TWindowSubSymbolChatFPv(int);
M2C_UNK set_pos_and_flag__20TWindowSubSymbolChatFPvii(int, void *, void *);
M2C_UNK TWindowSubSymbolChat__sub_80283944(int);
M2C_UNK set_flag60_bit1__20TWindowSubSymbolChatFPv(int);
M2C_UNK set_flag60_bit2__20TWindowSubSymbolChatFPv(int);
s32 TWindowSubSymbolChat__sub_80283974(int);
s32 TWindowSubSymbolChat__sub_80283980(int);
s32 is_open__20TWindowSubSymbolChatFPv(int);
s32 TWindowSubSymbolChat__sub_80283998(int);
s32 fn_802839A4(int);
u32 TWindowSubSymbolChatFaceType__ct(int, int, void *);
u32 TWindowSubSymbolChatHelp__ct(u32, void *, void *);
s16 calc_symbol_index__20TWindowSubSymbolChatFPv(int);
M2C_UNK select_index_and_scroll__20TWindowSubSymbolChatFPvi(int, int);
M2C_UNK update_height__20TWindowSubSymbolChatFPv(int);
M2C_UNK open__20TWindowSubSymbolChatFPvi(int, void *);
M2C_UNK fn_80285A28(int, void *);
s32 TWindowSubSymbolChat__sub_80285E10(int, void *, void *);
M2C_UNK TWindowSubSymbolChat__sub_80285FF4(int, void *);
M2C_UNK init_symbol_layout__20TWindowSubSymbolChatFPvPv(int, void *);
s32 close__17TWindowSubComCardFPv(int);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(int);
s32 get_card_data__17TWindowSubComCardFPv(int);
s32 is_child_visible__17TWindowSubComCardFPv(int);
extern s8 TWindowSubSymbolChat__data_805D6494;
extern s32 TWindowSubSymbolChat__data_805D6498;
extern s32 TWindowSubSymbolChat__data_805D649C;
extern s32 TWindowSubSymbolChat__data_805D64A0;
void run_task__20TWindowSubSymbolChatFv(u8 *arg0);
}

extern "C" {

void *TWindowSubSymbolChat__ct(void *arg0, s32 arg1, s32 arg2);
void apply_symbol__20TWindowSubSymbolChatFPv(void *arg0);
s32 open_edit_menu__20TWindowSubSymbolChatFPv(void *arg0);
void render__20TWindowSubSymbolChatFv(void);
M2C_UNK TWindowSubComCard__sub_80265680(s32, s16);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(s32, f32);
M2C_UNK get_window_layout_position(M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s8 get_global_4e54__20TWindowSubSymbolChatFv();
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 is_initialized__20TWindowSubSymbolChatFPv(s32);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
s32 update_display__20TWindowSubSymbolChatFi(M2C_UNK *);

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

s32 open_edit_menu__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0x79), 3, get_message_10__20TWindowSubStatusDispFPv(0xA8));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB3), 6, 8);
    if (is_initialized__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB4), 6, 0x1E);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB4), 6, 0x1E);
    }
    if (get_global_4e54__20TWindowSubSymbolChatFv() > 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB5), 6, 0x20);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB5), 6, 0x20);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    set_scroll_target__17TWindowSubComCardFPvff(temp_r31, lbl_805DD73C, lbl_805DD740);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD73C;

s32 open_main_menu__20TWindowSubSymbolChatFv(void * _w0) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0x78), 6, get_message_10__20TWindowSubStatusDispFPv(0x1D));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xA8), 6, 6);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xA9), 6, 0xA);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAA), 6, 0x14);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAB), 6, 0x22);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAC), 6, 0x26);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAD), 6, 0x28);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD73C);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

void apply_symbol__20TWindowSubSymbolChatFPv(void *arg0) {
    TWindowSubComCard__sub_80265680(M2C_FIELD(arg0, s32 *, 0x38), (s16) M2C_FIELD(arg0, s32 *, 0x20));
}

s32 create_symbol_list_card__20TWindowSubSymbolChatFPv(Win_80282600 *arg0) {
    s32 i;
    s32 sym;
    s32 card;
    s32 data;
    card = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0x77), 0xC, get_message_10__20TWindowSubStatusDispFPv(0x31));
    for (i = 0; i < 0xC; i++) {
        sym = TWindowSubSymbolChat__sub_80077480(i);
        data = get_symbol_chat_data__20TWindowSubSymbolChatFPv(sym);
        if (TWindowSubSymbolChat__sub_80077464(sym) != 0) {
            forward_trade_action_default__16TObjCityMainWarpFPviii(card, data, 0x66, i);
        } else {
            forward_trade_action_default__16TObjCityMainWarpFPviii(card, data, 0x46, i);
        }
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(card);
    set_scroll_target__17TWindowSubComCardFPvff(card, lbl_805DD748, lbl_805DD74C);
    align_menu_entry_positions(card);
    set_selected_index__17TWindowSubComCardFPvs(card, arg0->sel);
    return card;
}

s32 create_chat_symbol_window__20TWindowSubSymbolChatFii(M2C_UNK arg0, s32 arg1) {
    s32 var_r31;
    var_r31 = __nw__7TObjectFUl((int) (0x68));
    if (var_r31 != 0) {
        var_r31 = TWindowChatSymbol__ct((int) (var_r31), (void *) (((s32)get_window_layout_position((M2C_UNK)((void *) (arg1 + 0x7B))))), (void *) (lbl_8044FB20));
    }
    return var_r31;
}

void render__20TWindowSubSymbolChatFv(void) {  }

extern M2C_UNK close_child__20TWindowSubSymbolChatFv[];
extern M2C_UNK __vt__20TWindowSubSymbolChat[];
extern s32 lbl_805D3AA8;
extern void *lbl_805D6490;
extern s8 TWindowSubSymbolChat__data_805D6494;
extern s32 TWindowSubSymbolChat__data_805D6498;
extern s32 TWindowSubSymbolChat__data_805D649C;

void run_task__20TWindowSubSymbolChatFv(u8 *arg0) {
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
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x1C);
    switch (temp_r0) {
    case 0:
    case 1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            clear_flag_bit2__20TWindowSubSymbolChatFPv((int)(M2C_FIELD(arg0, void **, 0x28)));
            M2C_FIELD(arg0, u32 *, 0x28) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            close__17TWindowSubComCardFPv((int)(M2C_FIELD(arg0, void **, 0x40)));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((void *) M2C_FIELD(arg0, u8 **, 0x30) == NULL) {
            M2C_FIELD(arg0, u8 **, 0x30) = ((u8 *)create_chat_symbol_window__20TWindowSubSymbolChatFii((M2C_UNK)(arg0), (s32)(0)));
        }
        update_visibility__20TWindowSubSymbolChatFPv((void *) (M2C_FIELD(arg0, u8 **, 0x30)));
        M2C_FIELD(arg0, u32 *, 0x38) = ((u32)create_symbol_list_card__20TWindowSubSymbolChatFPv((Win_80282600 *)((void *) (arg0))));
        M2C_FIELD(arg0, u8 *, 0x1C) = 2U;
    case 2:
        set_from_key__20TWindowSubSymbolChatFii((void *) (M2C_FIELD(arg0, u8 **, 0x30)), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x38)))));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2C));
            ((VObj_18_204a81 *)(temp_r3))->m7();
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x2AU;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x38)));
            update_symbol_chat_result__20TWindowSubSymbolChatFv((int) (M2C_FIELD(arg0, s32 *, 0x20)));
            M2C_FIELD(arg0, u32 *, 0x28) = get_instance__20TWindowSubSymbolChatFv();
            update_selected_symbol__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x28)));
            set_flag_bit2__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x28)));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (M2C_FIELD(arg0, u8 **, 0x30)));
            M2C_FIELD(arg0, u8 *, 0x1C) = 3U;
            return;
        }
        break;
    case 3:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
    case 4:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
            queue_destruction__7TObjectFv((int)(M2C_FIELD(arg0, void **, 0x58)));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x44)));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            close__17TWindowSubComCardFPv((int)(M2C_FIELD(arg0, void **, 0x40)));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x54)));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x48)));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        if ((void *) M2C_FIELD(arg0, u8 **, 0x34) != NULL) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x34)));
            M2C_FIELD(arg0, u8 **, 0x34) = NULL;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x38)));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((void *) M2C_FIELD(arg0, u8 **, 0x30) == NULL) {
            M2C_FIELD(arg0, u8 **, 0x30) = ((u8 *)create_chat_symbol_window__20TWindowSubSymbolChatFii((M2C_UNK)(arg0), (s32)(0)));
            set_selection__20TWindowSubSymbolChatFPvUi((void *) (M2C_FIELD(arg0, u8 **, 0x30)), (int) (M2C_FIELD(arg0, u32 *, 0x28)));
        }
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) ((u8 *)(M2C_FIELD(arg0, u8 **, 0x30)) + 0x30), (int) (((s32)get_window_layout_position((M2C_UNK)((int) (0x7B))))));
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x30), s32 *, 0x50) = 6;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x3C) = ((u32)open_main_menu__20TWindowSubSymbolChatFv((void *)((void *) (arg0))));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
        clear_transition_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 5U;
    case 5:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            return;
        }
        break;
    case 6:
        open__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x54)));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x48)));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x38) = ((u32)open_edit_menu__20TWindowSubSymbolChatFPv((void *) (arg0)));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 7U;
    case 7:
        update_sub_window__20TWindowSubSymbolChatFPv((void *) (arg0));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x38)));
            return;
        }
        break;
    case 8:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) == 0U) {
            var_r30 = ((u32)__nw__7TObjectFUl((int) (0x6C)));
            if (var_r30 != 0U) {
                var_r30 = TWindowSubSymbolChatFaceType__ct((int) (var_r30), (int) (((s32)get_window_layout_position((M2C_UNK)((int) (0x7D))))), (void *) (&TWindowSubSymbolChat__data_805D6494));
            }
            M2C_FIELD(arg0, u32 *, 0x48) = var_r30;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) == 0U) {
            var_r0 = ((u32)__nw__7TObjectFUl((int) (0x74)));
            if (var_r0 != 0U) {
                var_r0 = TWindowSubSymbolChatHelp__ct(var_r0, (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__data_805D64A0));
            }
            M2C_FIELD(arg0, u32 *, 0x54) = var_r0;
        }
        set_flag60_bit2__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 9U;
    case 9:
        if (TWindowSubSymbolChat__sub_80283998((int) (M2C_FIELD(arg0, u32 *, 0x48))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 6U;
            return;
        }
        if (is_open__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x48))) != 0) {
            TWindowSubSymbolChat__sub_800772D8((int) (M2C_FIELD(arg0, u32 *, 0x28)), (int) (fn_802839A4((int) (M2C_FIELD(arg0, u32 *, 0x48)))), (int) (TWindowSubSymbolChat__data_805D6494));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (M2C_FIELD(arg0, u8 **, 0x30)));
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
            return;
        }
        break;
    case 10:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x50)));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x54)));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        open__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x38) = TWindowSubSymbolChat__sub_8028233C((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0xBU;
    case 11:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x38)));
            return;
        }
        break;
    case 12:
        TWindowSubSymbolChat__data_805D64A0 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x50)));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x4C) = create_parts__20TWindowSubSymbolChatFv((void *) (arg0));
            fn_80285A28((int) (M2C_FIELD(arg0, u32 *, 0x4C)), (void *) (&TWindowSubSymbolChat__data_805D64A0));
        }
        select_index_and_scroll__20TWindowSubSymbolChatFPvi((int) (M2C_FIELD(arg0, u32 *, 0x4C)), (int) (M2C_FIELD(arg0, s16 *, 0x1E)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) == 0U) {
            var_r0_2 = ((u32)__nw__7TObjectFUl((int) (0x74)));
            if (var_r0_2 != 0U) {
                var_r0_2 = TWindowSubSymbolChatHelp__ct(var_r0_2, (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__data_805D64A0));
            }
            M2C_FIELD(arg0, u32 *, 0x54) = var_r0_2;
        }
        if (refresh_parts__20TWindowSubSymbolChatFPv() > 1) {
            set_flag60_bit1__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        } else {
            TWindowSubSymbolChat__sub_80283944((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        }
        set_pos_and_flag__20TWindowSubSymbolChatFPvii((int) (M2C_FIELD(arg0, u32 *, 0x54)), (void *) (&TWindowSubSymbolChat__data_805D6498), (void *) (&TWindowSubSymbolChat__data_805D649C));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0xDU;
    case 13:
        if (TWindowSubSymbolChat__sub_80283980((int) (M2C_FIELD(arg0, u32 *, 0x4C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xAU;
            return;
        }
        if (TWindowSubSymbolChat__sub_80283974((int) (M2C_FIELD(arg0, u32 *, 0x4C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xEU;
            return;
        }
        break;
    case 14:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            M2C_FIELD(arg0, s16 *, 0x1E) = calc_symbol_index__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x50) = create_parts_set__20TWindowSubSymbolChatFPv((void *) (arg0));
            init_symbol_layout__20TWindowSubSymbolChatFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x50)), (void *) (&TWindowSubSymbolChat__data_805D64A0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0xFU;
    case 15:
        if (TWindowSubSymbolChat__sub_80283900((int) (M2C_FIELD(arg0, u32 *, 0x50))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xCU;
            return;
        }
        if (is_active__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x50))) != 0) {
            TWindowSubSymbolChat__sub_80281CC4((void *) (arg0));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (M2C_FIELD(arg0, u8 **, 0x30)));
            if (refresh_parts__20TWindowSubSymbolChatFPv() > 0) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 0xCU;
                return;
            }
            open_menu__20TWindowSubSymbolChatFii((void *) (arg0), (int) (M2C_FIELD(arg0, u32 *, 0x38)));
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xAU;
            return;
        }
        break;
    case 16:
        TWindowSubSymbolChat__data_805D64A0 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x50)));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x4C) = create_parts__20TWindowSubSymbolChatFv((void *) (arg0));
            open__20TWindowSubSymbolChatFPvi((int) (M2C_FIELD(arg0, u32 *, 0x4C)), (void *) (&TWindowSubSymbolChat__data_805D6494));
        }
        select_index_and_scroll__20TWindowSubSymbolChatFPvi((int) (M2C_FIELD(arg0, u32 *, 0x4C)), (int) (M2C_FIELD(arg0, s16 *, 0x1E)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) == 0U) {
            var_r0_3 = ((u32)__nw__7TObjectFUl((int) (0x74)));
            if (var_r0_3 != 0U) {
                var_r0_3 = TWindowSubSymbolChatHelp__ct(var_r0_3, (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__data_805D64A0));
            }
            M2C_FIELD(arg0, u32 *, 0x54) = var_r0_3;
        }
        set_flag60_bit2__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        set_pos_and_flag__20TWindowSubSymbolChatFPvii((int) (M2C_FIELD(arg0, u32 *, 0x54)), (void *) (&TWindowSubSymbolChat__data_805D6498), (void *) (&TWindowSubSymbolChat__data_805D649C));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x11U;
    case 17:
        if (TWindowSubSymbolChat__sub_80283980((int) (M2C_FIELD(arg0, u32 *, 0x4C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xAU;
            return;
        }
        if (TWindowSubSymbolChat__sub_80283974((int) (M2C_FIELD(arg0, u32 *, 0x4C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x12U;
            return;
        }
        break;
    case 18:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            M2C_FIELD(arg0, s16 *, 0x1E) = calc_symbol_index__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x50) = create_parts_set__20TWindowSubSymbolChatFPv((void *) (arg0));
            TWindowSubSymbolChat__sub_80285FF4((int) (M2C_FIELD(arg0, u32 *, 0x50)), (void *) (&TWindowSubSymbolChat__data_805D6494));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x13U;
    case 19:
        if (TWindowSubSymbolChat__sub_80283900((int) (M2C_FIELD(arg0, u32 *, 0x50))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x10U;
            return;
        }
        if (is_active__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x50))) != 0) {
            TWindowSubSymbolChat__sub_80281C60((void *) (arg0));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (M2C_FIELD(arg0, u8 **, 0x30)));
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x10U;
            return;
        }
        break;
    case 20:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x54)));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        open__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x38) = create_menu__20TWindowSubSymbolChatFPv((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x15U;
    case 21:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x38)));
            return;
        }
        break;
    case 22:
    case 26:
        TWindowSubSymbolChat__data_805D64A0 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x50)));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x4C) = create_parts__20TWindowSubSymbolChatFv((void *) (arg0));
            update_height__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
        }
        select_index_and_scroll__20TWindowSubSymbolChatFPvi((int) (M2C_FIELD(arg0, u32 *, 0x4C)), (int) (M2C_FIELD(arg0, s16 *, 0x1E)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) == 0U) {
            var_r0_4 = ((u32)__nw__7TObjectFUl((int) (0x74)));
            if (var_r0_4 != 0U) {
                var_r0_4 = TWindowSubSymbolChatHelp__ct(var_r0_4, (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__data_805D64A0));
            }
            M2C_FIELD(arg0, u32 *, 0x54) = var_r0_4;
        }
        clear_flag60_bit4__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        clear_flag60_bit2__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        TWindowSubSymbolChat__sub_80283944((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x17U;
    case 23:
    case 27:
        if (TWindowSubSymbolChat__sub_80283980((int) (M2C_FIELD(arg0, u32 *, 0x4C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x14U;
            return;
        }
        if (TWindowSubSymbolChat__sub_80283974((int) (M2C_FIELD(arg0, u32 *, 0x4C))) != 0) {
            update_state__20TWindowSubSymbolChatFPv((void *) (arg0));
            return;
        }
        break;
    case 24:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            M2C_FIELD(arg0, s16 *, 0x1E) = calc_symbol_index__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x4C)));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x50) = create_parts_set__20TWindowSubSymbolChatFPv((void *) (arg0));
        }
        if (TWindowSubSymbolChat__sub_80285E10((int) (M2C_FIELD(arg0, u32 *, 0x50)), (void *) (&TWindowSubSymbolChat__data_805D6494), (void *) (&TWindowSubSymbolChat__data_805D64A0)) != 0) {
            set_flag60_bit2__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        } else if (refresh_parts__20TWindowSubSymbolChatFPv() > 0) {
            set_flag60_bit1__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        }
        set_pos_and_flag__20TWindowSubSymbolChatFPvii((int) (M2C_FIELD(arg0, u32 *, 0x54)), (void *) (&TWindowSubSymbolChat__data_805D6498), (void *) (&TWindowSubSymbolChat__data_805D649C));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x19U;
    case 25:
        if (TWindowSubSymbolChat__sub_80283900((int) (M2C_FIELD(arg0, u32 *, 0x50))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x16U;
            return;
        }
        if (is_active__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x50))) != 0) {
            draw_selected_entry__20TWindowSubSymbolChatFPv((void *) (arg0));
            update_visibility__20TWindowSubSymbolChatFPv((void *) (M2C_FIELD(arg0, u8 **, 0x30)));
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x16U;
            return;
        }
        break;
    case 28:
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x1DU;
    case 29:
        clear_entries__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x28)));
        set_flag_bit2__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x28)));
        update_visibility__20TWindowSubSymbolChatFPv((void *) (M2C_FIELD(arg0, u8 **, 0x30)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
        return;
    case 30:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x38)));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((void *) M2C_FIELD(arg0, u8 **, 0x34) == NULL) {
            M2C_FIELD(arg0, u8 **, 0x34) = ((u8 *)create_chat_symbol_window__20TWindowSubSymbolChatFii((M2C_UNK)(arg0), (s32)(1)));
        }
        temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        M2C_FIELD(temp_r4, s32 *, 0x64) = 1;
        M2C_FIELD(arg0, u32 *, 0x38) = ((u32)create_symbol_list_card__20TWindowSubSymbolChatFPv((Win_80282600 *)((void *) (arg0))));
        apply_symbol__20TWindowSubSymbolChatFPv((void *) (arg0));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x1FU;
    case 31:
        set_from_key__20TWindowSubSymbolChatFii((void *) (M2C_FIELD(arg0, u8 **, 0x34)), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x38)))));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            commit__20TWindowSubSymbolChatFi((int) TWindowSubSymbolChat__sub_80077480(get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x38)))), (int) (M2C_FIELD(arg0, u32 *, 0x28)));
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
            return;
        }
        break;
    case 32:
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x21U;
    case 33:
        commit__20TWindowSubSymbolChatFi((int) (M2C_FIELD(arg0, u32 *, 0x28)), (int) (((s32)TWindowSubSymbolChat__sub_8028379C())));
        set_flag_bit1__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x28)));
        set_flag_bit2__20TWindowSubSymbolChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x28)));
        set_entry_name__20TWindowSubSymbolChatFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x28)), (int) (get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)((int) (0xB5)))));
        update_visibility__20TWindowSubSymbolChatFPv((void *) (M2C_FIELD(arg0, u8 **, 0x30)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
        return;
    case 34:
        open__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            close__17TWindowSubComCardFPv((int)(M2C_FIELD(arg0, void **, 0x40)));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x38) = create_menu__20TWindowSubSymbolChatFv((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x23U;
    case 35:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x38))) != 0) {
            get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x38)));
            play_symbol_sound__20TWindowSubSymbolChatFi();
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x24U;
            return;
        }
        break;
    case 36:
        M2C_FIELD(arg0, u32 *, 0x40) = ((u32 (*)(void *))open_confirm_prompt__20TWindowSubSymbolChatFPv)(arg0);
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x25U;
    case 37:
        if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x40))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x22U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x40))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x40))) == 0) {
                TWindowSubSymbolChat__sub_8007706C((int) (M2C_FIELD(arg0, u32 *, 0x28)), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x38)))));
                M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = 0x22U;
            return;
        }
        break;
    case 38:
        open__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x44) = create_confirm_window__20TWindowSubSymbolChatFPv((void *) (arg0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x27U;
    case 39:
        if (get_flag_bit2__6TLobbyFPv((int) (M2C_FIELD(arg0, u32 *, 0x44))) != 0) {
            TWindowSubSymbolChat__sub_80077034((int) (M2C_FIELD(arg0, u32 *, 0x28)), (int) (update_selected_item__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x44)))));
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
            return;
        }
        break;
    case 40:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((void *) M2C_FIELD(arg0, u8 **, 0x30) != NULL) {
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x30)));
            M2C_FIELD(arg0, u8 **, 0x30) = NULL;
        }
        M2C_FIELD(arg0, u32 *, 0x58) = create_keyboard_control__20TWindowSubSymbolChatFPv((void *) (arg0));
        M2C_FIELD(arg0, u8 *, 0x1C) = 0x29U;
    case 41:
        if (is_keyboard_active__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x58))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x58))) != 0) {
            temp_r3_2 = realloc_buffer__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x58)));
            set_entry_name__20TWindowSubSymbolChatFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x28)), (int) (temp_r3_2));
            free__11TOBoss4RockFUi((int) (temp_r3_2));
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
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
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8028351C___vt__20TWindowSubSymbolChat *)&__vt__20TWindowSubSymbolChat).value;
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x58);
        if (temp_r3 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            if ((TWindowCtrlMain__sub_8024CE58() != 0) && ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0x27)) {
                TWindowSubSymbolChat__sub_80077034((int) (M2C_FIELD(arg0, u32 *, 0x28)), (int) (update_selected_item__17TWindowOptionCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x44)))));
            }
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x44)));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x40);
        if (temp_r3_2 != 0U) {
            close__17TWindowSubComCardFPv((int) (temp_r3_2));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        temp_r3_3 = M2C_FIELD(arg0, u32 *, 0x54);
        if (temp_r3_3 != 0U) {
            TWindow__close((int) (temp_r3_3));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        temp_r3_4 = M2C_FIELD(arg0, u32 *, 0x48);
        if (temp_r3_4 != 0U) {
            TWindow__close((int) (temp_r3_4));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        temp_r3_5 = M2C_FIELD(arg0, u32 *, 0x50);
        if (temp_r3_5 != 0U) {
            TWindow__close((int) (temp_r3_5));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        temp_r3_6 = M2C_FIELD(arg0, u32 *, 0x4C);
        if (temp_r3_6 != 0U) {
            TWindow__close((int) (temp_r3_6));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        temp_r3_7 = M2C_FIELD(arg0, u32 *, 0x3C);
        if (temp_r3_7 != 0U) {
            TWindow__close((int) (temp_r3_7));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        temp_r3_8 = M2C_FIELD(arg0, u32 *, 0x38);
        if (temp_r3_8 != 0U) {
            TWindow__close((int) (temp_r3_8));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        temp_r3_9 = M2C_FIELD(arg0, u32 *, 0x34);
        if (temp_r3_9 != 0U) {
            TWindow__close((int) (temp_r3_9));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        temp_r3_10 = M2C_FIELD(arg0, u32 *, 0x30);
        if (temp_r3_10 != 0U) {
            TWindow__close((int) (temp_r3_10));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        temp_r3_11 = M2C_FIELD(arg0, u32 *, 0x28);
        if (temp_r3_11 != 0U) {
            clear_flag_bit2__20TWindowSubSymbolChatFPv((int) (temp_r3_11));
            M2C_FIELD(arg0, u32 *, 0x28) = 0U;
        }
        temp_r3_12 = M2C_FIELD(arg0, u32 *, 0x5C);
        if (temp_r3_12 != 0U) {
            TWindow__close((int) (temp_r3_12));
            M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
        }
        (*(s32 *)&lbl_805D6490) = 0;
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

void *TWindowSubSymbolChat__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowSubSymbolChat;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3AA8;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    TWindowSubSymbolChat__data_805D6494 = 0;
    TWindowSubSymbolChat__data_805D6498 = 0;
    TWindowSubSymbolChat__data_805D649C = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    lbl_805D6490 = arg0;
    M2C_FIELD(arg0, s32 *, 0x5C) = update_display__20TWindowSubSymbolChatFi(close_child__20TWindowSubSymbolChatFv);
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}
typedef char RecoveredGlobal_8028379C_lbl_804FF968_size[sizeof(RecoveredGlobal_8028379C_lbl_804FF968) == 0x58 ? 1 : -1];
M2C_UNK *TWindowSubSymbolChat__sub_8028379C(void) {
    return &lbl_804FF968.value;
}

}
