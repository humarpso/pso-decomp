#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80287FBC_lbl_804D2E74 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80287FBC___vt__12TWindowTimer {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK draw_visible_window_entries(void *, void *, int);
extern M2C_UNK __vt__14TWindowMessage[];
void render__12TWindowTimerFv(s32 arg0);
s16 get_timer_value__12TWindowTimerFi(int);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK update_window_entry_list(void *, void *);
M2C_UNK ease_window_timer_position(void *);
void update_chat_parts__12TWindowTimerFPv(u8 *arg0);
void draw__12TWindowTimerFPvii(void *arg0, s32 arg1, s32 arg2);
void run_task__12TWindowTimerFv(u8 *arg0);
M2C_UNK draw_window_tab(void *, void *, int, f32);
extern const f32 lbl_805DD890;
void draw_tab__12TWindowTimerFii(M2C_UNK arg0, s32 arg1);
void save_position__17TWindowSubComCardFPv(void *);
u8 * construct_base__9TWindowDDFPvPvsPv(void *, void *, s16, void *);
u8 * get_zero_vec2(void);
void update_chat_parts__12TWindowTimerFPv(u8 *arg0);
extern RecoveredGlobal_80287FBC_lbl_804D2E74 lbl_804D2E74;
extern M2C_UNK __vt__12TWindowTimer[];
extern s32 TWindowTimer__name;
u8 *TWindowTimer__ct(u8 *arg0);
s32 get_shared_text_buffer();
M2C_UNK append_padded_number(s32, M2C_UNK);
M2C_UNK text_builder_append(M2C_UNK *);
M2C_UNK text_builder_reset();
M2C_UNK set_text_entry_string(s32, s32, M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK reset_float_field__15TWindowHelpItemFPv(s32);
extern s32 lbl_8044FCE8[];
extern s32 lbl_805DD888;
extern s32 lbl_805DD88C;
void set_time__12TWindowTimerFPvUi(void *self, u32 secs);
}

extern "C" {

void *__dt__12TWindowTimerFv(void *arg0, s16 arg1);
s32 create__12TWindowTimerFv(void);
s32 create_alt__12TWindowTimerFv(void);
void draw__12TWindowTimerFPvii(void *arg0, s32 arg1, s32 arg2);
void update_chat_parts__12TWindowTimerFPv(u8 *arg0);
s32 get_shared_text_buffer();
M2C_UNK append_padded_number(s32, M2C_UNK);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK text_builder_append(M2C_UNK *);
M2C_UNK text_builder_reset();
M2C_UNK set_text_entry_string(s32, s32, M2C_UNK);
void __dl__7TObjectFPv(void *);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, s32);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 is_com_card_active();
s32 is_guild_card_receive_active();
M2C_UNK init_timer_window_layout(s32);
M2C_UNK init_timer_window_layout_alt(s32);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s32 is_active__19TWindowSubShortMailFv();
M2C_UNK reset_float_field__15TWindowHelpItemFPv(s32);

void update_chat_parts__12TWindowTimerFPv(u8 *arg0) {
    s32 var_r3;

    if (M2C_FIELD(arg0, s32 *, 0x60) & 1) {
        var_r3 = get_window_layout_position(0xA9);
    } else if ((is_active__19TWindowSubShortMailFv() != 0) || (is_com_card_active() != 0) || (is_guild_card_receive_active() != 0)) {
        var_r3 = get_window_layout_position(0xA8);
    } else {
        var_r3 = get_window_layout_position(0x22);
    }
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x30, var_r3);
}

extern M2C_UNK lbl_8044FCE0[];
extern M2C_UNK lbl_805DD884;

void draw__12TWindowTimerFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    text_builder_reset();
    text_builder_append(&lbl_805DD884);
    append_padded_number(arg1, 3);
    text_builder_append(lbl_8044FCE0);
    append_padded_number(arg2, 3);
    set_text_entry_string(temp_r31, get_shared_text_buffer(), 0x20);
    reset_float_field__15TWindowHelpItemFPv(temp_r31);
}

void set_time__12TWindowTimerFPvUi(void *self, u32 secs) {
    s32 entry;
    u32 hours;
    u32 mins;
    entry = get_array_entry__20TWindowSubStatusDispFPvi((void *)(self), (M2C_UNK)(0));
    text_builder_reset();
    hours = secs / 3600;
    secs %= 3600;
    if (hours > 9) {
        text_builder_append((M2C_UNK *)(lbl_8044FCE8));
    } else {
        append_padded_number((s32)(hours), (M2C_UNK)(1));
        text_builder_append((M2C_UNK *)(&lbl_805DD888));
        mins = secs / 60;
        secs %= 60;
        append_padded_number((s32)(mins), (M2C_UNK)(2));
        text_builder_append((M2C_UNK *)(&lbl_805DD88C));
        append_padded_number((s32)(secs), (M2C_UNK)(2));
    }
    set_text_entry_string((s32)(entry), (s32)(get_shared_text_buffer()), (M2C_UNK)(0x20));
    reset_float_field__15TWindowHelpItemFPv(entry);
}

void draw_tab__12TWindowTimerFii(M2C_UNK arg0, s32 arg1) {
    draw_window_tab((void *) (arg1), (void *) (arg1 + 0x10), (int) (3), (f32) (lbl_805DD890));
}

s32 create__12TWindowTimerFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = ((s32)TWindowTimer__ct((u8 *)((void *)var_r31)));
    }
    init_timer_window_layout(var_r31);
    return var_r31;
}

s32 create_alt__12TWindowTimerFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = ((s32)TWindowTimer__ct((u8 *)((void *)var_r31)));
    }
    init_timer_window_layout_alt(var_r31);
    return var_r31;
}

extern M2C_UNK __vt__12TWindowTimer[];

}
extern "C" {
void render__12TWindowTimerFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_tab__12TWindowTimerFii((M2C_UNK)((void *) (arg0)), (s32)((int) (temp_r3)));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__12TWindowTimerFv(u8 *arg0) {
  int temp_r31;
  if ((*((s32 *) (((s8 *) arg0) + 0x60))) & 1)
  {
    temp_r31 = get_timer_value__12TWindowTimerFi((int) 1);
    draw__12TWindowTimerFPvii((void *)((void *) arg0), (s32)((int) get_timer_value__12TWindowTimerFi((int) 0)), (s32)((int) temp_r31));
  }
 do { initialize_subwindow__9TWindowDDFPv((void *) arg0); update_chat_parts__12TWindowTimerFPv((u8 *)((void *) arg0)); ease_window_timer_position((void *) arg0); update_window_entry_list((void *) arg0, (void *) (arg0 + 0x24)); } while (0);
}

void *__dt__12TWindowTimerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TWindowTimer;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80287FBC_lbl_804D2E74_size[sizeof(RecoveredGlobal_80287FBC_lbl_804D2E74) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80287FBC___vt__12TWindowTimer_size[sizeof(RecoveredGlobal_80287FBC___vt__12TWindowTimer) == 0x18 ? 1 : -1];
u8 *TWindowTimer__ct(u8 *arg0) {
    construct_base__9TWindowDDFPvPvsPv(arg0, &lbl_804D2E74.value, 4, get_zero_vec2());
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80287FBC___vt__12TWindowTimer *)&__vt__12TWindowTimer).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TWindowTimer__name;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    update_chat_parts__12TWindowTimerFPv((u8 *)(arg0));
    save_position__17TWindowSubComCardFPv(arg0);
    return arg0;
}

}
