#include "types.h"
#include "pso/misc/TWindowCtrl_8024A054.h"
#include "pso/misc/TWindowInputNumber_80256170.h"
#include "pso/misc/TWindowSubStatusDisp_802598E4.h"
#include "pso/misc/TWindowChoiceSetting.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/ui/TWindowInputNumber.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_80256A60_lbl_804CF8EC {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80256A60___vt__18TWindowInputNumber {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80256B0C_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

typedef struct Digit_802561E8 {
    u16 flags;
    u8 pad2[6];
    f32 x;
    u8 padC[4];
    f32 w;
} Digit_802561E8;

typedef struct InNum_802561E8 {
    u8 pad0[0x38];
    f32 x;
    u8 pad3c[0x26];
    s8 ndigits;
} InNum_802561E8;

struct Win_80256354 { u8 p0[0x62]; s8 f62; u8 p63[5]; s32 f68; };

extern "C" {
void construct_base__9TWindowDDFPUcsPUc(void *, void *, s16, void *);
extern RecoveredGlobal_80256A60_lbl_804CF8EC window_input_number_layout;
extern s32 __vt__18TWindowInputNumber[];
extern s32 TWindowInputNumber__name;
extern const f32 lbl_805DCE2C;
extern s8 controller_input_state[];
u8 test_input_flag__18TWindowInputNumberFv(u8 *arg0);
extern const f32 lbl_805DCE18;
extern const f32 lbl_805DCE1C;
extern const f32 lbl_805DCE20;
extern const f32 lbl_805DCE24;
extern const s32 number_input_decimal_place_values[];
s32 draw_arrows__18TWindowInputNumberFv(void *, int, int, int);
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
u32 construct_type1_heading__20TWindowSubStatusDispFll(u32, s32, s16);
void __dl__7TObjectFPv(void *);
s32 forward_render__20TWindowSubStatusDispFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
extern const f32 lbl_805DCE54;

void TWindowInputNumber::create(s32 arg1) {
    u32 var_r0;

    if ((u32) this->unknown70 == 0U) {
        var_r0 = ((TAdSinglePlyChrSelectGC *)0x24)->alloc();
        if (var_r0 != 0U) {
            u32 saved = var_r0;
            var_r0 = construct_type1_heading__20TWindowSubStatusDispFll(saved, arg1, this->clientIndex);
        }
        this->unknown70 = var_r0;
        this->m_2c = (s32) (this->m_2c | 0x40);
        *(f32 *)((s8 *)this + 0x3C) = (f32) (*(f32 *)((s8 *)this + 0x3C) + lbl_805DCE18);
    }
}

#pragma push
#pragma fp_contract on
void TWindowInputNumber::align_digits() {
    s32 i;
    f32 step;
    f32 scale;
    f32 pos;
    i = 0;
    scale = lbl_805DCE1C;
    step = lbl_805DCE24;
    pos = scale * (((InNum_802561E8 *)this)->x - lbl_805DCE20) + scale * (f32)(((InNum_802561E8 *)this)->ndigits * 12);
    pos -= lbl_805DCE18;
    for (; i < ((InNum_802561E8 *)this)->ndigits; i++) {
        Digit_802561E8 *d = (Digit_802561E8 *)((TUnk_804CE018 *)this)->get_array_entry(i);
        d->x = scale * d->w + pos;
        pos -= step;
    }
    for (; i < 6; i++) {
        Digit_802561E8 *d = (Digit_802561E8 *)((TUnk_804CE018 *)((InNum_802561E8 *)this))->get_array_entry(i);
        d->flags |= 2;
    }
}
#pragma pop

void TWindowInputNumber::refresh_digit_entries() {
  s32 var_r30;
  u8 *temp_r3;
  s32 var_r29;
  var_r30 = 0;
  var_r29 = this->value;
  do
  {
    temp_r3 = (u8 *) ((TUnk_804CE018 *)((u8 *)this))->get_array_entry(var_r30);
    *((s32 *) (((s8 *) temp_r3) + 0x20)) = (s32) (var_r29 % 10);
    draw_right_aligned_number(temp_r3);
    var_r29 = var_r29 / 10;
    var_r30 += 1;
  }
  while (((u32) var_r30) < 6U);
}

void TWindowInputNumber::calc_digit_count() {
    Win_80256354 *w = (Win_80256354 *)this;
    s32 i = 0;
    w->f62 = 0;
    while (i < 6) {
        if (w->f68 < number_input_decimal_place_values[i]) {
            break;
        }
        w->f62 = i;
        i++;
    }
    w->f62++;
}

void render__18TWindowInputNumberFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = ((TUnk_804CE018 *)arg0)->setup_window_draw_context((s32)(arg0 + 0x74));
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    draw_arrows__18TWindowInputNumberFv(arg0, temp_r3, (int) (((TUnk_804CE018 *)arg0)->get_array_entry((int) ((TWindowInputNumber *)arg0)->selectedDigit)), ((TWindowInputNumber *)arg0)->is_confirmed());
    {
        void *temp_ptr = (void *) ((TWindowInputNumber *)arg0)->unknown70;
        if (temp_ptr != NULL) {
            forward_render__20TWindowSubStatusDispFv(temp_ptr, temp_r3);
        }
    }
}

