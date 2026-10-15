#include "types.h"

struct I_8034CDE0 { u8 pad[0x10]; s8 f10; u8 pad11[0xBC - 0x11]; };

struct L_8034CDE0 { u8 f0; u8 n; u8 pad2[2]; I_8034CDE0 items[1]; };

extern "C" {
void *get_message_10__20TWindowSubStatusDispFPv(int);
s32 set_flag70_bit10__16TObjCityMainWarpFPv(void *);
s32 set_scroll_target__17TWindowSubComCardFPvff(void *, f32, f32);
s32 draw_text_gray__17TWindowSubComCardFiiii(void *, void *, int, int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(void *, void *, int, int);
void *draw_card_icon__17TWindowSubComCardFiii(s32, int, void *);
s32 get_window_layout_position(s32);
s16 get_field_72__17TWindowSubComCardFPv(void *);
L_8034CDE0 *get_info_board_ptr__6TLobbyFv();
extern const f32 lbl_805DFDD8;
extern const f32 lbl_805DFDDC;
void *TWindowSubComCard__sub_8034CDE0(void);
}

extern "C" {

void open_card_info_window__17TWindowSubComCardFPv(void *arg0);
s32 set_window_mode_4__6TLobbyFPvii(s32, s32 *, s32);
s32 get_window_layout_position(s32);

extern s32 lbl_80478C2C[];

void open_card_info_window__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r3;
    temp_r3 = get_window_layout_position(0xA5);
    set_window_mode_4__6TLobbyFPvii(temp_r3, lbl_80478C2C, 1);
    *(s32 *)((s8 *)arg0 + 0x24) = -1;
}
void *TWindowSubComCard__sub_8034CDE0(void) {
    I_8034CDE0 *it;
    void *w;
    s32 i;
    s32 n;
    it = (I_8034CDE0 *)get_info_board_ptr__6TLobbyFv();
    if (it == NULL) {
        return 0;
    }
    w = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position(0xA6), 0xC, get_message_10__20TWindowSubStatusDispFPv(0x1D));
    n = ((L_8034CDE0 *)it)->n;
    it = ((L_8034CDE0 *)it)->items;
    for (i = 0; i < n; i++, it++) {
        if (it->f10 != 0) {
            forward_trade_action_default__16TObjCityMainWarpFPviii(w, it, 0x16, i);
        } else {
            draw_text_gray__17TWindowSubComCardFiiii(w, it, 0x16, i);
        }
    }
    if (get_field_72__17TWindowSubComCardFPv(w) <= 0) {
        draw_text_gray__17TWindowSubComCardFiiii(w, get_message_10__20TWindowSubStatusDispFPv(0xD2), 6, -1);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(w);
    set_scroll_target__17TWindowSubComCardFPvff(w, lbl_805DFDD8, lbl_805DFDDC);
    return w;
}

}
