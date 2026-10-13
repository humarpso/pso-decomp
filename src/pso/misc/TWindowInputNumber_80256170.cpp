#include "types.h"
#include "pso/ui/TWindowInputNumber.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80256A60_lbl_804CF8EC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80256A60___vt__18TWindowInputNumber {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80256B0C_lbl_8050E208 {
    M2C_UNK value;
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
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void draw_right_aligned_number(void *);
void refresh_digit_entries__18TWindowInputNumberFPv(u8 *arg0);
void construct_base__9TWindowDDFPvPvsPv(void *, void *, s16, void *);
void refresh_digit_entries__18TWindowInputNumberFPv(u8 *arg0);
extern RecoveredGlobal_80256A60_lbl_804CF8EC lbl_804CF8EC;
extern M2C_UNK __vt__18TWindowInputNumber[];
extern s32 TWindowInputNumber__name;
extern const f32 lbl_805DCE2C;
u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *);
extern s8 controller_input_state[];
u8 test_input_flag__18TWindowInputNumberFPv(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
extern const f32 lbl_805DCE18;
extern const f32 lbl_805DCE1C;
extern const f32 lbl_805DCE20;
extern const f32 lbl_805DCE24;
void align_digits__18TWindowInputNumberFv(InNum_802561E8 *self);
extern const s32 number_input_decimal_place_values[];
void calc_digit_count__18TWindowInputNumberFv(void *arg0);
}

extern "C" {

struct WindowNum_80256170 { char pad[0x70]; };

void *__dt__18TWindowInputNumberFv(void *arg0, s16 arg1);
void create__18TWindowInputNumberFPvi(void *arg0, s32 arg1);
s32 is_locked__18TWindowInputNumberFPvi(void *arg0, s32 arg1);
void render__18TWindowInputNumberFv(u8 *arg0);
M2C_UNK draw_arrows__18TWindowInputNumberFv(void *, int, int, int);
s32 setup_window_draw_context(void *, void *);
M2C_UNK draw_window_frame(void *, int);
M2C_UNK draw_visible_window_entries(void *, void *, int);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);
void __dl__7TObjectFPv(void *);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, M2C_UNK, M2C_UNK, M2C_UNK);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(void *, int);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
s32 is_confirmed__18TWindowInputNumberFPv(void *);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 fn_80244994(void *);
s32 update_fade__17TWindowSubComCardFPv(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 is_player_input_active(int);
s32 mark_confirmed__18TWindowInputNumberFPv(void *);
s32 confirm_input__18TWindowInputNumberFPv(void *);
s32 update__18TWindowInputNumberFPv(void *);
s32 update_value__18TWindowInputNumberFPv(void *);
s32 handle_decrement__18TWindowInputNumberFPv(void *);
s32 move_cursor_next__18TWindowInputNumberFPv(void *);
s32 update_window_entry_list(void *, void *);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern const f32 lbl_805DCE54;

extern const f32 lbl_805DCE18;

void create__18TWindowInputNumberFPvi(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) {
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
        if (var_r0 != 0U) {
            u32 saved = var_r0;
            var_r0 = construct_type1_heading__20TWindowSubStatusDispFPvii(saved, arg1, M2C_FIELD(arg0, s16 *, 0x20));
        }
        M2C_FIELD(arg0, u32 *, 0x70) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x40);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DCE18);
    }
}

#pragma push
#pragma fp_contract on
void align_digits__18TWindowInputNumberFv(InNum_802561E8 *self) {
    s32 i;
    f32 step;
    f32 scale;
    f32 pos;
    i = 0;
    scale = lbl_805DCE1C;
    step = lbl_805DCE24;
    pos = scale * (self->x - lbl_805DCE20) + scale * (f32)(self->ndigits * 12);
    pos -= lbl_805DCE18;
    for (; i < self->ndigits; i++) {
        Digit_802561E8 *d = (Digit_802561E8 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(self), (int)(i));
        d->x = scale * d->w + pos;
        pos -= step;
    }
    for (; i < 6; i++) {
        Digit_802561E8 *d = (Digit_802561E8 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(self), (int)(i));
        d->flags |= 2;
    }
}
#pragma pop

void refresh_digit_entries__18TWindowInputNumberFPv(u8 *arg0) {
  s32 var_r30;
  u8 *temp_r3;
  s32 var_r29;
  var_r30 = 0;
  var_r29 = *((s32 *) (((s8 *) arg0) + 0x6C));
  do
  {
    temp_r3 = (u8 *) get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (int)(var_r30));
    *((s32 *) (((s8 *) temp_r3) + 0x20)) = (s32) (var_r29 % 10);
    draw_right_aligned_number(temp_r3);
    var_r29 = var_r29 / 10;
    var_r30 += 1;
  }
  while (((u32) var_r30) < 6U);
}

void calc_digit_count__18TWindowInputNumberFv(void *arg0) {
    Win_80256354 *w = (Win_80256354 *)arg0;
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
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = setup_window_draw_context((void *) (arg0), (void *) (arg0 + 0x74));
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    temp_r31 = is_confirmed__18TWindowInputNumberFPv((void *) (arg0));
    draw_arrows__18TWindowInputNumberFv((void *) (arg0), (int) (temp_r3), (int) (get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) M2C_FIELD(arg0, s8 *, 0x63))), (int) (temp_r31));
    {
        void *temp_ptr = (void *) M2C_FIELD(arg0, u32 *, 0x70);
        if (temp_ptr != NULL) {
            forward_render__20TWindowSubStatusDispFPv(temp_ptr, (int) (temp_r3));
        }
    }
}