void TWindowInputNumber::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r30;
    u32 temp_r3;
    u8 *input;
    u8 *temp_r29_2;
    u8 *temp_r29_3;

    temp_r30 = is_player_input_active(((s32) *(s16 *)((s8 *)arg0 + 0x20)));
    if (!(*(s32 *)((s8 *)arg0 + 0x2C) & 2)) {
        *(s32 *)((s8 *)arg0 + 0x5C) = 0x01000000;
    }
    if ((((TWindowInputNumber *)arg0)->is_confirmed() == 0) && !(*(u16 *)((s8 *)arg0 + 0x60) & 0x40) && (((TUnk_804CE018 *)arg0)->sub_80244994() != 0)) {
        if (*(u16 *)((s8 *)arg0 + 0x60) & 0x10) {
            input = (u8 *)controller_input_state + (temp_r30 * 0x50) + 0x20;
            if ((TWindowChoiceSetting::apply_choice((s32)input, 0x10, 6, 1) != 0) || (((TWindowInputNumber *)arg0)->is_locked(0x10) != 0)) {
                ((TWindowInputNumber *)arg0)->update_value();
            }
            if ((TWindowChoiceSetting::apply_choice((s32)input, 0x20, 6, 1) != 0) || (((TWindowInputNumber *)arg0)->is_locked(0x20) != 0)) {
                ((TWindowInputNumber *)arg0)->update();
            }
            if ((TWindowChoiceSetting::apply_choice((s32)input, 0x40, 6, 1) != 0) || (((TWindowInputNumber *)arg0)->is_locked(0x40) != 0)) {
                ((TWindowInputNumber *)arg0)->move_cursor_next();
            }
            if ((TWindowChoiceSetting::apply_choice((s32)input, 0x80, 6, 1) != 0) || (((TWindowInputNumber *)arg0)->is_locked(0x80) != 0)) {
                ((TWindowInputNumber *)arg0)->handle_decrement();
            }
        } else {
            temp_r29_2 = (u8 *)controller_input_state + (temp_r30 * 0x50) + 0x20;
            if ((TAdMultiPlyChrSelectGC::dispatch_draw_command((int)temp_r29_2, 0x10, 6, 1) != 0) || (((TWindowInputNumber *)arg0)->is_locked(0x10) != 0)) {
                ((TWindowInputNumber *)arg0)->update_value();
            }
            if ((TAdMultiPlyChrSelectGC::dispatch_draw_command((int)temp_r29_2, 0x20, 6, 1) != 0) || (((TWindowInputNumber *)arg0)->is_locked(0x20) != 0)) {
                ((TWindowInputNumber *)arg0)->update();
            }
            if ((TAdMultiPlyChrSelectGC::dispatch_draw_command((int)temp_r29_2, 0x40, 6, 1) != 0) || (((TWindowInputNumber *)arg0)->is_locked(0x40) != 0)) {
                ((TWindowInputNumber *)arg0)->move_cursor_next();
            }
            if ((TAdMultiPlyChrSelectGC::dispatch_draw_command((int)temp_r29_2, 0x80, 6, 1) != 0) || (((TWindowInputNumber *)arg0)->is_locked(0x80) != 0)) {
                ((TWindowInputNumber *)arg0)->handle_decrement();
            }
        }
        temp_r29_3 = (u8 *)controller_input_state + (temp_r30 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int)temp_r29_3, 4) != 0) || (((s32 (*)(void *, int))test_input_flag__18TWindowInputNumberFv)((void *)arg0, 4) != 0)) {
            ((TWindowInputNumber *)arg0)->confirm_input();
        }
        if ((TWindowShortListCtrl__check_controller_button((int)temp_r29_3, 2) != 0) || (((s32 (*)(void *, int))test_input_flag__18TWindowInputNumberFv)((void *)arg0, 2) != 0)) {
            ((TWindowInputNumber *)arg0)->mark_confirmed();
        }
    }
    temp_r3 = *(u32 *)((s8 *)arg0 + 0x70);
    if ((temp_r3 != 0U) && ((f32) *(s32 *)((s8 *)arg0 + 0x5C) >= lbl_805DCE54)) {
        ((TWindowSubStatusDisp *)temp_r3)->update_subwindow();
    }
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TUnk_804CE018 *)arg0)->update_fade();
    ((TUnk_804CE018 *)arg0)->update_window_entry_list(arg0 + 0x24);
}

