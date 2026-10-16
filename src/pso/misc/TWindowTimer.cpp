#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowTimer.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"

struct RecoveredGlobal_80287FBC_lbl_804D2E74 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80287FBC___vt__12TWindowTimer {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFl();
s32 draw_visible_window_entries(void *, void *, int);
void render__12TWindowTimerFv(s32 arg0);
s16 get_timer_value__12TWindowTimerFi(int);
void run_task__12TWindowTimerFv(u8 *arg0);
s32 draw_window_tab(void *, void *, int, f32);
extern const f32 lbl_805DD890;
u8 * construct_base__9TWindowDDFPUcsPUc(void *, void *, s16, void *);
u8 * get_zero_vec2(void);
extern RecoveredGlobal_80287FBC_lbl_804D2E74 lbl_804D2E74;
extern s32 __vt__12TWindowTimer[];
extern s32 TWindowTimer__name;
u8 *TWindowTimer__ct(u8 *arg0);
s32 get_shared_text_buffer();
s32 append_padded_number(s32, s32);
s32 text_builder_append(s32 *);
s32 text_builder_reset();
s32 set_text_entry_string(s32, s32, s32);
extern s32 lbl_8044FCE8[];
extern s32 lbl_805DD888;
extern s32 lbl_805DD88C;
}

extern "C" {

void *__dt__12TWindowTimerFv(void *arg0, s16 arg1);
s32 get_shared_text_buffer();
s32 append_padded_number(s32, s32);
s32 get_window_layout_position(s32);
s32 text_builder_append(s32 *);
s32 text_builder_reset();
s32 set_text_entry_string(s32, s32, s32);
void __dl__7TObjectFPv(void *);
s32 __nw__7TObjectFUl(s32);
s32 is_com_card_active();
s32 is_guild_card_receive_active();
s32 init_timer_window_layout(s32);
s32 init_timer_window_layout_alt(s32);

void TWindowTimer::update_chat_parts() {
    u8 *arg0 = (u8 *)this;
    s32 var_r3;

    if (*(s32 *)&this->m_60 & 1) {
        var_r3 = get_window_layout_position(0xA9);
    } else if ((TWindowSubShortMail::is_active() != 0) || (is_com_card_active() != 0) || (is_guild_card_receive_active() != 0)) {
        var_r3 = get_window_layout_position(0xA8);
    } else {
        var_r3 = get_window_layout_position(0x22);
    }
    ((TWindowSubSymbolChatPartsSet *)(arg0 + 0x30))->copy_vec2((void*)var_r3);
}

extern s32 lbl_8044FCE0[];
extern s32 lbl_805DD884;

void TWindowTimer::draw(s32 arg1, s32 arg2) {
    s32 temp_r31;

    temp_r31 = get_array_entry(0);
    text_builder_reset();
    text_builder_append(&lbl_805DD884);
    append_padded_number(arg1, 3);
    text_builder_append(lbl_8044FCE0);
    append_padded_number(arg2, 3);
    set_text_entry_string(temp_r31, get_shared_text_buffer(), 0x20);
    ((TWindowHelpItem *)temp_r31)->reset_float_field();
}

void TWindowTimer::set_time(u32 secs) {
    s32 entry;
    u32 hours;
    u32 mins;
    entry = get_array_entry((s32)(0));
    text_builder_reset();
    hours = secs / 3600;
    secs %= 3600;
    if (hours > 9) {
        text_builder_append((s32 *)(lbl_8044FCE8));
    } else {
        append_padded_number((s32)(hours), (s32)(1));
        text_builder_append((s32 *)(&lbl_805DD888));
        mins = secs / 60;
        secs %= 60;
        append_padded_number((s32)(mins), (s32)(2));
        text_builder_append((s32 *)(&lbl_805DD88C));
        append_padded_number((s32)(secs), (s32)(2));
    }
    set_text_entry_string((s32)(entry), (s32)(get_shared_text_buffer()), (s32)(0x20));
    ((TWindowHelpItem *)entry)->reset_float_field();
}

void TWindowTimer::draw_tab(s32 arg0, s32 arg1) {
    draw_window_tab((void *) (arg1), (void *) (arg1 + 0x10), (int) (3), (f32) (lbl_805DD890));
}

s32 TWindowTimer::create() {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = ((s32)TWindowTimer__ct((u8 *)((void *)var_r31)));
    }
    init_timer_window_layout(var_r31);
    return var_r31;
}

s32 TWindowTimer::create_alt() {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = ((s32)TWindowTimer__ct((u8 *)((void *)var_r31)));
    }
    init_timer_window_layout_alt(var_r31);
    return var_r31;
}

extern s32 __vt__12TWindowTimer[];

}
extern "C" {
void render__12TWindowTimerFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFl();
    TWindowTimer::draw_tab((s32)((void *) (arg0)), (s32)((int) (temp_r3)));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__12TWindowTimerFv(u8 *arg0) {
  int temp_r31;
  if ((*((s32 *) (((s8 *) arg0) + 0x60))) & 1)
  {
    temp_r31 = get_timer_value__12TWindowTimerFi((int) 1);
    ((TWindowTimer *)arg0)->draw((s32)((int) get_timer_value__12TWindowTimerFi((int) 0)), (s32)((int) temp_r31));
  }
 do { ((TWindowDD *)arg0)->initialize_subwindow(); ((TWindowTimer *)arg0)->update_chat_parts(); ((TWindowTimer *)arg0)->ease_window_timer_position(); ((TUnk_804CE018 *)arg0)->update_window_entry_list((void *) (arg0 + 0x24)); } while (0);
}

void *__dt__12TWindowTimerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TWindowTimer;
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80287FBC_lbl_804D2E74_size[sizeof(RecoveredGlobal_80287FBC_lbl_804D2E74) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80287FBC___vt__12TWindowTimer_size[sizeof(RecoveredGlobal_80287FBC___vt__12TWindowTimer) == 0x18 ? 1 : -1];
u8 *TWindowTimer__ct(u8 *arg0) {
    construct_base__9TWindowDDFPUcsPUc(arg0, &lbl_804D2E74.value, 4, get_zero_vec2());
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80287FBC___vt__12TWindowTimer *)&__vt__12TWindowTimer).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowTimer__name;
    *(s32 *)((s8 *)arg0 + 0x60) = 0;
    ((TWindowTimer *)arg0)->update_chat_parts();
    ((TUnk_804CE018 *)arg0)->save_position();
    return arg0;
}

}