void run_task__18TWindowInputNumberFv(u8 *arg0) {
    s32 temp_r30;
    u32 temp_r3;
    u8 *temp_r29;
    u8 *temp_r29_2;
    u8 *temp_r29_3;

    temp_r30 = is_player_input_active((int) ((s32) M2C_FIELD(arg0, s16 *, 0x20)));
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if ((is_confirmed__18TWindowInputNumberFPv((void *) (arg0)) == 0) && !(M2C_FIELD(arg0, u16 *, 0x60) & 0x40) && (fn_80244994((void *) (arg0)) != 0)) {
        if (M2C_FIELD(arg0, u16 *, 0x60) & 0x10) {
            temp_r29 = (u8 *)controller_input_state + (temp_r30 * 0x50) + 0x20;
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x10), (int) (6), (int) (1)) != 0) || (is_locked__18TWindowInputNumberFPvi((void *) (arg0), (int) (0x10)) != 0)) {
                update_value__18TWindowInputNumberFPv((void *) (arg0));
            }
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x20), (int) (6), (int) (1)) != 0) || (is_locked__18TWindowInputNumberFPvi((void *) (arg0), (int) (0x20)) != 0)) {
                update__18TWindowInputNumberFPv((void *) (arg0));
            }
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x40), (int) (6), (int) (1)) != 0) || (is_locked__18TWindowInputNumberFPvi((void *) (arg0), (int) (0x40)) != 0)) {
                move_cursor_next__18TWindowInputNumberFPv((void *) (arg0));
            }
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x80), (int) (6), (int) (1)) != 0) || (is_locked__18TWindowInputNumberFPvi((void *) (arg0), (int) (0x80)) != 0)) {
                handle_decrement__18TWindowInputNumberFPv((void *) (arg0));
            }
        } else {
            temp_r29_2 = (u8 *)controller_input_state + (temp_r30 * 0x50) + 0x20;
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x10), (int) (6), (int) (1)) != 0) || (is_locked__18TWindowInputNumberFPvi((void *) (arg0), (int) (0x10)) != 0)) {
                update_value__18TWindowInputNumberFPv((void *) (arg0));
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x20), (int) (6), (int) (1)) != 0) || (is_locked__18TWindowInputNumberFPvi((void *) (arg0), (int) (0x20)) != 0)) {
                update__18TWindowInputNumberFPv((void *) (arg0));
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x40), (int) (6), (int) (1)) != 0) || (is_locked__18TWindowInputNumberFPvi((void *) (arg0), (int) (0x40)) != 0)) {
                move_cursor_next__18TWindowInputNumberFPv((void *) (arg0));
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x80), (int) (6), (int) (1)) != 0) || (is_locked__18TWindowInputNumberFPvi((void *) (arg0), (int) (0x80)) != 0)) {
                handle_decrement__18TWindowInputNumberFPv((void *) (arg0));
            }
        }
        temp_r29_3 = (u8 *)controller_input_state + (temp_r30 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (4)) != 0) || (((s32 (*)(void *, int))test_input_flag__18TWindowInputNumberFPv)((void *) (arg0), (int) (4)) != 0)) {
            confirm_input__18TWindowInputNumberFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (2)) != 0) || (((s32 (*)(void *, int))test_input_flag__18TWindowInputNumberFPv)((void *) (arg0), (int) (2)) != 0)) {
            mark_confirmed__18TWindowInputNumberFPv((void *) (arg0));
        }
    }
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x70);
    if ((temp_r3 != 0U) && ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DCE54)) {
        update_subwindow__20TWindowSubStatusDispFPv((int) (temp_r3));
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

extern M2C_UNK __vt__18TWindowInputNumber[];

void *__dt__18TWindowInputNumberFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowInputNumber;
        if (M2C_FIELD(arg0, void **, 0x70) != NULL) { destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x70), 1); }
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s8 controller_input_state[];

typedef char RecoveredGlobal_80256A60_lbl_804CF8EC_size[sizeof(RecoveredGlobal_80256A60_lbl_804CF8EC) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80256A60___vt__18TWindowInputNumber_size[sizeof(RecoveredGlobal_80256A60___vt__18TWindowInputNumber) == 0x18 ? 1 : -1];
}

TWindowInputNumber::TWindowInputNumber(void *position, s32 low, s32 high,
                                     s32 initial, s16 client) {
    construct_base__9TWindowDDFPvPvsPv(this, &lbl_804CF8EC.value, client, position);
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
    calc_digit_count__18TWindowInputNumberFv(this);
    refresh_digit_entries__18TWindowInputNumberFPv((u8 *)this);
    align_digits__18TWindowInputNumberFv((InNum_802561E8 *)this);
}

extern "C" {

typedef char RecoveredGlobal_80256B0C_lbl_8050E208_size[sizeof(RecoveredGlobal_80256B0C_lbl_8050E208) == 0x1B0 ? 1 : -1];
u8 test_input_flag__18TWindowInputNumberFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x60) & 0x20) {
        return 0U;
    }
    return test_flag_4c__23TAdSinglePlyChrSelectGCFPv((u8 *)&(*(RecoveredGlobal_80256B0C_lbl_8050E208 *)&controller_input_state).value + 0x160);
}

s32 is_locked__18TWindowInputNumberFPvi(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x60) & 0x20) {
        return 0;
    }
    return apply_choice__20TWindowChoiceSettingFiiii(controller_input_state + 0x160, arg1, 6, 1);
}

}