void *__dt__18TWindowInputNumberFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        ((TWindowInputNumber *)arg0)->objectVtable = __vt__18TWindowInputNumber;
        if (*(void **)((s8 *)arg0 + 0x70) != NULL) { TWindowSubStatusDisp::destroy_status_display((s32)(*(void **)((s8 *)arg0 + 0x70)), (s16)1); }
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80256A60_lbl_804CF8EC_size[sizeof(RecoveredGlobal_80256A60_lbl_804CF8EC) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80256A60___vt__18TWindowInputNumber_size[sizeof(RecoveredGlobal_80256A60___vt__18TWindowInputNumber) == 0x18 ? 1 : -1];
}

TWindowInputNumber::TWindowInputNumber(void *position, s32 low, s32 high,
                                     s32 initial, s16 client) {
    construct_base__9TWindowDDFPUcsPUc(this, &window_input_number_layout.value, client, position);
    objectVtable = __vt__18TWindowInputNumber;
    className = TWindowInputNumber__name;
    clientIndex = client;
    inputFlags = 0;
    selectedDigit = 0;
    minimum = low;
    maximum = high;
    value = initial;
    unknown70 = 0;
    scaleX = lbl_805DCE2C;
    scaleY = lbl_805DCE2C;
    calc_digit_count();
    refresh_digit_entries();
    align_digits();
}

typedef char RecoveredGlobal_80256B0C_lbl_8050E208_size[sizeof(RecoveredGlobal_80256B0C_lbl_8050E208) == 0x1B0 ? 1 : -1];
u8 TWindowInputNumber::test_input_flag() {
    if (this->inputFlags & 0x20) {
        return 0U;
    }
    return ((TAdSinglePlyChrSelectGC *)((u8 *)&(*(RecoveredGlobal_80256B0C_lbl_8050E208 *)&controller_input_state).value + 0x160))->test_flag_4c();
}

s32 TWindowInputNumber::is_locked(s32 arg1) {
    if (this->inputFlags & 0x20) {
        return 0;
    }
    return TWindowChoiceSetting::apply_choice((s32)(controller_input_state + 0x160), (s32)arg1, 6, 1);
}
