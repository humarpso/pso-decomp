#include "pso/misc/TWindowDD.h"

#include "types.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"

struct W_80348520 {
    u8 pad0[0x24];
    void *b[8];
    u8 pad44[0x64 - 0x44];
    void *a[6];
    void *f7c;
    void *f80;
    void *f84;
};

extern "C" {
s32 copy_chat_entry__9TWindowDDFPvPv(int, void *);
s32 reset_selection__9TWindowDDFv(void *, void *);
void TWindowDD__sub_803484C4(u8 *arg0);
int TWindowDD__sub_8034B008(s32, s32);
void TWindowDD__sub_80348448(s32 arg0, s16 arg1);
s32 TWindow__close(void *);
s32 is_flag_set__6TLobbyFv();
int TWindowDD__sub_80348424(s32 _w0, s32 _w1);
s32 TWindowDD__sub_8034435C();
s32 TWindowDD__sub_80344568();
s32 TWindowDD__sub_80344774();
s32 format_message_text__9TWindowDDFPvPvUs();
s32 format_german_message__9TWindowDDFPvPvUs();
s32 TWindowDD__sub_80345608();
s32 format_english_message__9TWindowDDFPvPvUs();
s32 format_entry_text__9TWindowDDFPvPv();
s32 TWindowDD__sub_80346434();
s32 TWindowDD__sub_80346640();

int TWindowDD::test_input_flag_4() { return TWindowDD_check_input_mask((char*)this + 0x1c, 4); }

extern s32 TWindowDD__window_mode;

void TWindowDD::dispatch_state() {
    switch ((s32) TWindowDD__window_mode) {
    case 0:
        TWindowDD__sub_80346640();
        return;
    default:
        TWindowDD__sub_80346434();
        return;
    case 4:
        TWindowDD__sub_80344774();
        return;
    case 2:
        TWindowDD__sub_80344568();
        return;
    case 3:
        TWindowDD__sub_8034435C();
        return;
    }
}

s32 TWindowDD::get_word_select_context() {
    s32 temp_r3;
    temp_r3 = TOKeyMachine01::get_global_state();
    if (temp_r3 == 0 || temp_r3 == 18) {
        return 1;
    }
    if (temp_r3 == 15) {
        return 0;
    }
    if (TObjPlayer::get_player_count() != 0) {
        return 4;
    }
    if (is_flag_set__6TLobbyFv() != 0) {
        return 5;
    }
    return (*(s32 *)&this->m_bc != 0 ? 1 : 0) + 2;
}

int TWindowDD__sub_80348424(s32 _w0, s32 _w1) { return TWindowDD__sub_8034B008((s32)((void*)(1)), (s32)(_w1)); }

void TWindowDD__sub_80348448(s32 arg0, s16 arg1) {
    TWindowDD__sub_8034B008((s32)(0), (s32)((s32) arg1));
}

s32 TWindowDD::get_mode_code() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    temp_r3 = *(s32 *)((s8 *)arg0 + 0xA8);
    if (temp_r3 == 2) {
        return 1;
    }
    return ((temp_r3 - 3) == 0) ? 2 : 0;
}

void TWindowDD::set_state() { *(int*)((char*)this + 0xa8) = 3; close_all_windows(); }

void TWindowDD__sub_803484C4(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0xA8) = 2;
    copy_chat_entry__9TWindowDDFPvPv((int) (*(s32 *)((s8 *)arg0 + 0xC0)), (void *) (arg0 + 0xC4));
    if ((s32) *(s32 *)((s8 *)arg0 + 0xA4) != 0) {
        reset_selection__9TWindowDDFv((void *) (arg0), (void *) (arg0 + 0xC4));
    }
    ((TWindowDD *)arg0)->close_all_windows();
}

void TWindowDD::close_all_windows() {
    W_80348520 *w = (W_80348520 *)this;
    s32 i;
    if (w->f84 != NULL) {
        TWindow__close(w->f84);
        w->f84 = NULL;
    }
    if (w->f80 != NULL) {
        TWindow__close(w->f80);
        w->f80 = NULL;
    }
    if (w->f7c != NULL) {
        TWindow__close(w->f7c);
        w->f7c = NULL;
    }
    for (i = 0; i < 6; i++) {
        if (w->a[i] != NULL) {
            TWindow__close(w->a[i]);
            w->a[i] = NULL;
        }
    }
    for (i = 7; i >= 0; i--) {
        if (w->b[i] != NULL) {
            TWindow__close(w->b[i]);
            w->b[i] = NULL;
        }
    }
}

s32 TWindowDD::can_append_chars(s32 arg0, s32 *arg1) {
    s32 t = *arg1;
    return (arg0 + t + 1) < 0x80;
}

void TWindowDD::update_state() {
    switch ((s32) TWindowDD__window_mode) {
    case 0:
        format_entry_text__9TWindowDDFPvPv();
        return;
    default:
        format_english_message__9TWindowDDFPvPvUs();
        return;
    case 4:
        TWindowDD__sub_80345608();
        return;
    case 2:
        format_german_message__9TWindowDDFPvPvUs();
        return;
    case 3:
        format_message_text__9TWindowDDFPvPvUs();
        return;
    }
}

void TWindowDD::append_prompt_newline(s32 *arg1) {
    u8 *arg0 = (u8 *)this;
    s32 p = *arg1;
    if (((s32)TWindowDD::can_append_chars((s32)((s32)(3)), (s32 *)((s32 *)(arg1)))) != 0) {
        arg0[p++] = 0xA;
        arg0[p++] = 0x3E;
        arg0[p++] = 0x20;
    }
    *arg1 = p;
}

s32 TWindowDD::clamp_range_5FA_682(s16 arg0) {
    if ((arg0 >= 0x5FA) && (arg0 <= 0x682)) {
        return arg0 - 0x5FA;
    }
    return 0;
}

s32 TWindowDD::clamp_range_2C9_552(s16 arg0) {
    if ((arg0 >= 0x2C9) && (arg0 <= 0x552)) {
        return arg0 - 0x2C9;
    }
    return 0;
}

}
