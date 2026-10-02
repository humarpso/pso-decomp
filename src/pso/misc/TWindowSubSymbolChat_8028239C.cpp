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
s32 TWindowSubSymbolChat__sub_802826E4(M2C_UNK arg0, s32 arg1);
s32 get_symbol_chat_data__20TWindowSubSymbolChatFPv(s32);
s32 TWindowSubSymbolChat__sub_80077464(s32);
s32 TWindowSubSymbolChat__sub_80077480(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
void set_selected_index__17TWindowSubComCardFPvs(s32, s16);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK get_window_layout_position(M2C_UNK);
extern const f32 lbl_805DD748;
extern const f32 lbl_805DD74C;
s32 TWindowSubSymbolChat__sub_80282600(Win_80282600 *arg0);
}

extern "C" {

void *TWindowSubSymbolChat__ct(void *arg0, s32 arg1, s32 arg2);
void apply_symbol__20TWindowSubSymbolChatFPv(void *arg0);
s32 open_edit_menu__20TWindowSubSymbolChatFPv(void *arg0);
s32 open_main_menu__20TWindowSubSymbolChatFv(void);
void render__20TWindowSubSymbolChatFv(void);
M2C_UNK TWindowSubComCard__sub_80265680(s32, s16);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
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
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD73C;

s32 open_main_menu__20TWindowSubSymbolChatFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0x78), 6, get_message_10__20TWindowSubStatusDispFPv(0x1D));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xA8), 6, 6);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xA9), 6, 0xA);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAA), 6, 0x14);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAB), 6, 0x22);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAC), 6, 0x26);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAD), 6, 0x28);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD73C);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

void apply_symbol__20TWindowSubSymbolChatFPv(void *arg0) {
    TWindowSubComCard__sub_80265680(M2C_FIELD(arg0, s32 *, 0x38), (s16) M2C_FIELD(arg0, s32 *, 0x20));
}

s32 TWindowSubSymbolChat__sub_80282600(Win_80282600 *arg0) {
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
    TWindowSubComCard__sub_80265C30(card);
    set_selected_index__17TWindowSubComCardFPvs(card, arg0->sel);
    return card;
}

s32 TWindowSubSymbolChat__sub_802826E4(M2C_UNK arg0, s32 arg1) {
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
